#include <stdio.h>
#include<conio.h>

void main(){
    int a[] = {1,13,4,25};
    int n = 4;
    int i,j,min_index,temp;
    
    for(i=0;i<n-1;i++)
    {
        min_index = i;
        for (j=i+1;j<n;j++)
        {
            if(a[min_index]<a[j])
            {
                min_index = j;
            } 
            temp = a[j];
            a[j] = a[min_index];
            a[min_index] = temp;
        }
    }
    
    printf("SELECTION SORT IN PROGRESS........ \n");
    printf("The sorted order is \n");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}
