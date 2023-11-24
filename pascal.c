//
// Created by LENOVO on 2023/11/13.
//
#include <stdio.h>
 long long int factorial(int a, int b);
int main(){
 int a,b;
scanf("%d%d",&a,&b);
printf("%lld", factorial(a-1,b-1));
return 0;
}
long long int factorial( int a, int b)
{
if(b==0||a==b){return 1;}

  return factorial(a-1,b-1)+ factorial(a-1,b);

}