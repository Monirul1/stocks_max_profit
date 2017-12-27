#include <iostream>
using namespace std;

void fillArray(int arr[], int numOfElements);
void printArray(int arr[], int n);
int maxProfit(int prices[], int numOfPrices);

int main ()
{
    int prices[100], numOfPrices, profit;
    
    cout << "How many stocks of prices you want to insert? ";
    cin >> numOfPrices;
    cout << "Enter the prices (with a space): ";
    fillArray(prices, numOfPrices);
    profit = maxProfit(prices, numOfPrices);
    cout << "Profit is: ";
    cout << profit << endl;
    
    return 0;
}

void fillArray(int arr[], int numOfElements)
{
    for (int i = 0; i < numOfElements; ++i)
        cin >> arr[i];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int maxProfit(int prices[], int numOfPrices)
{
    int size = numOfPrices;
    if (size < 2)
        return 0;
    
    int buy = prices[0];
    int profit = 0;
    
    for (int i = 1; i < size; ++i)
    {
        if (prices[i] >= buy)
            profit = max(profit, prices[i] - buy);
        else
            buy = prices[i];
    }
    
    return profit;
}


/* 
 -----SAMPLE RUN-----
 How many stocks of prices you want to insert? 6
 Enter the prices (with a space): 7 1 5 3 6 4
 Profit is: 5
 Program ended with exit code: 0
 */






