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
