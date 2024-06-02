import java.util.*;

class StringPresent {
    public static String present(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();
        String ans = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (s1.charAt(i) != s2.charAt(j)) {
                    ans += s1.charAt(i);
                    break;
                }
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        String s1 = "tiger";
        String s2 = "er";
        System.out.println(present(s1, s2));

    }
}