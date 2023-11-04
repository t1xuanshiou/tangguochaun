//
// Created by LENOVO on 2023/11/3.
//
#include <stdio.h>
#include <stdbool.h>
int n,k,b,l;
bool live[1501];
int tailor[10];
int main(){
  scanf("%d%d%d%d",&n,&k,&b,&l);
  for(int i=1;i<=n;i++){
   live[i]=true;
   tailor[i]=l;
  }
  int survive=n;int scream=0,pos=0,fire=b;
  while (survive>1){
   pos++;
   if(pos>n){pos=1;}
  if(live[pos]==false){
     continue;}
  scream++;
  if(scream==k){
     if(fire!=0){{
       tailor[pos]--;
       fire--;
       scream=0;
       if(tailor[pos]==0){live[pos]=false;survive--;}
     }

     }
     else{scream=0;fire=b;
     continue;}
  }
  }
  for(int i=1;i<=n;i++){
  if(live[i]==true){
     printf("%d",i);}
  }
  return 0;
}