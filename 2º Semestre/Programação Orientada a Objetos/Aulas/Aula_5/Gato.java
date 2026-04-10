public class Gato extends Animal{
    public String raca;
    
    public Gato(String nome,int idade, String raca){
        super(nome, idade); //chama o construtor da superclasse
        this.raca = raca;
    }

    //Sobrescrita do método emitirSom(Override)
    @Override
    public void emitirSom(){
        super.emitirSom();
        System.out.println("Gato disse: Miau!");
    }

    @Override
    public void mostrarInfo(){
        super.mostrarInfo();
        System.out.println("Raça: "+raca);
    }
}
