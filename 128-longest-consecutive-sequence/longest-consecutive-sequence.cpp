class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int maxlen=0;
        unordered_set set(nums.begin(),nums.end());
        for(auto it : set){

            if(set.count(it-1)==0){
                int ss=1;
                int sp=it;

                while(set.count(sp+1)==1){
                    ss+=1;
                    sp+=1;
                }

                maxlen=max(maxlen,ss);
            }
        }
        return maxlen;
    }
};