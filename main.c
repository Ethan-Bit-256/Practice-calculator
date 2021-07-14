#include <stdlib.h>
#include <stdio.h>

int main()
{
    double Fig_1;
    double Fig_2;

    printf("First figure goes here=> ");
    scanf("%lf", &Fig_1);
    printf("Second figure goes here=> ");
    scanf("%lf", &Fig_2);
    printf("If you add %f by %f, your result will be %f\n", Fig_1, Fig_2, Fig_1 + Fig_2);
    printf("If you subtract %f by %f, your result will be %f\n", Fig_1, Fig_2, Fig_1 - Fig_2);
    printf("If you multiply %f by %f, your result will be %f\n", Fig_1, Fig_2, Fig_1 * Fig_2);
    printf("If you divide %f by %f, your result will be %f\n", Fig_1, Fig_2, Fig_1 / Fig_2);
    return 0;
}
