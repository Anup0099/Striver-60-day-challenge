import java.util.Scanner;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;

//what is the question asking? It is asking to encrypt the given character by the given key and return the encrypted character as the output
// solution approach: we will use the ascii values of the characters to solve this problem

class A {
}

class B extends A {
}

class C extends B {
}

public class soul {
    public static void main(String[] args) {
        List<? super B> l1 = new ArrayList<A>();
        List<? extends B> l2 = new ArrayList<B>();
        l1.add(new B());
        l1.add(new C());

    }
}
