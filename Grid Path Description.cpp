#include <bits/stdc++.h>
using namespace std;

string s;
bool vis[7][7];
int ans = 0;

bool valid(int r,int c){
    return (r>=0 && r<7 && c>=0 && c<7 && !vis[r][c]);
}

void dfs(int r,int c,int step){

    if(r==6 && c==0){
        if(step==48) ans++;
        return;
    }

    if(step==48) return;

    vis[r][c] = true;

    
    if((!valid(r+1,c) && !valid(r-1,c) && valid(r,c+1) && valid(r,c-1)) ||
       (!valid(r,c+1) && !valid(r,c-1) && valid(r+1,c) && valid(r-1,c))){
        vis[r][c] = false;
        return;
    }

    char d = s[step];

    if(d=='U' || d=='?'){
        if(valid(r-1,c)) dfs(r-1,c,step+1);
    }

    if(d=='D' || d=='?'){
        if(valid(r+1,c)) dfs(r+1,c,step+1);
    }

    if(d=='L' || d=='?'){
        if(valid(r,c-1)) dfs(r,c-1,step+1);
    }

    if(d=='R' || d=='?'){
        if(valid(r,c+1)) dfs(r,c+1,step+1);
    }

    vis[r][c] = false;
}

int main(){

    cin >> s;

    dfs(0,0,0);

    cout << ans;

}
