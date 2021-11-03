#include "main.h"
  /*builtin commands, and their corresponding functions.
*/
char *builtin_str[] =
{
	"cd",
	"help",
	"exit"
};

int (*builtin_func[]) (char **) =
{
	&lsh_cd,
	&lsh_help,
	&lsh_exit
};
