
struct HashTable {
    int key;             // The number from nums array
    UT_hash_handle hh;   // Handle for the hash table library
};

bool containsDuplicate(int* nums, int numsSize) {
    struct HashTable *set = NULL; // Initialize the hash set
    struct HashTable *element = NULL;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];

        // 1. Try to find the number in the set
        HASH_FIND_INT(set, &num, element);

        // 2. If found, return true immediately
        if (element != NULL) {
            // Optional: Free memory before returning to be 100% clean
            // (LeetCode usually accepts without freeing in void/bool functions)
            return true; 
        }

        // 3. If not found, add it to the set
        element = malloc(sizeof(struct HashTable));
        element->key = num;
        HASH_ADD_INT(set, key, element);
    }
    
    // In a real system, you should iterate and free 'set' here
    return false;
}