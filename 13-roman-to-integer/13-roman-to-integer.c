

int romanToInt(char * s){
    int n = 0;
    
    while (*s)
    {
        if (*s == 'I')
        {
            if(*(s + 1) == 'V')
            {
                n += 4;
                s++;
            }
            else if(*(s + 1) == 'X')
            {
                n += 9;
                s++;
            }
            else
            {
                n += 1;
            }
        }
        else if (*s == 'V')
        {
            n+= 5;
        }
        else if (*s == 'X')
        {
            if(*(s + 1) == 'L')
            {
                n += 40;
                s++;
            }
            else if(*(s + 1) == 'C')
            {
                n += 90;
                s++;
            }
            else
            {
                n += 10;
            }
        }
        else if (*s == 'L')
        {
            n += 50;
        }
        else if (*s == 'C')
        {
            if(*(s + 1) == 'D')
            {
                n+= 400;
                s++;
            }
            else if(*(s + 1) == 'M')
            {
                n += 900;
                s++;
            }
            else
            {
                n += 100;
            }
        }
        else if (*s == 'D')
        {
            n+= 500;
        }
        else if (*s == 'M')
        {
            n += 1000;
        }
        s++;
    }
    
    return n;
}