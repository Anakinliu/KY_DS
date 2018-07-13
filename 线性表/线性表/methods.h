#pragma once
/*
  定义了我自己写的函数原型, 以便在main.cpp使用
*/
#define LEN(x)  (sizeof(x) / sizeof((x)[0]))

void selectionSort(int a[], int len);

void show(int a[], int len);

void insertionSort(int a[], int len);