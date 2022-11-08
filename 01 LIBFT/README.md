## SOBRE
### `VISÃO GERAL`<br>
. No Libft iremos criar uma biblioteca pessoal das nossas funções mais usadas, para facilitar em todos os outros projetos que iremos desenvolver.

. Criamos funções para manipulação de memória, teste de caracteres entre outras.

. Veja aqui com alguns detalhes todas as <a href="https://github.com/danielmourajc/42cursus/wiki/LIBFT:-Fun%C3%A7%C3%B5es">Funções do LIBFT</a>.

### `BÔNUS`<br>
.

.

### `UTILIDADE`<br>
.

.

## REQUISITOS
### `PROIBIÇÕES`<br>
.

.

### `EXIGÊNCIAS`<br>
.

.

### `OBSERVAÇÕES`<br>
.

.

## APRENDIZADO
**CONCEITOS APRENDIDOS**
### `Como criar uma Biblioteca em C`
DESCRIÇÃO<br>
 Criando o arquivo libft.h<br>
Ter os headers, Pre, Includes, Declaração Struct, Protótipo das funções, end.<br>

Criando uma biblioteca:<br>
PRIMEIRO: <br>
. Compilar a "função.c" com gcc -c para criar o arquivo do tipo .o (file .o).<br>
. Obs: arquivos com .o são um objeto, na linguagem de computador, por isso não compreendido pela linguagem humana.<br>
. Exemplo: gcc -c function.c -> para criar o arquivo function.o <br>
SEGUNDO: <br>
. Adicionar ou atualizar a "biblioteca.a" com o arquivo da função do tipo .o<br>
. Exemplo: ar rc libraryname.a functions.o<br>
TERCEIRO: <br>
. Compilar o arquivo executável (main ou função) com -L. e -lbiblioteca<br>
. Exemplo: gcc main.c -L. -lstr<br>
. -L. -> diz para procurar pela minha biblioteca nesse diretorio;<br>
. -lft -> diz o nome da biblioteca da biblioteca que vai procurar, o ft é o exemplo.<br>
	
COMO FUNCIONA<br>
.

.
	
QUANDO DEVEMOS USAR<br>
.

.
	
OBSERVAÇÕES<br>
.

.

### `Como fazer um bom Makefile`
DESCRIÇÃO<br>
.

.	
	
COMO FUNCIONA<br>
.

.	
	
QUANDO DEVEMOS USAR<br>
.

.
	
OBSERVAÇÕES<br>
.

.

### `Como fazer o Header Files`
DESCRIÇÃO<br>
.

.	
	
COMO FUNCIONA<br>
.

.	
	
QUANDO DEVEMOS USAR<br>
.

.
	
OBSERVAÇÕES<br>
.

.

## EXPLICAÇÃO
.

.

## TESTE
- <a href="https://github.com/alelievr/libft-unit-test">UNIT</a><br>
- <a href="https://github.com/Tripouille/libftTester">TRIPOUILLE</a><br>
- <a href="https://github.com/y3ll0w42/libft-war-machine">WAR MACHINE</a><br>

## AVALIAÇÃO
**INTRODUÇÃO**

Por favor, cumpra as seguintes regras:

- Mantenha-se educado, cortês, respeitoso e construtivo durante todo o processo de avaliação. O bem-estar da comunidade depende disso.

- Identificar com o aluno ou grupo cujo trabalho é avaliado as possíveis disfunções no seu projeto. Aproveite o tempo para discutir e debater os problemas que podem ter sido identificados.

- Você deve considerar que pode haver algumas diferenças em como seus pares podem ter entendido as instruções do projeto e o escopo de suas funcionalidades. Sempre mantenha uma mente aberta e classifique-os da forma mais honesta possível. A pedagogia só é útil e somente se a avaliação pelos pares for feita com seriedade.

**DIRETRIZES**
- Avalie apenas o trabalho que foi entregue no repositório Git do aluno ou grupo avaliado.

- Verifique novamente se o repositório Git pertence ao(s) aluno(s). Certifique-se de que o projeto é o esperado. Além disso, verifique se 'git clone' é usado em uma pasta vazia.

- Verifique cuidadosamente se nenhum aliase malicioso foi usado para enganá-lo e fazer você avaliar algo que não seja o conteúdo do repositório oficial.

- Para evitar surpresas e se for o caso, revise em conjunto os scripts usados  para facilitar a classificação (scripts para teste ou automação).

- Não confie cegamente em nenhum script. O testador pode estar errado!

- Verifique o makefile: sem curinga, sem relink, ou a nota final é 0.

- Use make, então faça --debug para ter certeza.

- Se você não completou o trabalho que vai avaliar, você deve ler todo o assunto antes de iniciar o processo de avaliação.

- Use os sinalizadores disponíveis para relatar um repositório vazio, um programa que não funciona, um erro de norma, trapaça e assim por diante. Nesses casos, o processo de avaliação termina e a nota final é 0, ou -42 em caso de trapaça. No entanto, exceto por trapaças, os alunos são fortemente encorajados a revisarem juntos o trabalho que foi entregue, a fim de identificar quaisquer erros que não devem ser repetidos no futuro.

- Você nunca deve editar nenhum arquivo, exceto o arquivo de configuração, se existe. Se você quiser editar um arquivo, reserve um tempo para explicar os motivos com o aluno avaliado e certifique-se de que ambos estão de acordo com isso.

- Você também deve verificar a ausência de vazamentos de memória. Qualquer memória alocada no heap deve ser liberada adequadamente antes do final da execução. Você tem permissão para usar qualquer uma das diferentes ferramentas disponíveis no computador, como leaks, valgrind ou e_fence. Em caso de vazamentos de memória, marque o sinalizador apropriado.

**PARTE OBRIGATÓRIA**<br>
Você deve testar cada uma das funções da libft com seus próprios testes.

FUNÇÕES LIBC #1<br>
Teste todas as funções e verifique se elas funcionam corretamente:
- ft_bzero
- ft_memchr
- ft_memcmp
- ft_memcpy
- ft_memmove
- ft_memset
- ft_strlen

FUNÇÕES LIBC #2<br>
Teste todas as funções e verifique se elas funcionam corretamente:
- ft_isalnum
- ft_isalpha
- ft_isascii
- ft_isdigit
- ft_isprint 

FUNÇÕES LIBC #3<br>
Teste todas as funções e verifique se elas funcionam corretamente:
- ft_strchr
- ft_strrchr
- ft_tolow
- ft_toupper

FUNÇÕES LIBC #4<br>
Teste todas as funções e verifique se elas funcionam corretamente:
- ft_atoi
- ft_calloc
- ft_strdup 
- ft_strlcat
- ft_strlcpy
- ft_strncmp
- ft_strnstr

FUNÇÕES ADICIONAIS #1<br>
Teste todas as funções e verifique se elas funcionam corretamente:
- ft_putchar_fd
- ft_putendl_fd
- ft_putnbr_fd 
- ft_putstr_fd
- ft_strjoin
- ft_substr

FUNÇÕES ADICIONAIS #2<br>
Teste todas as funções e verifique se elas funcionam corretamente:
- ft_itoa 
- ft_split
- ft_striteri
- ft_strmapi
- ft_strtrim

**PARTE BÔNUS**<br>
Avalie a parte de bônus se, e somente se, a parte obrigatória tiver sido completa e perfeitamente executada, e o gerenciamento de erros lidar com o uso inesperado ou ruim. Caso todos os pontos obrigatórios não tenham sido passados durante a defesa, os pontos de bônus devem ser totalmente ignorados.
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap
