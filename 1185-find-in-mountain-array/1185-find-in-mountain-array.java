/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    private int pivotindex(MountainArray arr){
        int start = 0;
        int end = arr.length()-1;
        while(start<end){
            int mid = start + (end - start)/2;
            if(arr.get(mid)<arr.get(mid+1)){
                start = mid+1;
            }else{
                end = mid;
            }
        }
        return start;
    }
    private int binarysearch(MountainArray arr, int target, boolean asc,int start,int end){
        while(start<=end){
            int mid = start + (end-start)/2;
            int ele = arr.get(mid);
            if(ele == target) return mid;
            if(asc){
                if(ele>target){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }else{
                if(ele>target){
                    start = mid+1;
                }else{
                    end = mid-1;
                }            }
        }
        return -1;
    }
    public int findInMountainArray(int target, MountainArray mountainArr) {
       int peak = pivotindex(mountainArr);
       int index = binarysearch(mountainArr,target,true,0,peak);
       if(index!=-1) return index;
        return binarysearch(mountainArr,target,false,peak+1,mountainArr.length()-1);
    }
}