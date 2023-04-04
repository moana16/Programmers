#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    queue<pair<int,int>> q;
    int mat[50][50];
    int N,M;
    int dx,dy;
    
    N = park.size(); //세로
    M = park[0].size(); //가로
    for(int i=0; i<park.size(); i++) { //공원 맵 초기화
        for(int j=0; j<park[i].size(); j++) {
            if(park[i][j] == 'S') {
                q.push({i,j});
                mat[i][j] = 0;
                
            }
            if(park[i][j] == 'O') mat[i][j] = 0;
            if(park[i][j] == 'X') mat[i][j] = -1;
            }
    }
        
    for(auto c : routes) {
        int nx = q.front().first;
        int ny = q.front().second;
        cout<<nx<<" "<<ny<<'\n';
        if(c[0] == 'E') { //동
            bool isPossible = true;
            dx = 0;
            dy = int(c[2])-'0';
            int y;
            for(int i=1; i<=dy; i++) {
                y = ny + i;
                if(y < 0 || y >= M) isPossible = false;
                if(mat[nx][y] == -1) isPossible = false;
                
             
            }
            if(isPossible) {
                q.pop();
                q.push({nx,ny+dy});
            }
    
        }
        else if(c[0] == 'S') { //남
            bool isPossible = true;
            dx = int(c[2])-'0';
            dy = 0;
            for(int i=1; i<=dx; i++) {
                int x = nx + i;
                if(x < 0 || x >= N) isPossible = false;
                if(mat[x][ny] == -1) isPossible = false;
                
            }
             if(isPossible) {
                q.pop();
                q.push({nx+dx,ny});
            }
        }
        else if(c[0] == 'N') { //북
            bool isPossible = true;
            dx = -(int(c[2])-'0');
            dy = 0;
            for(int i=-1; i >= dx; i--) {
                int x = nx + i;
                if(x < 0 || x >= N) isPossible = false;
                if(mat[x][ny] == -1) isPossible = false;

             
            }
             if(isPossible) {
                q.pop();
                q.push({nx+dx,ny});
            }
        }
        else if(c[0] == 'W') { //서
            bool isPossible = true;
            dx = 0;
            dy = -(int(c[2])-'0');
            for(int i=-1; i >= dy; i--) {
                int y = ny + i;
                if(y < 0 || y >= M) isPossible = false;
                if(mat[nx][y] == -1) isPossible = false;
            
             
            }
             if(isPossible) {
                q.pop();
                q.push({nx,ny+dy});
            }
            
        }
     
    }
    answer.push_back(q.front().first);
    answer.push_back(q.front().second);
    return answer;
}