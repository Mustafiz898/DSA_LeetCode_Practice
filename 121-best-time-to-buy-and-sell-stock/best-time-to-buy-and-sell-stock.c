int maxProfit(int* prices, int pricesSize) {
    int maxProfit = 0;
    if(pricesSize == 0) return 0;

    int minPrice = prices[0];
    for(int day = 1; day < pricesSize; day++){

        // IS current price less than minPrice?
        if(prices[day] < minPrice ) minPrice = prices[day];
        // else check current profit is greater than maxProfit
        else if(prices[day] - minPrice > maxProfit) maxProfit = prices[day] - minPrice;

    }
    return maxProfit;
}