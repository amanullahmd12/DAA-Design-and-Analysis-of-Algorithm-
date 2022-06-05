#include <stdio.h>
int main()
{
    int t,m=0,n,c,i;
    printf("enter the target:");
    scanf("%d",&t);
    while(m<=t){
        c=0;
        printf("enter the size of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter the array elements:");
        for( i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int key;
        printf("enter the key to search:");
        scanf("%d",&key);
         for( i=0;i<n;i++){
             c++;
            if(key==arr[i]){
                printf("Key found\n");
                printf("Comparisions : %d",c);
                break;
            }
         }
         if(i==n){
            printf("Key not found\n");
            printf("Comparisions : %d",c);
         }

        m++;
        printf("\n");
    }
}
