#include "insertion_sort.h"

using ::sort::insertion_sort;

void insertion_sort::sort(int* pArray, int length){
	for(int j=1; j<length; ++j){
		int key = *(pArray+j);
		int i = j-1;
		while(i>=0 && *(pArray+i)> key){
			*(pArray+i+1) = *(pArray+i);
			--i;
		}
		*(pArray+i+1) = key;
	}
}
