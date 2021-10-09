import java.util.Random;
import java.util.Scanner;

public class PasswordGet {
    public static void main(String[] args) {
        System.out.print("Enter the length of your password:");
        try{
            Scanner scanner=new Scanner(System.in);
            int length=scanner.nextInt();
            System.out.println("Your password is "+ GetPassword(length));

        }
       catch (Exception e){
           System.out.println("Enter the valid length");
       }




    }
    public static String GetPassword(int length){
        char[] chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*_+?".toCharArray();
        StringBuilder stringBuilder = new StringBuilder();

        Random rand = new Random();

        for(int i = 0; i < length; i++){
            char c = chars[rand.nextInt(chars.length)];
            stringBuilder.append(c);
        }

        return stringBuilder.toString();
    }
}