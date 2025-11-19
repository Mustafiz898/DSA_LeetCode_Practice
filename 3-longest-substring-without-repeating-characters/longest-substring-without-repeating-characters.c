int lengthOfLongestSubstring(char* s) {
    int char_map[256] = {0};
    int len = strlen(s);
    int max = 0;
    int left=0, right=0;

    while(s[right] != '\0'){
        while(char_map[s[right]] == 1){
            char_map[s[left]] = 0;
            left++;
        }
        int current_len = right - left +1;
        if(current_len > max){
            max = current_len;
        }
        char_map[s[right]] = 1;
        right++;
    }

    return max;
}

// Day 01