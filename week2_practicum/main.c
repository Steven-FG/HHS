#include <stdio.h>
#include <stdlib.h>

int main()
{






    float lengte;
    float massa;
    float BMI;

    printf("hoeveel kilo weeg jij \n" );
    scanf("%f", &massa);

    printf("hoeveel meters lang ben jij \n");
    scanf("%f", &lengte);

    BMI = massa / (lengte * lengte);
    printf("dit is je BMI %f \n" ,BMI );




/*
    float helft;
    float totaal = 23;
    helft = totaal / -2;
    printf("helft = %f\n", helft);
*/


}
