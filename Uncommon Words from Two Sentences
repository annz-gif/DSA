class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        // we need to find unique occurences
        string s = s1 + " " + s2;

        cout<<s1.max_size();

        // store all words from s
        unordered_map<string,int> um;
        string tmp="";
        for(auto& val : s){ // similar to, i=0;i<s.size();i++
            if(val == ' '){
                um[tmp]++;
                tmp = "";
            }
            else{
                tmp += val; // denotes, val = s[i]
            }
        }
        
        // condition needed if empty string allowed
        if(tmp != ""){
            um[tmp]++;
            tmp = "";
        }

        // check unique means single count
        vector<string> ans;
        for(auto& val:um){ // auto it=um.begin();it<um.end();it++

            // val.first = apple, val.second = 2

            if(val.second==1){
                ans.emplace_back(val.first); // can use push_back also                
            }

        }

        return ans;
    }
};
