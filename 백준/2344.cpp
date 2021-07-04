#include <bits/stdc++.h>
using namespace std;
int box[1010][1010];
int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    int i, j, n, m, count=0, x=0, y=0, dir;
    vector<vector<int>> row(1001), col(1001);
    cin >> n >> m;
    for(i=0;i<n;i++) for(j=0;j<m;j++) cin >> box[i][j];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(box[i][j] == 1){
                row[i].push_back(j);
                col[j].push_back(i);
            }
        }
    }
    while(count++ < 2*(n+m)){
        //1 = 왼쪽에서 2 = 아래쪽에서 3 = 오른쪽에서 4 = 위쪽에서
        if(count <= n) dir = 1;
        else if(n < count && count <= n+m) dir = 2;
        else if(n+m < count && count <= 2*n+m) dir = 3;
        else dir = 4;
        int _x = x, _y = y;
        while(true){
            vector<int>::iterator now;
            //iterator에서 -1 +1해서 찾고 그 값들이 begin인지 end인지 판별해서 다음꺼 찾아나가기
            if(now == )
            if(dir == 1)
        }
    }
    return 0;
}
