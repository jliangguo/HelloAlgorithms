#include "bubble_sort.h"

using sort::bubble_sort;

void bubble_sort::sort(int* pArray, int length){
	for(int i=0; i<length-1; ++i){
		for(int j=length-1; j>i; --j){
			if(*(pArray+j)<*(pArray+j-1)){
				int tmp = *(pArray+j);
				*(pArray+j) = *(pArray+j-1);
				*(pArray+j-1) = tmp;
			}
		}
	}
}
