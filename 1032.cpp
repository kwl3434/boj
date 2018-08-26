#include <iostream>
#include <string>
#include <vector>
using namespace std;

char pattern[50];

int main(){
    int N;
    vector<string> sv;
    string input;

    cin>>N;
    for(int i=0; i<N; ++i){
        cin>>input;
        sv.push_back(input);
    }

    int len = sv[0].size();

    char checkVal;
    bool isSame;
    for(int i=0; i<len; ++i){
        checkVal = sv[0][i];
        isSame = true;
        for(int j=1; j<sv.size(); ++j){
            if(checkVal != sv[j][i]){
                isSame = false;
                break;
            }
        }
        if(isSame)
            pattern[i] = checkVal;
        else
            pattern[i] = '?';
    }
    cout<<pattern<<endl;
    return 0;
}