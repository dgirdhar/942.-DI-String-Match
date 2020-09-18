class Solution {
public:
    vector<int> diStringMatch(string S) {
        int size = S.size();
        vector<int> res(size + 1);
        int max = size;
        int min = 0;
        int iter = 0;
        
        
        for (int i = 0; i < size; ++i) {
            res[iter++] = S[i] == 'I' ? min++ : max--;
        }
        
        res[iter] = max--;
        
        return res;
    }
};
