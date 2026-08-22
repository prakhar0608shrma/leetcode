class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<k;i++){
           sum=sum+nums[i]; //create first window
        }
            int maxi=sum;

        
        for(int i=k;i<n;i++){
            sum=sum-nums[i-k]+nums[i]; //slide window
            maxi=max(maxi,sum);
        }
      return (double)maxi / k;
        
    }
};