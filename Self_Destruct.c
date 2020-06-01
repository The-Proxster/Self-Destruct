#include <stdio.h>
#include <stdlib.h>

int main(int c, char *argv[]) {
	FILE *outfile;
	outfile = fopen("test.txt", "w");
	if (outfile == NULL) {
		fprintf(stderr, "\nError opening file\n");
		exit(1);
	}

	fprintf(outfile, "The file you just used should be deleted.\n");

	if (fwrite != 0) {
		printf("Contents to file written successfully!\n");
	} else {
		printf("Error writing to file!");
	}
	fclose(outfile);
	remove(argv[0]);
}
