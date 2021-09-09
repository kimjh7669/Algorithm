#include <iostream>
#include <string>
#include <vector>

using namespace std;
int dx[] = { 1,0,0,-1 };
int dy[] = { 0,1,-1, 0 };

int visited[501][501][4];


int main() {
   vector<string> grid;
   string tmp1 = "SS";
   string tmp2 = "RR";

   grid.push_back(tmp1);
   grid.push_back(tmp2);

   int H = grid.size();
   int W = grid[0].size();
   int answer = 0;

   for (int i = 0; i < 4; ++i) {
      int nx, ny, cx, cy;
      int cdir, ndir = i;


      nx = ny = cx = cy = 0;
      int flag = 0;

      while (1) {
         cx = nx;
         cy = ny;
         cdir = ndir;
         if (grid[cy][cx] == 'S') {
            ny = cy + dy[ndir];
            nx = cx + dx[ndir];

            if (nx < 0)  nx = W - 1;
            if (nx >= W) nx = 0;
            if (ny < 0)  ny = H - 1;
            if (ny >= H) ny = 0;
         }
         else if (grid[cy][cx] == 'L') {
            switch (ndir) {
            case 0:
               ndir = 2;
               break;
            case 1:
               ndir = 0;
               break;
            case 2:
               ndir = 3;
               break;
            case 3:
               ndir = 1;
               break;
            }
            ny = cy + dy[ndir];
            nx = cx + dx[ndir];

            if (nx < 0)  nx = W - 1;
            if (nx >=W) nx = 0;
            if (ny < 0)  ny = H - 1;
            if (ny >= H) ny = 0;
         }
         else if (grid[cy][cx] == 'R') {
            switch (ndir) {
            case 0:
               ndir = 1;
               break;
            case 1:
               ndir = 3;
               break;
            case 2:
               ndir = 0;
               break;
            case 3:
               ndir = 2;
               break;
            }
            ny = cy + dy[ndir];
            nx = cx + dx[ndir];

            if (nx < 0)  nx = W - 1;
            if (nx >= W) nx = 0;
            if (ny < 0)  ny = H - 1;
            if (ny >= H) ny = 0;
         }
         if (visited[ny][nx][ndir] > 1) {
            flag = 1;
            break;
         }
         else if (visited[ny][nx][ndir] == 0)
            visited[ny][nx][ndir] = visited[cy][cx][cdir] + 1;
         else if (visited[ny][nx][ndir] == 1) {
            answer = visited[cy][cx][cdir];
            break;
         }
      }
      if (flag == 0)
         printf("%d!\n",answer);
   }
}
