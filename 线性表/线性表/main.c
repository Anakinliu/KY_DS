// 线性表.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{

	/*SNode linked;
	linked.data = 666;
	printf("add: %p data: %d linked.next size: %d\n", &linked, linked.data, sizeof(linked.next));
	printf("hwllo, monster");*/

	int array[6] = {9, 6, 5, 3, 2, 4};
	/*printf("size= %p\n", LEN(array));
	printf("%d\n", array);*/
	selectSort(array, 6);
	show(array, 6);
    return 0;
}







