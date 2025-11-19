#include <stdbool.h>
#include <stdlib.h>

bool containsDuplicate(int* nums, int numsSize) {
    // qsort comparator written inside the function using a lambda-like static function
    int compare(const void *a, const void *b) {
        return (*(int*)a - *(int*)b);
    }

    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    // Check consecutive elements
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}
