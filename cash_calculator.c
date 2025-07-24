# include <stdio.h>
# include <cs50.h>
# include <math.h>

int main(void)
{
   int coin_counter = 0;
   int remain = 0;
   int coin = 0;

    float change = get_float ("change:  ");
   int cents =  round(change*100);

        coin = cents/25;
    if (coin>=1)
    {
        coin_counter = coin_counter +coin;
        remain = cents-(25*coin);

    }
         coin = remain/10;
     if (coin>=1)
     {
        coin_counter = coin_counter +coin;
        remain = remain-(10*coin);
     }
         coin=remain/5;
     if (coin>=1)
     {
          coin_counter = coin_counter+coin;
             remain=remain-(5*coin);

     }
            coin=remain/1;
    if(coin>=1)
    {
           coin_counter=coin_counter+coin;
            remain=remain-(1*coin);
    }
         printf("the change is %d \n",coin_counter);
}
