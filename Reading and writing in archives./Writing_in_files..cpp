#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Para conectar um arquivo ao programa para entrada e saida voc� precisa
		incluir o arquivo de cabe�alho fstream em seu programa.
		
		A fun��o open() � usada para abrir um arquivo em modo especificado. Voc�
		pode ent�o concectar o arquivo ao objeto de classe usando a fun��o open()
		Uso:
			open(nome_do_arquivo, modo)
			
		A fun��o close() � usada para desconectar explicitamente um arquivo de um programa.
		 	
	*/
	string frase;
	cout<<"Escreva uma frase para ser escrita no arquivo string.txt:";
	getline(cin, frase);
	cout<<"Obrigado. Escrevendo dados no arquivo strings.txt...\n";
	ofstream escreve;
	escreve.open("batata.txt");
	escreve << "Utilizamos os objetos ofstream para escrever em arquivos\n";
	escreve<< "Note que podemos utilizar os caracteres \\n pra quebrar a linha, como faz�amos em cout\n";
	int numero = 100;
	escreve<<"Podemos escrever o valor de variaveis numericas: " <<numero <<"\n";
	int matriz[3] = {42, 19, 99};
	escreve<<"Podemos tamb�m escrever matrizes!";
	for (int i=0; i < 3; i++){
	escreve.width(6);
	escreve<<matriz[i]<<" ";
	}
	escreve<<"\n";
	escreve<<"Finalmente, podemos receber dados via cin e escrever estes dados no arquivo!\n";
	escreve<<"A frase que voc� digitou durante a execu��o do programa: "<<frase<<"\n";
	escreve.close();
	cout<<"Dados escritos no arquivo. Fim do Programa!";
	
	return 0;
}

