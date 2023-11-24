//
// Created by LENOVO on 2023/11/5.
//
#include <stdio.h>
#include <stdlib.h>
int xa,ya,xb,yb,xc,yc;
int main(){
  scanf("%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc);
if(xa!=xb&&ya!=yb){
  printf("%d\n",abs(xa-xb)+ abs(ya-yb));
  if(xc!=xb&&yc!=ya){
    for(int i=xa;i!=xb;i+=(xb>xa)?1:-1){
      if(xb>xa){
        printf("R");
      } else{
        printf("L");}
    }
    for(int i=ya;i!=yb;i+=(yb>ya)?1:-1){
      if(yb>ya){
        printf("U");
      } else{
        printf("D");}
    }
  }//c对路线无影响
  else{
      for(int i=ya;i!=yb;i+=(yb>ya)?1:-1){
        if(yb>ya){
          printf("U");
        } else{
          printf("D");}
      }for(int i=xa;i!=xb;i+=(xb>xa)?1:-1){
        if(xb>xa){
          printf("R");
        } else{
          printf("L");}
      }
  }
}
if(ya==yb){int r=(xb>xa)?xb:xa;
  int l=(xb>xa)?xa:xb;int flag=1;
  if(yc==ya&&xc<r&&xc>l){
      printf("%d\n", abs(xa-xb)+2);
      flag=0;}if(flag==0)
      printf("U");
      for(int i=xa;i!=xb;i+=(xb-xa)?1:-1){
        if(xb>xa){
          printf("R");} else{
          printf("L");}
      }
      printf("D");

      }

  else{ printf("%d", abs(xb-xa));
      for(int i=xa;i!=xb;i+=(xb>xa)?1:-1){
      if(xb>xa){
        printf("R");} else{
        printf("L");}

}}}
if(xa==xb){int r=(yb>ya)?yb:ya;
      int l=(yb>ya)?ya:yb;
  if(xc==xa&&ya<l&&ya>r){
printf("%d\n", abs(xa-xb)+2);
printf("R");
for(int i=ya;i!=yb;i+=(yb>ya)?1:-1){
      if(yb>ya){
        printf("U");} else
        printf("D");
}
printf("L");
  }
  else{ printf("%d", abs(yb-ya));
for(int i=ya;i!=yb;i+=(yb>ya)?1:-1){
      if(yb>ya){
        printf("U");} else{
        printf("D");}
}
  }
}
return 0;
}
