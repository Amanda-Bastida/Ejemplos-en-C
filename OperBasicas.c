#include <stdio.h>

void desplegarMenu();
int leerOpcion ();
int ejecutarOpcion(char seleccion);

int main()
{
	char opcion;
	do{
		desplegarMenu();
		opcion=leerOpcion();
		ejecutarOpcion(opcion);
	}while(opcion !='5');
}

int ejecutarOpcion(char seleccion){		
	float a, b;
	switch(seleccion){
		case '1':
            printf("Ingrese el primer numero: ");
			scanf("%f", &a);
            printf("Ingrese el segundo numero: ");
			scanf("%f", &b);
			printf("La suma es: %.2f\n", a+b);
			break;
		case '2':
			printf("Ingrese el primer numero: ");
			scanf("%f", &a);
            printf("Ingrese el segundo numero: ");
			scanf("%f", &b);
			printf("La resta es: %.2f\n", a-b);
			break;
		case '3':
			printf("Ingrese el primer numero: ");
			scanf("%f", &a);
            printf("Ingrese el segundo numero: ");
			scanf("%f", &b);
			printf("La multiplicacion es: %.2f\n", a*b);
			break;
		case '4':
			printf("Ingrese el primer numero: ");
			scanf("%f", &a);
            printf("Ingrese el segundo numero: ");
			scanf("%f", &b);
			printf("La division es: %.2f\n", a/b);
			break;
	}
	if (seleccion !='5'){	
		printf("Presione Enter para continuar \n");
		while (getchar()!='\n');
		getchar();
	}
	return 0;
}

void desplegarMenu()		
{
	
	printf("\033c");
	printf("   OPERACIONES BASICAS\n"); 
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	printf("5. Salir\n");
	printf("   Opcion:");
}

int leerOpcion()		
{
	char c;
	do
		scanf("%c", &c);
	while(!(c>='1' && c<='5'));
	return c;
}