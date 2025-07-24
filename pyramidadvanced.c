# include <stdio.h>
# include <cs50.h>

int main(void)

{
int height_of_pyramid = get_int ("input the height of the pyramid you wanna create from 1-8 inclusive \n");
int midspacing= get_int("input the mid spacing you want in the middle of the pyramid \n" );

    for (int i=0; i<height_of_pyramid; i++)
    {

        for (int j=0; j< height_of_pyramid-i-1; j++)

            printf(" ");
        for( int l=0;l<=i;l++ )
            printf("#");
        for(int o=0;o<midspacing;o++ )
            printf(" ");
        for( int m=0;m<=i;m++)
            printf("#");

     printf("\n");

}
}
