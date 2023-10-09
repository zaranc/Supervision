#include<stdio.h>

main()

{
	int *p;
	char data[1000];
	p = fopen("writing.txt","w");
	
	if(p==0)
	{
		printf("File not Open");
	}
	
	else
	{
		printf("Enter Your Data =");
		gets(data);
		fputs(data,p);
		printf("Data Add Successfully...");
	}
	fclose(p);
}
