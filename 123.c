#include <stdio.h>
#include <malloc.h>
struct n
{
	int data;
	struct n *pn;
};
struct n *input();
void out(struct n *ph);

int main()
{
	struct n *ph = (struct n *)malloc(sizeof(struct n *));
	ph = input();
	out(ph);
}

struct n *input()
{
	int l, i, x;
	printf("输入个数");
	scanf("%d", &l);
	struct n *ph = (struct n *)malloc(sizeof(struct n *));
	struct n *p1 = ph;
	for (i = 0; i < l; ++i)
	{
		struct n *p2 = (struct n *)malloc (sizeof (struct n *));
		printf("第%d个数", i + 1);
		scanf("%d", &x);
		p2->data = x;
		p1->pn = p2;
	//	p2->pn=NULL ;
		p1 = p2;
	}
	return ph;
}

void out(struct n *ph)
{
	struct n *p = ph->pn;
	while (NULL != p)
	{
		printf("%d", p->data);
		p = p->pn;
	}
}