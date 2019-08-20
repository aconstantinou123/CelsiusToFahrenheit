#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

/* A programme to convert and display
celsius to fahrenheit */

int main()
{
    int celsius;
    
    printf("Celsius-Fahrenheit table\n\n");
    printf("Celsius Fahrenheit\n");
    for(celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
    {
        printf("%3d\t%6.1f\n", celsius, celsius * 1.8 + 32.0);
    }
    
    return 0;
}