
public interface Cat {
    void meow();

    public static void main(String[] args) {
        CatImpl dog = new CatImpl();
        dog.meow();

        Dog d = new Dog();
        d.makeSound();
    }
}

class Animal {

    public void makeSound() {
        System.out.println("Animal is making a sound");
    }
}

class Dog extends Animal {
    @Override
    public void makeSound() {
        System.out.println("Dog is barking");
    }

}

class CatImpl implements Cat {
    public void meow() {
        System.out.println("Meow");
    }
    public static void main(String[] args) {
        System.out.print("aanmkkllklklklklkkklklklklklklklklklklkklklllkll jjljlklklklklklklkllkl");
    }

}