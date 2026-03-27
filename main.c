#include <stdio.h>
#include <stdlib.h>

// Function to calculate sum of squarefrom 1 to N
// Returns -1 if N is not positive
int seriesSum(int N)
{
    int i,total;

    total=0;

    // Validate input
    if(N<=0)
    {
        printf("N must be a positive number.");
        return -1;
    }

    for(i=1;i<=N;i++)
    {
        total+=i*i;
    }
    return total;
}

int main()
{
    int n,result;

    // Get end value from user
    printf("Enter the end value of the series:");
    scanf("%d",&n);

    result=seriesSum(n);

    // Print result only if valid
    if(result!=-1)
    {
       printf("Sum of the series=%d",result);
    }

    return 0;
}

