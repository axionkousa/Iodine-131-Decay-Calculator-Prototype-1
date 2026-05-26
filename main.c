#include <stdio.h>
#include <math.h>

const int t_half = 8;

// This is a half-life decay simulation of elmeent iodine-131

float half_life(float mass, int days);

int main()
{
    // The input variables.
    float initial_mass;
    int days;
    
    //The title
    puts("This is a half-life decay simulation of element iodine-131.\n"
         "Half life of iodine-131 is 8 days.");
    
    // input of mass
    fputs("Initial mass in grams: ", stdout);

    // Checks if user typed negative number
    // It works by checking the presence of '-', counts how many '-' user typed and store it to variable n.
    // n will have the value of the count of '-', then exits with code 1.
    int n = 0;
    scanf(" -%n", &n);
    if (n > 0) return 1;

    // Checks the data type of the input and exits if it's not a number.
    if(scanf("%f", &initial_mass) != 1){
        return 1;
    }
    
    // input of duration in days
    fputs("Duration in days: ", stdout);
    
    scanf(" -%n", &n);
    if (n > 0) return 1;

    if(scanf("%d", &days) != 1){
        return 1;
    }
    
    printf("Remaining mass: %f\n", half_life(initial_mass, days));
    // prints out final mass after duration

    return 0;
}

// Calculates mass, duration, and half-life of iodine-131
float half_life(float N0, int t){
    // the formula of final mass after half-life
    // N(t) = N0 * HALF_ratio;
    // N(t) = N0 * (1/2)^n;
    // N(t) = N0 * (1/2)^t/t_half;

    float n = (t/t_half);
    float HALF_ratio = pow(0.5, n);
    float N_of_t = N0*HALF_ratio;

    // return the answer
    return N_of_t;
}