#include <stdio.h>
#include "ft_printf.h"
int ft_printf(const char *format, ...);

int main ()
{   
    char *b = 0;
    char *c = "aaasdad23234dfsdfe";

    //int len_fk = ft_printf ("FK c: %c, s: %s, i: %i, p: %p, p: %p, d: %d, x: %x, X: %X u: %u %%: %%\n", 'a', "Hallo", 1, b, c, 0x47, 42, 42, -42);
    //int len_og = printf("OG c: %c, s: %s, i: %i, p: %p, p: %p, d: %d, x: %x, X: %X u: %u %%: %%\n", 'a', "Hallo", 1, b, c, 0x47, 42, 42, -42);
    //int len_fk = ft_printf("%c, %s, %i, %p, %p, %d\n", 'a', "Hallo", 1, b, c, 0x47);
    //int len_og = printf("%c, %s, %i, %p, %p, %d\n", 'a', "Hallo", 1, b, c, 0x47);
    int len_fk = ft_printf("abcd % qqqq");
    printf("\n");
    int len_og = printf("abcd % qqqq");
    printf("\nFk:%i\n", len_fk);
    printf("OG:%i\n", len_og);
    return (0);
}