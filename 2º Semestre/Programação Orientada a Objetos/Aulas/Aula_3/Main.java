import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int contador = 0;
        float somatorio = 0;

        while(true){
            System.out.print("Digite um número: ");
            float num = sc.nextFloat();
            if (num == 0)
                break;
            somatorio += num;
            contador++;
        }
        System.out.print("Soma total:"+somatorio);
        System.out.print("Média:"+(somatorio/contador));
        sc.close();
    }
}