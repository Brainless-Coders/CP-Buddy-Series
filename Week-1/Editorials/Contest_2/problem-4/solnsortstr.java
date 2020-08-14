import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.nextLine();
        String s=sc.nextLine();
        String l="";
        String u="";
        for(int i=0;i<n;i++)
        {
            int k=s.charAt(i);
            if(k>=97 && k<=122)
            {
                l=l+s.charAt(i);
            }
            else
            {
                u=u+s.charAt(i);
            }
        }
         char[] charl = l.toCharArray();
         char[] charu = u.toCharArray();
            Arrays.sort(charl);
           Arrays.sort(charu);
        String sl = new String(charl);
        String su = new String(charu);
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            int k=s.charAt(i);
            if(k>=97 && k<=122)
            {
                System.out.print(sl.charAt(a));
                a=a+1;
            }
            else{
                System.out.print(su.charAt(b));
                b=b+1;
            }
        }
        
        
    }
}