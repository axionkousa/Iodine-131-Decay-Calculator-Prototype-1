#include <stdio.h>
#include <math.h>

// This is a half-life decay simulation of elmeent iodine-131

float half_life(float a);

int main()
{
    float initial_mass;
    int days;
    int t_half = 8;

    printf("This is a half-life decay simulation of elmeent iodine-131");

    // input of mass
    printf("Initial mass: ");
    if(scanf("%f", initial_mass) != 1){
        return 1;
    }

    // input of duration in days
    printf("Duration in days: ");
    if(scanf("%d", days) != 1){
        return 1;
    }

    
    // prints out final mass after duration
}

// Calculates mass, duration, and half-life of iodine-131
float half_life(float a){
    // the formula of half-life
    // return the answer
}