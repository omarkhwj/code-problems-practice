import java.math.BigInteger;


public class PlusOne {
    
    public static void main(String[] args) {
        int[] test1 = {1, 1, 1};
        int[] test2 = {9, 9, 9};
	int[] test3 = {5,2,2,6,5,7,1,9,0,3,8,6,8,6,5,2,1,8,7,9,8,3,8,4,7,2,5,8,9};


        System.out.println(Arrays.toString(plusOne(test1)));
	System.out.println(Arrays.toString(plusOne(test2)));
	System.out.println(Arrays.toString(plusOne(test3)));

    }
    public static int[] plusOne(int[] digits) {

	boolean allNines = true;

	
	for(int i = 0; i < digits.length && allNines; i++) {
	    if (digits[i] != 9) 
		allNines = false;
        }


	int[] copy;

	if (allNines) 
	    copy = new int[digits.length+1];
	else
	    copy = new int[digits.length];
	
		
	            
        if (digits[digits.length-1] != 9) {
            digits[digits.length-1]++;
            return digits;
        }
            
        
        else {
	    BigInteger newNum = BigInteger.TEN; 		    
	    BigInteger place = BigInteger.TEN;
	    int i;
	    
            for (i = digits.length-2; i >= 0; i--) {                   
		newNum = newNum.add(place.multiply(BigInteger.valueOf(digits[i])));
		//System.out.println("i: " + i + " newNum: " + newNum.toString() + " place: " + place.toString());
		place = place.multiply(BigInteger.TEN);          
 
	    }

	    place = (BigInteger.TEN).pow(copy.length-1);
	    
	    for (i = 0; i < copy.length; i++) {
		copy[i] = newNum.divide(place).intValue();
		newNum = newNum.subtract(newNum.divide(place).multiply(place));
		place = place.divide(BigInteger.TEN);
	    }
		
	}
    
           
	return copy;
    }

}
