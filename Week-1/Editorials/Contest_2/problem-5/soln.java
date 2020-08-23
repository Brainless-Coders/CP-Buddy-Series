import java.util.*;
class TestClass {
	static boolean isPalindrome(String str){
		int[] arr = new int[26];
		for(char c : str.toCharArray()){
			arr[c-'a']++;
		}
		boolean isOdd = false;
		for(int i : arr){
			if(i!=0){
				if(i%2 == 1){
					if(isOdd){
						return false;
					}
					isOdd = true;
				}
			}
		}
		return true;
	}
    public static void main(String args[] ) throws Exception {
        /*
         * Read input from stdin and provide input before running
 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int N = Integer.parseInt(line);
        for (int i = 0; i < N; i++) {
            System.out.println("hello world");
        }
        */
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t-->0){
			String str = s.next();
			if(isPalindrome(str)){
				System.out.println("Yes");
			}else{
				System.out.println("No");
			}
		}
        //System.out.println("Hello World!");
    }
}