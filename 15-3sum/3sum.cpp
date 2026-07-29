class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
         int n=v.size();
             vector<vector<int>> ans;
                sort(v.begin() , v.end());
             for(int i=0;i<n;i++){

                if(i>0 &&  v[i]==v[i-1])  continue;
              int left=i+1;
              int right=n-1;

              while(left<right){
                int sum = v[left] + v[right] + v[i];
                if(sum <0){
                  left++;
                } else if(sum>0){
                  right--;
                }else {
  
                 ans.push_back({v[i],v[left],v[right]});
                 left++;
                 right--;
                 while(left<right &&  v[left]==v[left-1]) left++;
                 while(left<right &&  v[right]==v[right + 1]) right--;
                }

              }

              
             }
             return ans;
    }
};