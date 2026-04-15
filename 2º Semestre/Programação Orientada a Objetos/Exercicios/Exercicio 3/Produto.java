public class Produto {
    private String nome;
    private double preco;
    private int quantidadeEmEstoque;

    public Produto(String nome, double preco){
        this.nome = nome;
        this.preco = preco;
        this.quantidadeEmEstoque = 0;
    }
    
    //Método de Comportamento
    public void exibirResumo(){
        System.out.println("Produto: "+nome);
        System.out.println("Preço: R$ "+preco);
        System.out.println(getQuantidadeEmEstoque());   
    }
    
    public void valorEstoque(){
        double valorTotal = preco * quantidadeEmEstoque;
        System.out.println("Valor total em estoque: R$ " + valorTotal);
    }
a

    //Getter
    public String getQuantidadeEmEstoque(){
        return "Quantidade em estoque: " +quantidadeEmEstoque;
    }

    public String getNome() {
        return "Nome: " +nome;
    }

    public String getPreco(){
        return "Preço: R$ " +preco;
    }


    //Setter
    public void adicionarEstoque(int quantidade){
        if (quantidade > 0){
            quantidadeEmEstoque += quantidade;
            System.out.println("Estoque atualizado com sucesso!");
            }
        else 
            System.out.println("Quantidade inválida, digite um valor maior que zero.");            
        }

    public void vender(int quantidade){
        if (quantidade > 0 && quantidade <= quantidadeEmEstoque){
            quantidadeEmEstoque -= quantidade;
            System.out.println("Venda realizada com sucesso!");
            }
        else if (quantidade > quantidadeEmEstoque)
            System.out.println("Estoque insuficiente para a venda.");
        else
            System.out.println("Quantidade inválida, digite um valor maior que zero.");
    }
}

