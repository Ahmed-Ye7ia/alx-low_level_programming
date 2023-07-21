// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int i = 0;
        int k = 1, j = 0;
    int size =5;
        if (size > 0)
        {
                while (i <= size)
                {
                        while (k <= size)
                        {
                                putchar(' ');
                                k++;
                        }
                        while (j <= i)
                        {
                                putchar(35);
                                j++;
                        }
                        i++;
                        k = i + 1;
                        j = 0;
                        putchar('\n');
                }
        }
        else
        {
                putchar('\n');
        }
    return 0;
}
