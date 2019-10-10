#include <stdio.h>
#include <stdlib.h>

int main()

/*
{
    int geboorte_jaar;


    printf("Wat is uw geboorte jaar?\n");
    scanf("%d", &geboorte_jaar );

    if (geboorte_jaar <= 1953){
        printf("u bent al met pensioen");

    if (geboorte_jaar == 1963)
        printf("u heeft nog 10 jaar tot uw pensioen");

    if (geboorte_jaar == 1973)
        printf("u heeft nog 20 jaar tot uw pensioen");
    }
     if (geboorte_jaar >= 1974)
      {
      printf("u heeft nog een veel te lange weg tot uw pensioen");
      }


    return 0;
}
*/

/*
{
    int geboorte_jaar;


    printf("Wat is uw geboorte jaar?\n");
    scanf("%d", &geboorte_jaar );

   switch(geboorte_jaar){
        case 1 ... 1963:
            printf("u bent al met pensioen");
        break;
          case 1964 ... 1973:
            printf("u heeft nog 10 jaar tot uw pensioen");
        break;
          case 1974 ... 1983:
            printf("u heeft nog 20 jaar tot uw pensioen");
        break;
         case 1984 ... 2020:
            printf("u heeft nog een veel te lange weg tot uw pensioen");
        break;
   }

    return 0;
}
*/

{
    int kaart;
    printf("Geef een kaart op.\n");
    scanf("%d", &kaart);
    while (1)
        {
        printf("Geef nog een kaart op.\n");
        scanf("%d", &kaart);
        }
    switch(kaart);
        case 1:
            printf(U hebt 1 punt);
        break;
        case 2:
            printf(U hebt 2 punten);
        break;
        case 3:
            printf(U hebt 3 punten);
        break;
        case 4:
            printf(U hebt 4 punten);
        break;
        case 7 ... 10 :
            printf(U hebt 1 punt);
        break;
}

