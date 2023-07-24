#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int min = 32;
    int max = 126;
    int random_number;
    int sum = 0;
    int i = 1;
    char *str = NULL;
    str = (char *)malloc(sizeof(char));
    *str = '\0';

    // Initialize the random number generator.
    srand(time(NULL));

    bool repeat = true;
    while (repeat)
    {
        // Generate a random number between x and y.
        random_number = rand() % (max - min + 1) + min;
        sum += random_number;
        if (i++ > 22 && sum > 2772)
        {
            sum -= random_number;
            random_number = 2772 - sum;
            if (random_number >= min)
            {
                sum += random_number;
                repeat = !repeat;
            }
            else
            {
                int x = 0;
                while (*(str + x) != '\0')
                {
                    int y = *(str + x) + random_number;
                    if (y >= min && y <= max)
                    {
                        *(str + x) = y;
                        repeat = !repeat;
                        break;
                    }
                    x++;
                }
            }
        }
        char ch = random_number;
        char temp[2] = {ch, '\0'};
        str = (char *)realloc(str, (i + 1) * sizeof(char));
        strncat(str, temp, 1);
    }
    printf("%s\n", str);
    free(str);
    return 0;
}
