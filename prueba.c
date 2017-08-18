#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(int argc, char  **argv)
{
	int aflag= 0;
	int bflag= 0;
	char* cvalue=NULL;
	int index;
	int c;
	opterr=0;
	while ((c=getopt (argc, argv, "ab:c:") ) != -1){
		switch(c)
		{
			case 'a':
				aflag = 1;
				break;
			case 'b':
				sscanf(optarg, "%d", &bflag);
				break;
			case 'c':
				cvalue=optarg;
				break;
			/*case '?':
			if (optopt == 'c')
			{
			fprintf(stderr, "opcion -%c requiere un argumento\n", optopt );
			}
			else if (isprint (optopt)){

				fprintf(stderr, "opcion desconocida '-%c' \n",optopt );
			}
			else{
				fprintf(stderr, "opcion con caracter desconocido '\\x%x'.\n",optopt );
			}
			return 1;*/

			default:
			abort();
		}
		
	}
	printf("afalg= %d , bflag= %d , cvalue = %s \n", aflag,bflag,cvalue );

		return 0;

}