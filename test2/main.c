#include "mac.h"

int main(void)
{
    if (test1() == 0 && test2() == 0 && test3() == 0 && test4() == 0) {
        printf("Compilation effectuée avec succès\n");
        return (0);
    } else
        return (84);
}
