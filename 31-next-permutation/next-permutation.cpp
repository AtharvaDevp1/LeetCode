class Solution {
public:
    void nextPermutation(vector<int>& v) {
        // so we need to make a drip which will store where the larger no will reside on the right side 
        // so after finding the drip i will check if it is -1 or not to satisy the last cond 
        // and then if it is not -1 then i will purely focus on getting the next largest no in the array  and then swap it and then reverse it or sort it it is nearly the same 
        

        int n=v.size();
        int drip=-1;
        for(int i=n-2;i>=0;i--){
            if(v[i]<v[i+1]){
                drip=i;
                break;
            }
        }

        if(drip==-1){
            reverse(v.begin(),v.end());
        }else{
            for(int i=n-1;i>drip;i--)
            {
                if(v[drip]<v[i]){
                    swap(v[drip],v[i]);  
                  break;
                }
            }
            reverse(v.begin()+drip+1,v.end());
        }
    }
};