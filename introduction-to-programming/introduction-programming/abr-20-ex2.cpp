#include<stdio.h>
#include<stdlib.h>

int verifica(char *palavra, char caracter){
    char *tp;
    for(*tp=palavra; tp!='\0' && tp!=caracter; tp++);
    if(*tp!='\0')
    return(1);
    else
    return(0);    
    
    
    }

main(){
       char s1[50] = "ana";
       char c;
       scanf("%c", &c);
       
       //s1 e c s�o os parametros da fun��o
       if(verifica(s1,c)==1)
           puts("caracter encontrado\n");
       else
           puts("caracter n�o encontrado\n");
       
       system("pause");
       
       }
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
//o programa verifica se existe um caracter escolhido pelo usu�rio na palavra ana
