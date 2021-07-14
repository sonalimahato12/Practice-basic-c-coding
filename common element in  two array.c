// delete duplicant element from array and make unique array
#include <stdio.h>
int main()
{
    int size,size2,arr[size],arr2[size2];    
    int i, j, k;       

    printf("Enter size of the 1st array : ");
    scanf("%d %d", &size,&size2);

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter elements in 2nd array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d ", &arr2[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            /* If any duplicate found */
            if(arr[i] == arr[j])
            {
                
                for(k=j; k < size - 1; k++) //Delete the current duplicate element 
                {
                    arr[k] = arr[k + 1];
                }

                
                size--; //Decrement size after removing duplicate element 

                j--;  //If shifting of elements occur then don't increment j
            }
        }
    }
    for(i=0;i<size;i++)
    {
    	printf("%d ",arr[i]);
	}


    return 0;
}
