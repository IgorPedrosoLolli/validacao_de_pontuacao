#include <stdio.h>

int main() {
   
    double nota1, nota2, media;
    int escolha = 0;

    do{
		do{
			 scanf("%lf", &nota1);
			 
			 if(nota1 < 0 ||  nota1 > 10)
			 	printf("nota invalida\n");
		
		}while (nota1 < 0 ||  nota1 > 10);
		
		do{
			 scanf("%lf", &nota2);
			 
			 if(nota2 < 0 ||  nota2 > 10)
			 	printf("nota invalida\n");
		
		}while (nota2 < 0 ||  nota2 > 10);
			
		media = (nota1 + nota2) / 2;
    	printf("media = %.2lf\n", media);
    
    	do{
   			printf("novo calculo (1-sim 2-nao)\n");
    		scanf("%d", &escolha);
		}while (escolha != 1 && escolha != 2);
	
	}while (escolha != 2);
    return 0;
}

