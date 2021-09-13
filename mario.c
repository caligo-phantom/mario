#include <stdio.h>

int main(void)
{
    //ht stands for height
    int ht = 8 ;

    //prompt for entering height
    do
    {
        printf("Height: ") ;
        scanf("%i", &ht) ;
    }
    while ((ht > 8) || (ht < 0) || (ht == 0)) ;

    //building the pyramids according to user's input
    for (int i = 0; i < ht; i++)
    {
        //space before the first pyramid
        for (int t = ht - 1; t > i; t--)
        {
            printf(" ") ;
        }

        //the first pyramid being built
        for (int j = 0; j <= i; j++)
        {
            printf("#") ;
        }

        //space between the two pyramids
        printf("  ") ;

        //the second pyramid being built
        for (int k = 0; k <= i; k++)
        {
            printf("#") ;
        }

        printf("\n") ;
    }

    system("pause");  
    return 0;
}