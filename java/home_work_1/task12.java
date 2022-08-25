import java.util.*;
class Task1 {
    public static void main(String[] args) {
        
	int x;	
	System.out.println("Please Select length of side of triangle");
        Scanner sx = new Scanner(System.in);
	x = sx.nextInt();	
	int y = x;
	for (int i = 0; i < x; i++) {  
		for (int j = y; j > 0 ; j--) {           
		     System.out.print(" ");       
		} 
		for (int k = 0; k<= i * 2; k++){
		System.out.print("*");
		      }
		y--;
		System.out.println();
	}


    }
}
