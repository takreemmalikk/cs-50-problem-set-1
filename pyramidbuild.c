#include <stdio.h>
#include <cs50.h>


int main (void)
{




   int height_of_pyramid = get_int ("input the height of the pyramid you wanna create from 1-8 inclusive \n");
do

    height_of_pyramid = get_int ("input a height in range (1-8)\n");
while (height_of_pyramid<1 || height_of_pyramid>8);

    for (int i=0; i<height_of_pyramid; i++)
    {

        for (int j=0; j< height_of_pyramid-i-1; j++)

            printf(" ");
        for( int l=0;l<=i;l++ )
            printf("#");
     printf("  ");
        for( int m=0;m<=i;m++)
            printf("#");

     printf("\n");




    }
}
