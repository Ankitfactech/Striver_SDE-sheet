//Move all zeroes to end of array solution . 
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    int a[n],j=0;
	    for(int i=0;i<n;i++){
	        if(arr[i] !=0){
	            a[j] = arr[i];
	            j++;
	        }
	    }
	    for(int i=j;i<n;i++){
	        a[i] =0;
	    }
	    for(int i=0;i<n;i++){
	        arr[i] =a[i];
	    }
	    
	}
};