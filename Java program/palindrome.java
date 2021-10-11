import java.util.*;
class Palindrome{  
    public static void main(String args[]){  
        int r,sum=0,temp;    
        System.out.println("Enter a number : ");
        int n= new Scanner(System.in).nextInt();
        temp=n;   
        while(n>0){    
         r=n%10;  //getting remainder  
         sum=(sum*10)+r;    
         n=n/10;    
        }    
        if(temp==sum)    
         System.out.println(temp+" is palindrome a number");    
        else    
         System.out.println(temp+" not palindrome a number");    
   }  
}
