#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
     char ch,s[100],m[100],g;
     scanf("%c", &ch);
     scanf("%s", s);
     scanf("%c", &g);
     scanf("%[^\n]s",m);
    printf("%c\n%s\n%s",ch,s,m);
    return 0;
}
