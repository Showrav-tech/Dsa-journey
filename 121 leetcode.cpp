#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0, bestbuy = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > bestbuy) {
                maxprofit = max(maxprofit, prices[i] - bestbuy);
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        return maxprofit;
    }
};

int main() {
    Solution sol;
    vector<int> prices;
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    cout << "Enter stock prices for each day:\n";
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        prices.push_back(price);
    }

    int profit = sol.maxProfit(prices);
    cout << "Maximum Profit: " << profit << endl;

    return 0;
}
