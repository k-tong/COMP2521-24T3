#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// racecar -> palindrome
// reviewer 
// reweiver -> not palindrome

// racecar
// 1. flip racecar and check that 
//  they are the same
// 2. 2 Pointer approach
//  
// 

// racecar

// size_t strlen(char *),

bool isPalindrome(char *word) {

    int len = strlen(word); // O(n) -> n is number of
    // letters in word
    int left = 0; // constant time O(1)
    int right = len - 1; // O(1)
    // O(n + 2)

    while (left <= right) { // O(n/2)
        if (word[left] != word[right]) { // O(1)
            return false;
        }
        left++; // O(1)
        right--; // O(1)

    } // O(n/2) * O(1) = O(n/2) 

    // overall O(3n/2 + 2)
    // O(n + 2)
    // O(n)

    return true;
}

// Time Complexity:
// in the worst case, how much work
// is done
// roughly how many of lines of code are run


int main(int argc, char *argv[]) {
    
    //assume given correct inputs
    if (isPalindrome(argv[1])) {
        printf("Palindrome!\n");
    } else {
        printf("Not Palindrome!\n");
    }
}
 