#include<stdio.h>
#include<windows.h>
int main() {
    float x, y, a;
    for (y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (x = -1.5; x < 1.5; x += 0.05) {
            a = x * x + y * y - 1;
            putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
        }
        system("color 0c");
        putchar('\n');
    }
    printf("I LOVE YOU\n");
    return 0;
}
