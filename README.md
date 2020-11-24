Libft project.

Creation of a library containing an extracts of the functions required for the cursus.

The norme must be respected.

The functions should not stop unexpectedly (segfault, bus error, double free, etc ...) expect in case of undefined behavior.

Any memory allocated on the heap should be freed when necessary, no leak will be accepted.


A Makefile is requested :

It does not relink.
It must at least contains the rules $(NAME), all, clean, fclean and re.
It will compile the sources using the flags -Wall, -Wextra and -Werror.
Contains a rule bonus for the bonus.


To return the bonus, the files .c and .h must contains _bonus at the end of the name before the .c or .h, example "ft_lstmap_bonus.c".

Evaluations of compulsory part and bonus part will be separate.

The files .c, .h and the Makefil must be at the root of the folder.

Prohibition to use global variables.

If auxiliary functions for writing a complex function is needed, these functions must be written as static in the respect of the norme.

The command 'ar' must be use to create the library, libtool command is forbidden.