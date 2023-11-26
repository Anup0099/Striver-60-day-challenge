import java.util.Scanner;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;

//what is the question asking? It is asking to encrypt the given character by the given key and return the encrypted character as the output
// solution approach: we will use the ascii values of the characters to solve this problem

/**
 * soul
 */
public class soul {

    public int divide(int a, int b) {
        int c = -1;
        try {
            c = a / b;
        } catch (Exception e) {
            System.out.println("Exception  ");
        } finally {
            System.out.println("finally ");
        }

        return c;
    }

    // output will be 2
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        soul obj = new soul();
        System.out.println(obj.divide(a, b));
        sc.close();
    }
}