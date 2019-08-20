#include <stdio.h>

/* A programme to convert and display
celsius to fahrenheit */

int main()
{
    int celsius;
    
    printf("Celsius-Fahrenheit table\n\n");
    printf("Celsius Fahrenheit\n");
    for(celsius = 0; celsius <= 300; celsius = celsius + 20)
    {
        printf("%3d\t%6.1f\n", celsius, celsius * 1.8 + 32.0);
    }
    
    return 0;
}