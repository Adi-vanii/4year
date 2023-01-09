#include <stdio.h>
int main()
{
    int i, j, k, l, m;
        for (i = 0; i < 10; i++)
        {
          for (l = 0; l < 1; l++)
            {
                for (j = 0; j < i + 1; j++)
                {
                    printf(" ");
                }
                for (k = 10 - i; k >= 0; k--)
                {
                    printf("*");
                }
                for (k = 10 - i; k > 0; k--)
                {
                    printf("*");
                }
                for (j = 0; j < i; j++)
                {
                    printf(" ");
                }

            }
          
           printf("\n");}
        
return 0;
}
