static auto _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return true;
}();
#pragma optimize("O3")

class Solution {
public:
    string convert(string s, int n) {
        if(n==1){return s;}
        vector<string> a(n);
        int size=s.size();
        int x=0;
        bool t=false;
        for(char c:s){
            a[x]+=c;
            if(x==0 || x==n-1){
                t=!t;
            }
            if(t){
                x++;
            }else{
                x--;
            }
            
        }
        s.clear();
        for(const string& c:a){
            s+=c;
        }
        return s;
    }

};