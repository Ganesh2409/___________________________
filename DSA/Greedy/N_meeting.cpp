#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    static bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
        return a.second < b.second; // Sort by end time
    }

public:
    int maxMeetings(int start[], int end[], int n) {
        vector<pair<int,int>> meetings;
        for (int i = 0; i < n; ++i) {
            meetings.push_back({start[i], end[i]});
        }

        sort(meetings.begin(), meetings.end(), cmp);

        int count = 1;
        int curr_end = meetings[0].second;
        for (int i = 1; i < n; ++i) {
            if (meetings[i].first > curr_end) {
                count++;
                curr_end = meetings[i].second;
            }
        }

        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];
        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
