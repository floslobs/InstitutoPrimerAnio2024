#include <stdio.h>
#include <stdlib.h>

/* 19) algoritmo para liquidacion de sueldo de un empleado: donde se ingrese
	 el nombre del empleado, la categoria y la antiguedad en a�os. si es categoria 1 cobrara de basico
	 80000$, si es categoria 2 60000$ y si es categoria 3 55000$. la antiguedad se computara en un 5%
	 del basico por cada a�o trabajado. si el sueldo bruto es mayor a 300000$ la afip le retendra el 2%*/

int main(int argc, char *argv[]) {
	
	//declaro variables
 	
 	char nombre[20]="";
 	int categoria=0, antig=0, anio=0, basico=0, total=0, afip=0, tafip=0;
 	
 	//se pide que ingrese nombre y categoria
 	printf("Ingrese nombre del empleado\n");
 	scanf("%s",&nombre);
 	printf("Ingrese la categoria de %s\n",nombre);
 	scanf("%d",&categoria);
	if(categoria >0 && categoria <4){
		
			printf("Ingrese la cantidad de anios de antiguedad\n");
 			scanf("%d",&anio);
 			
 		if(categoria==1){
		 	
 			basico= 80000;
 		}
		if(categoria == 2){

 			basico= 60000;
 		}

 		if(categoria == 3){

 			basico= 55000;
 		}
		 
		 	antig= (basico * 0.05)*anio;
 		total= basico+antig;
 		
		if(total>300000){
 			
 		//se calcula el total descontando el 2 % que retiene la afip
 		afip = total * 0.02;
 		tafip= total-afip;
 			
 			//se imprime el sueldo en bruto mayor a 300mil
			printf("Tuvo descuento de afip. El sueldo de %s es: $%d",nombre,tafip);
		}
		else{
			
			//se imprime el total del sueldo en bruto menor o igual a 300 mil
 			printf("El sueldo de %s es: $%d",nombre,total);
		} 	
	}
	else{
		
		printf("NO ingreso una categoria valida");
		
	}
	
	
	
	
		
	
	return 0;
}