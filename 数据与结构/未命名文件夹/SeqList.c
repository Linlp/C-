#include<stdio.h>
#include<string.h>
#define MAXSIZE 100
typedef struct 
{
	char key[15];
	char name[20];
	int age;
}Data;

typedef struct 
{
	Data ListData[MAXSIZE+1];
	int ListLen;	
}SeqList;

void SeqListInit(SeqList *SL){
	SL->ListLen=0;
}

int SeqListLength(SeqList *SL){
	return (SL->ListLen);
}

int SeqListAdd(SeqList *SL,Data data){

	SL->ListData[++SL->ListLen]=data;
	return 1;
}

int SeqListAll(SeqList *SL){
	int i;
	for ( i = 0; i < SL->ListLen; ++i)
	{
		printf("(%s,%s,%d)\n", SL->ListData[i].key,SL->ListData[i].name,SL->ListData[i].age);
	};
	return 1;
}


int main(){
	SeqList SL;
	Data data,*data1;
	SeqListInit(&SL);
	int out;
	int j=1;
	while(j){
		printf("input number,name,age:\n");
		scanf("%s,%s,%d,%d",&data.key,&data.name,&data.age,&out);
	 
		if (data.age)
		{
			if (!SeqListAdd(&SL,data))
				break;
		}else 
			break;

	if (out==1)
		break;
	j--;
	}
	printf("输出节点顺序:\n");
	SeqListAll(&SL);
	return 0;

}
