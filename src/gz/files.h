#ifndef FILE_H
#define FILE_H
#include "menu.h"

enum get_file_mode
{
  GETFILE_LOAD,
  GETFILE_SAVE,
};

typedef int (*get_file_callback)(const char *path, void *data);

void menu_get_file(struct menu *menu, enum get_file_mode mode,
                   const char *defname, const char *suffix,
                   get_file_callback callback_proc, void *callback_data);

#endif
