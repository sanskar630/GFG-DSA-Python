//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            int n;
            n = Integer.parseInt(br.readLine());

            Solution obj = new Solution();
            int res = obj.countNumberswith4(n);

            System.out.println(res);
        }
    }
}

// } Driver Code Ends



class Solution {
    public static void main(String[]args){
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        System.out.println(countNumberswith4(n));
    }
    public static int countNumberswith4(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(check4(i)){
                count++;
            }
        }
        return count;
    }
    static boolean check4(int n){
        while(n>0){
            if(n%10==4){
                return true;
            }
            n/=10;
        }
        return false; 
    }
}


