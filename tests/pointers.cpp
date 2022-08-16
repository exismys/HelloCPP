#include <iostream>
using namespace std;

int main() {
    int i = 10;
    void *p = &i;
    // printf("%d\n", (int) *p); Possibly can't dereference a void pointer
    printf("%d\n", *(int*)p); // 10

    printf("%f\n", *(float*)p); // 0.00000, Don't know why
}