#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void print_binary(int number, int length);

int main()
{

/*


long getal;
long i;
long faculteit;

printf("geef een getal ");
scanf("%d", &getal);
i = getal;
faculteit = 1;

do
{

    faculteit = faculteit * i;
    i--;


}
while(i > 0);





    printf("het faculteit is %d. \n", faculteit);

*/


/*

int i;
int uitkomst;
int getal;

printf("voer een getal in \n");
scanf("%d", &getal);

i = 0;

while(1)
{
    i++;
    uitkomst = i * getal;
    printf("%d keer %d is %d \n", i, getal, uitkomst);

    Sleep(100);

}

*/



/*

int vrije_plaatsen;
int groep;



printf("hoeveel stoelen zijn er in de zaal. ");
scanf("%d", &vrije_plaatsen);

while(vrije_plaatsen > 0)
{


    printf("met hoeveel zijn jullie? \n");
    scanf("%d", &groep);

    if( groep <= vrije_plaatsen)
    {
        printf("kom binnen \n");
        vrije_plaatsen = vrije_plaatsen - groep;
    }
    else
    {
        printf("fck off \n");
        printf("er zijn nog maar %d plaatsen vrij \n", vrije_plaatsen);
    }

}

*/



int getalA = 85;
int getalB = 50;
int bitje;


printf("oude getal is %d \n", getalA);

print_binary(getalA, 8);

while(bitje!=99){


printf("\nwelk bitje  van getal A wil je togglen? ");
scanf("%d", &bitje);

getalA ^= (1 << bitje);

printf("nieuwe getal is %d \n", getalA);

print_binary(getalA, 8);

if (getalA & (1 << 4) )
{
    if(getalA & (1 << 3))
    {
        getalB &= ~(1 << 3);
    }
    else
    {
        getalB |= (1 << 3);
    }
}

if (getalA & (1 << 5))
{

}
else
{
    getalB &= ~(1 << 1);
}

printf("\n");
print_binary(getalB, 8);

}

    return 0;
}

void print_binary(int number, int length)
{
    if(!number && length > 0)
    {
        print_binary(0, length -1);
        putc('0', stdout);
    }
    if (number) {
        print_binary(number >> 1, length -1);
        putc((number & 1) ? '1' : '0', stdout);
    }
}


