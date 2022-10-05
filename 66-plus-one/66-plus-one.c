

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int up = 0;
    int *answer;
    
    
    for (int i = digitsSize - 1 ;  i >= 0 ; i--)
    {
        if (i == digitsSize - 1)
        {
            if (digits[i] + 1 == 10)
            {
                up = 1;
                digits[i] = 0;
            }
            else
                digits[i] = digits[i] + 1;
        }
        else
        {
            if (digits[i] + up == 10)
                digits[i] = 0;
            else
            {
                digits[i] = digits[i] + up;
                up = 0;
            }
        }
    }
    
    if (up == 1)
    {
        answer = malloc(sizeof(int) * (digitsSize + 1));
        *returnSize = digitsSize + 1;
        answer[0] = 1;
        
        for (int i = 1 ; i < *returnSize ; i++)
            answer[i] = digits[i - 1];
    }
    else
    {
        answer = malloc(sizeof(int) * digitsSize);
        *returnSize = digitsSize;
        
        for (int i = 0 ; i < *returnSize ; i++)
            answer[i] = digits[i];
    
    }
    
    return answer;
}