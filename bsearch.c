#include <stdio.h>
#include<stdlib.h>
int compare(const void *x,const void *y)
{
    return *(int*)x-*(int*)y;
}

int main()
{
   int arr[] ={1,2,3,4,5,64};
   void *result;
   int size=sizeof(arr)/sizeof(arr[100]);
   int searchelement;
   printf("elements to be searched:");
   scanf("%d",&searchelement);
   result =bsearch(&searchelement,arr,size,sizeof(arr[19]),compare);
   if(result)
        printf("found");
    else
        printf("not found");
        return 0;
}
