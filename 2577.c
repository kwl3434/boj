#include<stdio.h>
int main(){
    int A,B,C,y,i,x;
    int num[10];
    
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    for(i=0;i<10;i++)
        num[i]=0;
    y=A*B*C;
    
        do{
            x=y%10;
	    y=y/10;
	    
            switch(x){
                case 0:
                    num[0]+=1;
                    break;
                case 1:
                    num[1]+=1;
                    break;
                case 2:
                    num[2]+=1;
                    break;
                case 3:
                    num[3]+=1;
                    break;
                case 4:
                    num[4]+=1;
                    break;
                case 5:
                    num[5]+=1;
                    break;
                case 6:
                    num[6]+=1;
                    break;
                case 7:
                    num[7]+=1;
                    break;
                case 8:
                    num[8]+=1;
                    break;
                case 9:
                    num[9]+=1;
                    break;
            }
	    if(y<10){
		 switch(y){
                case 0:
                    num[0]+=1;
                    break;
                case 1:
                    num[1]+=1;
                    break;
                case 2:
                    num[2]+=1;
                    break;
                case 3:
                    num[3]+=1;
                    break;
                case 4:
                    num[4]+=1;
                    break;
                case 5:
                    num[5]+=1;
                    break;
                case 6:
                    num[6]+=1;
                    break;
                case 7:
                    num[7]+=1;
                    break;
                case 8:
                    num[8]+=1;
                    break;
                case 9:
                    num[9]+=1;
                    break;
           	}
	    }
		
        }while((y/10)!=0);
    for(i=0;i<10;i++)
        printf("%d\n",num[i]);
}