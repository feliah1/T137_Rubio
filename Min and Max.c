#include <stdio.h>

void main()
{
    int arr1[100];
    int i, mx, mn, num;


       printf("Input the number of elements :");
       scanf("%d",&num);

       printf("Input %d elements in the array :\n",num);
       for(i = 0; i<num; i++)
            {
	      printf("[%d]Input number : ",i);
	      scanf("%d",&arr1[i]);
	    }


    mx = arr1[1];
    mn = arr1[1];

    for(i = 0; i < num; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }


        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Max : %d\n", mx);
    printf("Min : %d\n\n", mn);
}
