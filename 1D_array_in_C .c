#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
      int i,n;
      scanf("%d",&n);//5
      int arr[n];//5
      int sum=0;
      for(i=0;i<n;i++)
      {//i=0 to 4
        scanf("%d",&arr[i]);//5
        sum=sum+arr[i];//15
      }
      printf("%d",sum);//15
    return 0;
}
