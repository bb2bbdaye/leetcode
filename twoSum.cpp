class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();++i){
            auto n1=nums[i];
            auto it_n2 = find(nums.begin()+i+1,nums.end(),target-n1);
            if(it_n2!=nums.end()){
                result.push_back(i);
                result.push_back(it_n2-nums.begin());
                break;
            }
                
        }
        return result;
    }
};