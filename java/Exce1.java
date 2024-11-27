import java.util.*;

public class Exce1 {
    public static void main(String arg[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a num");
        int num = sc.nextInt();
        System.out.println("Enter a num");
        int deno = sc.nextInt();
        int ans = 0;
        if (deno != 0 && num != 0) {
            ans = num / deno;
            System.out.println(ans);
        } else {
            try {
                ans = num / deno;
            } catch (Exception e) {
                System.out.println(e);
            } finally {
                System.out.println("completed");
            }
        }
    }
}
