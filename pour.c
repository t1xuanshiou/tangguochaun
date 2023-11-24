//
// Created by LENOVO on 2023/11/19.
//
#include <stdio.h>
int a0,b0,c0,va,vb,vc;
int va,vb,vc;
int check(int k,int a,int b,int c){
  if(k<0){return 0;}
  if(a==a0&&b==b0&&c==c0){return 1;}
  return check(k-1,a+b>va?va:a+b,0,c)+ check(k-1,0,a+b>vb?vb:a+b,c)+ check(k-1,a,0,b+c>vc?vc:b+c)
  + check(k-1,a,b+c>vb?vb:b+c,0)+ check(k-1,0,b,a+c>vc?vc:a+c)+ check(k-1,a+c>va?va:a+c,b,0);
}
int main(){
int a,b,c,k;
scanf("%d%d%d%d%d%d%d%d%d%d",&k,&va,&vb,&vc,&a,&b,&c,&a0,&b0,&c0);
if(check(k,a,b,c)==0){
  printf("No");}
else{
  printf("Yes");}
return 0;
}