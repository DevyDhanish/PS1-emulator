#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*
    TEST READING A PS1 ROM FILE ( silent hill )
*/


//const char *path = "test rom/Silent Hill (USA)/Silent Hill (USA).bin";
const char *path =  "bios/SCPH1001.BIN";
#define MAX 616494480
uint8_t rombyte[MAX];  

int main()
{
    FILE *rom = fopen(path, "rb");
    uint8_t c = 0x00;
    
    if(!rom) 
    {
        printf("Error read the file\n");
        return 0;
    }

    for(int i = 0; i < MAX && (c = fgetc(rom)) != EOF; i++)
    {
        printf("%x ", c);

        if(i % 16 == 15)
        {
            break;
            printf("\n");
        }
    }

    printf("%s\n", "Done reading the file at ", path);
    fclose(rom);

    return 0;
}