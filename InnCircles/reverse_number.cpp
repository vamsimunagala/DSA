#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int result = reverseNumber(reverseNumber(m) + n);
        cout << result << endl;
    }
    return 0;
}
