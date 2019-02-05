//quick sort

#include<stdio.h>

int i,j;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int part(int a[], int f, int l)
{int x;
	j=(f-1);
	for(i=f;i<l;i++)
	{
			if(a[i]<=a[l])
		{j++;
		swap(&a[j],&a[i]);
			
		}
	}
	
	swap(&a[j+1],&a[l]);
	return (j+1);
	
}
void quick(int a[], int f,int l)
{
	if(f<l)
	{int ind;
	ind= part(a,f,l);
	
	quick(a,f,ind-1);
	quick(a,ind+1,l);
}
}

main()
{
	int a[10],i,n;
	printf("Enter number of elements:  \n");
	scanf("%d",&n);
	printf("Enter elements:  \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	quick(a,0,n-1);
	printf("Sorted elements are:  \n");

	for(i=0;i<n;i++)
{		printf("%d",a[i]);
	}
	
	
    
}




