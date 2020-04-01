#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct{
    string name;
    int votos;
}
candidatos;
int main(void)
{   
    candidatos candi[3];
    printf("Los candidatos son:\n 1.Alice\n 2.Bob\n 3.Charlie\n");
    int votantes = get_int("Ingrese el número de votantes\n");    
    candi[0].name="Alice";
    candi[0].votos= 0;
    candi[1].name="Bob";
    candi[1].votos=0;
    candi[2].name="Charlie";
    candi[2].votos=0;
    while(votantes>0){
        int voto= get_int("ingrese el número de su candidato a elegir\n");
        if(voto==1){
             candi[0].votos++;
        }
        if(voto==2){
             candi[1].votos++;
        }
        if(voto==3){
             candi[2].votos++;
        }
        votantes--;
    }
    int mayor=0;
    int indice=0;
    for(int i=0 ; i<3 ; i++){
        if(candi[i].votos>mayor){
            mayor=candi[i].votos;
            indice=i;
        }
    }
    printf("Ganador(es):\n")
    for(int i=0 ; i<3 ; i++){
         if(candi[i].votos==mayor){
             printf("%s\n",candi[i].name);
         }
         
    }
}
