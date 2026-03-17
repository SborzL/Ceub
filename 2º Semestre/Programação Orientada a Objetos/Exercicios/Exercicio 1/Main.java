// Exercício 1:
// Tabuada Inteligente
// Objetivo: Praticar a leitura de dados, uso do laço for, operadores matemáticos simples, operador de módulo (%) e a condicional if/else.
// Enunciado:
// Escreva um programa em Java que peça ao usuário para digitar um número inteiro positivo. O programa deve calcular e exibir a tabuada de 1 a 10 desse número. No entanto, o programa possui duas regras adicionais:
// Se o usuário digitar um número negativo ou zero, o programa deve exibir uma mensagem de erro: "Número inválido. Por favor, digite um número maior que zero." e encerrar.
// Ao imprimir a tabuada, o programa deve informar, ao lado de cada resultado, se aquele valor é "Par" ou "Ímpar".

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Digite um número inteiro positivo: ");
        int numero = sc.nextInt();
        sc.close();
        if (numero <=0){
            System.out.println("Número inválido. Por favor, digite um número inteiro maior que zero");
        }
        else{
            for (int i=1; i<=10; i++){
                int resultado = numero * i;
                if (resultado % 2 == 0){
                    System.out.println(+numero+" x "+i+" = " +resultado+" Par");
                }
                else{
                    System.out.println(+numero+" x "+i+" = " +resultado+" Impar");
                }
            }
        
        }
    }
}
