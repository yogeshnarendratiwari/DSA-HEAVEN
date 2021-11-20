
// Find factorial of a large number
import java.math.BigInteger;

public class Q44 {

    static BigInteger factorial(int N) {
        BigInteger num = BigInteger.ONE;
        for (int i = 2; i <= N; i++) {
            num = num.multiply(BigInteger.valueOf(i));
        }
        return num;
    }

    public static void main(String[] args) {
        System.out.println(factorial(10));
    }
}
