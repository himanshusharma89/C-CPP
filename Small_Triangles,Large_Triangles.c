// My C code for solution for Small Triangles, Large Triangles from Hackerrank.

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
void sort_by_area(triangle* tr, int n) {
	float p;
    int s[n];
    for(int i=0;i<n;i++)
    {
        p=tr[i].a+tr[i].b+tr[i].c;
        p=p/2.0;
        s[i]=p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c);
    }
    struct triangle t;int are;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        if(s[j]>s[j+1])
        {
            are=s[j];
            s[j]=s[j+1];
            s[j+1]=are;
            
            t=tr[j];
            tr[j]=tr[j+1];
            tr[j+1]=t;
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
