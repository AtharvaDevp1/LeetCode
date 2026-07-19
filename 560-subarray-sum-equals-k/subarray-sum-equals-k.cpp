class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
          int n=nums.size();
        int sum=0;
        int varcount=0;
        unordered_map<int,int> map;
        map[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            if(map.find(sum-k)!=map.end())
            {
                varcount+=map[sum-k];
            }

            map[sum]++;


        }
        return varcount;
    }
};