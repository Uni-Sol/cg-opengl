#include <stdio.h>

struct coords {
	int x;
	int y;
};

struct coords point;
struct coords top;

int main() {
	point.x = 5;
	point.y = 8;
	top.x = 16;
	top.y = 27;
	printf( "point x:%d, point y:%d\n", point.x, point.y );
	printf( "top x:%d, top y:%d\n", top.x, top.y );
	return 0;
}
