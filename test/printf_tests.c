#include <stdio.h>
#include <limits.h>


int main(void)
{
	int len;
	int len2;
	/* Some tests with 1 arg */

	printf("Regular String--------------------\n");
	printf("\n\"hello\"----------------\n");
	len = printf("hello");
	printf("\n");
	len2 = printf("hello");
	if(len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n\"%\"--------------------\n");
	len = printf("%");
	printf("\n");
	len2 = printf("%");
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n\"\"---------------------\n");
	len = printf("");
	printf("\n");
	len2 = printf("");
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n----------------\n");
	printf("\nPercent Modifier----------------\n");
	len = printf("\n\"%%%%\"-------------------\n");
	printf("\n");
	len2 = printf("\n\"%%%%\"-------------------\n");
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("%%");
	len = printf("\n\"%%%%%%\"------------------\n");
	printf("\n");
	len2 = printf("\n\"%%%%%%\"------------------\n");
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("%%%");
	len = printf("\n\"%%%% %%\"-----------------\n");
	printf("\n");
	len2 = printf("\n\"%%%% %%\"-----------------\n");
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("%% %");
	len = printf("\n\"%% %%%%\"-----------------\n");
	printf("\n");
	len2 = printf("\n\"%% %%%%\"-----------------\n");
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("% %%");
	printf("\n-------");

	printf("\n----------------\n");
	printf("\nCharacter Modifier----------------\n");
	printf("\n(\"%%c\", 'c')----------------\n");
	len = printf("%c", 'c');
	printf("\n");
	len2 = printf("%c", 'c');
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\", NULL)----------------\n");
	len = printf("%c", NULL);
	printf("\n");
	len2 = printf("%c", NULL);
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\", '\\0')----------------\n");
	len = printf("%c", '\0');
	printf("\n");
	len2 = printf("%c", '\0');
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\", '\\n')----------------\n");
	len = printf("%c", '\n');
	printf("\n");
	len2 = printf("%c", '\n');
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\", '\\t')----------------\n");
	len = printf("%c", '\t');
	printf("\n");
	len2 = printf("%c", '\t');
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\", \"hello world\")----------------\n");
	len = printf("%c", "hello world");
	printf("\n");
	len2 = printf("%c", "hello world");
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\", \"ggg\")----------------\n");
	len = printf("%c", "ggg");
	printf("\n");
	len2 = printf("%c", "ggg");
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\")----------------\n");
	len = printf("%c");
	printf("\n");
	len2 = printf("%c");
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"[%%c]\")----------------\n");
	len = printf("[%c]");
	printf("\n");
	len2 = printf("[%c]");
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"[%%%%%%c]\", 'c')----------------\n");
	len = printf("[%%%c]", 'c');
	printf("\n");
	len2 = printf("[%%%c]", 'c');
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"[%%%%%%c]\", 'c')----------------\n");
	len = printf("[%%%c]", 'c');
	printf("\n");
	len2 = printf("[%%%c]", 'c');
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c, %%c\", 'c')----------------\n");
	len = printf("%c, %c", 'c');
	printf("\n");
	len2 = printf("%c, %c", 'c');
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\", 'c', 'c')----------------\n");
	len = printf("%c", 'c', 'c');
	printf("\n");
	len2 = printf("%c", 'c', 'c');
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%c\", 48)----------------\n");
	len = printf("%c", 48);
	printf("\n");
	len2 = printf("%c", 48);
	if (len != len2) {
		printf("\nLengths on't match");
	}
	printf("\n---------------------\n");



	printf("\nString Modifier----------------\n");
	printf("\n---------------------\n");
	printf("\n(\"%%s\", \"String was here\")----------------\n");
	len = printf("%s", "String was here");
	printf("\n");
	len2 = printf("%s", "String was here");
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%s\", NULL)----------------\n");
	len = printf("%s", NULL);
	printf("\n");
	len2 = printf("%s", NULL);
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%s\", \"\")----------------\n");
	len = printf("%s", "");
	printf("\n");
	len2 = printf("%s", "");
	if (len != len2) {
		printf("\nLengths don't match");
	}

	printf("\n(\"%%s\", \"string\", NULL)----------------\n");
	len = printf("%s, %s", "string", NULL);
	printf("\n");
	len2 = printf("%s, %s", "string", NULL);
	if (len != len2) {
		printf("\nLengths don't match");
	}

	/*
	printf("\n(\"%%s, %%s\", \"string\")----------------\n");
	len = printf("%s, %s", "string");
	printf("\n");
	len2 = printf("%s, %s", "string");
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");
	*/



	printf("\nInt Modifier----------------\n");
	printf("\n---------------------\n");

	printf("\n(\"%%i\", 5)----------------\n");
	len = printf("%i", 5);
	printf("\n");
	len2 = printf("%i", 5);
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");

	printf("\n(\"%%i\", -5)----------------\n");
	len = printf("%i", -5);
	printf("\n");
	len2 = printf("%i", -5);
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");


	printf("\n(\"%%i\", 15)----------------\n");
	len = printf("%i", 15);
	printf("\n");
	len2 = printf("%i", 15);
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");


	printf("\n(\"%%i\", 'c')----------------\n");
	len = printf("%i", 'c');
	printf("\n");
	len2 = printf("%i", 'c');
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");


	printf("\n(\"%%i\", NULL)----------------\n");
	len = printf("%i", NULL);
	printf("\n");
	len2 = printf("%i", NULL);
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");


	printf("\n(\"%%i\", '\0')----------------\n");
	len = printf("%i", '\0');
	printf("\n");
	len2 = printf("%i", '\0');
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");


	printf("\n(\"%%i\", INT_MAX)----------------\n");
	len = printf("%i", INT_MAX);
	printf("\n");
	len2 = printf("%i", INT_MAX);
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");


	printf("\n(\"%%i\", INT_MIN)----------------\n");
	len = printf("%i", INT_MIN);
	printf("\n");
	len2 = printf("%i", INT_MIN);
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");


	printf("\n(\"%%i\", 0xa)----------------\n");
	len = printf("%i", 0xa);
	printf("\n");
	len2 = printf("%i", 0xa);
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");
	printf("\nDecimal Modifier----------------\n");
	printf("\n---------------------\n");


	printf("\n(\"%%d\", 5.6)----------------\n");
	len = printf("%d", 5.6);
	printf("\n");
	len2 = printf("%d", 5.6);
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");


	printf("\n(\"%%d\", 'c')----------------\n");
	len = printf("%d", 'c');
	printf("\n");
	len2 = printf("%d", 'c');
	if (len != len2) {
		printf("\nLengths don't match");
	}
	printf("\n---------------------\n");



	printf("\nEND---------------------\n");
	return (0);

}
