#include<stdio.h>
#include<string.h>
#include<conio.h>
void copy_string(char *target, char *source);
main()
{
	char ch,c,str[100],source[100], target[100], aa[100], bb[100];
	char first[100], second[100], result;
	int i,length;
	do
	{
		printf("Enter\n1.Read\n2.length\n3.Compare\n4.Copy\n5.Concat\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter any string : ");
                    scanf("%s",str);
					break;
			case 2:length = string_ln(str);
                    printf("\nThe length of the given string %s is : %d", str, length);
			   	    break;
			case 3:
                  printf("\nEnter first string\n");
                  scanf("%s",first);
                  printf("\nEnter second string\n");
                  scanf("%s",second);
	              result = compare_string(first, second);
                  if ( result == 0 )
                  printf("\nBoth strings are same.\n");
                  else
                  printf("\nEntered strings are not equal.\n");
                  break;
			case 4:printf("\nEnter source string\n");    
                  scanf("%s",source); 
                  copy_string(target, source);    
                   printf("\nTarget string is \"%s\"\n", target);  
                   break;
			case 5:printf("\nEnter the first string: ");
    scanf("%s",aa);
	printf("\nEnter the second string to be concatenated: ");
    scanf("%s",bb);
    char *a = aa;
    char *b = bb;
    while(*a)  
    {
        a++;   
    }
    while(*b)   
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0'; 
    printf("\nThe string after concatenation is: %s ", aa);	  				
				}printf("\nDo you want to continue\n");
				fflush(stdin);
				c=getch();
			}while(c=='y');
		}
		int string_ln(char*p) 
{
   int count = 0;
   while (*p != '\0') 
   {
      count++;
      p++;
   }
   return count;
}
 
int compare_string(char *first, char *second)
{
   while(*first==*second)
   {
      if ( *first == '\0' || *second == '\0' )
         break;
 
      first++;
      second++;
   }
   if( *first == '\0' && *second == '\0' )
      return 0;
   else
      return -1;
}
void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}
