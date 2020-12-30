#include "greptail.h"
#include <zlib.h>

FILE f, c;
long pos;

int main(int argc, char ** argv) // <string> <file>
{
	if (argc < 3) die(); // Usage 
    int crc32 = crc32(0x80000000, argv[2], strlen(argv[2]));
    char crcfilename[128];
    snprintf(crcfilename, 128, "/tmp/.greptail-%d", crc32);
    c = fopen(crcfilename, "rw"); if (!f) die("Cant open file %s\n", crcfilename);
    fread(pos, c, 0, sizeof(pos));
    if (!pos) pos = 0;
	f = fopen(argv[2], "rb");     if (!f) die("Cant open file %s\n", argv[2]);
	
}

void die(va_list args)
{
  char str[256];
  snprintf(str, 256, args);
  perror(str);
  exit(4);
}

void Usage()
{
}