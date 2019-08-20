#include <stdio.h>

/* A programme to convert and display
celcius to fahrenheit */

int main()
{
    int celcius;
    
    printf("Celcius-Fahrenheit table\n\n");
    printf("Celcius Fahrenheit\n");
    for(celcius = 0; celcius <= 300; celcius = celcius + 20)
    {
        printf("%3d\t%6.1f\n", celcius, celcius * 1.8 + 32.0);
    }
    
    return 0;
}