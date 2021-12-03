/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start 


int reverse(int x){
        long n = 0;
        int a = x;
        while(x != 0)
        {
            n = n * 10 + x % 10;
            x /= 10;
        }
        return (int)n != n ? 0 : n;
        if(x < 0){return -n;}
}
// @lc code=end

