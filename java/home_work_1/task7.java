import java.util.*;
class Task1 {
    public static void main(String[] args) {
        
            int a,b;
            System.out.println("Please Enter a");
            Scanner sa = new Scanner(System.in);
            System.out.println("Please Enter b");
            Scanner sb = new Scanner(System.in);
            a = sa.nextInt();
            b = sb.nextInt();


	a = a + b;
	b = a - b;
	a = a - b;
	System.out.println("changed a and b are a = " + a + " b = " + b);
    }
}
