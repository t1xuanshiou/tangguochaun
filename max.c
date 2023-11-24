//
// Created by LENOVO on 2023/11/13.
//
#include <stdio.h>
#define MAX_SIZE 100

// 定义一个全局的数组来模拟栈
int stack[MAX_SIZE];

// 定义一个全局的变量作为栈顶的指针
int top = -1;

// push函数
void stackpush(int value) {
  if(top >= MAX_SIZE - 1) {
    printf("栈已满，无法添加元素\n");
  } else {
    top++; // 移动栈顶指针
    stack[top] = value; // 在栈顶放入新元素
  }
}

// pop函数
int stackpop() {
  if(top == -1) {
    printf("栈为空，无法取出元素\n");
    return -1; // 返回一个错误值
  } else {
    int value = stack[top]; // 取出栈顶元素
    top--; // 移动栈顶指针
    return value;
  }
}

int main() {
  stackpush(5);
  stackpush(10);
  stackpush(15);
  printf("%d\n", stackpop()); // 输出：15
  printf("%d\n", stackpop()); // 输出：10
  printf("%d\n", stackpop()); // 输出：5
  return 0;
}