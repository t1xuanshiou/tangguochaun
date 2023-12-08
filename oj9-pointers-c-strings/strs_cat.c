//
// Created by LENOVO on 2023/12/2.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
  int n=0;
  scanf("%d",&n);
  while (n--){
    char *s1=(char *)malloc(1000*sizeof (char ));
    char *s2= malloc(1000);
    scanf("%s%s",s1,s2);
    for(char *p=s1;;p++){
      if(*p!=*s2){
        if(*p=='\0'){
          printf("%s%s\n",s1,s2);
          break;}
        else{
          continue;}
      }
      else{
        bool flag=true;
        char *q=p;
        for(char *w=s2;*q!='\0';q++,w++){
          if(*w=='\0'){flag=false;
            break;}
          if(*q!=*w){
            flag=false;
            break;
          }
        }
        if(flag==false){
          continue;}
        else{
          printf("%s",s1);
        s2+=q-p;
        printf("%s",s2);
        break;
        }
      }
    }
  }
}