#include<stdio.h>
#include<windows.h>
#include<iostream>

#define WEIGHT 64
#define HEIGHT 66
#define N WEIGHT*HEIGHT

void show(char* str);
char ch[N];
FILE *fp;



// d:\\\\work\\txt\\ASCII-ED19136D2CC3591AEF4CED0A35790E99 01
//46,47,48
int main()
{
	char name[57]=" d:\\\\work\\txt\\ASCII-ED19136D2CC3591AEF4CED0A35790E99 01";
	int i;
	for(i=1;i<401;i++)
	{
		name[47]=i/100+48;
		name[48]=(i%100)/10+48;
		name[49]=i%10+48;
//		printf("%s\n",name);
		show(name);
		Sleep(1);
		system("cls");
	}
	return 0;
}


void show(char* str)
{
	if((fp=fopen(str,"r"))==NULL)
	{
		printf("null pointer\n");
	}
	else
	{
		while(fgets(ch,N,fp)!=NULL)
		{
			printf("%s",ch);
		}
	}

}
