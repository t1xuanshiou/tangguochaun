//
// Created by LENOVO on 2023/11/17.
//
#include <stdio.h>
int board[10000][2];//To store statistics
int n,l;
int sum;
int main(){
  scanf("%d%d",&n,&l);
for(int i=0;i<n;i++){
  scanf("%d",&board[i][0]);
}
for(int i=0;i<n;i++){
  scanf("%d",&board[i][1]);
}
for(int i=0;i<n;i++){
  for(int j=0;j<n-i;j++){
    if(board[j][0]<board[j+1][0]){
      int temp_1=board[j][0];
      board[j][0]=board[j+1][0];
      board[j+1][0]=temp_1;
      int temp_2=board[j][1];
      board[j][1]=board[j+1][1];
      board[j+1][1]=temp_2;
    }
  }
}
for(int i=0;i<n;i++){
if(l==0){
    break;
}
if(l>=board[i][1]){
    sum+=(board[i][1])*board[i][0];
    l=l-board[i][1];
    continue;
}
if(l<board[i][1]){
    sum+=l*board[i][0];
    l=0;
}
}

printf("%d",sum);
return 0;
}