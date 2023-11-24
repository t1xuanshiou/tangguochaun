//
// Created by LENOVO on 2023/11/19.
//
#include <stdio.h>
#include <string.h>//
char s[1000];
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int x1=0,x2=a,y1=0,y2=b;
  int chang=a,kuan=b,gao=c;
  scanf("%s",s);
  int len= strlen(s);
  for(int i=0;i<len;i++){
    if(s[i]=='W'){
      x2=x1;
      int tem1=chang;
      chang=gao;
      gao=tem1;
      x1=x2-chang;
    }
    if(s[i]=='S'){
      x1=x2;
      int tem2=chang;
      chang=gao;
      gao=tem2;
      x2=x1+chang;
    }
    if(s[i]=='A'){
      int tem3=gao;
      gao=kuan;
      kuan=tem3;
      y2=y1;
      y1=y2-kuan;
    }
    if(s[i]=='D'){
      int tem4=gao;
      gao=kuan;kuan=tem4;
      y1=y2;
      y2=y1+kuan;
    }
  }

  printf("%d %d %d %d",x1,x2,y1,y2);
  return 0;
}