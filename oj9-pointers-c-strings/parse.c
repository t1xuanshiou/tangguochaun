//
// Created by LENOVO on 2023/12/3.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
bool invalid(char *s1,char *s2,int i){

   bool flag=false;
      for(int j=0;j< strlen(s1);j++){
        if(*(s1+j)==*(s2+i)){flag=true;}
      }
      if(flag==false){return false;}
      else return true;
  }
bool option(char *s1,char *s2,int index){
  for(int i=0;i< strlen(s1);i++){
   if(*(s1+i)==*(s2+index)&&*(s1+i+1)==':'&&*(s2+index+1)=='\0'){
      return false;
   }
  }
  return true;
}
int main(){
  char *s1=(char *)malloc(128*sizeof (char ));
  char *s2=(char *)malloc(1024*sizeof (char ));
  char *s3=(char *)malloc(1024*sizeof (char ));
  char s='\0';
  int kuilei1=0;
  while ((s=getchar())!='\n'){
   *(s1+kuilei1)=s;
   kuilei1++;
  }
  s='\0';
  *(s1+kuilei1)='\0';
  int kuilei2=0;
  while ((s=getchar())!='\n'){
   *(s2+kuilei2)=s;
   *(s3+kuilei2)=s;
   kuilei2++;
  }
  *(s2+kuilei2)='\0';
  *(s3+kuilei2)='\0';
  int index2=0;
  while (1){
   if(*(s2+index2)==' '||*(s2+index2)=='\0'){
      break;
   }
   index2++;
  }
  for(int j=0;j<index2;j++){
   printf("%c",*(s2+j));
  }
  for(int i=index2+1;i< strlen(s2);i++){
   if(*(s2+i-1)!='-'||*(s3+i)=='0'){
      continue;}
   else{if(invalid(s1,s2,i)==false){
        printf(": invalid option -- '%c'",*(s2+i));
        return 0;
      } else{for(int j=0;j< strlen(s1);j++){
          if(*(s1+j)==*(s2+i)&&*(s1+j+1)==':'){
            for(int m=i+2;*(s3+m)!=' '&&*(s3+m)!='\0';m++){
              *(s3+m)='0';
            }
          }
        }
      }//Here requires revise!!!!!!!
   }
  }
  for(int i=index2+1;i< strlen(s2);i++){
   if(*(s3+i-1)!='-'||*(s3+i)=='0'){
      continue;}
   if(option(s1,s3,i)==false){
      printf(": option requires an argument -- '%c'",*(s2+i));
      return 0;
   }
  }
  for(int i=index2+1;i< strlen(s2);i++){
   if(*(s2+i-1)!='-'||*(s2+i)=='0'){
      continue;}
   else{
      printf("\n");
      for(int j=0;j< strlen(s1);j++){
        if(*(s1+j)==*(s2+i)&&*(s1+j+1)!=':'){
          printf("%c",*(s2+i));
          break;
        }
        if(*(s1+j)==*(s2+i)&&*(s1+j+1)==':'){
          printf("%c",*(s2+i));
          printf("=");
          for(int m=i+2;*(s2+m)!=' '&&*(s2+m)!='\0';m++){
            printf("%c",*(s2+m));
            *(s2+m)='0';
          }
        }
      }
   }
  }
  return 0;
}

