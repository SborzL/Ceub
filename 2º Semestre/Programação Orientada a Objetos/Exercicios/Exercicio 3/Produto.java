public class Produto {
    private String nome;
    private double preco;
    private int quantidadeEmEstoque = 0;

    public Produto(String nome, double preco){
        this.nome = nome;
        this.preco = preco;
    }
    
    //Getter
    public void mostrarQuantidadeEmEstoque(){
        System.out.println("Quantidade em Estoque: "+quantidadeEmEstoque);
    }

    //Setter

}
