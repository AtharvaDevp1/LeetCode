class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
int n=nums.size();
vector<int> soln;
        int right=1,left=0;
            while(right<n){
left=right-1;
                while(left >=0){
                    if((nums[left]+nums[right])==target){
                        soln.push_back(left);
                        soln.push_back(right);
                        break;
                    }
                    left--;
                    
                }

                right++;
            }



         return soln;
        
    }
};