#include <stdio.h>
#include <stdlib.h>
//--------Макровизначення--------
#define Name        "Ruslan"
#define LastName    "Chikvaidze"
#define GroupName   "RB-61"
#define Faculty     "RTF"
#define University  "Igor Sikorsky Kyiv Polytechnic Institute"
int main()
{
    //Оголошення змінних. Не ініціалізовані.
    unsigned int semestr;
    unsigned int age;

    int grade1,grade2,grade3,grade4,grade5;

    double averageGrade;
    float admissionScore;

    printf("%s %s Enter following data.\n", Name, LastName);


    //Зчитування данних з вводу консолі
    printf("Enter semestr:");
    scanf("%u",&semestr);

    //Зчитування данних з вводу консолі
    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);

    //Зчитування данних з вводу консолі
    printf("Enter grade #1: ");
    scanf("%d", &grade1);

    //Зчитування данних з вводу консолі
    printf("Enter grade #2:");
    scanf("%d", &grade2);

    //Зчитування данних з вводу консолі
    printf("Enter grade #3:");
    scanf("%d", &grade3);

    //Зчитування данних з вводу консолі
    printf("Enter grade #4:");
    scanf("%d", &grade4);

    //Зчитування данних з вводу консолі
    printf("Enter grade #5:");
    scanf("%d", &grade5);

    //Зчитування данних з вводу консолі
    printf("Enter your age: ");
    scanf("%u", &age);

    //Знаходження середнього арифметичного значення оцінок
    averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5) / 5;

    //Очищення консолі
    system("cls");

    //Вивід на консоль отриманних даних
    printf("\n***************");
    printf("\n---------------");

    printf("\n%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n---------------------------");
    printf("\nstudent: %s %s", Name, LastName );
    printf("\nage: %u", age);
    printf("\nsemestr: %u", semestr);
    printf("\n---------------------------");
    printf("\nadmission score: %.1f", admissionScore);
    printf("\naverage grade = %.2f", averageGrade);
    printf("\n");
    return 0;
}
