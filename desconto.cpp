#include <conio.h>
#include <stdio.h>
main()
{
	char nome[30];
	float val_com, porc, desc, val_tot;
	
	printf("Digite o nome do cliente: ");
	scanf("%s",nome);
	printf("Digite o valor da compra: ");
	scanf("%f",&val_com);
	
	if (val_com >= 500)
	    porc = 20;
    else if (val_com <=200)
        porc = 10;
    else
        porc = 15;
    
    desc = (val_com / 100) * porc;
    val_tot = val_com - desc;
    
    printf("Nome: %s",nome);
    printf("\nValor da compra: %f",val_com);
    printf("\nPorcentagem de desconto: %f",porc);
    printf("\nValor do desconto: %f",desc);
    printf("\nTotal a pagar: %f",val_tot);
	getch();
}
