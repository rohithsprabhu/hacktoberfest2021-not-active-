import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String args[])
    {
        System.out.print("Enter the number of dice: ");

        Scanner input = new Scanner(System.in);
        int numberOfDice = input.nextInt();

        Random ranNum = new Random();

        System.out.print("Hey Coder! You rolled: ");
        int total = 0;
        int randomNumber = 0;

        for (int i = 0; i < numberOfDice; i++) {

            randomNumber = ranNum.nextInt(6) + 1;
            total = total + randomNumber;
            System.out.print(randomNumber);
            System.out.print(" ");
        }

        System.out.println("");
        System.out.println("Total: " + total);
        input.close();
    }
}
