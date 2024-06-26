#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_two_sortedarr(vector<int> &left, vector<int> &right) {
    vector<int> ans;
    int i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            ans.push_back(left[i++]);
        } else {
            ans.push_back(right[j++]);
        }
    }
    while (i < left.size()) {
        ans.push_back(left[i++]);
    }
    while (j < right.size()) {
        ans.push_back(right[j++]);
    }
    return ans;
}

vector<int> sortArray(vector<int> &nums) {
    int n = nums.size();
    if (n <= 1) {
        return nums;
    }
    vector<int> left(nums.begin(), nums.begin() + n / 2);
    vector<int> right(nums.begin() + n / 2, nums.end());
    left = sortArray(left);
    right = sortArray(right);
    return merge_two_sortedarr(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n); // Create a vector instead of an array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> sortedArr = sortArray(arr); // Store the sorted array returned by sortArray

    // Print the sorted array
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
