#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cout.tie(NULL);
    int N;
    string s;
    int n;
    deque<int> deq;
    cin >> N;
    while(N--){
        cin >> s;
        if(s=="push"){
            cin >> n;
            deq.push_back(n);
        }else if(s=="pop"){
            if(deq.size()==0){
                cout<<-1<<'\n';
            }else{
                cout<<deq.front()<<'\n';
                deq.pop_front();
            }
        }else if(s=="size"){
            cout << deq.size()<<'\n';
        }else if(s=="empty"){
            deq.size()?cout <<0<<'\n':cout<<1<<'\n';
        }else if(s=="front"){
            deq.size()?cout<<deq.front()<<'\n':cout<<-1<<'\n';
        }else if(s=="back"){
            deq.size()?cout<<deq.back()<<'\n':cout<<-1<<'\n';
        }
    }
    return 0;
}