#include<stdio.h>
main(){char s[16];int count=0,i;scanf("%s",s);for(i=0;i<=15;i++){if(s[i]>64&&s[i]<=67){count+=3;}if(s[i]>67&&s[i]<=70){count+=4;}if(s[i]>70&&s[i]<=73){count+=5;}if(s[i]>73&&s[i]<=76){count+=6;}if(s[i]>76&&s[i]<=79){count+=7;}if(s[i]>79&&s[i]<=83){count+=8;}if(s[i]>83&&s[i]<=86){count+=9;}if(s[i]>86&&s[i]<=90){count+=10;}}printf("%d",count);}