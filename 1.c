
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {  // если a > b, меняем их местами
        int temp = a;
        a = b;
        b = temp;
    }
    
    for (int i = a; i <= b; i++) { // перебираем числа от a до b
        if (i % d == c) {  // проверяем, остаток при делении на d равен c
            printf("%d ", i); // выводим число, если условие верно
        }
    }
        
    return 0;
}
