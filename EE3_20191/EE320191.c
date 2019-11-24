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

void rentabilidades(FILE *produto, FILE *nota){
  //int prodLido;
  PROD produtoLido;
  NOTA notaLida;
  float rentabilidadei, rentabilidadeMedia, somatorio;
  int qtdNotas;
  //fscanf( produto, "%d", &prodLido);
  //fread( &prodLido, sizeof(prodLido), 1, produto);
  //fread( enderecoDestino, tamanho, qtd, ponteiroArquivo);
    
  do{
    fread( &produtoLido, sizeof(produtoLido), 1, produto);
  
  	printf("Produto: %s - ", produtoLido.nome);//garfo
    
    rewind(nota);
    somatorio = 0;//zero para calcular a rentabilidade media no final
    qtdNotas = 0;//zero para calcular o total de notas da rentabilidade media
    do{
      fread( &notaLida, sizeof(notaLida), 1, nota);
      
      if( notaLida.codProduto == produtoLido.codProduto ){
        //calcula rentabilidade...
        rentabilidadei = (notaLida.precoUnitario - produtoLido.custo)/produtoLido.custo;
        somatorio = somatorio + rentabilidadei;
        qtdNotas++;
      }
      
    }while( feof(nota)==0 );
    
    rentabilidadeMedia = somatorio / qtdNotas;
    
    printf("Rentabilidade Media: %f\n", rentabilidadeMedia);
    
  }while( feof(produto)==0 );
  //feof() -> 0 -> nao chegou no EOF
  //feof() -> 1 -> chegou no EOF 
}

int main(){
  FILE *produto, *nota;
  
  produto = fopen("produto.dat","rb");
  nota = fopen("nota.dat","rb");
  
  if( produto==NULL || nota==NULL){
  	printf("Nao foi possivel abrir 1 ou mais arquivos!\n");
  	return 1;
  }
  
  rentabilidades( produto, nota);
  
  
  
  return 0;
}
