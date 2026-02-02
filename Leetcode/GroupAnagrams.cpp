class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> res;

       unordered_map<string, vector<string>> hmp;

       for(string s: strs)
       {
           string sorted = s;

           sort(sorted.begin(), sorted.end());

           hmp[sorted].push_back(s);
       }


        for(auto pr: hmp)
        {
            res.push_back(pr.second);
        }

        return res;    
    }
};