class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string> paths_stack;

        for (const string& log : logs) {
            if (log == "../") {
                if (!paths_stack.empty()) {
                    paths_stack.pop_back();
                }
            } else if (log != "./") {
                paths_stack.push_back(log);
            }
        }

        return paths_stack.size();
    }
};
