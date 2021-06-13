#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    int *arr;
    printf("Size:");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int))
    printf("Enter all 20 Number:");
    for(i=0;i<20;i++){
        printf("\nNumber %d:",i+1);
        scanf("%d",&arr[i]);
    }
    free(arr);
    return 0;
}
