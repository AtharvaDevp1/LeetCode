class Solution {
public:
    int search(vector<int>& v, int target) {
        int n=v.size();
        int low=0,high=n-1;

        while(low<=high){
            int mid=(low+high)/2;

            if(target == v[mid]){
                return mid;
            }  // we will consider it is left sorted
            if(v[low] <= v[mid]){

                    if(v[low]<=target && target <v[mid]){
                        high = mid-1;
                    }else{
                        low = mid+1;
                    }
            }
            else {
                if(v[mid] <= target && target <=v[high]){
                    low=mid+1;
                }else{
                    high = mid -1;
                }
            }
        }
        return -1;
    }
};