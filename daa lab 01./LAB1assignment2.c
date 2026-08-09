#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 100000;
    int fairHead = 0;
    int biasedHead = 0;

    srand(time(NULL));

    for(int i=0;i<n;i++)
    {
        if(rand()%2==0)
            fairHead++;

        double r = (double)rand()/RAND_MAX;

        if(r<0.7)
            biasedHead++;
    }

    printf("Fair Coin\n");
    printf("Head Probability = %.4f\n",(double)fairHead/n);

    printf("\nBiased Coin\n");
    printf("Head Probability = %.4f\n",(double)biasedHead/n);

    return 0;
}