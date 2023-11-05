//
// Created by LENOVO on 2023/11/5.
//
#include <stdio.h>
#define N 20
int a[N];
void Selectionsort(int a[],int len){
  for(int i=0;i<len;i++){
    int min=a[i];
    int min_index=i;
    for(int j=i+1;j<len;j++){
      if(a[j]<a[min_index]){min_index=j;}
    }
    a[i]=a[min_index];
    a[min_index]=min;
  }

}
int main(){
  for(int i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
 Selectionsort( a ,N);
 for(int i=0;i<N;i++){
    printf("%d ",a[i]);
 }
 return 0;
}
