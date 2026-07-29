// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".

class Solution {
public:
    string defangIPaddr(string address) {
        int index = 0;
        string ans;
        while(index < address.size()){
            if(address[index] == '.'){
                ans += "[.]";
            }
            else{
                ans +=address[index];
            }
            index++;
        }
        return ans;
    }
};