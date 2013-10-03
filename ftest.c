#include <stdio.h>

int main ()
{
	FILE *pFile;
	int buf_leng = 100;
	int num ,result;
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
  		printf("this program will multiple\n");
  		printf("please enter a new number\n");
		scanf("%d", &num);

		int count = 0;
		while(count < num)
		{
			result = num * (++count);
			printf("%d * %d = %d\n", num, count, result);
			fprintf(pFile, "%d * %d = ", num, count);
			fprintf(pFile,"%d\n", result);
		}
    	fclose (pFile);
	

	//pFile = fopen ("host.txt","a");
	//fprintf(pFile,"%d\n",result);
	//fclose(pFile);
	return 0;
}
