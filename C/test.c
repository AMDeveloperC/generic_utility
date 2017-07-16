# include "utilsFunction.h"

/* Just test if functions are correct */
int main(void) {
	char s[] = "Darksiders is a really nice videogame!!!!";

	// test for writeToFile(), printArray() and split() functions
	int dim;
	writeToFile(s, "file");
	char ** splitted = split(strdup(readFromFile("file")), " ", &dim);
	printArray(splitted, dim);

	// test for readObeByOne() and writeByCharacter functions
	char str[300];
	readObeByOne(str, "file");
	writeByCharacter("file");

	return 0;
}
