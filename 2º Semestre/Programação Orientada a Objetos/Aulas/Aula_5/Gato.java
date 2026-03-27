public class Gato extends Animal{
    public String raca;
    
    public Gato(String nome,int idade, String raca){
        super(nome, idade); //chama o construtor da superclasse
        this.raca = raca;
    }

    //Sobrescrita do método emitirSon(Override)
    @Override
    public void emitirSom(){
        System.out.println("Gato disse: Miau!");
    }
}