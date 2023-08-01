#include<cstdio>

struct titik {
	int x, y, z;
};

titik a, b, c;

int main(){
	a.x = 5;
	a.y = 3;

	b.x = 1;
	b.y = 2;
	
	c.x = 7;
	c.y = 8;
	
	printf("%d %d\n", a.x, a.y);
	printf("%d %d\n", b.x, b.y);
	printf("%d %d\n", c.x, c.y);
	
	
}
