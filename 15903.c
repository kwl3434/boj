#include<stdio.h>
void quickSort(long long int arr[], int left, int right) {
      int i = left, j = right;
      long long int pivot = arr[(left + right) / 2];
      long long int temp;
      do 
      {
        while (arr[i] < pivot) 
            i++;
        while (arr[j] > pivot)
            j--;
        if (i<= j) 
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
      } while (i<= j);
    if (left < j)quickSort(arr, left, j);
    if (i < right)quickSort(arr, i, right);
}
void insert_sort(long long int *data, int n )
{
  long long int i, j, remember;
  for ( i = 1; i < n; i++ )
  {
    remember = data[(j=i)];
    while ( --j >= 0 && remember < data[j] ){
        data[j+1] = data[j];
        data[j] = remember;
    }
  }
}
int main(){
    long long int n,m,i;
    long long int a[1000];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    quickSort(a,0,n-1);
    while(m--){
        a[0]+=a[1];
        a[1]=a[0];
        insert_sort(a,n);
    }
    i=0;
    while(n--){
        i+=a[n];
    }
    printf("%lld\n",i);
    return 0;
}