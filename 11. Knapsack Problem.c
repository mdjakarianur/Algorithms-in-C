Problem: 0/1 Knapsack Problem

Function Knapsack(MaxWeight, Weights[], Values[], ItemCount):
    Create a 2D array DP[0..ItemCount][0..MaxWeight]

    For i from 0 to ItemCount:
        For w from 0 to MaxWeight:
            If i == 0 or w == 0:
                DP[i][w] = 0
            Else if Weights[i - 1] <= w:
IncludeItem = Values[i - 1] + DP[i - 1][w - Weights[i - 1]]
ExcludeItem = DP[i - 1][w]
                DP[i][w] = max(IncludeItem, ExcludeItem)
            Else:
                DP[i][w] = DP[i - 1][w]

    Return DP[ItemCount][MaxWeight]
