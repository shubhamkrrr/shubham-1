#include<stdio.h>
#include<string.h>

int main()
	{
	int i=0,count=0;
	char ele;
	char s[20];
	printf("Enter string\n");
	gets(s);
	printf("enter for comparison\n");
	scanf("%c",&ele);
	for(i=0;i<s[i]!='\0';i++){
	if(s[i]==ele)
	{
		count++;
	}
		}
	printf("%d\n",count);

return 0;
	
}
