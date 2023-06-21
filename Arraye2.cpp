//approch1:

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int second_largest=0, largest=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>largest){
	            second_largest = largest;
	            largest = arr[i];
	        }
	        else if(arr[i]>second_largest){
	            second_largest = arr[i];
	        }
	    }
	    return second_largest;
	}
};

//approch 2 :

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    return arr[n-2];
	}
};