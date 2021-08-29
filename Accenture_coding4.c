//def LargeSmallSum(arr)
//The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest 
//largest element from the even positions and second smallest from the odd position of given ‘arr’
//Assumption:
//All array elements are unique
//Treat the 0th position a seven
//NOTE:
//Return 0 if array is empty
//Return 0, if array length is 3 or less than 3
//Example:
//Input: arr:3 2 1 7 5 4
//Output:7
//Explanation:Second largest among even position elements(1 3 5) is 3
//Second largest among odd position element is 4
//Thus output is 3+4 = 7
#include<stdio.h>
int largeSmallSum(int arr[], int n){
	
	int e[n],odd[n],i,j,sum=0,k=0,l=0,temp;
	if(n<=3)
	{
		return 0;
	}
	else{
		for(i=0;i<n;i++)
		{
			if(i%2==0)
			{
				e[k]=arr[i];
				k++;
			}
			else
			{
				odd[l]=arr[i];
				l++;
			}
		}
	}
	for(i=0; i<k; i++)           //sorting of even array
    {
        for(j=i+1; j<k; j++)
        {
            if(e[i]>e[j])
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
	}
	for(i=0; i<l; i++)           //sorting of even array
    {
        for(j=i+1; j<l; j++)
        {
            if(odd[i]>odd[j])
            {
                temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
	}
	return e[k-2]+odd[l-2];
}
int main()
{
    int n, result, i;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    result = largeSmallSum(arr, n);
    printf("\n%d",result);
    return 0;
}
