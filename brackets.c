//
// Created by LENOVO on 2023/11/17.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
  int n;
  scanf("%d", &n);
  getchar();
  for (int i = 1; i <= n; i++) {
    char content[100001] = {'\0'};
    int top = -1;
    bool check = true;
    char s[100001] = {'\0'};
    gets(s);
    int len = strlen(s);
    if(len==1&&s[0]==' '){
      printf("True\n");
      continue;}

    for (int j = 0; j < len; j++) {
      if(s[j]==' '){
        continue;}
      if (s[j] == '(' || s[j] == '[' || s[j] == '{') {
        top++;
        content[top] = s[j];
      } else {if(top<0){
          check=false;
          break;}
        if (!((content[top] == '(' && s[j] == ')') ||
              (content[top] == '[' && s[j] == ']') ||
              (content[top] == '{' && s[j] == '}'))) {
          check = false;
          break;
        }
        top--;
      }
    }
    if(top>=0){check=false;}
    if (check == false) {
      printf("False\n");
    } else {
      printf("True\n");
    }
  }
  return 0;
}