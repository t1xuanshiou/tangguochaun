//
// Created by LENOVO on 2023/12/4.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char *ans;
char *reserved[]={"const","int","float","double","long","static","void","char","extern","return","break","enum","struct","typedef","union","goto","integer","float","variable"};
char *operator[]={"+","-","*","/","=","==","!=",">=","<=",">","<"};
int res(char *s){
for(int i=0;i<=15;i++){
  if(strcmp(reserved[i],s)==0){
    return 1;
  }
}
return 0;
}
int inte(char *s){
while (*s){
  if(!isdigit(*s)){
    return 0;
  }
  s++;
}
return 2;
}
int isfloat(char *s){
int count=0;
while (*s){
  if(!isdigit(*s)){
    if(*s=='.'){
      count++;
    }
    else{return 0;}
  }
  s++;
}
if(count==1){return 3;}
else{return 0;}
}
int var(char *s){
if (!(isalpha(*s) || *s == '_')) return 0;
s++;
while (*s!='\0'){
  if (!(isalpha(*s) || isdigit(*s) || *s == '_')) return 0;
  s++;
}
return 4;
}
int ope(char*s){
for(int i=0;i<=10;i++){
  if(strcmp(operator[i],s)==0){
    return 5;
  }
}
return 0;
}
void prosess(char *s){
if(s==NULL)
  return;
if(inte(s)==2){strcat(ans,"integer ");
  return;}
else if(res(s)==1){strcat(ans,"reserved ");
  return;}
else if(isfloat(s)==3){
  strcat(ans,"float ");
  return;}
else if(var(s)==4){
  strcat(ans,"variable ");
  return;}
else if(ope(s)==5){
  strcat(ans,"operator ");
  return;}
 else {
  printf("Compile Error");
  exit(EXIT_SUCCESS);}
}
int main(){
char *s=(char *)malloc(4098*sizeof (char ));
ans=(char *)malloc(10000*sizeof (char ));
while (scanf("%s",s)!=EOF){
  char *position = strchr(s, ';');
  if(position==NULL){
    prosess(s);}
  else{
    char *str=s;
    while (*str!='\0'){
      if(*str==';'){
        strcat(ans,"\n");
        str++;
      }
      else{
        char arr[10000]={'\0'};
        for(int i=0;*str!=';'&&*str!='\0';i++)
        {
          arr[i]=*str;
          str++;
        }
        prosess(arr);
      }
    }
  }
}
printf("%s",ans);
  return 0;
}