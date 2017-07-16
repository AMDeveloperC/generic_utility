# include <stdlib.h>
# include <string.h>
# include <stdio.h>

# define MAXLINE 200
# define MAXCHAR 100
# define MAX 256


/**
 * When this function is called, you can isert data and he will write them into the file
 */
void writeByCharacter(char * file) {
   FILE *fp;
   int c;

	if ((fp = fopen(file, "w")) == NULL) {
		fprintf(stderr, "impossible to open \t%s\n", file);
		exit(-1);
	}
   else
      while((c = getchar()) != '\n')
         fputc(c, fp);
   fclose(fp);
}


/**
 * Read row by row from the specified file
 * Useful function for application where one by one row processing is required
 **/
void readObeByOne(char * buff, char * file) {
	FILE * fp;

	if((fp = fopen(file, "r")) == NULL) {
		fprintf(stderr,"impossible to open \t%s\n", file);
		exit(-1);
	}
	int i=0;
	while(fgets(buff, MAXLINE, fp) != NULL) {
		printf("Riga %d: ", i);
		printf("%s\n", buff);
		i++;
	}

	return;
}


/**
 * Return the whole file content in a single string
 **/
char * readFromFile(char * file) {
	FILE * fp;
	int i = 0;
	char c;
	char * s = (char *) malloc (MAXCHAR * sizeof(char)); // file content

	if((fp = fopen(file, "r")) == NULL) {
		fprintf(stderr,"impossible to open \t%s\n", file);
		exit(-1);
	}
	else {
		while(!(feof(fp))) {
			if((c = fgetc(fp)) != EOF)
				s[i++] = c;
			else break;
		}
	}

	fclose(fp);
	return s;
}


/**
 * Write the specified string into the specified file
 **/
void writeToFile(char * buff, char * file) {
	FILE * fp;
	char c;
	int i = 0;

	if((fp = fopen(file, "w")) == NULL) {
		fprintf(stderr,"impossible to open \t%s\n", file);
		exit(-1);
	}
	else {
		while((c = buff[i++]) != '\0')
			fputc(c,fp);
	}

	fclose(fp);
	return;
}

/**
 * Split the string into the array by specified separator.
 * Return a vector with each string into the cell
 **/
char ** split(char * str, char * sep, int * size) {
	char * app = strdup(str);
	char * token;
	char ** vect = malloc(MAX * sizeof(char *));
	* size = 0;

	while((token = strsep(&app, sep)) != NULL)
		vect[(* size)++] = strdup(token);

	free(token);
	free(app);

	return vect;
}

/**
 * Print the specified array.
 **/
void printArray(char ** arr, int size) {
	int i = 0;

	while((i < size) && (arr[i] != NULL))
		fprintf(stdout,"token: %s\n",arr[i++]);
}

/**
 * Just check if space is enaugh
 **/
void * xmalloc(int nbytes) {
	void *result;
	if ((result = malloc(nbytes)) == NULL) {
		fprintf(stderr, "malloc(%d) failed. Exiting.\n", nbytes);
		exit (-1);
	}
	return result;
}

/**
 * Compute the factorial of an integer given
 **/
int fattoriale(int i) {
	if (i == 0 || i == 1)
		return 1;
	else
		return fattoriale(i - 1) * i;
}
