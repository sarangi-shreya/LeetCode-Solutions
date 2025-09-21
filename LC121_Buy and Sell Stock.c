int maxProfit(int* prices, int pricesSize) {
    int i,min_price,max=0;
    min_price = INT_MAX;   //considering the min_price to be the largest int value it can store
    for(i=0; i<pricesSize; i++)
    {
            if( prices[i] < min_price )
            {
                min_price = prices[i];
            }
              if( prices[i] - min_price > max)
            {
                max = prices[i] -  min_price;
            }
    }
    return max;
}
