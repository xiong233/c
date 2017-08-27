#include <stdio.h>
#include <malloc.h>
struct student
{
	int age;
	int score;
	char sex;
};
int main()
{
	struct student st = { 1, 2, 'f'  };
	struct student *pst=&st;
	struct student *qst =(int *)malloc();
	pst->age = 45;
	st.score = 66;
	
	printf("%d   %d   %c", st.age, pst->score, (*pst).sex);
}