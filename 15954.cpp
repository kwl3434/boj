#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int N;
int K;
double MIN=10000000;
double a[501];
double b[501][501]; //sum
double c[501][501]; 
double d[501][501]; //avg
int main(){
	cin>>N>>K;
	for(int i=1;i<=N;i++){
		cin>>a[i];
	}
	for(int i=1;i<=N-K+1;i++){
		for(int k=i,j=1;k<=N;k++,j++){
			b[i][j]=a[k]+b[i][j-1];
			d[i][j]=(double)b[i][j]/(double)j;
		}
		cout<<'\n';
	}
	for(int i=1,k=K;i<=N-K+1;){
		if(k>N-i+1){k=K;i++;}
		if(i<=N-K+1){
			for(int j=i;j<=k+i-1;j++){
				c[i][k]+=(double)pow((double)a[j]-(double)d[i][k],(double)2);
			}
			c[i][k]=(double)c[i][k]/(double)k;
			c[i][k]=sqrt(c[i][k]);
			MIN=min(MIN,c[i][k]);
			k++;
		}
	}
	printf("%.11lf\n",MIN);
}
