#include<bits/stdc++.h>
using namespace std;
int row,col;
int islands_count;

bool is_valid_boundaries(int i,int j){
    return i>=0 &&i<row && j>=0 && j<col;
}

int count_islands(vector<vector<int>>&v){
    queue<pair<int,int>>que;
    

    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            if(v[i][j] == 1){ // we found a land so try to find the other cell of land besides of it 

            que.push(make_pair(i,j));
            islands_count =1;

            while(!que.empty()){
                int i = que.front().first;
                int j = que.front().second;
                que.pop();
                int rows[8] = {0,0,-1,1,-1,-1,1,1};
                int cols[8] = {-1,1,0,0,-1,1,1,-1};
                for(int k=0;k<8;k++){
                    if(is_valid_boundaries(i+rows[k],j+cols[k]) && v[i+rows[k]][j+cols[k]] == 1){
                        v[i+rows[k]][j+cols[k]] = 0;
                        que.push(make_pair(i+rows[k],j+cols[k]));
                    }
                }


            }
            islands_count++;
            

            }
        }
    }
    return islands_count;

}


int main(){
    vector<vector<int>>v(2,vector<int>(7));
    row = v.size();
    col = v[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>v[i][j];
        }
    }

    int islands = count_islands(v);
    cout<<"NO of islands woukd be : "<<islands<<endl;
    return 0;

}