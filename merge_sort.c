#include<stdio.h>

void mch();
void min();
void ran();

void intc(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter The Element %d : ",i);
		scanf("%d",&a[i]);
	}
}

void intd(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter The Element %d : %d\n",i,a[i]);
	}
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

void mergechar(char arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    char L[n1], R[n2];
    
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSortchar(char arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
 
        mergeSortchar(arr, l, m);
        mergeSortchar(arr, m+1, r);
 
        mergechar(arr, l, m, r);
    }
}

void main(){
	int res;
	char yn;
	do{
		system("cls");
		printf("1)Integer Array\n2)Char Array\n3)To Generate Random Data\n4)Exit\nEnter Your Choise:");
		scanf("%d",&res);
		switch(res){
			case 1: min();
			        break;
			case 2: mch();
			        break;
			case 3: ran();
			        break;
			case 4:  break;
		}
		printf("\nDo You Want To Continue?(y/n):");
		fflush(stdin);
		scanf("%c",&yn);
	}while(yn=='y');
}

void min(){
	int a[20],i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter elements %d: ",i);
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n-1);
		printf("Sorted elements are: \n");
		for(i=0;i<n;i++)
	{
		printf("Elements %d: %d\n",i,a[i]);
	}	
}
void mch(){
		char a[10],i,n;
	printf("Enter number of elements:  ");
	scanf("%d",&n);
	printf("Enter character elements: \n");
	for(i=0;i<n;i++)
	{	fflush(stdin);
		scanf("%c",&a[i]);
	}
	
      mergeSortchar(a,0,n-1);
	printf("Sorted elements are: ");

	for(i=0;i<n;i++)
{		printf("%c",a[i]);
	}
	
}
void ran(){
		int a[20],i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		a[i]= rand();
		printf("%d\n",a[i]);
	}
	mergeSort(a,0,n-1);
		printf("Sorted elements are: \n");
		for(i=0;i<n;i++)
	{
		printf("Elements %d: %d\n",i,a[i]);
	}
}

