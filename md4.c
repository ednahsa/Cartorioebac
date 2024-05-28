#include <stdio.h> //biblioteca de comunica��o com us�ario
#include <stdlib.h> //biblioteca de aloca��o de espa�o por mem�ria 
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro()
    {
    //inicio de cria��o das variav�is string	
     char arquivo[40];	
     char cpf[40];	
     char nome[40];
     char sobrenome[40];
	 char cargo[40];
	 //final da cria��o de variav�is string
	 
	 printf("Digite o cpf a ser cadastrado:");//coletando informa��o do usu�rio
	 scanf("%s", cpf);
	 
	 strcpy(arquivo, cpf); //repons�vel por copiar os valores das string
	 
	 FILE *file;//cria o arquivo
	 file = fopen(arquivo,"w"); //cria o arquivo "w" siguinifica escrever
	 fprintf(file, cpf); //salvo o valor da variav�l
	 fclose(file); //fecha o arquivo
	 
	 file = fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o nome a ser cadastrado:");//coletanto informa��oes do us�rio
	 scanf("%s",nome);//%s referi-se a string
	 
	 file = fopen(arquivo, "a");//respons�vel por copiar os valores das string
	 fprintf(file,nome);
	 fclose(file);
	 
	 file = fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	
	 printf("Digite o sobrenome a ser cadastrado:");
	 scanf("%s",sobrenome);
	
     file = fopen(arquivo, "a");
	 fprintf(file,sobrenome);
	 fclose(file);
	
	 file = fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o cargo a ser cadastrado:");
	 scanf("%s",cargo);
	  
	 file = fopen(arquivo, "a");
	 fprintf(file,cargo);
	 fclose(file);
	 
	 system("pause");
     
	}
	
int consulta()
{
	setlocale(LC_ALL, "portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado:");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!\n");
	}
	
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do us�rio:");
		printf("%s",conteudo);
		printf("\n\n");	
	}
	
	system("pause");
	}
	
int deletar()
{
    char cpf [40];
    printf("Digite o CPF do usu�rio a ser deletado:");
    scanf("$s", cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    printf("O usu�rio n�o se encontra no sistema! .\n");
    system("pause");
    
    
		
    	
    	
	}
    
    
    
    
	}
	
int main()
    {
    int opcao=0; //Definindo variav�is
	int laco=1;	
    	
	for(laco=1;laco=1;) 
	{
	
    system("cls");
	
	setlocale(LC_ALL, "portuguese"); //Definindo a linguagem
	    
	printf("### Cart�rio da EBAC ###\n\n"); //In�cio do men�
	printf("Escolha a op��o desejada do menu\n\n"); 
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n");
	printf("Op��o: "); //Fim do menu
	
	scanf("%d", &opcao); //armazenamento e a escolha do usu�rio
	
    system("cls");//respons�vel por limpar a tela
    
	switch(opcao)//inicio da sele��o do menu
 	{
	
	case 1:
	registro();//chamadas de fun��es
	break;
	
	case 2:
	consulta();
	break;
	
	case 3:
	deletar();
	break;
	
	
	default:	
	printf("essa op��o n�o est� disponivel!\n");
	system("pause");
	break;
    }//fim da sele��o		
   
	
}
}
