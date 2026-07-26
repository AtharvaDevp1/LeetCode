class Solution {
public:
    vector<vector<int>> generate(int n) {
         vector<vector<int>> soln(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                soln[i].push_back(1);
            }
            else{
                int a=soln[i-1][j-1],b=soln[i-1][j];
               soln[i].push_back(a+b);
            }
        }
    }
    return soln;
    }
};