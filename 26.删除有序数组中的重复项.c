/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
     if(numsSize == 0){
         return 0;
     }
       int *p;
       int count = 0;  //统计相等的数的个数
       p = nums;  //指向数组的首地址
       for(int i = 0;i < numsSize - 1;i++){  //遍历数组
           if(*p == *(p + 1)){
               
               count++;  //找到相等的便+1
           }
           else{
               nums[i + 1 - count] = nums[i + 1];//删除重复项，第i-count项赋值为第i项，即跳过了重复的count项
                       
           }
           p += 1;
       }
     return (numsSize - count);
}
// @lc code=end

