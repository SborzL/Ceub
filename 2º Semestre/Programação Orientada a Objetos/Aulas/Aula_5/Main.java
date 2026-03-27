public class Main {
    public static void main(String[] args){
        Animal animal_1 = new Animal("Gato",5);
        animal_1.emitirSom();
        animal_1.mostrarInfo();

        Cachorro cachorro_1 = new Cachorro("Billy", 2, "Doberman");
        cachorro_1.emitirSom();
        cachorro_1.mostrarInfo();
        cachorro_1.abanarCauda();

        Gato gato_1 = new Gato("Eddy", 4, "Siamês");
        gato_1.emitirSom();
        gato_1.mostrarInfo();
    }
    
}