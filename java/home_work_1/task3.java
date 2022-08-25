import java.util.*;
class Task1 {
    public static void main(String[] args) {
        
            int x,y,z,k, min;
            System.out.println("Please Enter X, Y, Z" + "\n");
            Scanner sx = new Scanner(System.in);
            Scanner sy = new Scanner(System.in);
            Scanner sz = new Scanner(System.in);
            Scanner sk = new Scanner(System.in);
            x = sx.nextInt();
            y = sy.nextInt();
            z = sz.nextInt();
            k = sk.nextInt();
	    if (x + y + z + k != 0) {
		System.out.println("Sum is not equal to 0 " + '\n') ;
		System.exit(0);
	    }
            
            min = x;
    
            if (y < min) {
                min = y;
            }
    
            if (z < min) {
                min = z;
            }

            if (k < min) {
                min = k;
            }
    System.out.println("min number is " + min) ;
    }
}
