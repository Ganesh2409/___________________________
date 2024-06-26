#include<bits/stdc++.h>
using namespace std;
int row,col;

bool is_valid_boundaries(int i,int j){
    return i>=0 && i<row && j>=0 && j<col;
}
void replace_0_x(vector<vector<char>>&v){
    queue<pair<int,int>>que;
    // lets look at  the boundaries for the values of o and replace it as T and at final we convert the T to o and remaning to x 
        for(int i =0;i<col;i++){
            if(v[0][i] == 'O'){ // first row
                que.push(make_pair(0,i));
                v[0][i]='T';

            }
        }
        // first col from 1,1

        for(int j=1;j<row;j++){
            if(v[j][0] == 'O'){
                que.push(make_pair(j,0));
                v[j][0]='T';
            }

        } 

        // last row of the matrix 
        for(int i=1;i<col;i++){
            if(v[row-1][i] == 'O'){
                que.push(make_pair(row-1,i));
                v[row-1][i] = 'T';
            }
        }

        // last col 

        for(int i=1;i<row-1;i++){
            if(v[i][col-1] =='O'){
                que.push(make_pair(i,col-1));
                v[i][col-1] ='T';
            }
        }


    while(!que.empty()){
        int i = que.front().first;
        int j = que.front().second;

        que.pop(); // atmost important  buddy 

        int rows[4] ={0,0,-1,1};
        int cols[4] ={-1,1,0,0};


        for(int k=0;k<4;k++){
            if(is_valid_boundaries(i+rows[k],j+cols[k]) && v[i+rows[k]][j+cols[k]] == 'O' ){
                v[i+rows[k]][j+cols[k]] ='T';
                que.push(make_pair(i+rows[k],j+cols[k]));


            }

        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(v[i][j] == 'T'){
                v[i][j]='O';
            }
            else{
                v[i][j]='X';
            }
        }
    }
}
int main(){
    vector<vector<char>>v(5,vector<char>(4));
    row  = v.size();
    col = v[0].size();

    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>v[i][j];
        }
    }

    replace_0_x(v);
    cout<< " *************************************************************** "<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;



    
}