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
     PROD produtoLido;
     NOTA notaLida;
     float rentabilidadei, somatorio, rentabilidadeMedia;
     int qtdNotas;

    rewind(produto);
     while( fread( &produtoLido, sizeof(PROD), 1, produto) > 0 ){

            somatorio = 0;
            qtdNotas = 0;
            rewind(nota);
            while( fread( &notaLida, sizeof(NOTA), 1, nota) > 0 ){

                if( produtoLido.codProduto == notaLida.codProduto ){
                        rentabilidadei = (notaLida.precoUnitario - produtoLido.custo) / produtoLido.custo;
                        somatorio = somatorio + rentabilidadei;
                        qtdNotas++;
                }

            }
            rentabilidadeMedia = somatorio / qtdNotas;
            printf("Nome: %s - Rentabilidade media: %f\n", produtoLido.nome, rentabilidadeMedia);
     }
}

void maisVendido(FILE *produto, FILE *nota){
    PROD produtoLido, produtoMaisVendido;
    NOTA notaLida;
    int somatorio, maiorVendas=0;

    rewind(produto);
    while( fread( &produtoLido, sizeof(PROD), 1, produto) > 0 ){

            somatorio = 0;
            rewind(nota);
            while( fread( &notaLida, sizeof(NOTA), 1, nota) > 0 ){

                if( produtoLido.codProduto == notaLida.codProduto ){
                    somatorio = somatorio + notaLida.quantidade;
                }
            }

            if(somatorio > maiorVendas){
                maiorVendas = somatorio;
                produtoMaisVendido = produtoLido;
            }

     }

     printf("Produto mais vendido: %s - quantidade de vendas: %d\n", produtoMaisVendido.nome, maiorVendas);

}

int main(){
    FILE *produto, *nota;

    produto = fopen("produto.dat","rb");
    nota = fopen("nota.dat","rb");

    if(produto == NULL || nota == NULL ){
               printf("Nao foi possivel abrir 1 ou mais arquivos!\n");
               return 1;
    }

    rentabilidades( produto, nota);

    maisVendido( produto, nota);

    fclose(produto);
    fclose(nota);

    system("PAUSE");
    return 0;
}
