#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int money = (get_float("Ingrese su cambio\n"))*100;
    if (money<0){
        money=money*-1;
    }
    int quarters = money/25;
    int sobraQ=money-(quarters)*25;
    int ten = (sobraQ)/10;
    int sobraT=sobraQ-ten*10;
    int five = (sobraT)/5;
    int one=sobraT-five*5;
  
    printf ("Cantidad de monedas:");
    printf("\n");
    printf("From quarter: %d",quarters);
    printf("\n");
    printf("From ten: %d",ten);
    printf("\n");
    printf("From five: %d",five);
    printf("\n");
    printf("From: %d",one);
    printf("\n");
}