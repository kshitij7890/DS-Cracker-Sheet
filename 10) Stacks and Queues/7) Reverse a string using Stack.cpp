/*
 
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Example 1:

Input: S="GeeksforGeeks"
Output: skeeGrofskeeG

*/

#include <bits/stdc++.h>
using namespace std;

char *reverse(char *str, int len);

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char str[10000];
        cin >> str;
        long long int len = strlen(str);
        char *ch = reverse(str, len);
        cout << ch;
        cout << endl;
    }
    return 0;
}

//return the address of the string
char *reverse(char *S, int len)
{
    stack<char> s;

    for (int i = 0; i < len; i++)
    {
        s.push(S[i]);
    }

    for (int i = 0; i < len; i++)
    {
        S[i] = s.top();
        s.pop();
    }

    return S;
}