#include <stdio.h>
int main ()
{
    int escolha;
    double saldo=0.00, deposito, saque;

    system("cls");

    printf("\n\n\n\nO que deseja fazer?\n\n1 - Consultar Saldo\t2 - Depositar\n3 - Retirar\t\t4 - Sair \n");
    scanf("%i", &escolha);


while(escolha!=4){

    if(escolha==1){
        system("cls");
        printf("\nSeu saldo: R$ %.2lf", saldo);
        printf("\n\n\n\nEscolha a proxima acao\n\n1 - Consultar Saldo\t2 - Depositar\n3 - Retirar\t\t4 - Sair \n");
    scanf("%i", &escolha);
    }else if(escolha==2){
        system("cls");
        printf("Informe o valor do deposito:\n R$ ");
        scanf("%lf", &deposito);
        saldo=saldo+=deposito;
        system("cls");
        printf("Saldo atualizado: R$ %.2lf", saldo);
       printf("\n\n\n\nEscolha a proxima acao\n\n1 - Consultar Saldo\t2 - Depositar\n3 - Retirar\t\t4 - Sair \n");
    scanf("%i", &escolha);
    }else if(escolha==3){
        system("cls");
        printf("Informe o valor do saque:\n R$ ");
        scanf("%lf", &saque);
        saldo=saldo-=saque;
        system("cls");
        printf("Saldo atualizado: R$ %.2lf", saldo);
        printf("\n\n\n\nEscolha a proxima acao\n\n1 - Consultar Saldo\t2 - Depositar\n3 - Retirar\t\t4 - Sair \n");
    scanf("%i", &escolha);
    }else if(escolha==4){
        system("cls");
        printf("Obrigado (a) por usar os nossos serviçoes");
    }
}

    
    return 0;
}