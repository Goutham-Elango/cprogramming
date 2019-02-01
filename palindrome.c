#include<stdio.h>
#include<string.h>
void main()
{
	char st[20];
	int i,length=0;
	int flag=0;
	printf("ENTER A STRING : ");
	fflush(stdin);
	gets(st);
	
	i=0;
	while(st[i]!='\0')
	{
		length++;
		i++;
	}
	
	for(i=0;i<length;i++)
	{
		if(st[i]!=st[length-i-1])
		{
			flag=1;
		}
    }
	if(flag==0)
	{
		printf("%s is palindrome",st);
	}
	else
	{
		printf("%s is not palindrome",st);
	}
	

	
}

