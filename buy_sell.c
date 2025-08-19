#include <stdio.h>

void BestDay(int price[], int n)
{
    if(n<2)
    {
        printf("Not enough days to trade.");
        return;
    }
    
    
    int min_price_day=0;
    int buy=0;
    int sell=0;
    int max_profit=0;
    
    for(int i=1; i<n; i++)
    {
        int profit=price[i]-price[min_price_day];
        if(profit>max_profit)
        {
            max_profit=profit;
            buy=min_price_day;
            sell=i;
        }
        if(price[i] < price[min_price_day])
        {
            min_price_day=i;
        }
    }
    if(max_profit==0)
    {
        printf("No profitable trade possible.");
    }
    else
    {
        printf("Buy on day %d, Sell on day %d. Profit: %d", buy,sell,max_profit);
    }
}

int main()
{
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);
    printf("Enter %d prices for the given days: ",n);
    int price[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &price[i]);
    }
    BestDay(price,n);
    return 0;
}
