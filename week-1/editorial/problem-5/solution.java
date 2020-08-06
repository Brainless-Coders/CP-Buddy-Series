import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String[] nd = scanner.nextLine().split(" ");

        int n = Integer.parseInt(nd[0]);

        int d = Integer.parseInt(nd[1]);

        int[] a = new int[n];

        String[] aItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int aItem = Integer.parseInt(aItems[i]);
            a[i] = aItem;
        }
        
         int[] arr = new int[n];
        int count = 0;
        for (int i = d; i < a.length; i++) {
            arr[count] = a[i];
            count++;
        }
 
       
        int temp = a.length - d;
        for (int i = 0; i < d; i++) {
            arr[temp] = a[i];
            temp++;
        }
 
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        scanner.close();
    }
}
