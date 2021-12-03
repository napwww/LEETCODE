/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start

int maxProfit(int* prices, int pricesSize){
    int min = prices[0];
    int maxpro = 0;
    for(int i = 0;i < pricesSize;i++)
    {
        min = min > prices[i] ? prices[i] : min;
        maxpro = maxpro < prices[i] - min ? prices[i] - min : maxpro;
    } 
    return maxpro;

    //每一个元素减去前面最小元素即可，然后每次遇到更小的就更新就行

}
// @lc code=end
/*
int maxProfit(int* prices, int pricesSize){
    int maxPro = 0;
    int min = prices[0];    //先让0位置为最小
    for(int i=1; i<pricesSize; i++){
        if(prices[i] > min){
            maxPro = fmax(maxPro, prices[i] - min);   //如果后面比最小大，求差，与现有最大比取最大值
        }else if(prices[i] < min){
            min = prices[i];    //如果后面比最小还小，那么替换最小值，从这里继续算起
        }
    }
    return maxPro;
}
*/
