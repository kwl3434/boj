#include<stdio.h>
int main(){
    int N,count,count0,num;
    int i=-1;
    int false=-1;
    count0=999999;
    scanf("%d",&N);
    if(N%5==0){
        count=N/5;
        printf("%d",count);
    }
    do{
        i++;
        if(N%5!=0){
            num=N/5;
            if(((N-(5*(num-i)))%3)==0){
                count=num-i;
                count=count+((N-(5*(num-i)))/3);
                count0=(count0<count)?count0:count;
            }
        }
    }while((num-i)!=0);
	if(N%5 != 0){
		if(count0!=999999){
            		printf("%d",count0);
		}
        	else
            		printf("%d",false);  
	}
}