#include <stdio.h>
int ispolnitel(int num) {
    int pervaya = (num/100)*((num/10)%10), vtoraya = (num%10) * ((num/10)%10), resultat = 0; // пара 1 и 2, 3 и 2, а еще начальный результат
    
    if (pervaya > vtoraya) {
        resultat = pervaya*10 + vtoraya; // если первая пара больше второй, то сначало заисываем первую
    } else {
        resultat = vtoraya*10 + pervaya; // если вторая пара больше первой, то сначало заисываем вторую
}

    return resultat;
}

int main() {
    int num;
    
    scanf("%d", &num); // вводим число
    
    if (!(num>999 || num<100)) {
        printf("%d", ispolnitel(num)); // если число трехзначное вызываем функцию и выводим результат
    } else {
        printf("число не трехзначное"); // если нет, вводим заглушку
}
    
    return 0;
}
