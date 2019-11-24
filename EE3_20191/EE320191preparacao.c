#include <stdio.h>

typedef struct Produto{
  int codProduto;
  char nome[30];
  float custo;
}PROD;

typedef struct NotaFiscal{
  int numeroNota;
  int codProduto;
  int quantidade;
  char data[10];
  float precoUnitario;
}NOTA;

int main(){
  FILE *produto, *nota;
  PROD produtoInput;
  NOTA notaInput;
  char opcao;
  
  produto = fopen("produto.dat","wb");
  nota = fopen("nota.dat","wb");
  
  if( produto==NULL ){
    printf("nao foi possivel abrir o arquivo!\n");
    return 1;
  }
  
  do{
    printf("Digite os dados dos produtos!\n");
    printf("Codigo produto: ");
    scanf("%d", &(produtoInput.codProduto) );
    printf("Nome produto: ");
    scanf(" %s", produtoInput.nome);
    printf("Custo produto: ");
    scanf("%f", &(produtoInput.custo));
    
    fwrite( &produtoInput, sizeof(produtoInput), 1, produto);
    
    printf("Deseja escrever mais dados? (s/n)");
    
    scanf(" %c", &opcao);
    
  }while( opcao=='s' );
  
  do{
    printf("Digite os dados das notas!\n");
    printf("Numero nota: ");
    scanf("%d", &(notaInput.numeroNota) );
    printf("Codigo produto: ");
    scanf("%d", &(notaInput.codProduto) );
    printf("Quantidade: ");
    scanf("%d", &(notaInput.quantidade) );
    printf("Data: ");
    scanf(" %s", notaInput.data);
    printf("Preco unitario: ");
    scanf("%f", &(notaInput.precoUnitario));
    
    fwrite( &notaInput, sizeof(notaInput), 1, nota);
    
    printf("Deseja escrever mais dados? (s/n)");
    
    scanf(" %c", &opcao);
    
  }while( opcao=='s' );
  
  fclose(produto);
  fclose(nota);
  
  return 0;
}






