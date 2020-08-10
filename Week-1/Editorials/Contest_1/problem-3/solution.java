import java.io.*;
import java.util.*;

public class solution {

    public static void main(String[] args) {
        int t,n,k,flag;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t!=0)
        {
           
            n=sc.nextInt();
            k=sc.nextInt();
            int arr[]=new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i]=sc.nextInt();
            }
            for(int i=0;i<n;i++)
            {
                
                flag=0;
                for(int j=0;j<n;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        flag++;
                    }
                }
                if(flag!=k)
                {
                    System.out.println(arr[i]);
                }
            }
            t--;
        }
    }
}