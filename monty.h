#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Alx project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_pusher(stack_t **head, unsigned int number);
void f_paller(stack_t **head, unsigned int number);
void f_pinter(stack_t **head, unsigned int number);
int executer(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stacker(stack_t *head);
void f_poper(stack_t **head, unsigned int counter);
void f_swaper(stack_t **head, unsigned int counter);
void f_adder(stack_t **head, unsigned int counter);
void f_noper(stack_t **head, unsigned int counter);
void f_suber(stack_t **head, unsigned int counter);
void f_diver(stack_t **head, unsigned int counter);
void f_muler(stack_t **head, unsigned int counter);
void f_moder(stack_t **head, unsigned int counter);
void f_pcharz(stack_t **head, unsigned int counter);
void f_pstrz(stack_t **head, unsigned int counter);
void f_rotler(stack_t **head, unsigned int counter);
void f_rotrer(stack_t **head, __attribute__((unused)) unsigned int counter);
void addernode(stack_t **head, int n);
void addqueues(stack_t **head, int n);
void f_queues(stack_t **head, unsigned int counter);
void f_stacks(stack_t **head, unsigned int counter);
#endif
