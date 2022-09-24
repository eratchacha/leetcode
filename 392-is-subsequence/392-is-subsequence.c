

bool isSubsequence(char * s, char * t){
    while(*t)
    {
        if(*s == *t)
            s++;
        t++;
    }
    if(!*t && !*s)
        return true;
    else
        return false;
}