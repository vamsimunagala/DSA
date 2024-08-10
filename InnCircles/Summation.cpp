#include<bits/stdc++.h>
using namespace std;

long long calculateT(int n) {
    return (long long)n * n - (long long)(n - 1) * (n - 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long Sn = 0;
        for (int i = 1; i <= n; ++i) {
            Sn += calculateT(i);
        }
        cout << Sn << endl;
    }
    return 0;
}
