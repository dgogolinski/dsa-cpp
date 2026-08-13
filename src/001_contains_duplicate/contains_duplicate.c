#include <stdbool.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void* a, const void* b) {
    int valA = *(const int*)a;
    int valB = *(const int*)b;

    if (valA < valB)
        return -1;
    if (valA > valB)
        return 1;

    return 0;
}

bool hasDuplicate(int* nums, int numSize) {
    if (numSize <= 1)
        return false;

    qsort(nums, numSize, sizeof(int), compare);

    for (int i = 0; i < numSize - 1; i++) {
        if (nums[i] == nums[i + 1])
            return true;
    }

    return false;
}