// Program 01
#include <stdio.h>

int main() 
{
    int i, j;
    for(i = 2; i <= 5; i++)
    {
        for(j = 1; j<= 5; j++)
        {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    
    return 0;
}
// Output:
// 2	4	6	8	10	
// 3	6	9	12	15	
// 4	8	12	16	20	
// 5	10	15	20	25	

// Program 02
#include <stdio.h>

int main()
{
    int i, j;
    
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * *

// Program 03
#include <stdio.h>

int main()
{
    int i, j;
    
    // Outer loop for rows: 1 to 4
    for(i = 1; i <= 4; i++)
    {
        // Inner loop: print numbers from 1 to i
        for( j = 1; j <=i; j++)
        {
            printf("%d ", j); // Print number with space
        }
        printf("\n"); // New line after each row
    }
    
    return 0;
}
// Output:
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 

// Program 04
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
//Output:
// 1
// 22
// 333
// 4444
// 55555
