class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int f=INT_MAX;
        int s=INT_MIN;
        for(int i=0;i<n;i++){
            int l=i+1,r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==target)
                    return target;
                else if(sum>target){
                    f=min(sum,f);
                    r--;
                }
                else{
                    s=max(s,sum);
                    l++;
                }
            }
        }
        if(f!=INT_MAX and s!=INT_MIN){
            if((f-target)<(target-s))
                return f;
            else
                return s;
        }
        if(f==INT_MAX)
            return s;
        return f;
    }
};