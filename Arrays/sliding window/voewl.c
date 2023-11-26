#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <pthread.h>
#include <unistd.h>

// int sumOfDigits(char *str)
// {
//     int sum = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (isdigit(str[i]))
//         {
//             sum += str[i] - '0';
//         }
//     }
//     return sum;
// }
// int isVowel(char c)
// {
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//     {
//         return 1;
//     }
//     return 0;
// }
// int isGoodString(char *str)
// {
//     int vowel = 0, consonant = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (isVowel(str[i]))
//         {
//             vowel++;
//         }
//         else
//         {
//             consonant++;
//         }
//     }
//     if (vowel > consonant)
//     {
//         return 1;
//     }
//     return 0;
// }
void *good_string(void *args)
{
    char *str = (char *)args;
    int vowel = 0, consonant = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isVowel(str[i]))
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    if (vowel > consonant)
    {
        return (void *)1;
    }
    return (void *)0;


}

void *sum_of_digits(void *args)
{
    int sum = 0;
    char *str = (char *)args;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            sum += str[i] - '0';
        }
    }
    return (void *)sum;
}

int main()
{
    char str[100];
    scanf("%s", str);
    pthread_t t1, t2;
    pthread_create(&t1, NULL, good_string, (void *)str);
    pthread_create(&t2, NULL, sum_of_digits, (void *)str);
    void *res1, *res2;
    pthread_join(t1, &res1);
    pthread_join(t2, &res2);
    int good = (int)res1;
    int sum = (int)res2;
    printf("%d %d\n", good, sum);
    return 0;


}
// input
// abcd
// output
// 0 0
// input
// abca
// output
// 1 4
// input
//12a4ebc

// output
// 0 7