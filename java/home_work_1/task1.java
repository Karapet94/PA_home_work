import java.util.*;
class Task1 {
    public static void main(String[] args) {
        
            int x,y,z, max;
            System.out.println("Please Enter X, Y, Z" + "\n");
            Scanner sx = new Scanner(System.in);
            Scanner sy = new Scanner(System.in);
            Scanner sz = new Scanner(System.in);
            x = sx.nextInt();
            y = sy.nextInt();
            z = sz.nextInt();
            
            max = x;
    
            if (y > max) {
                max = y;
            }
    
            if (z > max) {
                max = z;
            }

    System.out.println("Max number is " + max) ;
    }
}
