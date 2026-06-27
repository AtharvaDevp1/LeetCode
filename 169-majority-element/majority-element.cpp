class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int count=0, candidate=0;
for(auto it : nums ){
    if(count==0){
        candidate=it;
    }
    if(candidate==it)count++;
else count--;
}
        return candidate;
    }
};