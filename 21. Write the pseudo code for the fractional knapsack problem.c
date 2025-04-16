FractionalKnapsack(capacity, items[])
 Sort items by value/weight ratio in descending order
 totalValue ← 0
 for i from 0 to n - 1
 if items[i].weight ≤ capacity
 capacity ← capacity - items[i].weight
 totalValue ← totalValue + items[i].value
 else
 fraction ← capacity / items[i].weight
 totalValue ← totalValue + (items[i].value * fraction)
 break
 return totalValue
