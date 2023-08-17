#include <stdio.h>
#include <cmath>

int main(){
    float a, b, c;
    printf("Введите коэффициентов квадратного уравнения вида ах^2 + bx +c = 0\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("х любое вещественное число\n");
            else
                printf("нет корней");
        }
        else
            printf("Уравнение имеет один корень х = %f", c / b);
    }
    else
    {
        if (b * b - 4 * a * c < 0)
            printf("нет корней");
        else if (b * b - 4 * a * c == 0)
                printf("Уравнение имеет один корень х = %f", - b / (2 * a));
            else
                printf("Уравнение имеет два корня х1 = %f, х2 == %f", (- b - sqrt(b * b - 4 * a * c)) / (2 * a), 
                (-b + sqrt(b * b - 4 * a * c)) / (2 * a));
    }
    return 0;
}
