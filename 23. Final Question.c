// Problem 1: Longest Common Subsequence (LCS)

#include <iostream>
#include <vector>
using namespace std;

void printLCS(string X, string Y) {
    int m = X.length();
    int n = Y.length();
    vector<vector<int>> L(m + 1, vector<int>(n + 1));
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    cout << "Length of LCS = " << L[m][n] << endl;

    int index = L[m][n];
    string lcs(index, ' ');

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs[index - 1] = X[i - 1];
            i--; j--; index--;
        }
        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }

    cout << "LCS: " << lcs << endl;
}

int main() {
    string firstName = "Jakaria";
    string lastName = "Nur"; 
    printLCS(firstName, lastName);
    return 0;
}

// Problem 2: Scalable Sorting Algorithm for Large, Partially Sorted Data (Using Quick Sort / Radix Sort)

1. Using Quick Sort (Best for General-Purpose Sorting)
Quick Sort is an in-place, divide-and-conquer algorithm that performs well in both time and space, especially with partially sorted datasets.

Why Quick Sort?
Average Time Complexity: O(n log n)

Worst Case: O(n²) (can be avoided with random pivots)

Space Complexity: O(log n) auxiliary (in-place)

Works well with large datasets.

Doesn't require the entire dataset to be loaded at once — can be applied in chunks (external quick sort).

How It Works:
Choose a pivot (randomized or middle).

Partition the array: all items smaller than pivot to left, greater to right.

Recursively sort the left and right parts.

Suitable For:
Massive datasets

Data that's partially sorted

Environments with low memory overhead

2. Using Radix Sort (Best for Integer Deadlines)
If all deadlines are integers, Radix Sort is a great option. It's non-comparison-based, and runs in linear time for small key sizes.

Why Radix Sort?
Time Complexity: O(nk), where k is the number of digits in the largest number

Space Complexity: O(n + k)

Stable: Maintains order of equal keys

Very fast on fixed-width integer data (e.g., 6-digit deadlines)

How It Works:
Sort by least significant digit → most significant digit using counting sort.

Repeat until the full number is sorted.

Suitable For:
Orders with numeric deadlines (e.g., UNIX timestamps, integers)

Extremely large datasets when some additional memory is acceptable

Sorting Algorithm	Time Complexity	Space Usage	Best For
Quick Sort	O(n log n) average	O(log n)	General-purpose, partially sorted, in-place
Radix Sort	O(nk)	O(n + k)	Integer keys, massive data, high performance



// Problem 3: Code Explanation – Huffman Tree Construction

struct MinHNode *buildHuffmanTree(char item[], int freq[], int size) {
  struct MinHNode *left, *right, *top;
  struct MinHeap *minHeap = createAndBuildMinHeap(item, freq, size);

  while (!checkSizeOne(minHeap)) {
    left = extractMin(minHeap);
    right = extractMin(minHeap);

    top = newNode('$', left->freq + right->freq);

    top->left = left;
    top->right = right;

    insertMinHeap(minHeap, top);
  }
  return extractMin(minHeap);
}

