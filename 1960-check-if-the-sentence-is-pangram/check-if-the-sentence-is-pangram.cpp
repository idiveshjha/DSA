class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length() <26) return false;

        int arr[26] = {0};
        for(auto c : sentence){
            arr[c-'a']++;
        }

        for(auto c : arr){
            if(c < 1){
                return false;
            }
        }
        return true;
        
    }
};