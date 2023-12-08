//
// Created by LENOVO on 2023/12/2.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int t;
char* interleaveString(char *s1,char *s2,int size,int d1,int d2){
  int len1= strlen(s1);
  int len2= strlen(s2);
  char *s3=(char *)malloc(size*sizeof(char ) );
  int p1=0,p2=0;int index=0;
  while (1){
    bool flag1=true,flag2=true;
    for(int j=p1;j<p1+d1;j++){
      if(j>=len1||index==size-1){flag1=false;
        break;}
      *(s3+index)=*(s1+j);
      index++;
    }
    p1+=d1;
    for(int j=p2;j<p2+d2;j++){
      if(j>=len2||index==size-1){flag2=false;
        break;}
      *(s3+index)=*(s2+j);
      index++;
    }
    p2+=d2;
    if(index==size-1){*(s3+size-1)='\0';}
if(flag1==false&&flag2==false){
      break;}
  }
  return s3;
}
int main(){
  scanf("%d",&t);

  for(int i=1;i<=t;i++){
    char s1[1001]={'\0'};
    char s2[1001]={'\0'};
    int d1,d2,size;
    getchar();
    scanf("%[^;];%[^;];%d;%d;%d",s1,s2,&d1,&d2,&size);
    char *s3= interleaveString(s1,s2,size,d1,d2);
    printf("%s",s3);
    printf("\n");
  }
  return 0;
}