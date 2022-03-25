#include<stdio.h>
	int main()
{
	int n,i,avg;
	struct student
	{
		int rollno,math,science,english,hindi,socialscience,computer;
		char name[20];
		float avg;
	};
		struct student s[20];
		printf("enter the number of students:\n");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			printf("enter student %d details:\n",i+1);
			printf("enter roll numbers:\n");
			scanf("%d",&s[i].rollno);
			printf("enter student name:\n");
			scanf("%s",s[i].name);
			printf("enter english marks,science marks, math marks,hindi marks,socialscience marks,computer marks\n");
			scanf("%d%d%d%d%d%d",&s[i].english,&s[i].science,&s[i].math,&s[i].hindi,&s[i].socialscience,&s[i].computer);
		}
		for(i=0;i<n;i++)
		{
			s[i].avg=(s[i].english+s[i].science+s[i].math+s[i].hindi+s[i].socialscience+s[i].computer)/6;
		}
		printf("enter the average marks\n");
		scanf("%d",&avg);
		for(i=0;i<n;i++)
		{
			if(s[i].avg>avg)
			{
				printf("enter the name of students who scored above average");
				scanf("%s",s[i].name);
			}

		}
	return 0;
}

