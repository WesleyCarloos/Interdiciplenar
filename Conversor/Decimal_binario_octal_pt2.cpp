#include<stdio.h>
#include<conio.h>
void Binario(int);

int main()
{
	float nf=0;
	int n;
	printf("\n Convertir un numero Decimal a Binario y Octal\n");
	do {
	
	printf("Ingrese un numero entero y positivo\n");
	scanf("%f",&nf);
} while(nf<=0 || nf != (int)nf );
n=(int)nf;
printf("En binario es : ");
Binario(n);

	getch();
}

void Binario(int Numero)
{
	if(Numero>=2)
	{
		Binario(Numero/2);
	}
	printf("%d",Numero%2);
}
