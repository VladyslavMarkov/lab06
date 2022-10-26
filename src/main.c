#include <stdio.h>

int main()
{
    int A[4]= {0,0,0,0},a,sum1,sum2,n1,n2,n3,n4,n;
    a = 9800;
    n = 0;
    
    while( a <= 9999)
    {
        n1 = a/1000;
        n2 = (a/100)%10;
        n3 = (a/10)%10;
        n4 = a%10;

        sum1 = n1 + n2;
        sum2 = n3 + n4;
        
        if(sum1 == sum2)
        {
          A[0] = n1;
          A[1] = n2;
          A[2] = n3;
          A[3] = n4;
          n++;
          printf("{%d,%d,%d,%d}\n",A[0],A[1],A[2],A[3]);
        }
        
        a++;
    }
    
    return 0;
    
}
