#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"
 
 int main(){    
     int opc;

     printf("***********************************************************************************************
             *                                      MENU                                                   *
             ***********************************************************************************************
             *                                                                                             *
             *  '1' Para fazer seu cadastro                                                                *
             *  '2' Para efetuar seu login                                                                 *
             *  '3' Sair                                                                                   *
             ***********************************************************************************************");
             

             printf("Digite: ");
             scanf("%d", &opc);

     switch(opc){
         case 1:
            system("clear");
            cadastrar();            
			}
            
         break;
             
         case 2:
            system("clear");
            logar();        

         break;       

        case 3:
            system("clear");
            system("exit");
            break;

         default:
            system("clear");
            printf("Opcao invalida");
            menu();

     }

 } 