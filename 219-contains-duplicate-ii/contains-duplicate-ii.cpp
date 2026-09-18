class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int n=nums.size();
        if(n==1) return false;
    // int de;
      // unordered_map<int,int> map;

        // for(int i=0;i<n;i++){
        //     map[nums[i]]+=1;
        // }

        // for(int i=0;i<n;i++){
        //    if(map[nums[i]] > 1){
        //     de = nums[i]; 
        //     break;
        //    }
        // }

       //  int t=1;
 unordered_map<int,int> map1;

        for(int i=0;i<n;i++){


if(map1.count(nums[i])){
                if(abs(map1[nums[i]]-i)<=k){
                    return true;
                }
               

                }
                 map1[nums[i]] = i;
        }
            
        

       
         
       
            return false;
        
    }
};