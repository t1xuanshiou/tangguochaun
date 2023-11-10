//
// Created by LENOVO on 2023/11/5.
//
#include <stdio.h>
#include <stdlib.h>
int xa,ya,xb,yb,xc,yc;
int ans;
int main(){
  scanf("%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc);
if(xa!=xb&&ya!=yb){
  ans= abs(xa-xb)+ abs(ya-yb);
  printf("%d\n",ans);
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
  else{if(yc==ya||xc==xb){
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

    } if(xc==xa||yc==yb){for(int i=xa;i!=xb;i+=(xb>xa)?1:-1){
        if(xb>xa){
          printf("R");
        } else{
          printf("L");}
      }for(int i=ya;i!=yb;i+=(yb>ya)?1:-1){
        if(yb>ya){
          printf("U");
        } else{
          printf("D");}
      }

    }
  }
}
if(ya==yb){
  int r=(xb-xa)?xb:xa;
  int l=(xb-xa)?xa:xb;
  if(ya!=yc||(ya==yc&&(xc>r||xc<l))){
    printf("%d", abs(xb-xa));
    for(int i=xa;i!=xb;i+=(xb-xa)?1:-1){
      if(xb>xa){
        printf("R");} else{
        printf("L");}
    }
  }
  else{
    printf("%d", abs(xa-xb)+2);
    for(int i=xa;i!=(xc>xa)?xc-1:xc+1;i+=(xb>xa)?1:-1){
      if(xb>xa){
        printf("R");} else{
        printf("L");}
    }
    printf("U");
    if(xc>xa){
      printf("RD");
      for(int i=xc+1;i!=xb;i++){
        printf("R");
      }
    }
    else{
      printf("LD");
      for(int i=xc-1;i!=xb;i--){
        printf("L");
      }
    }
  }

}
if(xa==xb){
  int h=(yb-ya)?yb:ya;
  int lo=(yb-ya)?ya:yb;
  if(xa!=xc||(xa==xc&&(yc>h||yc<lo))){
    printf("%d", abs(yb-ya));
    for(int i=ya;i!=yb;i+=(yb-ya)?1:-1){
      if(yb>ya){
        printf("U");} else{
        printf("D");}
    }
  }
  else{
    printf("%d", abs(ya-yb)+2);
    for(int i=ya;i!=(yc>ya)?yc-1:yc+1;i+=(yb>ya)?1:-1){
      if(yb>ya){
        printf("U");} else{
        printf("D");}
    }
    printf("R");
    if(yc>ya){
      printf("UL");
      for(int i=yc+1;i!=yb;i++){
        printf("U");
      }
    }
    else{
      printf("DR");
      for(int i=yc-1;i!=yb;i--){
        printf("D");
      }
    }
  }

}

return 0;
}
