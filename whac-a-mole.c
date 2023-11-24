//
// Created by LENOVO on 2023/11/19.
//
#include <stdio.h>
int board[700][700];int maxarr[700][2];
int n,m,d;
int totalstorage[700][700];
int total(int row,int col,int s){
  if(s==1){return board[row][col]+board[row-1][col]+board[row+1][col]+board[row][col-1]+board[row][col+1];}
  int sum=0;
  for(int i=0;i<=s;i++){
    sum+=board[row-s+i][col+i]+board[row+i][col-s+i]+board[row-i][col-s+i]+board[row+s-i][col+i];
  }
    return sum-board[row][col-s]-board[row][col+s]-board[row+s][col]-board[row-s][col]+ total(row,col,s-1);
}
int main(){
  scanf("%d%d%d",&n,&m,&d);
  for(int i=50;i<50+n;i++){
    for(int j=50;j<50+m;j++){
      scanf("%d",&board[i][j]);
    }
  }
  int max= total(50,50,d);
  for(int i=50;i<50+n;i++){
    for(int j=50;j<50+m;j++){
      totalstorage[i][j]= total(i,j,d);
      if(total(i,j,d)>max){max= totalstorage[i][j];}
    }
  }int count=0;
  for(int i=50;i<50+n;i++){
    for(int j=50;j<50+m;j++){
      if(totalstorage[i][j]==max){maxarr[count][0]=i-49;maxarr[count][1]=j-49;count++;}
    }
  }
  printf("%d %d\n", max,count);
  for(int i=0;i<count;i++){
    printf("%d %d",maxarr[i][0],maxarr[i][1]);
    printf("\n");
  }
  return 0;
}