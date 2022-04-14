#include <stdio.h>
#include <stdarg.h>

int max (int num_args, ...);
int main (void)
{
    // 4 specifies number of int values remaing
    max (4, 6, 45, 78, 87);
}
int max (int num_args, ...)
{
    va_list args;

    va_start (args, num_args); // last argument is argument precdeing last arguments

    for (int i = 0; i < num_args; i++)
    {
       int x =  va_arg(args, int) ;//int is type of argument you want to pull out
        printf("x: %d\n", x);
    }

    va_end(args);

    return 0 ;

}
 