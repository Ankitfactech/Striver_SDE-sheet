// solution for missing number . 

int missingNumber(int A[], int N)
{
    // Your code goes here
    sort(A,A+N-1);
    int k = 1;
    if(A[0]==1){
    for(int i=0;i<=N-2;i++){
        if(A[i+1]-A[i] !=k){
            return A[i]+1;
        }
    }
    return A[N-2] +1;
    }
    return 1;
}