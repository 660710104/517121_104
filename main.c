1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
#include &lt;stdio.h&gt;
float AreaTriangle(float h, float b) {
    return (h * b) / 2;
}
void main() {
    float h;
    float b;
    float ans;
    printf("Enter height : ");
    scanf("%f", &amp;h);
    printf("Enter base : ");
    scanf("%f", &amp;b);
    ans = AreaTriangle(h, b);
    printf("Area = %f\n", ans);
}
