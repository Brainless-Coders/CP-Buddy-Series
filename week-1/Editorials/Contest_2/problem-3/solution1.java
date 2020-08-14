import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt(); //Take no of test cases
        while(t!=0)
        {
            int n=sc.nextInt(); //take no of element in array
            int arr[]=new int[n];
            for(int i=0;i<arr.length;i++)
                { 
                    arr[i]=sc.nextInt();
                }
            int k=sc.nextInt();  //take Kth element
            if(k==0)
            {
                return;
            }
            Arrays.sort(arr); //sorting array
            System.out.println(arr[k-1]);
            t--;
            
        }
        
        
    }
}