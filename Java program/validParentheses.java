import java.util.*;
class Solution {
    public boolean isValid(String s) {

        Stack<Character> stack = new Stack<>();

        for(int i=0;i<s.length();i++)
        {
            char item = s.charAt(i);
            if(item == '(' || item == '{' || item == '[')
            {
                stack.push(item);
            }else if(!stack.empty() && 
                    (item == ')' && stack.peek() == '(' ||
                    item == '}' && stack.peek() == '{' ||
                    item == ']' && stack.peek() == '['))
            {
                stack.pop();
            }
            else
                return false;
        }

        if(stack.empty())
            return true;
        return false;        
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a parentheses string");
        String str = sc.nextLine();
        System.out.println(isValid(str));
    }
}
