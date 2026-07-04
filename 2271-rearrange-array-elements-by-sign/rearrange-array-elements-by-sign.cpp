class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int N=nums.size();
    vector<int> soln(N);
    int p=0,n=1;
    for(int i=0;i<N;i++){
        if(nums[i]>0){
            soln[p]=nums[i];
            p+=2;
        }else if(nums[i]<0){
            soln[n]=nums[i];
            n+=2;
        }
    }
    return soln;
        
    }
};