#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int freq[100]={0};
    int arr[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i=i+1){
        freq[arr[i]]=freq[arr[i]]+1;
    }
    int ma=freq[0];
    int mi=-1;
    for(int i=0;i<100;i=i+1){
        if(freq[i]>ma){
            ma=freq[i];
            mi=i;
        }
    }
    printf("%d",mi);
}