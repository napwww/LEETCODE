/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x)
{
    if(x < 0) return false;
    long n = 0;
    int a = x;
    while(x != 0)
    {
         n = n * 10 + x % 10;
         x /= 10;
    }
    return (int)n != n ? false : n == a;
}
// @lc code=end

