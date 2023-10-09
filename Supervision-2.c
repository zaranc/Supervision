#include<stdio.h>

main()

{
	int *p;
	char data[1000];
	p = fopen("Reading.txt","r");
	
	if(p==0)
	{
		printf("File not Open");
	}
	
	else
	{
		while(fgets(data,20,p)!=0)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
