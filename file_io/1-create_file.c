#include "main.h"

/**
 * create_file-gets input
 * @filename: stores file input
 * @text_content: stores characters
 * Return: results
 * */

int create_file(const char *filename, char *text_content)
{
	/* create variables*/
	int new ;
	ssize_t amount;

	if (filename == NULL)
		return(-1);
	/*check if filename is null*/

	new = open(filename, O_WRONLY|O_CREAT|O_TRUNC,0600);
	/**
	 * use open to creat a file using o_wronly to make it read only,
	 * 0_creat to creat the file if it doesnt exist, 
	 * 0_trunc to truncate the name if the file already exists
	 * 0600 to give the permision read write permision to the file
	 */
	if (new == -1)
		return (-1);
	/* if new failes returns -1*/
	if (text_content != NULL) /*makes sure this part only works if its not null*/
	{
		amount = write(new,text_content, strlen(text_content));
		if (amount == -1)
		{
			close(new);
			return (-1);
		}
	}
	close(new);
	return (1);
}
