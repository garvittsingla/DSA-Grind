/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findpeak( MountainArray &mountainArr){
        int start = 0;
        int end = mountainArr.length()-1;
        int mid = start + (end-start)/2;
        while(start<end){
            if(mountainArr.get(mid+1)>mountainArr.get(mid)){
                start = mid+1;
            }else{
                end= mid;
            }
            mid = start + (end-start)/2;
        }
        return start;
    }
    int binarysearch(int start, int end ,int target,bool asc,MountainArray &mountainArr){
        int mid = start + (end-start)/2;
        while(start <= end){
            if(asc==true){
                if(mountainArr.get(mid)==target){
                return mid;
            }else if(mountainArr.get(mid)>target){
                end = mid-1;
            }else{
                start = mid+1;  
            }
            }else{
                if(mountainArr.get(mid)==target){
                return mid;
            }else if(mountainArr.get(mid)>target){
                start = mid+1;
            }else{
                end = mid-1;  
            }
            }
            mid = start + (end-start)/2;
        }
        return -1;

    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int index = findpeak(mountainArr);
        int ans = binarysearch(0,index,target,true,mountainArr);
        if(ans == -1){
            ans =  binarysearch(index,mountainArr.length()-1,target,false,mountainArr);
        }
        return ans;
    }
};