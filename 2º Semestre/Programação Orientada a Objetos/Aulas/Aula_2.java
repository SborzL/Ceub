import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws InterruptedException{
        String fruta = "";

        Scanner sc = new Scanner(System.in);
        System.out.print("Digite o nome de uma fruta: ");
        fruta = sc.nextLine();
        fruta = fruta.toLowerCase();
        sc.close();

        switch (fruta) {
            case "banana":
                System.out.println("Amarelo");
                break;
            case "maça":
                System.out.println("Vermelho");
                break;
            case "abacate":
                System.out.println("Verde");
                break;
            case "açai":
                System.out.println("Roxo");
                break;
            default:
                System.out.println("Cor inválida");            
        }

        for(int i=10; i>=0; i--){
            System.out.println(i);
            Thread.sleep(1000);
        }
        System.out.println("Fim.");

        Scanner sc = new Scanner(System.in);
        float somatorio = 0;
        int repeticoes = 10;

        for(int i=0; i<repeticoes; i++){
            System.out.print("Digite o número "+(i+1)+ ":");
            float num = sc.nextFloat();
            somatorio += num;
        }
        System.out.print("Somatório: "+somatorio);
        System.out.print("Média: "+somatorio/repeticoes);
        sc.close();
    }

}