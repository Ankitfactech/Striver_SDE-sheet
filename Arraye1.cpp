class Solution
// code to find solution of problem- "Largest element in a array "
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest=0;
        for(int i=0;i< arr.size();i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;
    }
};