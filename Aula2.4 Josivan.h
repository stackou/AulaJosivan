//faça um programa para ler um vetor de 6 posições de numero qualquer em uma função e em seguida exiba esse vetor na função principal. Em seguida crie uma função de ordenação crescente e mostre o vetor ordenado.
#include <iostream>
using namespace std;

void OrdenacaoVetor(float *vt, int tam){
  int i, j;
  float aux;  
  for(i=0; i<tam; i++)
  for(j=i+1; j<tam; j++){
    if(vt[i]>vt[j]){
    aux=vt[i];
    vt[i]=vt[j];
    vt[j]=aux;
    }
  }
  for(i=0; i<tam; i++)
  cout<<" "<<vt[i];
}

void InserirValor(float *vt, int tam){
int i;
for(i=0; i<tam; i++){
  cout<<"Digite um valor: ";
  cin>>vt[i];
}
}

void ExibirVetor(float *vt, int tam){
    int i;
    for(i=0; i<tam; i++)
    cout<<" "<<vt[i];
}


int main() {
  float vetor[4];
  int i, tam = sizeof(vetor)/sizeof(int); 
  InserirValor(vetor, tam);
  ExibirVetor(vetor, tam);
  cout<<endl;
  Ordenacao(vetor, tam);
  return 0;
}
