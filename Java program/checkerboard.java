import java.lang.*;
import java.util.*;
class checkerboard {
    public static void main ( String[] args ) {
        int i,j; 
        Scanner scan = new Scanner(System.in);
        System.out.println("enter number of rows: ");
        int n = scan.nextInt();
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                if ((i+j)%2 == 0){
                    System.out.print("* ");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}