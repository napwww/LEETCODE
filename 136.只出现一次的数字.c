/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

// @lc code=start


int singleNumber(int* nums, int numsSize)
{
        int n = nums[0];
        for(int i = 1;i < numsSize;i++)
        {
        n ^= nums[i];
        }
        return n;
}

// @lc code=end



/*

int singleNumber(int* nums, int numsSize){
    for(int i = 0;i < numsSize;i++)     //一次数组
    {                                         
        int count = 0;
        for(int j = 0;j < numsSize;j++)   //二次遍历数组
        {
            if(nums[j] == nums[i])   //两次遍历到相同的元素时
            {
                count++;    //计数器加一
            }
        }
        if(count == 1)    //计数器只加了一次，说明该元素在该数组中唯一
        {
            return nums[i];   
        }
    }
    return 0;
}

*/

