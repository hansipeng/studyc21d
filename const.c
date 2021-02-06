/* Demonstrates variables and constants */

#include <stdio.h>

/* define a constatnt to convert form pounds to grams */
#define GRAMS_PER_POUND 454

const int TARGET_YEAR = 2010;

long weight_in_grams, weight_in_pounds;
int year_of_birth, age_in_2010;


int main( void )
{
    printf("Enter your weight in ounds: ");
    scanf("%d", &weight_in_pounds);
    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth);

    weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
    age_in_2010 = TARGET_YEAR - year_of_birth;

    printf("\nYour weight in grams = %ld", weight_in_grams);
    printf("\nIn 2010 you will be %d years old\n", age_in_2010);

    return 0;
    
}