#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i,s=0,a;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n!=0)
    {
        a=n%10;
        s=s+a;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}
