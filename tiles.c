//
// Created by LENOVO on 2023/11/13.
//
#include <stdio.h>
 long  long  int sum(int n){
  if(n==0||n==1){return 1;}
  return sum(n-1)+ sum(n-2);
}
int main(){
  int n;
  scanf("%d",&n);
  printf("%lld", sum(n));
  return 0;
}