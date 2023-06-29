class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        int totalcount=s.size();
        for(int i=0;i<totalcount;i++){
            if(s[i]==letter){
                count++;
            }
        }
        int percentage=(count*100)/totalcount;
        return percentage;
    }
};
