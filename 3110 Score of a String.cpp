class Solution {
public:
    int scoreOfString(string s) {
        int result = 0;
        int len = s.length();

        //abs is absolute value!!! didnt know that before :D
        for(int i=0; i< len - 1; i++){
            result = result + abs(s[i] - s[i+1]);
        }
        return result;
    }
};