#include <iostream>
#include <algorithm>
int main() {
    int a, b, c, v[3];
    scanf("%d %d %d", &a, &b, &c);

    v[0] = a; v[1] = b; v[2] = c;
    std::sort(v, v + 3);

    printf("%d\n%d\n%d\n\n", v[0], v[1], v[2]);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}

