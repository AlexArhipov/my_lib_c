# my_lib_c
### Самописная библиотека на С
#### Данный проект был реализован в рамках обучения в Школе 21. Цель данного проекта: ознакомиться с основными функциями языка С, а также получить практический опыт в написании небольших программ. Для лучшего ознакомления ученикам школы предлагается переписать базовые функции, а также написать свои в соответствии с требованиями здания. Сборка библиотеки осуществляется с помощью Makefile.

#### Функции реализованнные в C:<br/>
>Функции без динамического выделения памяти:<br/>
>• memset; • bzero; • memcpy; • memccpy; • memmove; • memchr; • memcmp; • strlen; • strlcpy; • strlcat; • strchr; • strrchr; • strnstr;
>• strncmp; • atoi; • isalpha; • isdigit; • isalnum; • isascii; • isprint; • toupper; • tolower.

>Функции c динамическим выделением памяти:<br/>
>• calloc; • strdup
***
#### Функции не реализованнные в C:

>___char *ft_substr(char const *s, unsigned int start, size_t len);___<br/>
>Allocates (with malloc) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.

>___char *ft_strjoin(char const *s1, char const *s2);___<br/>
>Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

>___char *ft_strtrim(char const *s1, char const *set);___<br/>
>Allocates (with malloc) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

>___char **ft_split(char const *s, char c);___<br/>
>Allocates (with malloc) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.

>___char *ft_itoa(int n);___<br/>
>Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled.

>___char *ft_strmapi(char const *s, char (*f)(unsigned int, char));___<br/>
>Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc) resulting from successive applications of ’f’.

>___void ft_putchar_fd(char c, int fd);___<br/>
>Outputs the character ’c’ to the given file descriptor.

>___void ft_putstr_fd(char *s, int fd);___<br/>
>Outputs the string ’s’ to the given file descriptor.

>___void ft_putendl_fd(char *s, int fd);___<br/>
>Outputs the string ’s’ to the given file descriptor, followed by a newline.

>___void ft_putnbr_fd(int n, int fd);___<br/>
>Outputs the integer ’n’ to the given file descriptor.

#### Работа со структурой list:

typedef struct s_list<br/>
{<br/>
void *content;<br/>
struct s_list *next;<br/>
}<br/>

>___t_list *ft_lstnew(void *content);___<br/>
Allocates (with malloc) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

>___void ft_lstadd_front(t_list **lst, t_list *new);___<br/>
>Adds the element ’new’ at the beginning of thelist.

>___int ft_lstsize(t_list *lst);___<br/>
>Counts the number of elements in a list.

>___t_list *ft_lstlast(t_list *lst);___<br/>
>Returns the last element of the list.

>___void ft_lstadd_back(t_list **lst, t_list *new);___<br/>
>Adds the element ’new’ at the end of the list.

>___void ft_lstdelone(t_list *lst, void (*del)(void*));___<br/>
>Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.

>___void ft_lstclear(t_list **lst, void (*del)(void*));___<br/>
>Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the list must be set to NULL.

>___void ft_lstiter(t_list *lst, void (*f)(void *));___<br/>
>Iterates the list ’lst’ and applies the function ’f’ to the content of each element.

>___t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));___<br/>
>Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.
