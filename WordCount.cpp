#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char* method = argv[1];
	char* name = argv[2];
	FILE *fp;
	fp = fopen(name,"r");
	char ch;
	int c=0;
	if(strcmp("-c",method)==0){
		while ((ch=fgetc(fp))!=EOF) 
		{
			c++;
		}
		printf("×Ö·ûÊý£º%d",c);
	}else if(strcmp("-w",method)==0){
		int word = 0;
		while((ch=fgetc(fp))!=EOF)
		{
		  if(ch==' ' || ch == ',')
		  {
		   	word=0;
		  }
		  else if(word==0)
		  
		  {
		   word=1;
		   c++;
		  }
		}
		printf("µ¥´ÊÊý£º%d",c);
	}		
}
