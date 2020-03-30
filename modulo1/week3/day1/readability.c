#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <iostream>
using namespace std;

int main(void)
{   
    string text = get_string("Text:");
    int j = 0; 
    int palabras =0;
    int oraciones=0;
    while (text[j]) { 
        char src = text[j];
        if(isblanck(src)){
            palabras++;
        }
        if(strcmp(src,".")||strcmp(src,"!")||strcmp(src,"?")){
            oraciones++;
        }
        j++; 
    } 
    int letras = j-palabras-oraciones;
    if(blanco<100){
        float letras = (letras*100)/palabras;
    }  
    int grado = (0.0588*letras)-(0.296*oraciones)-15.8;
    printf("Es de grado %i",grado);
    return 0;
}
