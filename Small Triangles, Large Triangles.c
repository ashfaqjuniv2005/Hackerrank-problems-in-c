nclude <stdio.h>
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
	int*p=malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        float a=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        p[i]=(a*(a-tr[i].a)*(a-tr[i].b)*(a-tr[i].c));
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(p[j]>p[j+1]){
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
                temp=tr[j].a;
                tr[j].a=tr[j+1].a;
                tr[j+1].a=temp;
                temp=tr[j].b;
                tr[j].b=tr[j+1].b;
                tr[j+1].b=temp;
                temp=tr[j].c;
                tr[j].c=tr[j+1].c;
                tr[j+1].c=temp;
            }
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
