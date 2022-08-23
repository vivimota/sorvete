#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	do{
		printf("\n Digite o numero do sabor: \n");
		
		printf("\t (1)Sabor flocos \n");
		printf("\t (2)Sabor morango \n");
		printf("\t (3)Sabor leite condesado \n");
		
		scanf("%d", &i);
		
	}while((i<1) || (i>3));
	
	switch(i){
		case 1 : 
		     printf("\t Flocos(60g): \n Valor energetico: 124 kcal \n Carboidratos: 15g \n Proteinas: 1,6g \n Gorduras totais: 6,4g\n ");
		     break;
		     
		case 2 :
			printf("\t Morango(60g): \n Valor energetico: 109 kcal \n Carboidratos: 13g \n Proteinas: 1,3g \n Gorduras totais: 5,8g\n ");
			break;
			
		case 3:
			printf("\t Leite condesado(60g): \n Valor energetico: 111 kcal \n Carboidratos: 15,9g \n Proteinas: 1,3g \n Gorduras totais: 4,7g\n ");
			break;
			
	}
	
  system("pause");

}
