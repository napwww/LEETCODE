/*
 * @lc app=leetcode.cn id=283 lang=c
 *
 * [283] 移动零
 */

// @lc code=start


void moveZeroes(int* nums, int numsSize){
    int i,j,t;
    for(i = 0;i < numsSize - 1;i++)
    {
        int flag = 1;
        for(j = 0;j < numsSize - i - 1;j++)
        {
            if (nums[j] == 0 && nums[j+1] != 0)
            {
                t = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = t;
                flag = 0; 
            } 
        }
        if(flag == 1){break;}   
    }
    return 0;
}
// @lc code=end

