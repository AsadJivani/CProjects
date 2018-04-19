#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *f1,*f2;
	f1=fopen("C:\\Users\\Omar Faheem\\Desktop\\new.bmp","rb");
	if(f1==NULL)
	{
		printf("no file1 found");
		return;
	}
	f2=fopen("C:\\Users\\Omar Faheem\\Desktop\\all.bmp","wb");

	if(f2==NULL)
	{
		printf("no file2 found");
		return;
	}
	fseek(f1,0,SEEK_END);
	long size=ftell(f1);
	printf("size of file is f1 is %2f kb",(float)size/1024);
	fseek(f1,0,SEEK_SET);
	char b[2];
	int i;
	for(i=0;i<size;i++)
	{
		fread(b,1,1,f1);
		fwrite(b,1,1,f2);
	}
	fseek(f2,0,SEEK_END);
	long size2=ftell(f2);
	printf("\nsize of file f2 is %2f kb",(float)size2/1024);
	fclose(f1);
	fclose(f2);
}
