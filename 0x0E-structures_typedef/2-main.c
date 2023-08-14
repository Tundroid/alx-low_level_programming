#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    my_dog.name = NULL;
    my_dog.age = 4.5;
    my_dog.owner = "Carl";
    print_dog(&my_dog);
    my_dog.name = "Shaggy";
    my_dog.age = 5.5;
    my_dog.owner = NULL;
    print_dog(&my_dog);
    my_dog.name = NULL;
    my_dog.age = 6.5;
    my_dog.owner = NULL;
    print_dog(&my_dog);
    print_dog(NULL);
    return (0);
}
