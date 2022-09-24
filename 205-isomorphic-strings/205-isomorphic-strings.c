#include "stdlib.h"
#include "string.h"


bool isIsomorphic(char * s, char * t){
    char *new_s;
    char *new_t;
    int len = 0;
    
    while( *(s + len) != '\0')
       len++;
    
    new_s = malloc(sizeof(char) * (len + 1));
    new_t = malloc(sizeof(char) * (len + 1));
    len = 1;
    
    new_s[0] = 'a';
    new_t[0] = 'a';
    
    while ( *(s + len) != '\0')
    {
        for(int i = 0 ; i < len ; i++)
        {
            if(s[len] == s[i])
            {
                new_s[len] = new_s[i];
                break;
            }
            else
                new_s[len] = new_s[i] + 1;
        }
        
        for(int i = 0 ; i < len ; i++)
        {
            if(t[len] == t[i])
            {
                new_t[len] = new_t[i];
                break;
            }
            else
                new_t[len] = new_t[i] + 1;
        }
        
        len++;
    }
    new_s[len] = '\0';
    new_t[len] = '\0';
    
    if(strcmp(new_s,new_t))
        return false;
    else
        return true;
}