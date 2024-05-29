#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
		//declaracion de variables
		int opc=0, intento=0, tesoro=0, lugar=0, parte=0, contpart=0;
		
		printf("	Bienvenido, esta por comenzar el juego de la busqueda del tesoro en el instituto.\n");
		printf("\n");
		printf("	El juego consiste en buscar el tesosoro en todo el interior del instituto.\n");
		printf("\n");
		printf("	El tesoro es: una materia a tu eleccion para promocionar.\n");
		printf("\n");
		printf("	El juego comienza. BUENA SUERTE!!!.\n");
		printf("\n");
		printf("	Para comenzar elija una opcion\n");
		printf("\n");
		printf("          ----------	     --------\n	");
		printf("1)|COMENZAR|	   2)|SALIR |\n");
		printf("          ----------	     --------\n	");
		scanf("%d",&opc);
		if(opc == 1){
		
			while(intento <=3 ){			
				printf("elige un lugar donde buscar\n");
				printf(" 1- salon 1\n");
				printf(" 2- salon 2\n");
				printf(" 3- salon 3\n");
				printf(" 4- salon 4\n");
				printf(" 5- salon 5\n");
				printf(" 6- salon 6\n");
				printf(" 7- salon 7\n");
				printf(" 8- salon 8\n");
				printf(" 9- salon 9\n");
				printf(" 10- salon 10\n");
				printf(" 11- salon 11\n");
				printf(" 15- salir\n");
				scanf("%d",&lugar);
					
				switch(lugar){
						
					case 1:
							
						while(contpart<=3 || tesoro ==1 ){
								
							printf("En que parte del salon deseas buscar?\n");
							printf("1) debajo de las sillas\n");
							printf("2) detras del pizarron\n");
							printf("3) debajo del borrador\n");
							printf("4) debajo de las mesas\n");
							scanf("%d",&parte);
							if(parte==1){
								tesoro=0;
							}
							else if(parte==2){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==3){
							tesoro=0;
							printf("el tesoro no esta ahi!!");
							}
							else if(parte==4){
							tesoro=0;
							printf("el tesoro no esta ahi!!");
							}
							contpart++;
						}
						intento+1; 	
					break;
					case 2:
						while(contpart<=3 || tesoro ==1){
							printf("en que parte del salon deseas buscar?\n");
							printf("1) debajo de las sillas");
							printf("2) detras del pizarron");
							printf("3) debajo del borrador");
							printf("4) debajo de las mesas");
							scanf("%d",&parte);
									
							if(parte==1){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==2){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==3){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==4){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							contpart++;	
						}
						intento+1;	
					break;			
					case 3:
						while(contpart<=3 || tesoro ==1){
							printf("en que parte del salon deseas buscar?\n");
							printf("1) debajo de las sillas");
							printf("2) detras del pizarron");
							printf("3) debajo del borrador");
							printf("4) debajo de las mesas");
							scanf("%d",&parte);
								
							if(parte==1){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==2){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==3){
								tesoro=1;
								printf("ENCONTRASTE EL TESORO!!");
							}
							else if(parte==4){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							contpart++;	
						}
						intento+1;	
					break;
					case 4:
						while(contpart<=3 || tesoro ==1){
							printf("en que parte del salon deseas buscar?\n");
							printf("1) debajo de las sillas");
							printf("2) detras del pizarron");
							printf("3) debajo del borrador");
							printf("4) debajo de las mesas");
							scanf("%d",&parte);
									
							if(parte==1){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==2){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==3){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==4){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							contpart++;	
						}
						intento+1;	
					break;
					case 5:
						while(contpart<=3 || tesoro ==1){
							printf("en que parte del salon deseas buscar?\n");
							printf("1) debajo de las sillas");
							printf("2) detras del pizarron");
							printf("3) debajo del borrador");
							printf("4) debajo de las mesas");
							scanf("%d",&parte);
								
							if(parte==1){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==2){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==3){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==4){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							contpart++;	
						}
						intento+1;	
					break;
					case 6:
						while(contpart<=3 || tesoro ==1){
							printf("en que parte del salon deseas buscar?\n");
							printf("1) debajo de las sillas");
							printf("2) detras del pizarron");
							printf("3) debajo del borrador");
							printf("4) debajo de las mesas");
							scanf("%d",&parte);
									
							if(parte==1){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==2){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==3){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							else if(parte==4){
								tesoro=0;
								printf("el tesoro no esta ahi!!");
							}
							contpart++;	
						}
						intento+1;	
					break;
					default:	
					printf("d");	
				}				
			}
		}
		
	return 0;
}
	

