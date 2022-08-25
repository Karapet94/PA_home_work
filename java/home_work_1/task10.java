import java.util.*;
class Task1 {
    public static void main(String[] args) {
        
            int a,b;
	    int result = 0;
	    char sign;
	
            System.out.println("Please Enter a");
            Scanner sa = new Scanner(System.in);
            System.out.println("Please Enter b");
            Scanner sb = new Scanner(System.in);
            System.out.println("Please Enter sign");
            Scanner ss = new Scanner(System.in);
            a = sa.nextInt();
            b = sb.nextInt();
            sign = ss.next().charAt(0);

	    if (sign == '/') {
		if(b == 0) {
		    System.out.println("Error!!! Division by zero ") ;
		    System.exit(0);
		}
		result = a / b;
	    } else if (sign == '*') {
		result = a * b;
	    } else if (sign == '+') {
		result = a + b;
	    } else if (sign == '-') {
		result = a - b;
	    } else {
		System.out.println("Please enter valid operator. + , - , / , * ");
		System.exit(0);
	    }

	    System.out.println("Result is " + result);

    }
}
