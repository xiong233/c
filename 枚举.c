#include <stdio.h>
enum week
{
	monday ,tuesday ,wednesday ,thursday ,friday ,saturday ,sunday 
};
void f (enum week a);
int main (void)
{
	enum week a;
	a=monday ;
	f(a);
	return 0;
}
void f(enum week a)
{
	switch (a)
	{
		case 0:
		printf ("monday ");
		break ;
			case 1:
		printf ("tuesday ");
		break ;
			case 2:
		printf ("wednesday  ");
		break ;
			case 3:
		printf ("thursday ");
		break ;
			case 4:
		printf ("friday ");
		break ;
			case 5:
		printf ("saturday ");
		break ;
			case 6:
		printf ("sunday ");
		break ;
	}
	
}