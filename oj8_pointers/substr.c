//
// Created by LENOVO on 2023/11/26.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s1;
char t1;
int main() {
  char *S;
  char *T;
  S=(char *)malloc(100000*sizeof (char ));
  int index=0;
  char *k1=S;
  while ((s1=getchar())!='\n'&&s1!=EOF){
S=k1+index;
*S=s1;
index++;
  }
  S++;
  *S='\0';
  T=(char *)malloc(100000*sizeof (char ));
  int index2=0;
  char *k2=T;
  while ((t1=getchar())!='\n'&&t1!=EOF){
T=k2+index2;
*T=t1;
index2++;
  }
  T++;
  *T='\0';
  char *pS=k1;
  char *pT=k2;
  int len=index;
  int count=0;
  char *kuilei1=pS;
  char *kuilei2=pT;
  for(int i=0;i<=len- index2;i++){
    pS=kuilei1+i;
    char *kuilei=pS;
    for(int j=0;j< index2;j++){
      pT=kuilei2+j;
      pS=kuilei+j;
      if(*pS==*pT){
        count++;
      }
    }
    pS=kuilei;
    if(count== index2){
      printf("%d ",i);
    }
    count=0;
  }
  return 0;
}
