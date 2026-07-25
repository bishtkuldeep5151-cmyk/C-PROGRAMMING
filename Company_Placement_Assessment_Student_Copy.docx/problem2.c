//: Longest Substring Without Repeating Characters 

#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int ans = 0;
    int index[128] = {0}; 
    int left = 0;

    for (int right = 0; right < n; right++) {
        char currentChar = s[right];
        left = (index[currentChar] > left) ? index[currentChar] : left;
        ans = (ans > right - left + 1) ? ans : right - left + 1;
        index[currentChar] = right + 1;
    }

    return ans;
}