function getHint(secret: string, guess: string): string {
    let mpp = new Map<string,number>();

    for(let i = 0 ; i < secret.length ; i++){
       if(mpp.has(secret[i])){
         let current  = mpp.get(secret[i]) + 1;
         mpp.set(secret[i],current)
         continue
       }
       mpp.set(secret[i],1)
    }
    console.log(mpp)
    let bulls  = 0;
    for(let i = 0 ; i < secret.length ; i++){
        if(secret[i] == guess[i]){
            bulls+=1;
            let current  = mpp.get(secret[i]) - 1;
            mpp.set(secret[i],current)
        }
    }
     console.log(mpp)
    let cows =0;
    for(let i = 0 ; i < guess.length ; i++){
        if(secret[i] == guess[i]) continue;
        if(mpp.get(guess[i])>=1){
            cows +=1;
            let current  = mpp.get(guess[i]) - 1;
            mpp.set(guess[i],current)
        }
    }
     console.log(mpp)
    let final = bulls + "A" + cows + "B"
    return final
};