

int longestPalindrome(char * s){
    int upper[26];
    int lower[26];
    int flag = 0;
    int answer = 0;
    int odds = 0;
    
    memset(upper, 0, 26 * sizeof(int));
    memset(lower, 0, 26 * sizeof(int));
    
    while (*s)
    {
        if (*s >= 'a')
            lower[*s - 'a']++;
        else if (*s >= 'A')
            upper[*s - 'A']++;
        s++;
    }
    
    for (int i = 0 ; i < 26 ; i++)
    {
        if (upper[i] % 2 == 0)
            answer += upper[i];
        else
        {
            flag = 1;
            odds += upper[i] - 1;
        }
    }
    
    for (int i = 0 ; i < 26 ; i++)
    {
        if (lower[i] % 2 == 0)
            answer += lower[i];
        else
        {
                flag = 1;
                odds += lower[i] - 1;
        }
    }
    
    if (flag == 1)
        answer++;
    
    answer += odds;
    
    return answer;
}