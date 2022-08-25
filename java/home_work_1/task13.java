import java.util.*;
class Task1 {
	static int multiplier(int x, int y, int z) {
	  return x * y *z;
	}
    public static void main(String[] args) {
        
	int x,y,z, mul;	
	System.out.println("Please Enter X");
	System.out.println("Please Enter Y");
	System.out.println("Please Enter Z");
        Scanner sx = new Scanner(System.in);
        Scanner sy = new Scanner(System.in);
        Scanner sz = new Scanner(System.in);
	x = sx.nextInt();	
	y = sy.nextInt();	
	z = sz.nextInt();	
	mul = multiplier(x,y,z);
	System.out.println("x * y * z = " + mul);
    }
}
