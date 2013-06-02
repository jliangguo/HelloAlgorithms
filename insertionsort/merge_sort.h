#ifndef ALGO_MERGE_SORT_H
#define ALGO_MERGE_SORT_H

namespace sort{
class merge_sort
{
public:
	const static int FIRST_INDEX  = 0;
	static void sort(int* pArray, int length);
	static void sort(int* pArray, int first, int last);
private:
	static void merge(int* pArray, int firstIndex, int middleIndex, int lastIndex);
};

}
#endif

