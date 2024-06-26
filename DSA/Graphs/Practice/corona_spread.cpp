#include<bits/stdc++.h>
using namespace std;
int row,col;
int count_cycle;
bool is_valid_boundaries(int i,int j){
    return i>=0 && i<row && j>=0 && j<col;
}

bool spread_corona(vector<vector<int>>&mat){
    count_cycle=0;
    queue<pair<int,int>>que;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j] == 2){
                que.push(make_pair(i,j));
            }
        }
    }
    while(!que.empty()){
        count_cycle++;
        int curr_lapsiz = que.size();
        while(curr_lapsiz--){
        int index_i = que.front().first;
        int index_j = que.front().second;
        que.pop();
        int rows[4]={0,0,-1,1};
        int cols[4]={-1,1,0,0};
        for(int k=0;k<4;k++){
            if(is_valid_boundaries(index_i+rows[k],index_j+cols[k]) && mat[index_i+rows[k]][index_j+cols[k]] == 1){
                mat[index_i + rows[k]] [index_j + cols[k]] = 2;
                que.push(make_pair(index_i+rows[k],index_j + cols[k]));


            }
        }

        }
    }
    // check if the whole hospital is corona positive 

    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j] == 1){
                return false;
            }
        }
    }
    return true;

}

int main(){
    vector<vector<int>>matrix(4,vector<int>(4));
    
    
    // creating the matrix 
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>matrix[i][j];
        }
    }

    row = matrix.size();
    col = matrix[0].size();

    bool corona_spread = spread_corona(matrix);
    if(corona_spread){
        cout<<" The whole hospital is corona positive"<<count_cycle-1<<endl; // in the last cycle manam 
    }
    else{
        cout<<"No the hospital is not fully corona positive"<<endl;
    }
    return 0;



}