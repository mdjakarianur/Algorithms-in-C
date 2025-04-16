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
