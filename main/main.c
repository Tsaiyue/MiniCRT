// #include "minicrt.h"

// int main(int argc, char* argv[])
// {   
//     printf("********** Welcome to MiniCRT! **********\n");
// 	int i;
// 	FILE* fp;
// 	int len;
// 	char** v = malloc(argc * sizeof(char*));
// 	for(i=1; i<argc; i++) {
// 		v[i] = malloc(strlen(argv[i]) + 1);
// 		strcpy(v[i], argv[i]);
// 		len = strlen(v[i]);
// 		printf("%d %s\n", len, v[i]);
// 	}
	
// 	// After file I/O operation, printf cannot
// 	// get the correct input(:=format)
// 	fp = fopen("test.txt", "w");
// 	for(i=1; i<argc; ++i) {
// 		int len = strlen(v[i]);
// 		fwrite(&len, 1, sizeof(int), fp);
// 		fwrite(v[i], 1, len, fp);
// 		free(v[i]);
// 		// printf("success!\n");
// 	}
// 	free(v);
// 	fclose(fp);
// 	printf("success!\n");	
// 	// fp = fopen("test.txt", "r");
// 	// for(i=1; i<argc; ++i) {
// 	// 	int len = strlen(v[i]);
// 	// 	len = 5;
// 	// 	char* buf;
// 	// 	fread(&len, 1, sizeof(int), fp);
// 	// 	buf = malloc(len + 1);
// 	// 	fread(buf, 1, len, fp);
// 	// 	buf[len] = '\0';
// 	// 	printf("%d %s\n", len, buf);
// 	// 	free(buf);
// 	// 	free(v[i]);
// 	// }
// 	// fclose(fp);
// 	return 1;
// }

#include "minicrt.h"

int main(int argc, char *argv[])
{
	printf("********** Welcome to MiniCRT! **********\n");

#if 0
    int i;
    FILE *fp;
    long *len = malloc(sizeof(long));
    char **v = malloc(argc * sizeof(char *));
    for (i = 0; i < argc; ++i)
    {
        v[i] = malloc(strlen(argv[i]) + 1);
        strcpy(v[i], argv[i]);
    }

    fp = fopen("test.txt", "w");
    for (i = 0; i < argc; ++i)
    {
        // long len = strlen(v[i]);
        *len = strlen(v[i]);
        fwrite(len, 1, sizeof(long), fp);
        fwrite(v[i], 1, *len, fp);
    }
    fclose(fp);

    fp = fopen("test.txt", "r");  
    for (i = 0; i < argc; ++i)
    {
        // long len = 0;
        char *buf;
        fread(len, 1, sizeof(long), fp);
        buf = malloc(*len + 1);
        fread(buf, 1, *len, fp);
        buf[*len] = '\0';
        printf("%d %s\n", *len, buf);
        free(buf);
        free(v[i]);
    }
    fclose(fp);
#endif

    printf("Hello World For Fun!\n");
	printf("************ End to MiniCRT! ************\n");
	
    return 0;
}


