// A contains the starting points, B contains the ending points of the segments. N is the total number of segments. We apply greedy algorithm to maximize number of non-overlapping segments. We start with the 1st segment, find next segment where it is not overlapping meaning its start is strictly after end of current segment . We aggregate all such segments and return the number . 

int solution(int A[], int B[], int N) {
    if(N==0) return 0;
    
    //start with the 1st segment in set , so answer = 1
    int ans = 1;
    int currentB = B[0];
    
    for(int i=0; i<N; i++){
        if(A[i]<= currentB) continue; // if start of next segment < end of current segment means they are overlapping , skip such segments 
       
	// found next non overlapping segment , increment answer and update current segment . time complexity O(N) , space O(1) 
        currentB = B[i];
        ans++;
    }
    
    return ans;
}
