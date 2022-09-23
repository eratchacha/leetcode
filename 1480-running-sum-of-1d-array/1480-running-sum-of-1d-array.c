#include "stdlib.h"
#include "stdio.h"
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int sum = 0;
    int *runningSum;
    *returnSize = numsSize;
    runningSum = malloc(sizeof(int) * *returnSize);
    for (int i = 0 ; i < *returnSize ; i++)
    {
        *(runningSum + i) = sum + *(nums + i);
        sum = *(runningSum + i);
    }
    
    return (runningSum);
}