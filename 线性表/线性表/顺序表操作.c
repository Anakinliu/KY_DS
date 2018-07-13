#include "stdafx.h"


/*
  选择排序
*/
void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
void selectionSort(int a[], int len)
{
	int i = 0, j;
	int min;
	for (; i < len - 1; i++) {
		min = i;  // 暂且把i当作min
		for (j = i + 1; j < len; j++) {
			if (a[j] < a[min]) {
				min = j;  // 小于min的j
			}
		}
		swap(&a[min], &a[i]);
	}
}
void show(int a[], int len) {
	for(int i = 0; i < len; i++) {
		printf("a[%d]= %d\n", i, a[i]);
	}
}

void insertionSort(int a[], int len)
{

}


/*
*/