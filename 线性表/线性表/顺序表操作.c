#include "stdafx.h"


/*
  ѡ������
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
		min = i;  // ���Ұ�i����min
		for (j = i + 1; j < len; j++) {
			if (a[j] < a[min]) {
				min = j;  // С��min��j
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