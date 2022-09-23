

int pivotIndex(int* nums, int numsSize){
    int left = 0;
    int right = 0;
    
    for(int i = 0 ; i < numsSize ; i++)
    {
        for(int j = 0; j < i ; j++)
            left += nums[j];
        
        for(int k = i + 1; k < numsSize ; k++)
            right += nums[k];
        
        if(left == right)
            return (i);
        left = 0;
        right = 0;
    }
    return (-1);
}