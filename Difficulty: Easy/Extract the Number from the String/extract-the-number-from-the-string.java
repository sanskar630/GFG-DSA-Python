//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;
import java.util.regex.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();
            Solution ob = new Solution();
            System.out.println(ob.ExtractNumber(S));
        }
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {
    long ExtractNumber(String sentence) {
        // code here
        long num=0,temp=0;
        int i=0,j=0;
        int n=sentence.length();
        
        while(i<n){
            if(sentence.charAt(i)>='0'&&sentence.charAt(i)<'9'){
                temp=temp*10+(sentence.charAt(i)-'0');
            }else if(sentence.charAt(i)=='9'){
                temp=0;
                while(i<n&&sentence.charAt(i)>='0'&&sentence.charAt(i)<='9') i++;
            }else{
                num=Math.max(num,temp);
                temp=0;
            }
            i++;
        }
        return (num==0)?-1:num;
    }
}

