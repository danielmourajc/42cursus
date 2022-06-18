<h1>Funções do LIBFT</h1>

<b>FUNÇÕES PARA MANIPULAÇÃO DE STRING:</b><br>
FT_ITOA<br>
converter inteiro para string ASCII.<br>

FT_ATOI<br>
converter string ASCII para inteiro.<br>

FT_STRLEN<br>
encontrar o comprimento da string.<br>

FT_STRDUP<br>
salvar uma cópia de uma string (com malloc).<br>

FT_STRCHR<br>
localizar caractere na string (primeira ocorrência).<br>

FT_STRRCHR<br>
localizar caractere na string (última ocorrência).<br>

FT_SPLIT<br>
dividir a string, com o caractere especificado como delimitador, em uma matriz de strings.<br>

FT_STRJOIN<br>
concatenar duas strings em uma nova string com malloc.<br>

FT_STRTRIM<br>
apara o início e o fim da string com os caracteres especificados.<br>

FT_STRNCMP<br>
comparar strings (limitado por tamanho).<br>

FT_STRITERI<br>
Aloca com malloc e retorna uma nova string, que é o resultado da concatenação de 's1' e 's2'.<br>

FT_STRLCPY<br>
cópia de string limitada por tamanho.<br>

FT_STRLCAT<br>
concatenação de strings limitadas por tamanho.<br>

FT_SUBSTR<br>
extrair substring da string.<br>

FT_STRMAPI<br>
crie uma nova string a partir da modificação da string com a função especificada.<br>

FT_STRNSTR<br>
localizar uma substring em uma string (limitada por tamanho).<br>


<b>FUNÇÕES PARA MANIPULAÇÃO DE MEMÓRIA:</b><br>
FT_BZERO<br>
escreve zeros em uma string de bytes.<br>

FT_CALLOC<br>
alocação de memória.<br>

FT_MEMSET<br>
escreve um byte em uma string de bytes.<br>

FT_MEMCHR<br>
localizar byte na cadeia de bytes.<br>

FT_MEMCPY<br>
área de memória de cópia.<br>

FT_MEMMOVE<br>
copiar cadeia de bytes.<br>

FT_MEMCMP<br>
comparar cadeia de bytes.<br>


<b>FUNÇÕES PARA CLASSIFICAÇÃO DE CARACTERES:</b><br>
FT_ISALPHA<br>
teste de caracteres alfabéticos.<br>

FT_ISDIGIT<br>
teste de caractere de dígito decimal.<br>

FT_ISALNUM<br>
teste de caracteres alfanuméricos.<br>

FT_ISASCII<br>
teste para caracteres ASCII.<br>

FT_ISPRINT<br>
teste de caracteres de impressão (incluindo caracteres de espaço).<br>

FT_TOUPPER<br>
conversão de letras minúsculas para maiúsculas.<br>

FT_TOLOWER<br>
conversão de letras maiúsculas para minúsculas.<br>


<b>FUNÇÕES DE ENTRADA E SAÍDA:</b><br>
FT_PUTCHAR_FD<br>
saída de um caractere para determinado arquivo.<br>

FT_PUTNBR_FD<br>
saída inteira para determinado arquivo.<br>

FT_PUTSTR_FD<br>
string de saída para determinado arquivo.<br>

FT_PUTENDL_FD<br>
string de saída para determinado arquivo com nova linha.<br>


<b>FUNÇÕES DE LISTAS ENCADEADAS:</b><br>
FT_LSTNEW<br>
criar nova lista.<br>

FT_LSTSIZE<br>
contar elementos de uma lista.<br>

FT_LSTLAST<br>
encontre o último elemento da lista.<br>

FT_LSTADD_BACK<br>
adicionar novo elemento no final da lista.<br>

FT_LSTADD_FRONT<br>
adicionar novo elemento no início da lista.<br>

FT_LSTDELONE<br>
excluir elemento da lista.<br>

FT_LSTCLEAR<br>
exclua a sequência de elementos da lista de um ponto de partida.<br>

FT_LSTITER<br>
aplicar função ao conteúdo de todos os elementos da lista.<br>

FT_LSTMAP<br>
aplicar função ao conteúdo de todos os elementos da lista em nova lista.<br>
