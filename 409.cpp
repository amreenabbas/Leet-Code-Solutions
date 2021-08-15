//created by js0805
class Solution {
public:
    int longestPalindrome(string s) {
        int arr[52] = {0};
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' and s[i]<='Z'){
                arr[s[i]-'A']++;
            }
            else{
                arr[s[i]-'a'+26]++;
            }
        }
        int eans =0,oans=0;
        for(int i=0;i<52;i++){
            if(arr[i]%2==0 ){
                eans = eans + arr[i];
            }
            else if(arr[i]>2){
                eans = eans + arr[i]-1;
                oans++;
            }
            else{
                oans++;
            }
        }
        cout << eans << " "<< oans << " ";
        if(oans!=0){
            eans = eans + 1;
        }
        return eans;
    }
};