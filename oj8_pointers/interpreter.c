//
// Created by LENOVO on 2023/11/26.
//
#include <stdio.h>

int main() {
 unsigned int input;
 scanf("%8x",&input);
 signed int a=*(signed int *)&input;
 printf("%d\n",a);
 unsigned int b=*(unsigned int *)&input;
 printf("%u\n",b);
 float c=*(float *)&input;
 printf("%.6f\n",c);
 printf("%.3e\n",c);
  return 0;
}
