class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        
      vector<int > row(m,0);
      vector<int > coloumn(n,0);

        for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
            if(v[i][j]==0){
                row[i]=1;
                coloumn[j]=1;
            }
          }
        }
        for(int i=0;i<m;i++){
          if(row[i]==1){
            int j=0;
            while(j<n){
              v[i][j]=0;
              j++;
            }
          }
        }
        for(int j=0;j<n;j++){
          if(coloumn[j]==1){
            int i=0;
            while(i<m){
              v[i][j]=0;
              i++;
            }
          }
        }

    }
};