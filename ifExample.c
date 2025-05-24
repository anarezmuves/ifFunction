// Author: Anamaria Rezmuves
// Author: Nicolas Stoica

// This code computes the difference between lipstick
// tubes in a factory, then compares it with a target
// value (6) and outputs different messages, relative
// to the resulting differences.


#include <stdio.h>

int main() 

{

    int lipstickRed = 4;
    int lipstickBrown = 6;
    int lipstickSkin = 2;

    int lipstickTarget = 10;

    int lipstickTotal = lipstickRed + lipstickBrown + lipstickSkin;
    int lipstickDifference = lipstickTarget - lipstickTotal;

    printf("total lipsticks: %d\n", lipstickTotal);

    if (lipstickTotal < lipstickTarget)
    {
        printf("missing lipsticks: %d.\n", lipstickDifference); 

        return 0;
    }

    if ( lipstickTotal == lipstickTarget) 
    {
        printf("no missing lipsticks");
        return 0;
        
    }
    printf("surplus lipsticks: %d\n",lipstickDifference);
    return 0;
}
