#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <freecoin/io.h>
#include <freecoin/transactions.h>
#include <freecoin/util.h>
#include <freecoin/shared.h>
#include <freecoin/blocks.h>
#include <freecoin/secrets.h>

void cmd_newaddr()
{
    printf("Generating new address\n");
    crypt_keygen();
}

int main(int argc, char **argv)
{
    init();
    if (argc == 2)
    {
        if (strcmp(argv[1], "newaddr") == 0)
            cmd_newaddr();
    }
    return 0;
}