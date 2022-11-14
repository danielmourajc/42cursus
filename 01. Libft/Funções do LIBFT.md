## FUNÇÕES PARA MANIPULAÇÃO DE STRING
#### `FT_ITOA:` Converte um Inteiro para String ASCII.

#### `FT_ATOI:` Converte uma String ASCII para Inteiro.

#### `FT_STRLEN:` Encontra o comprimento da String.

#### `FT_STRDUP:` Salva uma cópia de uma String (com Malloc).

#### `FT_STRCHR:` Localiza um determinado caractere em uma String (primeira ocorrência).

#### `FT_STRRCHR:` Localiza um determinado caractere em uma String (última ocorrência).

#### `FT_SPLIT:` Divide a String com o caractere especificado como delimitador em uma matriz de Strings.

#### `FT_STRJOIN:` Concatenar duas Strings em uma nova String com Malloc.

#### `FT_STRTRIM:` Apara o início e o fim da String com os caracteres especificados.

#### `FT_STRNCMP:` Compara Strings (limitado por tamanho).

#### `FT_STRITERI:` Aloca uma String com Malloc e retorna uma nova String, que é o resultado da concatenação de 's1' e 's2'.

#### `FT_STRLCPY:` Faz a cópia de uma String (limitada por tamanho).

#### `FT_STRLCAT:` Concatena Strings (limitadas por tamanho).

#### `FT_SUBSTR:` Extrai uma substring de uma String.

#### `FT_STRMAPI:` Cria uma nova String a partir da modificação da String com a função especificada.

#### `FT_STRNSTR:` Localiza uma substring em uma String (limitada por tamanho).

## FUNÇÕES PARA MANIPULAÇÃO DE MEMÓRIA
#### `FT_BZERO:` Escreve zeros em uma String de bytes.

#### `FT_CALLOC:` Alocação de memória.

#### `FT_MEMSET:` Escreve um byte em uma String de bytes.

#### `FT_MEMCHR:` Localiza byte na cadeia de bytes.

#### `FT_MEMCPY:` Área de memória de cópia.

#### `FT_MEMMOVE:` Copia cadeia de bytes.

#### `FT_MEMCMP:` Compara cadeia de bytes.

## FUNÇÕES PARA CLASSIFICAÇÃO DE CARACTERES
#### `FT_ISALPHA:` Teste de caracteres alfabéticos.

#### `FT_ISDIGIT:` Teste de caractere de dígito decimal.

#### `FT_ISALNUM:` Teste de caracteres alfanuméricos.

#### `FT_ISASCII:` Teste para caracteres ASCII.

#### `FT_ISPRINT:` Teste de caracteres de impressão (incluindo caracteres de espaço).

#### `FT_TOUPPER:` Converte letras minúsculas para maiúsculas.

#### `FT_TOLOWER:` Converte letras maiúsculas para minúsculas.

## FUNÇÕES DE ENTRADA E SAÍDA
#### `FT_PUTCHAR_FD:` Impressão de caractere para determinado arquivo.

#### `FT_PUTNBR_FD:` Impressão de inteiros para determinado arquivo.

#### `FT_PUTSTR_FD:` Impressão de String para determinado arquivo.

#### `FT_PUTENDL_FD:` Impressão de String para determinado arquivo com nova linha.

## FUNÇÕES DE LISTAS ENCADEADAS
#### `FT_LSTNEW:` Cria uma nova lista.

#### `FT_LSTSIZE:` Conta os elementos de uma lista.

#### `FT_LSTLAST:` Encontra o último elemento da lista.

#### `FT_LSTADD_BACK:` Adiciona um novo elemento no Final da lista.

#### `FT_LSTADD_FRONT:` Adiciona um novo elemento no Início da lista.

#### `FT_LSTDELONE:` Exclui elemento da lista.

#### `FT_LSTCLEAR:` Exclui a sequência de elementos da lista de um ponto de partida.

#### `FT_LSTITER:` Aplica a função ao conteúdo de todos os elementos da lista.

#### `FT_LSTMAP:` Aplica a função ao conteúdo de todos os elementos da lista em uma nova lista.