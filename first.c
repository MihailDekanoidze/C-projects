#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <complex.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
//#include <iso646. h>
//#include <TXLib.h>
#define TRUE 1
#define FALSE 0
#define CONSTANT "Константа"
#define c_drygiaconstanta "Другая константа"

int plat(void);

int main() {
    const double PI = 3.14159;
    const double RENT = 3852.99;
    setlocale(LC_ALL, "Rus");
    int num;
    num = 1;
    printf("Я простой компьютер"); 
    printf("компьютер.\n");
    printf("Моей любимой цифрой является %d, так как она первая.\n", num);
    //plat();
    int x1 = 1651;
    unsigned int x2;
    short x3;
    unsigned short x4;
    long x5;
    unsigned long x6;
    long long x7;
    unsigned long long x8;
    printf("Целочисленное со знаком: %d\nЦелочисленное без знака: %u\n", x1, x2); 
    printf("Short со знаком: %hd\nShort без знака: %hu\n", x3, x4);
    printf("Long со знаком: %ld\nLong без знака: %lu\n", x5, x6);
    printf("Long long со знаком: %lld\nLong long без знака: %llu\n", x7, x8);
    printf("%#x, %o\n", x1, x1);
    char str[] = "Русский алфавит включён!"; //Максимальный размер символа как int 2 147 483 648
    char chislo = 65;
    printf("%c\n", chislo);
    puts(str);
    printf("\n");
    //char ch = 33; //Максималыный char 127 Минимальный 33
    char ch;
    //scanf("%c", &ch); // & присвоение значения
    //printf("Символ %c имеет код %d", ch, ch);
    float ft;
    double db;
    long double ldb;
    float multy = 2.45676 * 2.79895; //Float 6 знаков после запятой 
    printf("%.7f - %.7f = %.10f\n", 2.45676 * 2.79895, multy, 2.45676 * 2.79895 - multy);
    printf("Тип int имеет размер %zd бит\n", sizeof(int) * 8);
    printf("Тип long имеет размер %zd бит\n", sizeof(long) * 8);
    printf("Тип long long имеет размер %zd бит\n", sizeof(long long) * 8);
    printf("Тип float имеет размер %zd бит\n", sizeof(float) * 8);
    printf("Тип double имеет размер %zd бит\n", sizeof(double) * 8);
    printf("Тип long double имеет размер %zd бит\n", sizeof(long double) * 8);
    //printf("%bl")
    char word[40];
    //scanf("%s", word);
    //int x = strlen(word);
    //printf("Слово содежит %d символов\n", x);
    char stroka[40];
    //fgets();
    //printf("%s", stroka);
    ldb = PI;
    printf("%f\n", PI);
    printf("%d\n%ld\n%lld\n", INT_MAX, LONG_MAX, LLONG_MAX);
    printf("%e\n%e\n", FLT_EPSILON, LDBL_EPSILON);
    printf("*%f*\n", RENT);
    short int numer = 336;
    printf("%c\n", numer);
    int prev = printf("В этой строке 45 символов\n");
    printf("%d\n", prev);
    int scan, cv, vb;
    //scan = scanf("%d %d", &cv, &vb);
    //printf("%d\n", scan);
    printf("%2.2e\n%2.2f\n", 121.0, 121.0);
    //while (условие)
//      {
//          тело цикла...
//          ...
//      }
    /*int x = 1, temp = 0;
    while (x < 100)
        {
            printf("%d ", x * x);
            x = x + 1;
            temp = temp + 1;
            if (temp == 10)
            {
                printf('\n');
                temp = 0;
            }
        }*/
    _Bool tr = 1, fs = 0; // TRUE != 0;
    bool flag = true, nonflag = false;
    // def fabs() == def abs()
    /* Цикл for
    for(count = 1, переменная_1, переменная_2...; count < 100; count++, действие_1, действие_2...)
    {
        тело цикла
    }*/
    /*Цикл do while
    do {
        тело цикла...
    } while(условие);

    */
    /*int mint[2];
    scanf("%d %d", &mint[0], &mint[1]);
    printf("%d %d\n", mint[0], mint[1]);
    */
    /*
    if (условие){
        действия...
        ...
    }
    if (условие){
        действия...
        ...
    }
    else if (условие){
        действия...
        ...
    }
    else{
        действия...
        ...
    }
    */
   /*
   Функция getchar() считывает 1 символ из потока ввода
   ch = getchar() == scanf("%c", &ch)
   Функция putchar(ch) выводит 1 символ
   putchar(ch) == scanf("%c", &ch)
   */
    /*
    Функции isalpha(ch) - буква
    isalnum(ch) буква или число
    isblank(ch) пробел
    isdigit(ch) цифра
    isgraph(ch) не пробел
    islower(ch) нижний регистр
    isupper(ch) верхний регистр
    isprint(ch) печатаемый символ
    ispunct(ch) любой не пробельный или не алфавитно-цифровой
    isspace(ch) пробел или символ перевода на другую строку
    ch = toupper(ch) верхний
    ch = tolower(ch) перевод в нижний регистр 
    */
    /*
    && == and
    || == or
    ! = not
    */
   /*
   x = fabs(y) 
   Эквивалентно
   x = (y < 0) ? -y: y;
   */
  /*
  Функция switch(ch){      //производит перевод к ввыпонению кейса(case) соответствующего ch
    case ch1:
        ...
        ...
        break// если нужно выполнение прогрраммы от case1 до case2
    case ch2:
        ...
        break
    default: оператор // если не найден кейс
  }
  */
    /*
    while (getchar() != '\n ') 
        continue; // пропустить оставшуюся часть входной строки 
    */
   /*
   Перенаправление ввода < 
   Перенаправления вывода > (>> отправляетв конец файла)
    */
    /*
    &x указание на адрес хранения переменной x
    *x указание на переменную (значение переменной) c адресом x // global x //
    {y = &x; z = *y} == {z = x}
    %p для вывода адреса в памяти
    */
   return 0;
}
int plat(void) {
    float weight; /* вес пользователя */ 
    float value; /* платиновый эквивалент */
    printf("Хотите узнать свой вес в платиновом эквиваленте?\n"); 
    printf("Давайте подсчитаем.\n"); 
    printf("Пожалуйста, введите свой вес, выраженный в килограммах: "); /* получить входные данные от пользователя */ 
    scanf("%f", &weight); /* считаем, что цена родия равна $1700 за тройскую унцию */ /* 14.5833 коэффициент для перевода веса, выраженного в фунтах, в тройские унции */ 
    value = 2844.83 * weight * 1000 / 98.21; 
    printf("Ваш вес в платиновом эквиваленте составляет $%.2f.\n", value); 
    printf("Вы легко можете стать достойным этого! Если цена платины падает,\n"); 
    printf("ешьте больше для поддержания своей стоимости.\n" ); 
    return 0;
}