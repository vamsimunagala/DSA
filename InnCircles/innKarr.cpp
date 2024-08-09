#include<bits/stdc++.h>
using namespace std;
vector<int> findMinElementsInWindows(const vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> minElements;
    for (int i = 0; i < arr.size(); ++i) {
        if (!dq.empty() && dq.front() == i - k)
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()] >= arr[i])
            dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1)
            minElements.push_back(arr[dq.front()]);
    }
    return minElements;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        vector<int> minElements = findMinElementsInWindows(arr, k); 
        int maxOfMinElements = *max_element(minElements.begin(), minElements.end());    
        cout << "Maximum of minimum elements: " << maxOfMinElements << endl;
    }
    return 0;
}
