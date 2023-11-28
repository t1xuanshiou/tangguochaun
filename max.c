//
// Created by LENOVO on 2023/11/13.
//
#include <stdio.h>
int input[100001];
int findstorage[100001][2];
void find(int l,int r){
  if(r<l){
    return;}
  if(l==r){
    findstorage[l][0]=l;
    findstorage[l][1]=l;
  }
  else{
    int max=-1;
    int pos=-1;
    for(int i=l;i<=r;i++){
      if(input[i]>max){
        max=input[i];
        pos=i;
      }
    }
    findstorage[pos][0]=l;
    findstorage[pos][1]=r;
    find(l,pos-1);
    find(pos+1,r);
  }
}
int n;
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&input[i]);
  }
  find(1,n);
  for(int i=1;i<=n;i++){
    printf("%d %d",findstorage[i][0],findstorage[i][1]);
    printf("\n");
  }
  return 0;
}