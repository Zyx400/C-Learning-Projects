#include<stdio.h>
char name[50][50];
int score1[50];
int score2[50];
int score3[50];
int id[50];
int m = 0,k=0;
int num = 0,count=0;
void put()
{ 
	int is = 1;
	while(is){
		printf("学号\n");
		scanf_s("%d", &id[count]);
		printf("姓名\n");
		scanf_s("%s", name[count], 50);
		printf("语文成绩\n");
		scanf_s("%d", &score1[count]);
		printf("数学成绩\n");
		scanf_s("%d", &score2[count]);
		printf("英语成绩\n");
		scanf_s("%d", &score3[count]);
		printf("录入成功\n");
		count++;
		printf("是否继续输入(0结束/1继续)");
		scanf_s("%d",&is);
	}
}
void printf1() {
	printf("==========成绩录入系统==========\n");
	printf("1,录入学生成绩\n");
	printf("2,查看学生成绩\n");
	printf("3,查看各科的平均成绩\n");
	printf("0,退出\n");
}
void find() {
	printf("查询的学号\n");
	scanf_s("%d", &num);
	for (m = 0; m < count; m++)
	{
		if (id[m] == num) {
			printf("学号%d\n", id[m]);
			printf("姓名%s\n", name[m]);
			printf("语文成绩%d\n", score1[m]);
			printf("数学成绩%d\n", score2[m]);
			printf("英语成绩%d\n", score3[m]);
			break;
		}
	}
	if (m == count)printf("没有此学生");
}
void calc() {
	float a1=0,a2=0,a3 = 0;
	for (k=0;k < count; k++) {
		a1 += score1[k];
	}
	a1 = a1 / count;
	printf("语文的平均成绩为%f",a1);
	for (k = 0; k < count; k++) {
		a2 += score2[k];
	}
	a2 = a2 / count;
	printf("数学的平均成绩为%f", a2);
	for (k = 0; k < count; k++) {
		a3 += score3[k];
	}
	a3 = a3 / count;
	printf("英语的平均成绩为%f", a3);
}
int main()
{
	while (1) {
		printf1();
		int chiose = 0;
		scanf_s("%d",&chiose);
		switch (chiose) {
		case 1:put();
			break;
		case 2:find();
			break;
		case 3:calc();
			break;
		case 0:
			return 0;
		}
	}
	return 0;
}