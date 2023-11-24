//
// Created by LENOVO on 2023/11/14.
//
#include <stdio.h>
#include <math.h>
int a[22];
int p;
double fx(int n,double x){
  double sum=0;
  for(int i=0;i<=n-1;i++){
    sum+=a[i]* pow(x,i);
  }
  return pow(sum,p);
}
double total(int n,double l,double r,double E){
  double mid=(l+r)/2;
  double S= (4*fx(n,(l+r)/2)+fx(n,l)+fx(n,r))*(r-l)/6.0 ;
  double SL= (4*fx(n,(l+mid)/2)+fx(n,l)+fx(n,mid))*(mid-l)/6.0 ;
  double SR=(4*fx(n,(mid+r)/2)+fx(n,r)+fx(n,mid))*(r-mid)/6.0 ;
  if(fabs(SL+SR-S)<=15.0*E){
    return SL+SR+((SL+SR-S)/15.0);
  }
  return total(n,l,mid,E/2.0)+ total(n,mid,r,E/2.0);

}
int main(){
  int n;
  scanf("%d%d",&n,&p);
for(int i=0;i<=n;i++){
  scanf("%d",&a[i]);
}
double l,r;
scanf("%lf%lf",&l,&r);
printf("%f", total(n+1,l,r,1e-4));
return 0;
}