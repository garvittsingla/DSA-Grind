class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left,right = 0,len(nums)-1
        n = len(nums)-1

        while(left<=right):
            mid = left+(right-left)//2
            if nums[mid] == target:
                return mid
            targetinupperhalf = target > nums[n]
            midinupperhalf = nums[mid] > nums[n]

            if targetinupperhalf == midinupperhalf:
                if(nums[mid]>target):
                    right = mid-1
                else:
                    left = mid+1
            else:
                if(targetinupperhalf):
                    right = mid-1
                else:
                    left = mid+1
        return -1