// link :- https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/?orderBy=newest_to_oldest

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int arrow = 1;
        int last = points[0][1];
        sort(points.begin(),points.end());
        for(int i =0;i<points.size();i++){
            if(points[i][0] > last){ // mundhu unna ballon ni pagalo kuttu bro arrow vesi 
                arrow++;
                last = points[i][1];
            }
            else{
                last = min(last,points[i][1]);// minmum range requried to blast all the ballons 
            }
        }
        return arrow;
        
    }
};