class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
          int n=v.size();
    vector<int> soln;

    unordered_map<int,int>map;
    int min=v.size()/3;
   
    for(int i=0;i<n;i++){
        map[v[i]]+=1;
    }
    for(int i=0;i<n;i++){
        if(map[v[i]]>min){
 soln.push_back(v[i]);
 map.erase(v[i]);
        }
    }
    return soln;
    }
};