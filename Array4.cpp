class Solution{
public:
    int remove_duplicate(int arr[],int n){
        // code here
         if (n == 0 || n == 1)
        return n;
 
    int temp[n];
 
    // Start traversing elements
    int j = 0;
   
    // If current element is not equal to next element
    // then store that current element
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
 
    // Store the last element as whether it is unique or
    // repeated, it hasn't stored previously
    temp[j++] = arr[n - 1];
 
    // Modify original array
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];
 
    return j;
}
 


        
    
};