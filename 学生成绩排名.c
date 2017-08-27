#include <stdio.h>
#include <malloc.h>

struct student
{
	char name[100];
	float score;
};
//定义结构体
void input(struct student *, int);
void sort(struct student *, int);
void output(struct student *, int);
//函数声明
int main()
{
	int x;
	struct student *p = (struct student *)malloc(x * sizeof(struct student));
	
	printf("输入学生个数:");
	scanf("%d", &x);
	printf("\n");
	
	input(p, x);
	sort(p, x);
	output(p, x);

}
//函数1
void input(struct student *a, int x)
{
	int i;
	for (i = 0; i < x; ++i)
	{
		printf("输入学生%d姓名：", i + 1);
		scanf("%s", &a[i].name);
		printf("分数：");
		scanf("%f", &a[i].score);
	}
	printf("\n\n");
}
//函数2，冒泡排序法
void sort(struct student *a, int x)
{
	int i, j;
	struct student t;
	for (i = 0; i < x - 1; ++i)
	{
		for (j = 0; j < x - 1 - i; ++j)
		{
			if (a[j].score < a[j + 1].score)

			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
//函数3
void output(struct student *a, int x)
{
	int i;
	printf("名次      姓名       分数\n");
	for (i = 0; i < x; ++i)
	{
		printf("%d         %s         %f\n", i + 1, a[i].name,
			   a[i].score);
	}
}