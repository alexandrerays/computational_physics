#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //fun��o rand
#include<time.h>//fun��o clock
#define n 20

//COLOCANDO N�MEROS ALEAT�RIOS EM UM VETOR DE INTEIROS

int imprime(int vet[], int x){
    int i=0;
    for(i=0; i<x; i++)
       printf("%d ", vet[i]);
    
    }

main(){
       
       int v[n];
       int i=0;
       
       //double inicio;
       //double fim;
       //double temp_gasto;
       
       for(i=0; i<n; i++)
       v[i]=rand()%10;
       
       
             

       //inicio(double)clock()/CLOCK_PER_SEC;

       imprime(v, n);

       //fim=(double)clock()/CLOCK_PER_SEC;
       //temp_gasto=fim-inicio;
       //printf("%f", temp_gasto);
       //temp_total+=temp_gasto;
       
       
        
       
       
       
       getch();
       }
