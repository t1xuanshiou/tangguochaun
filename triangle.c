//
// Created by LENOVO on 2023/11/14.
//

#include <stdio.h>
#include <math.h>
#include <string.h>
char map[1024][2048];
void paint(int n,int x,int y){
  if(n==1){
    map[x][y]='/';
    map[x][y+1]='\\';
    map[x+1][y-1]='/';
    map[x+1][y]='_';
    map[x+1][y+1]='_';
    map[x+1][y+2]='\\';
    return;}

  paint(n-1,x,y);
  paint(n-1,x+pow(2,n-1),y- pow(2,n-1));
  paint(n-1,x+ pow(2,n-1),y+pow(2,n-1));
  return;
}
int main() {
  int n;
  scanf("%d", &n);
  int row = pow(2, n);
  int col = 2 * pow(2, n);
    memset(map, ' ', sizeof(4*(row+1) * (col+1)));
    paint(n, 0, (col-1)/2);
    for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%c", map[i][j]);
    }
    printf("\n");
    }
    return 0;
}


