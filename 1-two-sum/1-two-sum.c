

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* output = (int*) malloc(sizeof(int) * *returnSize);
    
    for (int i = 0 ; i < numsSize - 1 ; i++)
    {
        for (int j = i + 1 ; j < numsSize ; j++) 
        {
            if (target - nums[i] == nums[j])    
            {
                output[0] = i;
                output[1] = j;
                break;
            }
            if(output[0] == i)
                break;
        }
    }
    return output;
}