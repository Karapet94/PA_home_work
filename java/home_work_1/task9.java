import java.util.*;
class Task1 {
    public static void main(String[] args) {
        
            int x;
	    int sum = 0;
	    System.out.println("Please Enter number");
            Scanner sx = new Scanner(System.in);
	    x = sx.nextInt();
	    do {
		int r = x % 10;
		sum += r;
		x = (x - r) / 10;
	    } while (x != 0);

		System.out.println( "Result is " + sum );
    }
}
