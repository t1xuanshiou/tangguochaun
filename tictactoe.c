//
// Created by LENOVO on 2023/11/2.
//
#include <stdio.h>
#include <stdbool.h>
int board[31][31];
int main(){
  int t,x;
  scanf("%d%d",&t,&x);
  for(int i=0;i<t;i++){
    int n;bool win[5]={false};
    scanf("%d",&n);
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        scanf("%d",&board[j+10][k+10]);
      }
    }//输入棋盘
    for(int p=0;p<n;p++){
      for(int l=0;l<n;l++){
        bool hang=true,lie=true,duijiao=true,fanduijiao=true;
        int player=board[p+10][l+10];
        for(int w=1;w<x;w++){
          if(player!=board[p+10][l+10+w]){
            hang=false;
          }
        }//检查行
        for(int w=1;w<x;w++){
          if(player!=board[p+10+w][l+10]){
            lie=false;
          }
        }//检查列
        for(int w=1;w<x;w++){
          if(player!=board[p+10+w][l+10+w]){duijiao=false;}
        }//检查对角线
        for(int w=1;w<x;w++){
          if(player!=board[p+10+w][l+10-w]){
            fanduijiao=false;
          }
        }//检查反对角线
        if(hang||lie||duijiao||fanduijiao){
          win[player]=true;
        }

      }
    }//挨个检查每个数字
if(win[2]&&!win[4]&&!win[1]){
      printf("2\n");}
else if(!win[2]&&win[4]&&!win[1]){
      printf("4\n");}
else if(!win[2]&&!win[4]&&win[1]){
      printf("1\n");}
else{
      printf("draw\n");}
  }
  return 0;
}