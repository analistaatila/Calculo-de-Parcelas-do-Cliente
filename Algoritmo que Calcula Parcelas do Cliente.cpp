#include <stdio.h>

int main(void) 
{
  while(1){

    printf("\n\n\nSeja bem vindo. Informe o que deseja fazer:");
    printf("\n01 - Sair do programa");
    printf("\n02 - Calcular valor do cliente\n");
    int optMenu;
    scanf("%d",&optMenu); // obtém a opção do usuário
    if(optMenu==1){
      break;
    }else if(optMenu==2){
      // AQUI ACONTECE O programa
      printf("\nDigite o valor gasto pelo cliente:");
      float valorGasto;
      scanf("%f",&valorGasto);

      int optPagamento;
      do{
        printf("\nEscolha a forma de pagamento:");
        printf("\n01 - A vista com 10 porcento de desconto.");
        printf("\n02 - Em duas vezes (preco normal).");
        printf("\n03 - De 3 a 10 vezes, com 3 porcento de juros a cada mes\n");
        scanf("%d",&optPagamento);
      }while(optPagamento<1 || optPagamento>3); // validação das opções
      float valorFinal = 0;
      float juros;
      int qtdParcelas;
      switch(optPagamento){
        case 1:
          valorFinal = valorGasto*(0.9); // tirar 10% do valor gato
        break;
        case 2:
          printf("\nO cliente vai pagar duas parcelas sem juros!\n");
          valorFinal = valorGasto;
        break;
        case 3:
          juros = valorGasto*0.03; // 3% de juros
          do{
            printf("\nDigite a quantidade de parcelas( de 3 a 10):\n");
            scanf("%d",&qtdParcelas);
          }while(qtdParcelas<3 || qtdParcelas>10);
          valorFinal = valorGasto + (juros*qtdParcelas);
          printf("\nO cliente vai pagar %d parcelas\n",qtdParcelas);
        break;
      }

      printf("\nValor final a ser pago pelo cliente = %0.2f",valorFinal);
      
    }else{ // verifica que optMenu é um valor inválido
      printf("Opcao inválida!\n");
    }

  }
  printf("\nEncerrando o programa!\n");
  return 0;
}
