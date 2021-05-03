#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;
void sort_by_area(triangle*  tr, int n)
{
    int p[n];
    int c[n];
    int d[n];
    for(int i=0;i<n;i++)
    {
        int p[i]=(tr[i].a+tr[i].b+tr[i].c)/3;
        int c[i]=sqrt(p[i]+(p[i]-tr[i].a)*(p[i]-tr[i].b)*(p[i]-tr[i].c));
    }
    for(int i=0;i<n;i++)
    {
        d[i]=c[i]*c[i];
    }
     for(i=1;i<n;i++)
    {
        int temp=d[i];
	for(j=i-1;j>=0&&temp<d[j];j--)
	{
		d[j+1]=d[j];
	}
	d[j+1]=temp;
    }
	
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	int c=sort_by_area(tr, n);
	
	for (int i = 0; i < n; i++) 
	{
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}