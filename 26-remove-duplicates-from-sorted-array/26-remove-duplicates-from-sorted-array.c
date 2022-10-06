int removeDuplicates(int* nums, int numsSize){
    int answer = numsSize;
    int dup = 101;
    for (int i = 0 ; i < numsSize ; i++)
    {
        for (int j = i + 1 ; j < numsSize ; j++)
        {
            
            if (nums[j] == nums[i])
            {
                nums[j] = dup;
                dup ++;
                answer--;
            }
            else
                break;
        }
    }
    
    for (int i = 1 ; i < answer ; i++)
    {
        if (nums[i] >= 101)
        {
            for (int j = i + 1 ; j < numsSize ; j++)
            {
                if (nums[j] < 101)
                {
                    nums[i] = nums[j];
                    nums[j] = 101;
                    break;
                }
            }
                
        }
    }
    
    return answer;
}