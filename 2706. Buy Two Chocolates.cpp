class Solution {
public:
    int buyChoco(std::vector<int>& prices, int money) {
        std::sort(prices.begin(), prices.end()); 

        int minSum = INT_MAX;

        for (int i = 0; i < prices.size() - 1; i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                int sum = prices[i] + prices[j];
                if (sum <= money)
                    minSum = std::min(minSum, sum);
            }
        }

        if (minSum == INT_MAX)
            return money; 

        return money - minSum;
    }
};
