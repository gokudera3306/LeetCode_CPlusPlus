#include "Q121_BestTimeToBuyAndSellStock.h"

int Q121_BestTimeToBuyAndSellStock::maxProfit(vector<int>& prices)
{
    if (prices.size() <= 1) return 0;

    auto maxProfit = 0;
    auto minIndex = 0;

    for (auto index = 1; index < prices.size(); index++)
    {
        if (prices[minIndex] > prices[index])
        {
            minIndex = index;
            continue;
        }

        maxProfit = max(prices[index] - prices[minIndex], maxProfit);
    }
    
    return maxProfit;
}
