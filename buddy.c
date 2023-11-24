//
// Created by LENOVO on 2023/11/19.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int Memory[100000];
int Id[100000];
int main(){
  int n,q;
  scanf("%d%d",&n,&q);
  getchar();
  Memory[0]=n;
  int len=1;
  for(int i=1;i<=q;i++){

    char s;
    scanf("%c",&s);
    if(s=='A'){
      int id,memory;
      scanf("%d%d",&id,&memory);getchar();
      int k=0;
      while (pow(2,k)<memory){
        k++;
      }
if(len==1){
    Memory[0]=k;
    Id[0]=id;
    int j;
    for(j=1;k!=n;j++,k++){
      Memory[j]=k;
    }
    len=j;
    continue;
}if(len>1){
    for(int j=0;j<len;j++){
      if(Memory[j]==k&&Id[j]==0){
        Id[j]=id;
        break;
      }
      if(Memory[j]>k&&Id[j]==0){
        int storage[10000]={0};int c=j;
        int idstorage[10000]={0};
        for(int p=c+1,l=0;p<len;p++,l++){
          storage[l]=Memory[p];
          idstorage[l]=Id[p];
        }int a=Memory[j];
        int g=j;
        Memory[g]=k;
        Id[g]=id;
        g=g+1;
        for(;k!=a;g++,k++){
          Memory[g]=k;
          Id[g]=0;
        }
        int count=0;
        while (storage[count]!=0){
          count++;
        }
        for(int p=0;p<count;p++,g++){
          Memory[g]=storage[p];
          Id[g]=idstorage[p];
        }
        len=g;
        break;
      }
    }
    continue;
}


    }
    if(s=='Q'){
printf("%d\n",len);
for(int j=0;j<len;j++){
    printf("%d ",Id[j]);
}
printf("\n");
getchar();
    }

  }
  return 0;
}