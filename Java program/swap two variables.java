import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
   int x, y, z;
   Scanner in = new Scanner(System.in);

   System.out.println("Input the first number: ");
   x = in.nextInt();
   System.out.println("Input the second number: ");
   y = in.nextInt();

   z = x;
   x = y;
   y = z;

   System.out.println(" Swapped values are3:" + x + " and " + y);
  }
}
