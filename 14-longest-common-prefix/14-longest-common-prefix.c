#include "stdlib.h"

char * longestCommonPrefix(char ** strs, int strsSize){
    char *result;
    int i = 0;
    int len = 0;
    int flag = 0;
    int exit = 0;
    
    if (strsSize == 1)
        return strs[0];
    
    else if (strsSize == 2)
    {
        while(strs[0][i] != '\0' && strs[1][i] != '\0') 
    {
        if (strs[0][i] == strs[1][i])
        {
            len++;
            i++;
            continue;
        }
        else
            break;
    }
    result = malloc(sizeof(char) * (len + 1));
    
    for (int j = 0 ; j < len ; j++)
        result[j] = strs[0][j];
    
    result[len] = '\0';
    
    return result;   
    }
    
    for (int i = 0 ; exit != 1 ; i++)
    {
        if (strs[0][i] == '\0')
            break;
        
        for (int j = 1 ; j < strsSize ; j++)
        {
        
            if(strs[0][i] != strs[j][i])
            {
                if (strs[j][i] == '\0')
                    exit = 1;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
        len++;
    }
    
    result = malloc(sizeof(char) * (len + 1));
    
    for (int j = 0 ; j < len ; j++)
        result[j] = strs[0][j];
    
    result[len] = '\0';
    
    return result;
}