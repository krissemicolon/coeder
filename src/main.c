#include <stdlib.h> 
#include <gtk/gtk.h>
#include <gtksourceview-3.0/gtksourceview/gtksourceview.h>

#include "include/main.h"
#include "include/eventhandler.h"

GtkWidget *
GtkTextBuffer *buffer;

int main(int argc, char **argv) {
     GtkWidget *window, *pane, *editor

     window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
     g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

     pane = gtk_pane_new();
     gtk_container_add(GTK_CONTAINER(window), pane);



}