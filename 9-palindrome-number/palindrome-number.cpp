class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        int s = 0;
        int e = str.length() - 1;
        while(s<=e){
            if(str[s] == str[e]){
                
                s++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};