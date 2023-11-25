//
// Created by LENOVO on 2023/11/19.
//
#include<stdio.h>
int map[1005][1005];
int px[100005], py[100005], cnt;
int main(){
  const int offset = 100;
  int n, m, d;
  scanf("%d%d%d", &n, &m, &d);
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      int x = i + offset;
      int y = j + offset;
      scanf("%d", &map[x][y]);
    }
  }
  int sum, maxn = -0x7fffffff;
  for(int i = 1; i <= n; i++){
    int x = i + offset;
    sum = 0;
    for(int j = 0; j <= d; j++){
      for(int k = j - d; k <= d - j; k++){
        sum += map[x + k][j + 1 + offset];
      }
    }
    if(sum >= maxn){
      if(sum > maxn){
        cnt = 0;
        maxn = sum;
      }
      px[++cnt] = i;
      py[cnt] = 1;
    }
    for(int j = 2; j <= m; j++){
      for(int k = 0; k <= d; k++){
        sum -= map[x + d - k][j + offset - k - 1];
        sum += map[x + d - k][j + offset + k];
        if(d != k){
          sum -= map[x - d + k][j + offset - k - 1];
          sum += map[x - d + k][j + offset + k];
        }
      }
      if(sum >= maxn){
        if(sum > maxn){
          cnt = 0;
          maxn = sum;
        }
        px[++cnt] = i;
        py[cnt] = j;
      }
    }
  }
  printf("%d %d\n", maxn, cnt);
  for(int i = 1; i <= cnt; i++){
    printf("%d %d\n", px[i], py[i]);
  }
  return 0;
}