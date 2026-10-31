#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int best = 0;
    string line;
    cin>>line;
    int p = 0;
    int curr = 1;
    int count = 0;
    
    if((int)line.length() == 1){ cout<<1; return;}
    for(int i = 0; i< (int)line.length();i++) {
        
        if(line[p] == line[curr]){
            count++;
            if(count>best) best = count;
            else best = best;
        }
        else{
            if(count>best) best = count;
            else best = best;
            count = 0;
        } 
        p = curr;
        
        if(curr == (int)line.length()-1) break;
        curr++;
        
    }
    cout << best+1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
