class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
   map<int,int>set1,set2;
       vector<int>ans; 
        for(int i:nums1)
    set1[i]++;
        for(int i:nums2)
            set2[i]++;
        for(auto k:set1)
            if(set2[k.first])ans.emplace_back(k.first);
        return ans;
    }
};
