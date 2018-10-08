#include<stdio.h>
#include<conio.h>

void Octal(int);
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
printf("\nEn octal es : ");
Octal(n);
	getch();
}
void Octal(int Numero)
{
	if(Numero>=8)
	{
		Octal(Numero/8);
	}
	printf("%d",Numero%8);
}

