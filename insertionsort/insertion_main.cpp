#include <iostream>

#include "util.hpp"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "bubble_sort.h"

#pragma region UsingDeclaration

using std::cout;
using std::endl;

using sort::insertion_sort;
using sort::merge_sort;
using sort::bubble_sort;
using sort::printArray;

#pragma endregion UsingDeclaration

#define SORT 2

int main(){
	const static int SIZE = 7;
	int pArray[] = {8,2,4,9,3,6,1};
	printArray(pArray, SIZE);

#if SORT == 0
	insertion_sort::sort(pArray, SIZE);
#elif SORT == 1
	merge_sort::sort(pArray, SIZE);
#elif SORT == 2
	bubble_sort::sort(pArray, SIZE);
#endif

	printArray(pArray, SIZE);
}