#pragma once
/*
  ���������Լ�д�ĺ���ԭ��, �Ա���main.cppʹ��
*/
#define LEN(x)  (sizeof(x) / sizeof((x)[0]))

void selectionSort(int a[], int len);

void show(int a[], int len);

void insertionSort(int a[], int len);