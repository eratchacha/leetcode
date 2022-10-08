

int mySqrt(int x){
    unsigned long long i = 1;
    
    while (i * i <= x)
        i++;
    
    if (i * i == x)
        return i;
    else
        return i - 1;    
}