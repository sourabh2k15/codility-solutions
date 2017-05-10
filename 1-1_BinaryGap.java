// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int N) {
        int start = 0,a;
        int len =0;
        int maxlen = 0;
        
        while(N>0){
            a = N%2;
            if(a == 1) start = 1;
            if(start==1){
                if(a==0) len++;
                else if(a==1){
                    if(maxlen<len) maxlen = len;
                    len=0;
                }
            }
            N = N/2;
        }
        return maxlen;
    }
}
