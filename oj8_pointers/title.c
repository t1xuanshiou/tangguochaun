//
// Created by LENOVO on 2023/11/26.
//
#include <stdio.h>
#include <stdlib.h>
void bianda(char *a){
  if(*a>='a'&&*a<='z'){
    *a=*a-32;
  }
  else{*a=*a;}
}
void bianxiao(char *b){
  if(*b<='Z'&&*b>='A'){
    *b=*b+32;
  }
  else{*b=*b;}
}
int main(){
  char *input=(char *)malloc(4096*sizeof (char ));
  getc(input);
  int len=
  return 0;
}