/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start


int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    int mid;
    while(left <= right)
    {
        mid = (left + right)/2;
        if(nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else if(nums[mid] == target)
        {
            return mid;
            break;
        } 
    }   
    return -1;
}    
// @lc code=end

