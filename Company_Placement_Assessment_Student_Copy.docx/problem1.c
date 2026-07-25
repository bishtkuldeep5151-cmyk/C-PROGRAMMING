#include <stdio.h>

void rearrangeArray(int* nums, int n ) {


    int temp[n];
    int a = 0;

    
    for (int i=0; i<n; i++)
    {
        if (nums[i] < 0)
        {
            temp[a++] = nums[i];
            
        }
    }

    

    for (int i=0; i<n; i++ )
    {
        if (nums[i] >=0)
        {
            temp[a++] = nums[i];
        
        }
    }

    for (int i=0; i<n; i++)
    {
        nums[i] = temp[i];
    }

    int main() {
        int n, i;
    
        printf("enter the size of array :");
        scanf("%d", &n);

        int nums[n];
        
        printf("enter %d elements:\n", n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &nums[i]);

        }

        rearrangeArray(nums ,n);

        printf("rearranged Array;\n");
        for(int i=0; i<n;i++)
        {
            printf("%d",nums[i]);
        }
        return 0;


    }

}