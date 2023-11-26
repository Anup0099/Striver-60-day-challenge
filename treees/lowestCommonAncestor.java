import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;

/**
 * lowestCommonAncestor
 */
public class lowestCommonAncestor {
    public static void fib(int n) {
        int arr[] = new int[n + 1];
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i <= n; i++) {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]);
        }
    }

    // Write a Program to check if the data in the ArrayList are duplicates are not.
    boolean check(ArrayList<Integer> list) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < list.size(); i++) {
            // set.add(list.get(i));
            if (set.contains(list.get(i))) {
                return true;
            } else {
                set.add(list.get(i));

            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 10;
        fib(n);

    }

}