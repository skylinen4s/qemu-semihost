#include <stdio.h>

int main ()
{
	FILE *pFile;
	int buf_leng = 100;
	char buf[buf_leng];

	pFile = fopen ("host.txt","r+");

	if (pFile != NULL)
	{	
  		printf("------------------Read file------------------\n");
  		fread(buf ,sizeof(char) , buf_leng  , pFile);
  		printf("%s\n",buf);
  		printf("---------------------Over--------------------\n");
  	}
  	if (pFile == NULL)
	{
  		pFile = fopen ("host.txt","w");
  		printf("No file. Create a new file\n");
	}
    	fclose (pFile);

	return 0;
}
