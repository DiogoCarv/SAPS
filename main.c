#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 //constante SIZE com valor de 10

char nome_paciente_1[50], nome_medico_1[50], especialidade_medico_1[20]; //tamanho maximo permitido dentro []
char nome_paciente_2[50], nome_medico_2[50], especialidade_medico_2[20]; //variaveis de nome e especialidade
char nome_paciente_3[50], nome_medico_3[50], especialidade_medico_3[20]; //variaveis de 1 ate 3

char data_consulta_1[10], data_revisao_1[10]; //tamanho maximo permitido dentro []
char data_consulta_2[10], data_revisao_2[10]; //variaveis de data
char data_consulta_3[10], data_revisao_3[10]; //variaveis de 1 ate 3

int cpf_paciente_1[11], numero_carteirinha_1[11]; //tamanho maximo permitido dentro []
int cpf_paciente_2[11], numero_carteirinha_2[11]; //variaveis cpf e numero carteirinha
int cpf_paciente_3[11], numero_carteirinha_3[11]; //variaveis de 1 ate 3

int codigo_medicamento_1[9], codigo_fornecedor_1[9], valor_medicamento_1[5]; //tamanho maximo permitido dentro []
int codigo_medicamento_2[9], codigo_fornecedor_2[9], valor_medicamento_2[5]; //variaveis codigo e valor
int codigo_medicamento_3[9], codigo_fornecedor_3[9], valor_medicamento_3[5]; //variaveis de 1 ate 3

int opcao, consulta, lit, alterado=0; //variaveis necessarias para o funcionamento do codigo
int quantidade=0, gamb, total=0; //variaveis necessarias para o funcionamento do codigo

