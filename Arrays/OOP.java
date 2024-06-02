 import java.util.*;
 
abstract class Animal {

     String name;
     int age;

    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void eat() {
        System.out.println(name + " is eating");
    }

    abstract void sleep();
}

class Dog extends Animal {
    public Dog(String name, int age) {
        super(name, age);
    }

    @Override//whta is the meaning of this annotation? meaning of this annotation is that we are overriding the method of parent class
    void sleep() {
        System.out.println(name + " is sleeping");
    }

}

class Cat extends Animal {
    public Cat(String name, int age) {
        super(name, age);
    }

    @Override
    void sleep() {
        System.out.println(name + " is sleeping");
    }

}

public class OOP {

    public static void main(String[] args) {
        Dog dog = new Dog("Tommy", 5);
        dog.eat();
        dog.sleep();
    }
}
