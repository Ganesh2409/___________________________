#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // This approach will give only the max sum of two consicutive numbers 
    int max_sum = INT_MIN;
    for (int i = 0; i < n - 1; i++) {// why iam so over thinked and maked this approcah forgetten so silly buddy 
        int current_sum = arr[i] + arr[i + 1]; 
        max_sum = max(max_sum, current_sum);
    }

    cout << "Overall Max Sum: " << max_sum << endl;
    return 0;
}
