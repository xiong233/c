#include <stdio.h>
struct st
{
	int age;
	int score;
	char sex;

};
int main()
{
	struct st m = { 1, 2, 'f' };
	 struct st *pm;
	 //	printf("%d", pm->age);
	pm->age = m.age ;
	printf("%d", (*pm).age );
}