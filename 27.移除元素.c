/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    int left= 0 ;
    for (int right = 0; right < numsSize; right++)
    {
        if(nums[right] != val)
        {
            nums[left] = nums[right];
            left++;
        }
    }
    return left;
    
}
// @lc code=end

/*   双指针优化
int removeElement(int* nums, int numsSize, int val) {
    int left = 0, right = numsSize;
    while (left < right) {
        if (nums[left] == val) {
            nums[left] = nums[right - 1];
            right--;
        } else {
            left++;
        }
    }
    return left;
}     
 */