class Solution {
public:
    string majorityFrequencyGroup(string s) {
        int n = s.size();
        map<char,int>mp;
        for(auto it: s){
            mp[it]++;
        }
        map<int,vector<char>>freqGrps;
        for(auto it: mp){
            freqGrps[it.second].push_back(it.first);
        }
        int maxSize = 0;
        int freq = 0;
        for(auto it: freqGrps){
            int size = it.second.size();
            if(size > maxSize || (size == maxSize && it.first > freq)){
                maxSize = size;
                freq = it.first;
            }
        }
        string ans;
        for(char ch : freqGrps[freq]){
            ans += ch;
        }
        return ans;
    }
};
