package app;

import veiculos.aereo.JatoGuerra;
// import veiculos.Veiculo;
// import veiculos.terrestre.Terrestre;
import veiculos.terrestre.Carro;

public class Main{
    public static void main(String[] args){
    // Não é permitido instanciar objeto da classe veiculo
    // Veiculo veiculo_1 = new Veiculo();
    //Terrestre terrestre_1 = new Terrestre("Tanque");

    Carro carro_1 = new Carro("Opala", 4, "Gasolina");

    carro_1.acelerar(100);
    carro_1.mover();
    carro_1.desacelerar(20);
    carro_1.mover();
    carro_1.mostrarInfo();

    Carro carro_2 = new Carro("BYD Dolphin", 4, "Elétrico");
    carro_2.mostrarInfo();

    JatoGuerra jato_1 = new JatoGuerra("a", 6);
    jato_1.ganharAltitude(1000);
    jato_1.acelerar(920);
    jato_1.mostrarInfo();
    jato_1.atirarMissil();
    jato_1.perderAltitude(120);
    jato_1.mostrarInfo();
    }
}
