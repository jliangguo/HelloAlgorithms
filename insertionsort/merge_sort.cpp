#include "merge_sort.h"

using sort::merge_sort;

//const int merge_sort::FIRST_INDEX;

// merge two list.
// the lastIndex points to the last valid element index.
// TODO 
void merge_sort::merge(int* pArray, int firstIndex, int middleIndex, int lastIndex){
	int n1 = middleIndex - firstIndex + 1;
	int n2 = lastIndex - middleIndex;
	int* left = new int[n1];
	int* right = new int[n2];
	
	for(int i=0; i<n1; ++i){
		*(left+i) = *(pArray+firstIndex+i);
	}
	for(int j=0; j<n2; ++j){
		*(right+j) = *(pArray+middleIndex+j+1);
	}

	int i=0;
	int j=0;
	int k=firstIndex;
	while(i<n1 && j<n2){
		if(*(left+i) <= *(right+j)){
			*(pArray+k++) = *(left+i++);
		}else{
			*(pArray+k++) = *(right+j++);
		}
	}

	while(i<n1){
		*(pArray+k++) = *(left+i++);
	}
	while(j<n2){
		*(pArray+k++) = *(right+j++);
	}
}

// recursive call sort.
void merge_sort::sort(int* pArray, int first, int last){
	if(first<last){
		int middle = (first+last)/2;
		sort(pArray, first, middle);
		sort(pArray, middle+1, last);
		merge(pArray, first, middle, last);
	}
}

// unify the called style. 
void merge_sort::sort(int* pArray, int length){
	sort(pArray, FIRST_INDEX, length-1);
}