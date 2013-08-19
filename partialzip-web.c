#include <stdio.h>
#include "common.h"
#include "partial/partial.h"

/*
 * partialzip - web version
 */

int main(int argc, char* argv[]) {

	if (argc < 2)
	{
		return 1;
	}

	char* url = argv[1];
	char* remotefile = argv[2];

	ZipInfo* info = PartialZipInit(url);
	if(!info)
	{
		printf("Cannot find %s\n", url);
		return 1;
	}

	if (remotefile == NULL)
	{
		PartialZipListFiles(info);
		return 0;
	}

	CDFile* file = PartialZipFindFile(info, remotefile);
	if(!file)
	{
		printf("Cannot find %s in %s\n", remotefile, url);
		return 1;
	}

	unsigned char* data = PartialZipGetFile(info, file, NULL);
	int dataLen = file->size;

	PartialZipRelease(info);

	data = realloc(data, dataLen + 1);
	data[dataLen] = '\0';

	printf("%s", data);

	free(data);

	return 0;
}
