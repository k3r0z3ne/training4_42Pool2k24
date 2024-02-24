#include <unistd.h>

void    ft_print_comb2(void)
{
    char a;
    char b;
    char c;
    char d;
    char e;

    a = '0';
    b = '0';
    c = '0';
    d = '1';
    e = '0';
    while(a <= '9')
    {
            while(b <= '9')
            {
                while(c <= '9')
                {
                    while(d <= '9')
                    {
                        write(1, &a, 1);
                        write(1, &b, 1);
                        write(1, " ", 1);
                        write(1, &c, 1);
                        write(1, &d, 1);
                        write(1, ", ", 2);
                        d++;
                    }
                    c++;
                    d = e;
                }
                c = e;
                b++;
                d = b + 1;
            }
            a++;
            c = a + 1;
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_comb2();
    return(0);
}
