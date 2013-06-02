#ifndef ALGO_INSERTIONSORT_UTIL_H
#define ALGO_INSERTIONSORT_UTIL_H

#include <iostream>

namespace sort {
	void printArray(int* pArray, int length){
		for(int i=0; i<length; ++i){
			std::cout << *(pArray+i) << " ";
		}
		std::cout << std::endl;
	}
}

#endif // ALGO_INSERTIONSORT_UTIL_H