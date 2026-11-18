class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(!mpp[nums[i]]){
                mpp[nums[i]]=1;
            }else{
            mpp[nums[i]]++;
            }
        }
        vector<int>ans;
        while(k>0){
            auto maxi = max_element(mpp.begin(), mpp.end(), [](const auto& a, const auto& b) {
                return a.second < b.second;
            });
            ans.push_back(maxi->first);
            mpp.erase(maxi);
            k--;
        }
        return ans;
    }
};