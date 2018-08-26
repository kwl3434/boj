#include<iostream>

using namespace std;
int T,a,b,prize;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
	cin>>T;
	while(T--){
		prize=0;
		cin>>a>>b;
		if(!a){}
		else if(a==1)prize+=5000000;
		else if(a<=3)prize+=3000000;
		else if(a<=6)prize+=2000000;
		else if(a<=10)prize+=500000;
		else if(a<=15)prize+=300000;
		else if(a<=21)prize+=100000;

		if(!b){}
		else if(b==1)prize+=5120000;
		else if(b<=3)prize+=2560000;
		else if(b<=7)prize+=1280000;
		else if(b<=15)prize+=640000;
		else if(b<=31)prize+=320000;

		cout<<prize<<'\n';
	}
}