#include<bits/stdc++.h>
using namespace std;
int row,col;
int count_cycle;

bool is_valid_boundaries(int i,int j){
    return i >=0 && i<row && j>=0 && j<col;
}

// vector representation radhu niku i will learn ! >> the ans --> v(5,vector<int>(5))
bool is_corona(vector<vector<int>>&v){
    row = v.size();
    col = v[0].size();
    count_cycle=0;

    queue<pair<int,int>>que;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(v[i][j]==2){
                que.push(make_pair(i,j));
            }
        }
    }

    while(!que.empty()){
        count_cycle++;
        int curr_pos = que.size();
        while(curr_pos--){
            int i = que.front().first;
            int j = que.front().second;
            
            que.pop();
            int rows[4]={1,-1,0,0};
            int cols[4] ={0,0,-1,1};
            for(int k =0;k<4;k++){ // we are checking for only 4 sides right >> L R T B 
                if(is_valid_boundaries(i+rows[k] ,j+cols[k]) && v[i+rows[k]][j+cols[k]] == 1){ // we checking they fall in the graph to avoid segmentation fault
                    v[i+rows[k]][j+cols[k]] = 2;
                    que.push(make_pair(i+rows[k],j+cols[k]));
                }
            }
        }
    }

    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            if(v[i][j] == 1){
                return false;
            }
        }
    }
    return true;


}
int main(){
    vector<vector<int>>v(5,vector<int>(5));
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
            
        }
    }
    if(is_corona(v)){
        cout<<"the corona will be spread until the cycles"<<count_cycle -1 <<endl;

    }
    else{
        cout<<"not all cells could be infected"<<endl;
    }
    


    return 0;
}