Import java.math.BigInteger;

public class MultiplyStrings {
    public static String multiply(String num1, String num2) {
        BigInteger first = new BigInteger(num1);
        BigInteger second = new BigInteger(num2);
        return (first.multiply(second).toString());
        
    }
}
