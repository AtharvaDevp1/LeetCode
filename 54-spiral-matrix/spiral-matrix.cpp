class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
         int m=v.size();
        int n=v[0].size();
        vector<int> soln;

        int left=0,right=n-1,top=0,bottom=m-1;

        while(top<=bottom && left<=right){

            for(int i=left;i<=right;i++){
                soln.push_back(v[top][i]);
            }
            top++;

            for(int i=top;i<=bottom;i++){
                soln.push_back(v[i][right]);
            }
            right--;

            if(top<=bottom){

                for(int i=right;i>=left;i--){
                    soln.push_back(v[bottom][i]);
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    soln.push_back(v[i][left]);
                }
                left++;
            }
        }

        return soln;
    }
};