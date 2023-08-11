#include "main.h"

/**
 *read_textfile - gets input
 *@filename: stores input
 *@letters: stores input lenght
 *Return: Results
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*Declarations*/
	int Fd, ammount;
	char *txt = malloc(sizeof(char) * letters);

	if (txt == NULL || filename == NULL)
		return (0);
	/*open the file and stores it in filedescription "fd"*/
	Fd = open(filename, O_RDONLY);
	if (Fd == -1) /* if it fails return 0*/
		return (0);
	/*read the file and stores the data form fd into the 
     *new allocated memory that was created in txt
     */
	ammount = read(Fd, txt, letters); 
	txt[letters + 1] = '\0'; /* ads a null at the end of txt*/

	write(STDOUT_FILENO, txt, ammount);
    putchar(10);
	
	free(txt); /*Frees the allocated memory that was created*/
	close(Fd); /*closes the open file*/
	return (ammount);
} /*end fucntion*/