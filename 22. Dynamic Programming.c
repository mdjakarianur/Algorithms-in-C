Dynamic Programming
Pseudo codes of the problems
Problem: LCS
LCS-LENGTH(X, Y, m, n)
1.	for i ← 1 to m
2.	      do c[i, 0] ← 0
3.	 for j ← 0 to n
4.	     do c[0, j] ← 0
5.	 for i ← 1 to m
6.	       do for j ← 1 to n
7.		          do if xi = yj
8.			     then c[i, j] ← c[i - 1, j - 1] + 1
9.				 b[i, j ] ← “    ”
10.			     else if c[i - 1, j] ≥ c[i, j - 1]
11.				   then c[i, j] ← c[i - 1, j]
12.				            b[i, j] ← “↑”
13.				   else c[i, j] ← c[i, j - 1]
14.				           b[i, j] ← “←”
15.	return c and b
PRINT-LCS(b, X, i, j)
ifi = 0 or j = 0
then return
ifb[i, j] = “   ”
	thenPRINT-LCS(b, X, i - 1, j - 1)
	print xi
elseifb[i, j] = “↑”
	thenPRINT-LCS(b, X, i - 1, j)
	elsePRINT-LCS(b, X, i, j - 1)
Initial call: PRINT-LCS(b, X, length[X], length[Y])

Problem: Minimum Number of Coins
A[i][j]
A[i][0]=0;
For(i=0;i<=coin.length;i++)
	{
	For(j=0; j<=amount;j++)
		{
			if(coins[i]>j)
					a[i][j]=a[i-1][j];
			else
				a[i][j]= min(a[i-1][j], 1+ a[i][j-coins[i]]);
				
		}
	}

Problem: Number of Ways to fulfill the target
Table[i][j]
Table[i][0]=1;
For(i=0;i<=coin.length;i++)
	{
	For(j=1; j<=amount;j++)
		{
			if(coins[i]>j)
					Table[i][j]= ((i ==0 ) ? 0: Table[i-1][j]);
			else
				Table[i][j]= ((i ==0 ) ? 0: Table[i-1][j]+ Table[i][j-coins[i]];
				
		}
	}

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

Problem: Fibonacci Series
IntFib(int n)
{
IntA[];
A[0] =0; A[1] = 1;
For (i=2; i<=n;i++){
A[i]= A[i-1] + A[i-2];
Return A[n];
}
Problem: Factorial of a Number 
intFactorial (int n){
Fact[0] =1;
For (i=2; i<=n;i++){
Fact[i] = fact[i-1] *i ;
} 
Return Fact[n];
}

