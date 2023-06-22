// solution for find the element that appeared once . 
class Solution{
public:	
	int search(int A[], int n){
	    
	    sort(A,A+n);
	    for(int i=0;i<n;i++){
	        if(A[i]==A[i+1]){
	            i++;
	        }
	        else if(A[i]!=A[i+1]){
	            return A[i];
	        }
	    }
	}
};