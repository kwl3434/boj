#include<stdio.h>
int main(){
     int x,y,p=1;
     int i=1,j=1;
     scanf("%d %d",&x,&y);
     for(i=1;i<13;i++){
         for(j=1;j<32;j++){
             if((x==i)&&(y==j))break;
             if((i==2) && (j==29))break;
             if(((i==4)|(i==6)|(i==9)|(i==11)) && (j==31))break;
              p++;
          }
          if((x==i) && (y==j))break;
      }
      p=p%7;
      switch(p){
          case 0:
              printf("SUN");
              break;
          case 1:
              printf("MON");
              break;
          case 2:
              printf("TUE");
              break;
          case 3:
              printf("WED");
              break;
          case 4:
              printf("THU");
              break;
          case 5:
              printf("FRI");
              break;
          case 6:
              printf("SAT");
              break;
     }
    return 0;
}
