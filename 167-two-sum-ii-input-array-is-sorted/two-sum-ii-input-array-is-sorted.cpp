class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int > soln;

int n =num.size();
int left = 0 , right = n-1;
    while(left < right){

        if(num[left]+ num[right] == target)
{       
        soln.push_back(left+1);
         soln.push_back(right + 1);
    break;
} 
    else if(num[left]+ num[right] < target){
            left++;
}else if(num[left]+ num[right] > target)
right --;


}

return soln;
    }
};