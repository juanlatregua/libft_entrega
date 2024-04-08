/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:37:21 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 16:58:15 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//LIBC FUNCTIONS//
// PART 1//
//write to file descriptor//
int		ft_isalpha(int c);
/*verifica si un carácter dado es una letra del alfabeto
- devuelve 1 si es una letra del alfabeto, 0 en caso contrario
- c: carácter a comprobar*/

int		ft_isdigit(int c);
/* verifica si un carácter dado es un dígito
- devuelve 1 si es un dígito, 0 en caso contrario
- c: carácter a comprobar*/

int		ft_isalnum(int c);
/* verifica si un carácter dado es un dígito o una letra del alfabeto
@ devuelve 1 si es un dígito o una letra del alfabeto, 0 en caso contrario
@ c: carácter a comprobar*/
int		ft_isascii(int c);
/*
@ verifica si un carácter dado es un carácter ASCII
@ devuelve 1 si es un carácter ASCII, 0 en caso contrario
@ c: carácter a comprobar */
int		ft_isprint(int c);
/*
@ verifica si un carácter dado es un carácter imprimible
@ devuelve 1 si es un carácter imprimible, 0 en caso contrario
@ c: carácter a comprobar*/
int		ft_toupper(int c);
/* @ convierte un carácter dado en mayúsculas
@ devuelve el carácter convertido en mayúsculas
@ c: carácter a convertir*/

int		ft_tolower(int c);
/*
@ convierte un carácter dado en minúsculas
@ devuelve el carácter convertido en minúsculas
@ c: carácter a convertir*/

// PART 2 
// Manipula strings y memoria dinámica //

size_t	ft_strlen(const char *s);
/*
@ calcula la longitud de una cadena
@ devuelve la longitud de la cadena
@ s: cadena a medir un puntero a la cadena*/

void	*ft_memset(void *s, int c, size_t n);
/*
@ rellena un bloque de memoria con un valor dado
@ devuelve un puntero a la memoria rellenada
@ s: bloque de memoria a rellenar
@ c: valor a rellenar
@ n: número de bytes a rellenar*/

void	ft_bzero(void *s, size_t n);
/*@ rellena un bloque de memoria con ceros
@ s: bloque de memoria a rellenar
@ n: número de bytes a rellenar*/

void	*ft_memcpy(void *dest, const void *src, size_t n);
/*
@ copia un bloque de memoria de un lugar a otro
@ devuelve un puntero a la memoria copiada
@ dest: bloque de memoria de destino
@ src: bloque de memoria de origen
@ n: número de bytes a copiar*/

