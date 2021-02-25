project('coeder', 'c',
  version : '1.0.0',
  license : 'GPLv3'
)

# Dependencies
gtk = dependency('gtk+-3.0')
gtksourceview = dependency('gtksourceview-3.0')

executable(
    'coeder',
    'src/main.c',
    'src/eventhandler.c',
    dependencies : [gtk, gtksourceview]
)
