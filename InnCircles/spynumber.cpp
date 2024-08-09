#include <bits/stdc++.h>
using namespace std;
bool SpyNumber(int n) {
    int sum = 0;
    int product = 1;
    while (n > 0) {
        int digit = n % 10;  
        sum += digit;
        product *= digit;
        n = n / 10;  
    }
    return product == sum;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool answer = SpyNumber(n);
        if (answer)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
