import java.util.*;
class Task1 {
    public static void main(String[] args) {
        
            int x,y,z, min;
            System.out.println("Please Enter X, Y, Z" + "\n");
            Scanner sx = new Scanner(System.in);
            Scanner sy = new Scanner(System.in);
            Scanner sz = new Scanner(System.in);
            x = sx.nextInt();
            y = sy.nextInt();
            z = sz.nextInt();
            
            min = x;
    
            if (y < min) {
                min = y;
            }
    
            if (z < min) {
                min = z;
            }

    System.out.println("min number is " + min) ;
    }
}
