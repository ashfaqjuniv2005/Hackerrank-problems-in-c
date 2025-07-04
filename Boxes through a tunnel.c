#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct
{
	int height;
    int width;
    int length;
}box;



int get_volume(box b) {
	return b.width*b.length*b.height;
}

int is_lower_than_max_height(box b) {
	return b.height < 41 ? 1 : 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
