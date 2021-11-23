class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str1= strs[0];
        string str_temp="";
        int n = strs.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<strs[i].size();j++){
               
                if(str1[j]!=strs[i][j])
                    break;
                 str_temp+=strs[i][j];
            }
            str1=str_temp;
            str_temp = "";
           
        }
        
        return str1;
        
    }
};
