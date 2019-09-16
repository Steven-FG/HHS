#include <stdio.h>
#include <stdlib.h>

int main()
{
    int getal1;
    int getal2;
    int getal3;

    float avg(int , int , int );
    printf("Voer drie getallen in. \n");

    scanf("%d", &getal1);
    scanf("%d", &getal2);
    scanf("%d", &getal3);

    int grootste = max(getal1, getal2, getal3);
    //float gemiddelde = avg(getal1, getal2, getal3);

    printf("grootste is %d\n", grootste);
    printf("kleinste is %d\n", min(getal1, getal2, getal3));
    printf("gemiddelde is %.1f", avg(getal1, getal2, getal3));
    return 0;
}

int max(int getal1, int getal2, int getal3)
{
    int grootste;
    if(getal1 > getal2)
    {
        if (getal1 > getal2)
            {
                grootste = getal1;
            }
        else
            {
                grootste = getal2;
            }
    }
    else
    {
        if (getal2 > getal3)
        {
             grootste = getal2;
        }
        else
        {
             grootste = getal3;
        }
    }
    return grootste;
}

int min(int getal1, int getal2, int getal3)
{
    int kleinste;
    if(getal1 < getal2)
    {
        if (getal1 < getal2)
            {
                kleinste = getal1;
            }
        else
            {
                kleinste = getal2;
            }
    }
    else
    {
        if (getal2 < getal3)
        {
             kleinste = getal2;
        }
        else
        {
             kleinste = getal3;
        }
    }
    return kleinste;
}

float avg(int getal1, int getal2, int getal3)
{
    float totaal = (float)getal1 + (float)getal2 + (float)getal3;
    float gemiddelde = totaal / 3;
    return gemiddelde;
}

