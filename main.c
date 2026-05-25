#include <stdio.h>
#include <math.h>

// This is a half-life decay simulation of elmeent iodine-131

float half_life(float mass, int days);

int main()
{
    float initial_mass;
    int days;
    
    printf("This is a half-life decay simulation of elmeent iodine-131\n");
    
    // input of mass
    printf("Initial mass: ");
    if(scanf("%f", &initial_mass) != 1){
        return 1;
    }
    
    // input of duration in days
    printf("Duration in days: ");
    if(scanf("%d", &days) != 1){
        return 1;
    }
    
    printf("Remaining mass: %f\n", half_life(initial_mass, days));
    // prints out final mass after duration

    return 0;
}

// Calculates mass, duration, and half-life of iodine-131
float half_life(float mass, int days){
    // the formula of final mass after half-life
    // float final_mass;
    // float initial_mass;
    int t_half = 8;
    float n = (days/t_half);
    float HALF = pow(0.5, n);
   
    float final_mass = mass*HALF;

    // return the answer
    return final_mass;
}