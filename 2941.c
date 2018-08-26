#include <stdio.h>
main(){	char arr[100];int i,len,count = 0;scanf("%s",arr);i = 0;while(arr[i]){i++;}	len = i;
	for(i = 0; i < len; i++){if(arr[i] == 'c' && (arr[i+1] == '=' || arr[i+1] == '-'))count++;
		if(arr[i] == 'd' && (arr[i+1] == '-' || (arr[i+1] == 'z' && arr[i+2] == '=')))			count++;
		if(arr[i] == 'j' && (arr[i-1] == 'l' || arr[i-1] == 'n'))count++;
		if(arr[i] == '=' && (arr[i-1] == 's' || arr[i-1] == 'z'))count++;}
	len = len - count;printf("%d",len);
}