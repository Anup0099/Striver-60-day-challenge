import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;

public class alex {
    public static int solve(ArrayList<Integer> inp, ArrayList<Integer> np, int rank) {
        Collections.sort(inp);
        int sum = inp.get(inp.size()-rank);
        for(int i = 0; i < np.size(); i++) {
            inp.add(np.get(i));
            Collections.sort(inp);
            sum+=inp.get(inp.size()-rank);
        }
        return sum;
    }

    public static void main(String[] args) {
        int[] inp = {1,1,3};
        int[] np = {2,2,4};
        int rank = 2;
        System.out.println(solve(rank, inp, np));
    }
}