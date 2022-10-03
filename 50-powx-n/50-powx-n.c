double myPow(double x, int n){
    double answer = 1;
    
    if (x == 1)
        return answer;
    else if (x == -1)
    {
        if (n % 2 == 0)
            return answer;
        else
            return -answer;
    }
    
    if (n > 0)
    {
        for (int i = 0 ; i < n ; i++)
        {   
            if (answer > 10000 || (x > 0 && answer < 0.00001))
                break;
            answer *= x;
        }
    }
    else
    {
        for (int i = 0 ; i > n ; i--)
        {
            if (answer < 0.00001)
                break;
            answer /= x;
        }
    }
    
    return answer;
}