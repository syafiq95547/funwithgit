#include <stdio.h>
#include <stdlib.h>
#include "head.h"
int main(int argc, char *argv[])
{
	//int a,b,sum;
	if(argc!=3)
	{
		printf("please use \"prg_name value1 value2 \"\n");
		exit(1);
	}
	//printf("Sum of %d, %d is: %d\n",a,b,sum);
    add_2num(argv[1],argv[2]);
	return 0;
}
/*#include <stdio.h>
#include<stdlib.h>
#include "head.h"


int main(int argc, int argv[]){
int a,b;
if(3!=argc)
{
	printf("Not enough argument");
	exit(1);
}
    a = atoi(argv[1]);
    b = atoi(argv[2]);
	printf("Hello World !");
	printf("Sum of %d and %d is %d\n",a,b,sum);
	0;
}
*/
