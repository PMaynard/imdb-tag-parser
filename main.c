/* 
 * File: 	main.c 
 * Author: 	Pete Maynard
 * Date: 	23rd May 2012
 */
/*

Function to read a file

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datatypes.h"

void LoadFile(char* file);
void AddFilm(char* film);
void AddTag(char* tag);

int main(int argc, char** argv)
{
	if(argc !=2)
	{
		fprintf(stderr, "Usage: %s string - TagLine File.\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	/* Load the specified file */
	LoadFile(argv[1]);
	return 0;
}

/* This will load the file into memory */
void LoadFile(char* file)
{
	printf("{%s}\n", file);
    	FILE *file_ptr;
    	file_ptr = fopen(file, "rt");

    	if( file_ptr != NULL)
	{
        	char line[LINE_MAX];
        	while( fgets(line, LINE_MAX, file_ptr) != NULL )
		{
			/* Store the film in memory */
			if(strstr(line, "#")!=NULL)
			{
				AddFilm(line);
			}
			if(strstr(line, "\t")!=NULL)
			{
				AddTag(line);
			}
		}
	}
}

void AddFilm(char* film){
	printf("Film: %s", film);
}

void AddTag(char* tag){
	printf("Tag: %s", tag);
}
