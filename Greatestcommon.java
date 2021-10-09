import java.util.*;

public class Greatestcommon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        int minGCD = Integer.MAX_VALUE, maxGCD = Integer.MIN_VALUE;

        for (int i = 0; i <= n; i++) {
            if (i == 0) {
                sc.nextInt();
            } else {
                for (int j = 0; j < Math.pow(2, i); j+=2) {
                    int a = sc.nextInt();
                    int b = sc.nextInt();
                    if (a == -1 || b == -1) {
                        continue;
                    }
                    int newGCD = gcd(a, b);
                    if (newGCD < minGCD) {
                        minGCD = newGCD;
                    }
                    if (newGCD > maxGCD) {
                        maxGCD = newGCD;
                    }
                }
            }
        }

        if (minGCD == Integer.MAX_VALUE && maxGCD == Integer.MIN_VALUE) {
            System.out.print(0);
            return;
        }
        System.out.print(maxGCD - minGCD);
    }

    public static int gcd (int a, int b) {
        if(b == 0){
            return a;
        }
        return gcd(b, a % b);
    }
}