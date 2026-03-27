public class Main{
    public static void main(String[] args){
        // Chamada do método construtor
        Carro carro_1 = new Carro("Toyota", "Supra", 1994);
        carro_1.acelerar();
        carro_1.acelerar(200.20f);
        System.out.println(carro_1.getMarca());
        System.out.println(carro_1.getModelo());
        carro_1.setAno(2018);
        carro_1.setAno(2077);
        System.out.println(carro_1.getAno());
        carro_1.setMarca("Lamborghini");
        carro_1.setMarca(null);
        carro_1.setMarca("");
        System.out.println(carro_1.getMarca());
        carro_1.setModelo("Gallardo");
        carro_1.setModelo(null);
        carro_1.setModelo("");
        System.out.println(carro_1.getModelo());
        carro_1.mostrarInfo();
        System.out.println(carro_1.getMarca());
    }
}
