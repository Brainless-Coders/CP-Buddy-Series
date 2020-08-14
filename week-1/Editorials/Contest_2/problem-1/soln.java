import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        Stack stack=new Stack();
        String ab="";
        for(int i=0;i<str.length();i++)
        {
            Character ch=str.charAt(i);
            if(!stack.isEmpty() && ch==stack.peek())
            {
                stack.pop();
            }
            else{
                stack.push(ch);
            }
            
        }
         if (stack.isEmpty()) {
            System.out.println("Empty String");
          } else 
         {
             while(!stack.isEmpty())
             {
                 ab=stack.pop()+ab;
             }
             System.out.println(ab);
         }
        
    }
        
        
    }
