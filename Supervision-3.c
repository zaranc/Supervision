#include<stdio.h>

main()

{
	int *p;
	char data[1000];
	
	p = fopen("append.txt","a");
	
	if(p==0)
	{
		printf("File not Open");
	}
	
	else
	{
		printf("Enter Your Data =");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data Add Successfully...");
	}
	fclose(p);
	
	printf("\n-----Data Add-----\n");
	
	p = fopen("append.txt","r");
	
	if(p==0)
	{
		printf("File not Open");
	}
	
	else
	{
		while(fgets(data,20,p) != 0)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
