class Solution {
public:
    int search(vector<int>& v, int target) {
       int n=v.size();
    int low=0,high=n-1;
    
    while(low<=high){
        int mid=(low + high)/2;

        if(v[mid]==target) {
            return mid;
       
        }else if(v[mid]>target){
            high=mid-1;
        }else if(v[mid]<target){
            low=mid+1;
        }
    }
    return -1;
    }
};