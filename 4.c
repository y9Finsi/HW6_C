#include <stdio.h>

int sumDigits(int *num) {
    int sum=0;
    for (; *num != 0; *num /= 10) {
        sum += *num%10; // к суме прибавляем последнюю цифру числа
    }
    return sum;
}

int main() {
    int num;
    // ваодим число
    scanf("%d", &num);
    printf("%d", sumDigits(&num)); // вызываем функцию и выводим значение
    return 0;
}
