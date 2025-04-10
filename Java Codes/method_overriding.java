//Dynamic methid dispatch
//Run time polymorphism
class Animal{
    public void makeSound(){
        System.out.println("Animal makes a sound");
    }
}
class Dog extends Animal{
    @Override
    public void makeSound(){
        System.out.println("Dog barks");
    }
}
class method_overriding {
    public static void main(String[] args) {
        // Animal an=new Dog();
        // an.makeSound();
        //here overridden method will be called

        // Dog d1=new Dog();
        // d1.makeSound();

        Animal a1=new Animal();
        a1.makeSound();
    }
}