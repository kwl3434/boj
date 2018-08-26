#include<iostream>
#include<algorithm>
using namespace std;
int N,M;
int a[500001];
int check;
bool check1;
int j;
int Mid,Left,Right;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin>>M;
	for(int i=1;i<=M;i++){
		cin>>a[i];
	}
	sort(a+1,a+M+1);
	cin>>N;
	for(int i=1;i<=N;i++){
		j=19;
		cin>>check;
		check1=false;
		Right=M;
		Left=1;
		Mid=(Right+Left)/2;
		while(j--){
			if(check==a[Mid]||check==a[Right]||check==a[Left]){
				check1=true;
				break;
			}else if(check>a[Mid]){
				Left=Mid;
				Mid=(Right+Left)/2;
			}else{
				Right=Mid;
				Mid=(Right+Left)/2;
			}
		}
		if(check1) cout<<1;
		else cout<<0;
        cout<<' ';
        }
}