void	*ft_memmove(void *dst, const void *src, size_t n);
/*
@ copia un bloque de memoria de un lugar a otro, incluso si se solapan
@ devuelve un puntero a la memoria copiada
@ dest: bloque de memoria de destino
@ src: bloque de memoria de origen
@ n: número de bytes a copiar*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

//@ copia una cadena en otra
//@ devuelve la longitud de la cadena de origen 
//y se asegura de que la cadena de destino esté terminada en '\0'
//@ dest: cadena de destino
//@ src: cadena de origen
//@ size: tamaño del buffer de destino
//@ ft_strlen: calcula la longitud de una cadena

size_t	ft_strlcat(char *dst, const char *src, size_t size);
//@ concatena dos cadenas
//@ devuelve la longitud de la cadena de origen 
//y se asegura de que la cadena de destino esté terminada en '\0'
//@ dst: cadena de destino (debe tener espacio para el tamaño de src + 1)
//@ src: cadena de origen (cadena que se va a añadir a dst)
//@ size: tamaño del buffer de destino (tamaño de dst)

char	*ft_strchr(const char *s, int c);

//@ variables de longitud de cadena de búsqueda de caracteres 
//en una cadena dada (incluido el terminador nulo)
//@ devuelve un puntero al primer carácter encontrado o NULL si no se encuentra
//@ s: cadena en la que buscar
//@ c: carácter a buscar
//@ const char *: puntero a la cadena
//@ casteo a unsigned char: para que el valor de c pueda ser EOF (-1)
//@ NULL: si no se encuentra el carácter
//@ return (ptr): puntero al carácter encontrado

char	*ft_strrchr(const char *str, int c);

//@ variables de longitud de cadena de búsqueda de caracteres 
//en una cadena dada (incluido el terminador nulo)
//@ devuelve un puntero al último carácter encontrado o NULL si no se encuentra
//@ s: cadena en la que buscar
//@ c: carácter a buscar
//@ const char *: puntero a la cadena
//@ casteo a unsigned char: para que el valor de c pueda ser EOF (-1)
//@ ptr = NULL (si no se encuentra el carácter) 
//o ptr = s (si se encuentra el carácter)
//@ return (ptr): puntero al carácter encontrado

int		ft_strncmp(const char *s1, const char *s2, size_t n);

//@ compara dos cadenas con un número máximo de caracteres n 
//(incluido el terminador nulo) 
//@ devuelve un entero menor que, igual a, o mayor que 
//cero si s1 es menor que, igual a, o mayor que s2
//@ s1: cadena a comparar
//@ s2: cadena a comparar
//@ n: número de caracteres a comparar

void	*ft_memchr(const void *s, int c, size_t n);

//@ variables de longitud de cadena de búsqueda de caracteres 
//en una cadena dada (incluido el terminador nulo)
//@ devuelve un puntero al primer carácter encontrado o NULL si no se encuentra
//@ s: cadena en la que buscar
//@ c: carácter a buscar
//@ n: número de caracteres a buscar
//@ const void *: puntero a la cadena (void *: puntero genérico)
//@ casteo a unsigned char: para que el valor de c pueda ser EOF (-1)
//@ NULL: si no se encuentra el carácter
//@ return (ptr): puntero al carácter encontrado

int		ft_memcmp(void *dest, const void *src, size_t n);

//@ compara dos bloques de memoria con un número máximo de caracteres n
//@ devuelve un entero menor que, igual a, o mayor que cero 
//si s1 es menor que, igual a, o mayor que s2
//@ s1: bloque de memoria a comparar
//@ s2: bloque de memoria a comparar
//@ n: número de caracteres a comparar

char	*ft_strnstr(const char *string, const char *substring, size_t len);

//@ variables de longitud de cadena de búsqueda de caracteres 
//en una cadena dada (incluido el terminador nulo)
//@ devuelve un puntero al primer carácter encontrado o NULL si no se encuentra
//@ string: cadena en la que buscar
//@ substring: cadena a buscar
//@ len: número de caracteres a buscar
//@ const char *: puntero a la cadena
//@ casteo a unsigned char: para que el valor de c pueda ser EOF (-1)
//@ NULL: si no se encuentra el carácter
//@ return (ptr): puntero al carácter encontrado

// PART 3 //
// Manipula strings y memoria dinámica //
int		ft_atoi(const char *str);

//@ convierte una cadena en un entero
//@ devuelve el entero convertido
//@ str: cadena a convertir
//@ int: entero convertido
//@ signo = 1: positivo
//@ signo = -1: negativo
//@ return (signo * result): entero convertido con signo (positivo o negativo)

void	*ft_calloc(size_t nmemb, size_t size);

//@ reserva memoria para un array de nmemb elementos de tamaño size 
//cada uno y devuelve un puntero a la memoria reservada
//@ devuelve un puntero a la memoria reservada
//@ nmemb: número de elementos
//@ sizeof (size): tamaño de cada elemento
//@ return (ptr): puntero a la memoria reservada

char	*ft_strdup(const char *src);

//@ reserva memoria para una copia de una cadena y devuelve un puntero a ella
//@ devuelve un puntero a la cadena duplicada
//@ src: cadena a duplicar
//@ ft_strlen: calcula la longitud de una cadena
//@ ft_strcpy: copia una cadena en otra
//@ return (ptr): puntero a la cadena duplicada

//NONLIBC FUNCTIONS Manipula strings y memoria dinámica //

char	*ft_substr(char const *s, unsigned int start, size_t len);

//@ crea una nueva cadena a partir de una cadena existente
//@ devuelve la nueva cadena
//@ s: cadena de la que se va a crear la nueva cadena
//@ start: índice de la cadena de origen 
//desde el que se va a crear la nueva cadena
//@ len: longitud de la nueva cadena
//@ ft_strlen: calcula la longitud de una cadena
//@ ft_strlcpy: copia una cadena en otra
//@ return (ptr): puntero a la nueva cadena

char	*ft_strjoin(char const *s1, char const *s2);

//@ crea una nueva cadena a partir de dos cadenas existentes
//@ devuelve la nueva cadena
//@ s1: primera cadena de la que se va a crear la nueva cadena
//@ s2: segunda cadena de la que se va a crear la nueva cadena
//@ ft_strlen: calcula la longitud de una cadena
//@ ft_strlcpy: copia una cadena en otra
//@ ft_strlcat: concatena dos cadenas
//@ return (ptr): puntero a la nueva cadena

char	*ft_strtrim(char const *s1, char const *set);

//@ crea una nueva cadena a partir de una cadena 
//existente eliminando los caracteres dados
//@ devuelve la nueva cadena
//@ s1: cadena de la que se va a crear la nueva cadena
//@ set: caracteres a eliminar
//@ ft_strlen: calcula la longitud de una cadena
//@ ft_strlcpy: copia una cadena en otra
//@ ft_strlcat: concatena dos cadenas
//@ return (ptr): puntero a la nueva cadena

char	**ft_split(char const *s, char c);
//@ devuelve un array de strings separa 's' mediante 'c'
//usa un delimitador
//1. cuenta el número de palabras en el string con la ayuda del delimitador
//devuelve el numero de palabras
//2. cuenta las letras que hay en cada palabra
//3. libero la memoria del array
//4. guardo en una variable el número de palabras
//reserva la memoria para el array de strings
//bucle i menor al numero de palabras y s no sea nulo
//dentro del bucle si es un delimitador pasa al siguiente
//cuenta las letras tiene cada palabra
//reserva la memoria
//libera memoria y devuelve 0 si no hay
//pasa de palabra, si termina el 0 devuelve el array

char	*ft_itoa(int n);

//@ convierte un entero en una cadena
//@ devuelve la cadena convertida
//@ n: entero a convertir
//@ ft_strlen: calcula la longitud de una cadena
//@ ft_calloc: reserva memoria para un array de nmemb 
//elementos de tamaño size cada uno y devuelve un puntero a la memoria reservada
//@ return (ptr): puntero a la cadena convertida

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

//@ aplica una función a cada carácter de una cadena
//@ devuelve la cadena convertida
//@ s: cadena a convertir
//@ f: función a aplicar
//@ ft_strlen: calcula la longitud de una cadena
//@ ft_calloc: reserva memoria para un array de nmemb 
//elementos de tamaño size cada uno y devuelve un puntero a la memoria reservada
//@ return (ptr): puntero a la cadena convertida

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

//@ aplica una función a cada carácter de una cadena
//@ s: cadena a convertir
//@ f: función a aplicar
//@ ft_strlen: calcula la longitud de una cadena
//@ ft_calloc: reserva memoria para un array de 
//nmemb elementos de tamaño size cada uno 
//y devuelve un puntero a la memoria reservada
//@ return (ptr): puntero a la cadena convertida
//
// ADITIONAL FUNCTIONS  ESCRIBE EN LA SALIDA ESTÁNDAR O EN UN ARCHIVO //
void	ft_putchar_fd(char c, int fd);

//@ escribe un carácter en la salida estándar
//@ c: carácter a escribir
//@ fd: descriptor de archivo
//@ write: escribe en un descriptor de archivo
//@ return (ptr): puntero a la cadena convertida

void	ft_putstr_fd(char *s, int fd);

//@ escribe una cadena en la salida estándar
//@ s: cadena a escribir
//@ fd: descriptor de archivo
//@ write: escribe en un descriptor de archivo
//@ return (ptr): puntero a la cadena convertida

void	ft_putendl_fd(char *s, int fd);

//@ escribe una cadena en la salida estándar seguida de un salto de línea
//@ s: cadena a escribir
//@ fd: descriptor de archivo
//@ write: escribe en un descriptor de archivo
//@ return (ptr): puntero a la cadena convertida

void	ft_putnbr_fd(int n, int fd);

//@ escribe un entero en la salida estándar
//@ n: entero a escribir
//@ fd: descriptor de archivo
//@ write: escribe en un descriptor de archivo
//@ return (ptr): puntero a la cadena convertida

//BONUS FUNCTIONS//
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
//@ reserva memoria para un nuevo elemento 
//y lo inicializa con el valor de content
//@ devuelve el nuevo elemento
//@ content: valor del nuevo elemento
//@ ft_calloc: reserva memoria para un array de nmemb 
//elementos de tamaño size cada uno y devuelve un puntero a la memoria reservada
//@ return (ptr): puntero al nuevo elemento

void	ft_lstadd_front(t_list **lst, t_list *new);

//@ añade un elemento al principio de una lista
//@ devuelve nada
//@ lst: dirección del puntero al primer elemento de la lista
//@ new: elemento a añadir
//@ return (ptr): puntero al nuevo elemento

int		ft_lstsize(t_list *lst);
//@ calcula el número de elementos de una lista
//@ devuelve el número de elementos
//@ lst: lista de la que se va a calcular el tamaño
//@ return (i): número de elementos

t_list	*ft_lstlast(t_list *lst);
//@ devuelve el último elemento de una lista
//@ devuelve el último elemento
//@ lst: lista de la que se va a devolver el último elemento
//@ return (ptr): puntero al último elemento

void	ft_lstadd_back(t_list **lst, t_list *new);
//@ añade un elemento al final de una lista
//@ lst: dirección del puntero al primer elemento de la lista
//@ new: elemento a añadir
//@ return (ptr): puntero al nuevo elemento

void	ft_lstdelone(t_list *lst, void (*del)(void*));
//@ elimina un elemento de una lista
//@ lst: elemento a eliminar
//@ del: función que elimina el contenido de un elemento
//@ return (ptr): puntero al nuevo elemento

void	ft_lstclear(t_list **lst, void (*del)(void*));
//@ lst: elemento a eliminar
//@ del: función que elimina el contenido de un elemento
//@ return (ptr): puntero al nuevo elemento

void	ft_lstiter(t_list *lst, void (*f)(void *));
//@ aplica una función a cada elemento de una lista
//@ lst: lista a iterar
//@ f: función a aplicar
//@ return (ptr): puntero al nuevo elemento

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
//@ aplica una función a cada elemento de una lista
//@ lst: lista a iterar
//@ f: función a aplicar
//@ del: función que elimina el contenido de un elemento
//@ return (ptr): puntero al nuevo elemento

#endif