int main() //inicio do int main
{
    do //do com while para realizar o codigo enquanto estiver dentro dos parametros
    {
        if(opcao==0) //if para a exibicao do menu
        {
            printf("\n1 - cadastro");
            printf("\n2 - pesquisa");
            printf("\n3 - listar");
            printf("\n4 - alterar");
            printf("\n5 - sair\n"); //menu com as opcoes

            printf("\nEscolha sua opcao:\n");
            fflush(stdin); //limpando buffer
            scanf("%d", &opcao); //pegando a escolha do usuario
        }

        if(opcao==1) //if para entrar na area de cadastro
        {
            printf("\nRealizar Cadastro\n"); //essa parte do codigo pega os dados do usuario para fazer o cadastro

            printf("\nCodigo do Cadastro: 1\n"); //printf para mostrar o codigo do cadastro

            printf("\nDigite o nome do paciente:");
            fflush(stdin); //limpando buffer
            scanf("%s",&nome_paciente_1); //pegando o nome do paciente

            printf("\nDigite o cpf do paciente:");
            fflush(stdin); //limpando buffer
            scanf("%d",&cpf_paciente_1); //pegando o cpf do paciente

            printf("\nDigite o numero de carteirinha do paciente:");
            fflush(stdin); //limpando buffer
            scanf("%d",&numero_carteirinha_1); //pegando o numero da carteirinha

            printf("\nDigite o nome do medico:");
            fflush(stdin); //limpando buffer
            scanf("%s",&nome_medico_1); //pegando o nome do medico

            printf("\nDigite a especialidade do medico:");
            fflush(stdin); //limpando buffer
            scanf("%s",&especialidade_medico_1); //pegando a especialidade do medico

            printf("\nDigite codigo do medicamento:");
            fflush(stdin); //limpando buffer
            scanf("%d", &codigo_medicamento_1); //pegando o codigo do medicamento

            printf("\nDigite codigo do fornecedor do medicamento:");
            fflush(stdin); //limpando buffer
            scanf("%d", &codigo_fornecedor_1); //pegando o codigo do fornecedor

            printf("\nDigite o valor do medicamento:");
            fflush(stdin); //limpando buffer
            scanf("%d", &valor_medicamento_1); //pegando o valor do medicamento

            printf("\nDigite a data da sua consulta:");
            fflush(stdin); //limpando buffer
            scanf("%s",&data_consulta_1); //pegando a data da consulta

            printf("\nDigite a data da revisao:");
            fflush(stdin); //limpando buffer
            scanf("%s",&data_revisao_1); //pegando a data da revisao

            printf("\nCadastro Realizado\n"); //primeiro cadastro realizado

            printf("\nQuer realizar mais 1 cadastro?\n"); //menu para saber se o usuario quer fazer mais um cadastro
            printf("\n1 - Sim");
            printf("\n2 - Nao\n");

            fflush(stdin); //limpando buffer
            scanf("%d", &quantidade); //pegando a decisao do usuario

            if(quantidade==1) //if para continuar ou nao o cadastramento, se o usuario tiver digitiado 1 o cadastro continua
            {
                printf("\nRealizar Cadastro\n"); //essa parte pega todos os dados para o cadastramento

                printf("\nCodigo do Cadastro: 2\n");

                printf("\nDigite o nome do paciente:");
                fflush(stdin);
                scanf("%s",&nome_paciente_2);

                printf("\nDigite o cpf do paciente:");
                fflush(stdin);
                scanf("%d",&cpf_paciente_2);

                printf("\nDigite o numero de carteirinha do paciente:");
                fflush(stdin);
                scanf("%d",&numero_carteirinha_2);

                printf("\nDigite o nome do medico:");
                fflush(stdin);
                scanf("%s",&nome_medico_2);

                printf("\nDigite a especialidade do medico:");
                fflush(stdin);
                scanf("%s",&especialidade_medico_2);

                printf("\nDigite codigo do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_medicamento_2);

                printf("\nDigite codigo do fornecedor do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_fornecedor_2);

                printf("\nDigite o valor do medicamento:");
                fflush(stdin);
                scanf("%d", &valor_medicamento_2);

                printf("\nDigite a data da sua consulta:");
                fflush(stdin);
                scanf("%s",&data_consulta_2);

                printf("\nDigite a data da revisao:");
                fflush(stdin);
                scanf("%s",&data_revisao_2);

                printf("\nCadastro Realizado\n");
            }

            if(quantidade==1) //esse if olha se o usuario quis continuar o cadastramento no ultimo menu
            {
                printf("\nQuer realizar mais 1 cadastro?\n"); //menu para saber se o usuario quer continuar o cadastramento
                printf("\n1 - Sim");
                printf("\n2 - Nao\n");

                fflush(stdin); //limpando buffer
                scanf("%d", &gamb); //pegando a decisao do usuario
            }

            if(gamb==1) //if para saber se o usuario quis continuar com o cadastramento
            {
                printf("\nRealizar Cadastro\n"); //essa parte pega todos os dados necessarios para o cadastramento

                printf("\nCodigo do Cadastro: 3\n");

                printf("\nDigite o nome do paciente:");
                fflush(stdin);
                scanf("%s",&nome_paciente_3);

                printf("\nDigite o cpf do paciente:");
                fflush(stdin);
                scanf("%d",&cpf_paciente_3);

                printf("\nDigite o numero de carteirinha do paciente:");
                fflush(stdin);
                scanf("%d",&numero_carteirinha_3);

                printf("\nDigite o nome do medico:");
                fflush(stdin);
                scanf("%s",&nome_medico_3);

                printf("\nDigite a especialidade do medico:");
                fflush(stdin);
                scanf("%s",&especialidade_medico_3);

                printf("\nDigite codigo do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_medicamento_3);

                printf("\nDigite codigo do fornecedor do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_fornecedor_3);

                printf("\nDigite o valor do medicamento:");
                fflush(stdin);
                scanf("%d", &valor_medicamento_3);

                printf("\nDigite a data da sua consulta:");
                fflush(stdin);
                scanf("%s",&data_consulta_3);

                printf("\nDigite a data da revisao:");
                fflush(stdin);
                scanf("%s",&data_revisao_3);

                printf("\nCadastro Realizado\n");
            }
        opcao=0; //coloca a opcao=0 para ele voltar ao menu principal
        }

        if(opcao==2) //if para saber se o usuario colocou a opcao 2 no menu principal
        {
            printf("\nDigite o codigo a ser consultado:"); //menu para saber qual cadastro o usuario quer pesquisar
            printf("\nDe 1 ate 3\n"); //limitar a escolha do usuario, nesse codigo somente ha 3 opcoes
            fflush(stdin); //limpando buffer
            scanf("%d", &consulta); //pegando o codigo que o usuario quer pesquisar

            if(consulta==1) //if para saber se o usuario pesquisou o codigo 1
            {
                printf("\n\nDados do Paciente\n"); //essa parte printa todos os dados do cadastramento de codigo 1

                printf("\nNome:");
                printf(nome_paciente_1);

                printf("\nCPF:");
                printf(cpf_paciente_1);

                printf("\nNumero Carteirinha:");
                printf(numero_carteirinha_1);

                printf("\n\nDados do Medico\n");

                printf("\nNome:");
                printf(nome_medico_1);

                printf("\nEspecialidade do Medico:");
                printf(especialidade_medico_1);

                printf("\n\nDados do Medicamento\n");

                printf("\nCodigo do Medicamento:");
                printf(codigo_medicamento_1);

                printf("\nCodigo do Fornecedor:");
                printf(codigo_fornecedor_1);

                printf("\nValor do Medicamento");
                printf(valor_medicamento_1);

                printf("\n\nDados da Data\n");

                printf("\nData da Consulta:");
                printf(data_consulta_1);

                printf("\nData da Revisao:");
                printf(data_revisao_1);
            }

            if(consulta==2) //if para saber se o usuario pesquisou pelo codigo 2
            {
                printf("\n\nDados do Paciente\n"); //essa parte printa todos os dados do cadastramento de codigo 2

                printf("\nNome:");
                printf(nome_paciente_2);

                printf("\nCPF:");
                printf(cpf_paciente_2);

                printf("\nNumero Carteirinha:");
                printf(numero_carteirinha_2);

                printf("\n\nDados do Medico\n");

                printf("\nNome:");
                printf(nome_medico_2);

                printf("\nEspecialidade do Medico:");
                printf(especialidade_medico_2);

                printf("\n\nDados do Medicamento\n");

                printf("\nCodigo do Medicamento:");
                printf(codigo_medicamento_2);

                printf("\nCodigo do Fornecedor:");
                printf(codigo_fornecedor_2);

                printf("\nValor do Medicamento");
                printf(valor_medicamento_2);

                printf("\n\nDados da Data\n");

                printf("\nData da Consulta:");
                printf(data_consulta_2);

                printf("\nData da Revisao:");
                printf(data_revisao_2);
            }

            if(consulta==3)  //if para saber se o usuario pesquisou pelo codigo 3
            {
                printf("\n\nDados do Paciente\n"); //essa parte printa todos os dados do cadastramento de codigo 3

                printf("\nNome:");
                printf(nome_paciente_3);

                printf("\nCPF:");
                printf(cpf_paciente_3);

                printf("\nNumero Carteirinha:");
                printf(numero_carteirinha_3);

                printf("\n\nDados do Medico\n");

                printf("\nNome:");
                printf(nome_medico_3);

                printf("\nEspecialidade do Medico:");
                printf(especialidade_medico_3);

                printf("\n\nDados do Medicamento\n");

                printf("\nCodigo do Medicamento:");
                printf(codigo_medicamento_3);

                printf("\nCodigo do Fornecedor:");
                printf(codigo_fornecedor_3);

                printf("\nValor do Medicamento");
                printf(valor_medicamento_3);

                printf("\n\nDados da Data\n");

                printf("\nData da Consulta:");
                printf(data_consulta_3);

                printf("\nData da Revisao:");
                printf(data_revisao_3);
            }

            printf("\nConsulta realizada\n"); //printa que a consulta foi finalizada
            opcao=0; //coloca a opcao=0 para ele voltar ao menu principal
        }

        if(opcao==3) //if para saber se o usuario digitou a opcao 3 no menu principal
        {
            printf("\nQuantidade de dados desejados no listamento:"); //menu para saber qual a quantidade de cadastros o usuario quer listar
            printf("\nDe 1  ate 3\n"); //limita a escolha do usuario, pois somente tem 3 possibilidades de cadastramento
            fflush(stdin); //limpando buffer
            scanf("%d", &total); //pegando a escolha do usuario

            if(total>=1) //if para saber se o usuario escolheu listar o 1
            {
                printf("\n\nDados do Paciente\n"); //essa parte printa todos os dados do cadastramento

                printf("\nNome:");
                printf(nome_paciente_1);

                printf("\nCPF:");
                printf(cpf_paciente_1);

                printf("\nNumero Carteirinha:");
                printf(numero_carteirinha_1);

                printf("\n\nDados do Medico\n");

                printf("\nNome:");
                printf(nome_medico_1);

                printf("\nEspecialidade do Medico:");
                printf(especialidade_medico_1);

                printf("\n\nDados do Medicamento\n");

                printf("\nCodigo do Medicamento:");
                printf(codigo_medicamento_1);

                printf("\nCodigo do Fornecedor:");
                printf(codigo_fornecedor_1);

                printf("\nValor do Medicamento");
                printf(valor_medicamento_1);

                printf("\n\nDados da Data\n");

                printf("\nData da Consulta:");
                printf(data_consulta_1);

                printf("\nData da Revisao:");
                printf(data_revisao_1);
            }

            if(total>=2) //if para saber se o usuario quis listar o numero 2
            {
                printf("\n\nDados do Paciente\n"); //essa parte printa todos os dados do cadastramento

                printf("\nNome:");
                printf(nome_paciente_2);

                printf("\nCPF:");
                printf(cpf_paciente_2);

                printf("\nNumero Carteirinha:");
                printf(numero_carteirinha_2);

                printf("\n\nDados do Medico\n");

                printf("\nNome:");
                printf(nome_medico_2);

                printf("\nEspecialidade do Medico:");
                printf(especialidade_medico_2);

                printf("\n\nDados do Medicamento\n");

                printf("\nCodigo do Medicamento:");
                printf(codigo_medicamento_2);

                printf("\nCodigo do Fornecedor:");
                printf(codigo_fornecedor_2);

                printf("\nValor do Medicamento");
                printf(valor_medicamento_2);

                printf("\n\nDados da Data\n");

                printf("\nData da Consulta:");
                printf(data_consulta_2);

                printf("\nData da Revisao:");
                printf(data_revisao_2);
            }

            if(total>=3) //if para saber se o usuario quis listar o 3
            {
                printf("\n\nDados do Paciente\n"); //essa parte printa todos os dados do cadastramento

                printf("\nNome:");
                printf(nome_paciente_3);

                printf("\nCPF:");
                printf(cpf_paciente_3);

                printf("\nNumero Carteirinha:");
                printf(numero_carteirinha_3);

                printf("\n\nDados do Medico\n");

                printf("\nNome:");
                printf(nome_medico_3);

                printf("\nEspecialidade do Medico:");
                printf(especialidade_medico_3);

                printf("\n\nDados do Medicamento\n");

                printf("\nCodigo do Medicamento:");
                printf(codigo_medicamento_3);

                printf("\nCodigo do Fornecedor:");
                printf(codigo_fornecedor_3);

                printf("\nValor do Medicamento");
                printf(valor_medicamento_3);

                printf("\n\nDados da Data\n");

                printf("\nData da Consulta:");
                printf(data_consulta_3);

                printf("\nData da Revisao:");
                printf(data_revisao_3);
            }

            printf("\n\nTodos os dados foram listados\n"); //printa que todos os dados pedidos foram listados
            opcao=0; //coloca a opcao=0 para ele voltar ao menu principal
        }

        if(opcao==4) //if para saber se o usuario escolher a opcao 4 no menu principal
        {
            printf("\nDigite o codigo a ser alterado:"); //pergunta para saber qual o codigo que o usuario quer alterar os dados
            fflush(stdin); //limpando buffer
            scanf("%d", &alterado); //pegando a escolha do usuario

            if(alterado>0 && alterado <2) //if para saber se o usuario escolheu o codigo de numero 1
            {
                printf("\nRealizar Alteracao\n"); //essa parte pega todos os dados para alterar o cadastro de numero 1

                printf("\nDigite o nome do paciente:");
                fflush(stdin);
                scanf("%s",&nome_paciente_1);

                printf("\nDigite o cpf do paciente:");
                fflush(stdin);
                scanf("%d",&cpf_paciente_1);

                printf("\nDigite o numero de carteirinha do paciente:");
                fflush(stdin);
                scanf("%d",&numero_carteirinha_1);

                printf("\nDigite o nome do medico:");
                fflush(stdin);
                scanf("%s",&nome_medico_1);

                printf("\nDigite a especialidade do medico:");
                fflush(stdin);
                scanf("%s",&especialidade_medico_1);

                printf("\nDigite codigo do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_medicamento_1);

                printf("\nDigite codigo do fornecedor do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_fornecedor_1);

                printf("\nDigite o valor do medicamento:");
                fflush(stdin);
                scanf("%d", &valor_medicamento_1);

                printf("\nDigite a data da sua consulta:");
                fflush(stdin);
                scanf("%s",&data_consulta_1);

                printf("\nDigite a data da revisao:");
                fflush(stdin);
                scanf("%s",&data_revisao_1);

                printf("\nAlteração Realizada\n");
            }

            if(alterado>1 && alterado <3) //if para saber se o usuario escolheu o codigo de numero 2
            {
                printf("\nRealizar Alteracao\n");

                printf("\nDigite o nome do paciente:"); //essa parte pega todos os dados para alterar o cadastro de numero 2
                fflush(stdin);
                scanf("%s",&nome_paciente_2);

                printf("\nDigite o cpf do paciente:");
                fflush(stdin);
                scanf("%d",&cpf_paciente_2);

                printf("\nDigite o numero de carteirinha do paciente:");
                fflush(stdin);
                scanf("%d",&numero_carteirinha_2);

                printf("\nDigite o nome do medico:");
                fflush(stdin);
                scanf("%s",&nome_medico_2);

                printf("\nDigite a especialidade do medico:");
                fflush(stdin);
                scanf("%s",&especialidade_medico_2);

                printf("\nDigite codigo do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_medicamento_2);

                printf("\nDigite codigo do fornecedor do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_fornecedor_2);

                printf("\nDigite o valor do medicamento:");
                fflush(stdin);
                scanf("%d", &valor_medicamento_2);

                printf("\nDigite a data da sua consulta:");
                fflush(stdin);
                scanf("%s",&data_consulta_2);

                printf("\nDigite a data da revisao:");
                fflush(stdin);
                scanf("%s",&data_revisao_2);

                printf("\nAlteração Realizada\n");

            }

            if(alterado>2) //if para saber se o usuario escolheu o codigo de numero 3
            {
                printf("\nRealizar Alteracao\n"); //essa parte pega todos os dados para alterar o cadastro de numero 3

                printf("\nDigite o nome do paciente:");
                fflush(stdin);
                scanf("%s",&nome_paciente_3);

                printf("\nDigite o cpf do paciente:");
                fflush(stdin);
                scanf("%d",&cpf_paciente_3);

                printf("\nDigite o numero de carteirinha do paciente:");
                fflush(stdin);
                scanf("%d",&numero_carteirinha_3);

                printf("\nDigite o nome do medico:");
                fflush(stdin);
                scanf("%s",&nome_medico_3);

                printf("\nDigite a especialidade do medico:");
                fflush(stdin);
                scanf("%s",&especialidade_medico_3);

                printf("\nDigite codigo do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_medicamento_3);

                printf("\nDigite codigo do fornecedor do medicamento:");
                fflush(stdin);
                scanf("%d", &codigo_fornecedor_3);

                printf("\nDigite o valor do medicamento:");
                fflush(stdin);
                scanf("%d", &valor_medicamento_3);

                printf("\nDigite a data da sua consulta:");
                fflush(stdin);
                scanf("%s",&data_consulta_3);

                printf("\nDigite a data da revisao:");
                fflush(stdin);
                scanf("%s",&data_revisao_3);

                printf("\nAlteração Realizada\n");
            }
            opcao=0; //coloca a opcao=0 para ele voltar ao menu principal
        }

        if(opcao==5) //if para saber se o usuario escolheu a opcao 5 no menu principal
        {
            return 0; //return 0 para sair da execucao no cmd
        }

        if(opcao<0 && opcao>5) //if para saber se o usuario escolheu uma opcao inexistente no menu principal
        {
            printf("\nOpcao inexistente\n"); //printa que o usuario escolheu uma opcao inexistente
            opcao=0; //coloca a opcao=0 para ele voltar ao menu principal
        }
    }while(opcao>=0 && opcao<5); //condição para o do funcionar, o do so vai funcionar enquanto a opcao for >= 0 e <5
} //fim fo int main
