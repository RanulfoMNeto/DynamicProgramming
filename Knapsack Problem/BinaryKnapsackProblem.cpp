// Solution for 0-1 Knapsack Problem 
#include <iostream>
#include <algorithm>

#define NMAX 101

using namespace std;

// Input:
// Values (stored in array v)
// Weights (stored in array w)
// Number of distinct items (n)
// Knapsack capacity (W)
// NOTE: The array "v" and array "w" are assumed to store all relevant values starting at index 1.

int knapsack(int n, int W, int v[], int w[]) { // O(nW)

    int c[n + 1][W + 1];
    for (int i = 0; i <= n; i++) c[i][0] = 0; // O(n)
    for (int j = 1; j <= W; j++) c[0][j] = 0; // O(W)

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            if (w[i] > W) {
                c[i][j] = c[i - 1][j];
            } else {
                c[i][j] = max(c[i-1][j], v[i] + c[i-1][j-w[i]]);
            }
        }
    } // O(nW)

    return c[n][W];
}

int main() {

    int n, W, v[NMAX], w[NMAX];
    cin >> n >> W;
    for (int i = 0; i < n; i++) {
        cin >> v[i] >> w[i];
    }
    cout << knapsack(n, W, v, w) << endl;

    return 0;
}