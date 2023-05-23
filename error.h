#ifndef _ERROR_H_
#define _ERROR_H_



/* Common Error */
#define ERR_BAD_MALL	101

void err_msg(int errno, char *opcode, unsigned int line, char *buff);

#endif /* ERROR */
