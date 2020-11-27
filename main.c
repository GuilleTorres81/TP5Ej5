#include <stdio.h>

//DEFINO UNA FRACCION COMO UN STRUCT
typedef struct{
	short numerador;
	short denominador;
}fraccion;

//PROTOTIPOS
void menu();
fraccion entrada_fraccion();
fraccion suma_fracciones(fraccion,fraccion);
fraccion resta_fracciones(fraccion,fraccion);
fraccion producto_fracciones(fraccion,fraccion);
fraccion dividir_fracciones(fraccion,fraccion);
fraccion simplificar(fraccion);
int det_igualdad(fraccion,fraccion);

int main() {
	int op;
	fraccion f1, f2, suma;
	
	do{
		menu();
		scanf("%d",&op);
		
		switch(op){
		case 1:{
			printf("Ingrese la primera fraccion:");
			f1=entrada_fraccion();
			printf("Ingrese la segunda fraccion:");
			f2=entrada_fraccion();
		}
			break;
		case 2:{
			suma=suma_fracciones(f1,f2);
			printf("La suma de %d/%d y %d/%d es: %d/%d",f1.numerador,
			f1.denominador,f2.numerador,f2.denominador,suma.numerador,
			suma.denominador);
		}
			break;
		case 3:{
			
		}
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7: printf("\n\t\tADIOS!!");
			break;
		default: printf("Esa opcion no es valida");
		}
	}while(op!=7);
	
	return 0;
}


//MODULOS
void menu(){
	printf("\n\t\tBIENVENIDO!!");
	printf("\n(1)Ingresar fracciones");
	printf("\n(2)Sumar fracciones");
	printf("\n(3)Restar fracciones");
	printf("\n(4)Multiplicar fracciones");
	printf("\n(5)Dividir fracciones");
	printf("\n(6)Determinar igualdad de fracciones");
	printf("\n(7)Salir");
	printf("\nOPCION: ");
}

fraccion entrada_fraccion(){
	fraccion ret;
	printf("Ingrese numerador: ");
	scanf("%sd",&ret.numerador);
	printf("Ingrese deniminador: ");
	scanf("%sd",&ret.numerador);
	
	printf("Fraccion: %d/%d",ret.numerador,ret.numerador);
	return ret;
}

fraccion suma_fracciones(fraccion,fraccion){
	
}

fraccion resta_fracciones(fraccion,fraccion){
	
}

fraccion producto_fracciones(fraccion,fraccion){
	
}

fraccion dividir_fracciones(fraccion,fraccion){
	
}

fraccion simplificar(fraccion){
	
}

int det_igualdad(fraccion,fraccion){
	
}
	
