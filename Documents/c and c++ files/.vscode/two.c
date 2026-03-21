#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("array input 1\n");
    for(int i=0;i<n1;i=i+1){
        scanf("%d",&arr1[i]);
    }
    printf("array input 2\n");
    for(int i=0;i<n2;i=i+1){
        scanf("%d",&arr2[i]);
    }
    int arr3[n1+n2];
    int k=0;
    for(int i=0;i<n1;i=i+1){
        arr3[k]=arr1[i];
        k=k+1;
    }
    for(int i=0;i<n2;i=i+2){
        arr3[k]=arr2[i];
        k=k+1;
    }
    for(int i=0;i<n1+n2;i=i+1){
        for(int j=0;j<(n1+n2)-i-1;j=j+1){
            if(arr3[j]>arr3[j+1]){
                int t=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=t;
            }
        }
    }
    printf("array output sorted\n");
    for(int i=0;i<n1+n2;i=i+1){
        printf("%d\n",arr3[i]);
    }
}