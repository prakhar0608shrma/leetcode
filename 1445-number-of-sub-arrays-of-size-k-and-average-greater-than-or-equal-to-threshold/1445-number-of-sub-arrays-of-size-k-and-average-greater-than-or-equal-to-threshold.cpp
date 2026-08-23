class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i]; //create first window

        }
        int count=0;
        if(sum>=threshold*k){
            count++;

        }
        for(int i=k;i<n;i++){
            sum=sum-arr[i-k]+arr[i];
            if(sum>=threshold*k){ //slide window
            count++;
            }
        }

        return count;
    }
};