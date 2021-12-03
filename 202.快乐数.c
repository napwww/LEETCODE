 * @lc app=leetcode.cn id=202 lang=c
 *
 * [202] 快乐数
 * /

// @lc code=start
int next_n(int n)
{
    int d;
    int sum = 0;
    while(n > 0)
    {
        d = n % 10;
        sum += d*d;
        n /= 10; 
    } 
    return sum; 
}

bool contains (int *history,int size,int n) //检查n是否在history出现过
{
    for(int i = 0;i < size;i++)
    {
        if(history[i] == n)
        {
            return true;
        }
    }
    return false;
}

    
bool isHappy(int n){
    int history[1000];  // 9*9*10 = 810  记录去过哪
    int size = 0;      //记录有几个地方
    while(!contains(history,size,n))
    {
        history[size] = n;
        size++;
        n = next_n(n);
    }
    return n == 1;
}
// @lc code=end

/*  龟兔赛跑模型

int next_n(int n)
{
    int d;
    int sum = 0;
    while(n > 0)
    {
        d = n % 10;
        sum += d*d;
        n /= 10; 
    }
    return sum;
}

bool isHappy(int n)
{
    int slow = n;  //slow:19
    int fast = n;  //fast:19
    do
    {
        slow = next_n(slow);  //slow:82
        fast = next_n(fast);  //fast:82   后面两个fast也可改成复合函数
        fast = next_n(fast);  //fast:68
    } while (slow != fast);   //n与next_n相同时说明已经产生循环 
    return fast == 1;  //或者slow == 1意思相同
}

*/

