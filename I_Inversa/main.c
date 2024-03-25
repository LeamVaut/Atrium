#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "3jd9cjfk98hnd";
    int length = strlen(str);
    int result = 0;

    for (int i = 0; i < length; i++) {
        result += (int)str[i] * length;
    }

    printf("[+] Codigo generado: %i\n", result);

    return 0;
}
