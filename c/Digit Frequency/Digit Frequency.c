#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    int i,c[10] = {0};
    
    scanf("%[^\n]", s);
    
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9')
            c[s[i]-48]++;
    }
    
    for(i=0;i<10;i++)
        printf("%d ", c[i]);
    
    return 0;
}
