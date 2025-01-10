#include <stdio.h>
#include <limits.h>

void minCoins(int coins[], int numCoins, int amount) {
    if (amount < 0) {
        printf("Invalid amount. Please enter a non-negative amount.\n");
        return;
    }

    int dp[amount + 1];
    for (int i = 0; i <= amount; i++) { dp[i] = INT_MAX; } 
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < numCoins; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX && dp[i - coins[j]] + 1 < dp[i]) { 
                dp[i] = dp[i - coins[j]] + 1;
            }
        }
    }

    printf("Minimum number of coins required: %d\n", (dp[amount] == INT_MAX) ? -1 : dp[amount]);
}

int main() {
    int coins[] = {1, 3, 5};
    int numCoins = sizeof(coins) / sizeof(coins[0]);

    int amount;
    printf("Enter the amount for which you want to find the minimum number of coins: ");
    scanf("%d", &amount);

    minCoins(coins, numCoins, amount);

    return 0;
}



