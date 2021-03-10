typedef unsigned char byte;
typedef unsigned short word;

#ifndef O_BINARY
#define O_BINARY 0
#endif

typedef struct {
  word lump_hi;
  word lump_lo;
  word eof;
  byte flags;
  word date;
  word time;
  byte flags2;
  char filename[21];
  } DIR_ENT;

typedef union {
  byte    data[512];
  word    au[256];
  } SECTOR;

typedef struct {
  long   offset;
  SECTOR dta;
  word   eof;
  byte   flags;
  long   dir_sector;
  word   dir_offset;
  long   current_sector;
  } FILDES;

int    disk_file;
SECTOR sector;
int    dirsec;
FILDES cwd;
byte   path[1024];
SECTOR esec;
long   sec_num;
int    width;
int    fileCount;
int    auCount;
int    orphans;
byte   map[8192];

