/*

Find nCr for given n and r.

Example 1
Input: n = 3, r = 2
Output: 3

Expected Time Complexity : O(N*R)
Expected Auxiliary Space: O(N*R)

*/

// A Dynamic Programming based solution that uses
// table C[][] to calculate the Binomial Coefficient
#include <bits/stdc++.h>
using namespace std;

// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;

    // Caculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

    return C[n][k];
}

int main()
{
    int n = 5, k = 2;
    cout << "Value of C[" << n << "][" << k << "] is "
         << binomialCoeff(n, k);
}