#include <stdio.h> 
#include <string.h> 

char* join(char* words[], int n) {
    static char result[255];  // Объявляем массив, который будет хранить конечный результат
    memset(result, 0, sizeof(result));  // Обнуляем массив

    int i;
    for(i = 0; i < n; i++) {
        strcat(result, words[i]); // Добавляем  слово в конченую строку
        if (i != n - 1) {  // Если это не последнее слово, то добавляем пробел
            strcat(result, " "); 
        }
        
        if (strlen(result) > 255) {  // Если длина строки превышает 255 символов, то завершаем функцию
            printf("слишком длинно,  длина строки не должна превышать 255 символов");
            return NULL;
        }
    }
    return result; // Возвращаем итоговый результат
}

int main() {
    char *words[] = {"Hello", "world", "!"};
    char *joined_string = join(words, 3);
    printf("%s", joined_string); // Выведет "Hello world !"
    return 0;
}
