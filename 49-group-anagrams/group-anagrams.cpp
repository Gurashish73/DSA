class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mymap;
        for (string s : strs ){
            string word = s;
            sort(word.begin(),word.end());
            mymap[word].push_back(s);
        }
        vector<vector<string>> result;
        for(auto pair: mymap){
            result.push_back(pair.second);
        }
        return result;
    }
};