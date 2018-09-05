#include<cstdio>
int gdb(int a, int b){
	return (a%b?gdb(b,a%b):b);
}
int main(){
	int q,w,e,r;
	int b;
	scanf("%d %d %d %d",&q,&w,&e,&r);
	b=(w*r)/gdb(w,r);
	q*=(b/w);
	e*=(b/r);
	q+=e,w=b;
	b=gdb(q,w);
	printf("%d %d\n",q/b,w/b);
}
