#include <iostream>
#include <vector>
using namespace std;

void printSubarrays(vector<int>& arr) {
    int n = arr.size();

    // Outer loop to control the size of the window
    for (int windowSize = 1; windowSize <= n; windowSize++) { // all possible windows 
        // Inner loop to slide the window
        for (int start = 0; start <= n - windowSize; start++) { // all possible starting positions 
            // Print elements of the current subarray
            for (int i = start; i < start + windowSize; i++) { // elements within the current window 
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "All subarrays of the array:" << endl;
    printSubarrays(arr);

    return 0;
}
