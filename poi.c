//
// Created by LENOVO on 2023/11/13.
//
#include <stdio.h>
int a[100005];
int find(int c[],int n,int i){
  if(c[i]==i){
    return i;
  }
  find(c,n,c[i]);
}
int main(){
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=1;i<=n;i++){
    printf("%d ", find(a,n,i));
  }return 0;
}
