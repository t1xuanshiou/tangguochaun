//
// Created by LENOVO on 2023/11/3.
//
#include<stdio.h>
char input[100005];
int main(){
  int len;
  scanf("%d",&len);
  getchar();
  for(int i=0;i<len;i++){
    scanf("%c",&input[i]);
  }
  for(int j=len-1;j>=0;j--){
    if(input[j]>='a'){printf("%c",input[j]-32);}
    else{ if(input[j]<='Z'&&input[j]>='A'){printf("%c",input[j]+32);}
      else{ printf("%c",input[j]);}}
  }
  return 0;
}