#include <stdio.h>
#include "/usr/include/elf.h"

int main(){
    Elf32_Ehdr a;
    Elf32_Shdr b;
    Elf64_Ehdr c;
    Elf64_Shdr d;
    printf("the size of Elf32_Ehdr=%ld\n",sizeof(a));
    printf("the size of Elf32_Shdr=%ld\n",sizeof(b));
    printf("------------------------\n");
    printf("the size of Elf64_Ehdr=%ld\n",sizeof(c));
    printf("the size of Elf64_Shdr=%ld\n",sizeof(d));
    return 0;
}