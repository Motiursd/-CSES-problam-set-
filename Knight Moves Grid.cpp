#include <bits/stdc++.h>
using namespace std;

int dx[8] = {2,2,-2,-2,1,1,-1,-1};
int dy[8] = {1,-1,1,-1,2,-2,2,-2};

int board[8][8];

bool ok(int x,int y){
    return x>=0 && x<8 && y>=0 && y<8 && board[x][y]==0;
}


int degree(int x,int y){
    int cnt = 0;
    for(int i=0;i<8;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(ok(nx,ny)) cnt++;
    }
    return cnt;
}

bool dfs(int x,int y,int move){

    board[x][y] = move;

    if(move == 64) return true;

    vector<pair<int,pair<int,int>>> v;

    for(int i=0;i<8;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(ok(nx,ny)){
            v.push_back({degree(nx,ny), {nx,ny}});
        }
    }

    sort(v.begin(), v.end()); ে

    for(auto it : v){
        int nx = it.second.first;
        int ny = it.second.second;

        if(dfs(nx,ny,move+1)) return true;
    }

    board[x][y] = 0;
    return false;
}

int main(){

    int x,y;
    cin >> x >> y;

    x--, y--;

    dfs(x,y,1);

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
