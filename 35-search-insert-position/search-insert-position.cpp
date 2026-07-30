class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
         int n=v.size();
    int low=0,high=n-1;
   // int target=2;
    int top=n;
    while(low<=high){
        int mid=(high+low)/2;
            if(v[mid]==target){
                return mid;
            }
       else if(v[mid]<=target){
            low=mid+1;
            
        }else if(v[mid]>=target){
          high=mid-1; 
            top=mid;
           
        }

    }
    if(high==low && high==n-1){
        return n-1;
    }else if(high==low && v[high]<=v[0]){
            return 0;
    }
    return top;
    }
};