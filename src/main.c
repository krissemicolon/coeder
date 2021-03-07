#include <stdlib.h>  
#include <stdio.h>
#include <gtk/gtk.h>
#include <gtksourceview/gtksource.h>

#include "include/main.h"
#include "include/eventhandler.h"
#include "include/file.h"

int main() {
    printf("%s\n", filecontent("src/main.c"));

    return 0;
}
