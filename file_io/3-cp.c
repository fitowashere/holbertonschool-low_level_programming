#include "main.h"

/**
 * main - gets input
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: results
 */

int main(int argc, char *argv[])
{
	int f, t, c1, c2;
	char *_f = argv[1];
	char *_t = argv[2];
	char *buff[1024];

	if (argc != 3)
		argc_fail();

	f = open(_f, O_RDONLY);
	if (f == -1 || _f == NULL)
		error_and_exit("Can't read from file", _f, 98);

	t = open(_t, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (t == -1 || _t == NULL)
		error_and_exit("Can't write to", _t, 99);

	while (1)
	{
		c1 = read(f, buff, 1024);
		if (c1 == 0)
			break;
		if (c1 == -1)
			error_and_exit("Can't read from file", _f, 98);

		c2 = write(t, buff, c1);
		if (c2 == -1)
			error_and_exit("Can't write to", _t, 99);
	}

	if (close(f) == -1)
		error_and_exit("Can't close fd", _f, 100);

	if (close(t) == -1)
		error_and_exit("Can't close fd", _t, 100);

	return (0);
}

/**
 * argc_fail - gets input
 */

void argc_fail(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_and_exit - gets input
 * @message: stores message
 * @filename: stored filename
 * @exit_code: estores exit
 */

void error_and_exit(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
	exit(exit_code);
}
