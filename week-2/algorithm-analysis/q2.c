#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// lets print the result if there is one
bool hasTwoSum(int a[], int n, int v) {
    //TODO
    return false;
}



int main(int argc, char *argv[]) {
    
    //assume given valid array of inputs (of max 100 nums)
    int nums[100];

    for (size_t i = 1; i < argc; i++) {
        nums[i - 1] = atoi(argv[i]);
    }

    int target;
    printf("Target: ");
    scanf("%d", &target);

    if (hasTwoSum(nums, argc - 1, target)) {
        printf("has Two Sum!\n");
    } else {
        printf("No Two Sum!\n");
    }
}