//
// Created by LENOVO on 2023/12/6.
//
#include <stdio.h>
int detect(char *rule,char command){
  for(char *p=rule;*p!='\0';p++){
    if(*p==command){
      if(*(p+1)==':'){return 2;}
      else{return 1;}
    }
  }
  return 0;
}
int main(){
  char rule[128]={0};
  scanf("%s",rule);
  char ans[10000]={0};
  int top=0;
  char command[1025]={'\0'};
  scanf("%s",command);
  printf("%s",command);
  while (scanf("%s",command) != EOF) {
    if (command[0] != '-') {
      continue;
    } else {
    int x = detect(rule,command[1]);
      if (x == 1) {
        ans[top++] = command[1];
        ans[top++] = '\n';
      } else if (x == 0) {
        printf(": invalid option -- '%c'",command[1]);
        break;
      } else {
        ans[top++] = command[1];
        ans[top++] = '=';

        if (scanf("%s",command) == EOF) {

          printf(": option requires an argument -- '%c'",x);
        } else {
          for (char *p = command; *p != '\0'; p++) {
            ans[top++] = *p;
          }
          ans[top++] = '\n';
        }
      }
    }
  }
  printf("\n");
  for(int i=0;i<top;i++){
putchar(command[i]);
  }
  return 0;
}