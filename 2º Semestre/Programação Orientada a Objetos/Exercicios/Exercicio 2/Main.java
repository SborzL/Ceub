// Exercício 2: Simulador de Caixa Eletrônico (Menu Interativo)
// Objetivo: Praticar o controle de fluxo com um laço while (ou do-while), múltiplas condicionais (switch ou if/else aninhado), operadores de atribuição (+=, -=) e formatação de saída.
// Enunciado:
// Crie um simulador de caixa eletrônico simples em Java. O usuário começa com um saldo inicial de R$ 500,00. O programa deve exibir um menu com as seguintes opções:
// 1 - Consultar Saldo 2 - Realizar Depósito 3 - Realizar Saque 4 - Sair
// Regras:
// O programa deve continuar exibindo o menu e processando as opções até que o usuário escolha a opção 4 (Sair).
// Na opção de Depósito, o valor depositado deve ser somado ao saldo. O programa não deve aceitar depósitos de valores negativos.
// Na opção de Saque, o valor deve ser subtraído do saldo. O programa não deve permitir saques de valores negativos e não deve permitir que o usuário saque um valor maior do que o saldo disponível (informando "Saldo insuficiente").
// Se o usuário digitar uma opção inválida no menu principal, o programa deve avisar "Opção inválida" e mostrar o menu novamente.

import java.util.Scanner;

public class Main{
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    float Saldo = 500;
    int op = 0;
    int i= 1;
    float deposito;
    float saque;
    while (i != 4){
        System.out.println("\n\n=============| Simulador de Caixa Eletronico |=============\n 1. Consultar Saldo \n 2. Realizar Depósito \n 3. Realizar Saque \n 4. Sair");
        System.out.print("Digite um número: ");    
        op = sc.nextInt();
        sc.nextLine();
        switch (op){
            case 1:
                System.out.printf("Saldo: R$ %.2f\n",Saldo);
                System.out.print("Pressione Enter para continuar...");
                    sc.nextLine();
                break;
            case 2:
                System.out.print("Digite o valor do depósito: ");
                deposito = sc.nextFloat();
                sc.nextLine();
                if (deposito < 0){
                    System.out.println("Valor inválido para depósito. O valor deve ser positivo.");
                } else {
                    Saldo += deposito;
                    System.out.printf("Depósito realizado com sucesso. Novo saldo: R$ %.2f\n", Saldo);
                }

                System.out.println("Pressione Enter para continuar...");
                sc.nextLine();
                break;
            case 3:
                System.out.print("Digite o valor do saque: ");
                saque = sc.nextFloat();
                sc.nextLine();
                if (saque < 0){
                    System.out.println("Valor inválido para saque. O valor deve ser positivo.");
                } else {
                    if (saque > Saldo){
                        System.out.println("Saldo insuficiente.");
                    } else {
                        Saldo -= saque;
                        System.out.printf("Saque realizado com sucesso. Novo saldo: R$ %.2f\n", Saldo);
                    }
                }

                System.out.println("Pressione Enter para continuar...");
                sc.nextLine();
                break;
            case 4:
                System.out.println("Fechando o programa...");
                i = 4;
                break;    
        }
    }
    sc.close();
    }
}