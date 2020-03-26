#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Ingrese la altura de la pirámide\n");
    int u=number;
    for(int i=0;i<=number;i++){
        u =u-1; 
        for(int l=0; l<=u; l++){
            printf(" ");
        } 
        for(int a=0; a<i; a++){
            printf("#");
        }  
         printf("\n");
         
    }
}
