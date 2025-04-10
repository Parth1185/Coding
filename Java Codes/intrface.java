interface Animal{
    int a = 10;
    public static final float b = 12.12f;
    abstract void makeSound();
}

//in inheritance, use extends, in interface, use implements

class Dog implements Animal{
    public void makeSound(){
        System.out.println("Dog Barks");
        System.out.println(Animal.a);
        System.out.println(Animal.b);
    }
}

// class intrface{
//     public static void main(String[] args) {
//         // Animal d1 = new Dog();
//         Dog d1 = new Dog();
//         d1.makeSound();
//     }
// }


interface Vehicle {
    abstract void start();  //public and abstract are optional to write
}

class Bike implements Vehicle{
    public void start(){
        System.out.println("Bike starts with a Kick");
    }
}

class Car implements Vehicle {
    public void start(){
        System.out.println("Car starts with a self");
    }
}

// class intrface {
//     public static void main(String[] args) {
//         Bike b1 = new Bike();
//         Car c1 = new Car();
//         b1.start();
//         c1.start();
//         Vehicle b2  = new Bike();
//         b2.start();
//     }  
// }


class multiple implements Animal, Vehicle{

    public void makeSound(){
        System.out.println("Just a demo of sound");
    }
    public void start(){
        System.out.println("Demo of start");
    }

}

class intrface{
    public static void main(String[] args){
        multiple m1 = new multiple();
        m1.makeSound();
        m1.start();
    }
}