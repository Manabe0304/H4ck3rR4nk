#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100], sen[1000];
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", &s);
    printf("%s\n", s);
    getchar();
    scanf("%[^\n]%*c", &sen);
    printf("%s", sen);
    return 0;
}

/* 
Sample Input:
C
Language
Welcome To C!!

Sample Output: 
C
Language
Welcome To C!!
*/
