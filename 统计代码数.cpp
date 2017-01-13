#include<Windows.h>
#include<string.h>
#include<stdio.h>
int main(){
	FILE *tp;
	int count=0;
	char dizhi[100],hnr[1000];
	gets(dizhi);
	tp=fopen(dizhi,"r");
	while(fgets(hnr,1000,tp)){
	count++;
	}
	printf("%d\n",count);
	fclose(tp);
	return 0;
}