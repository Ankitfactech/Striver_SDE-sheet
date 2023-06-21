//Solution of quick left rotate of array .  

class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   int m = k%n;
	   int a[n],j=0;
	   
	   for(int i=m;i<n;i++){
	       a[j] = arr[i];
	       j++;
	   }
	   for(int i=0;i<m;i++){
	       a[j] = arr[i];
	       j++;
	   }
	   
	   for(int i=0;i<n;i++){
	   
	       arr[i]=a[i];
	       
	   }
	   
	   
	} 
		 

};