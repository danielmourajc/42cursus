> Abaixo descrevemos os erros relatados pela norminette e as exigências da norminette.

## Erros relatados pela Norminette

| ERROS | DESCRIÇÃO |
| --- | --- |
|	ARG_TYPE_UKN	|	Tipo de variável não reconhecido	|
|	ASSIGN_IN_CONTROL	|	Atribuição na estrutura de controle	|
|	ATTR_EOL	|	O atributo de função deve estar no final da linha	|
|	BRACE_NEWLINE	|	Nova linha esperada antes da chave	|
|	BRACE_SHOULD_EOL	|	Nova linha esperada após chave	|
|	COMMA_START_LINE	|	Vírgula no início da linha	|
|	COMMENT_ON_INSTR	|	O comentário deve estar em sua própria linha	|
|	CONSECUTIVE_NEWLINES	|	Novas linhas consecutivas	|
|	CONSECUTIVE_SPC	|	Dois ou mais espaços consecutivos	|
|	DECL_ASSIGN_LINE	|	Declaração e atribuição em uma única linha	|
|	EMPTY_LINE_EOF	|	Linha vazia no final do arquivo	|
|	EMPTY_LINE_FILE_START	|	Linha vazia no início do arquivo	|
|	EMPTY_LINE_FUNCTION	|	Linha vazia na função	|
|	ENUM_TYPE_NAMING	|	Enum deve começar com e_	|
|	EOL_OPERATOR	|	Operador lógico no final da linha	|
|	EXP_NEWLINE	|	Nova linha esperada após a estrutura de controle	|
|	EXP_PARENTHESIS	|	Parêntese esperado	|
|	EXP_SEMI_COLON	|	Ponto e vírgula esperado	|
|	EXP_TAB	|	Tab esperada	|
|	FORBIDDEN_CHAR_NAME	|	Identificadores definidos pelo usuário devem conter apenas caracteres minúsculos, dígitos ou '_'	|
|	FORBIDDEN_CS	|	Estrutura de controle proibida	|
|	GLOBAL_VAR_DETECTED	|	Variável global presente no arquivo. Certifique-se de que é uma escolha razoável.	|
|	GLOBAL_VAR_NAMING	|	Variável global deve começar com g_	|
|	HEADER_PROT_ALL	|	A proteção do cabeçalho deve incluir todas as instruções	|
|	HEADER_PROT_NAME	|	Nome de proteção de cabeçalho incorreto	|
|	IMPLICIT_VAR_TYPE	|	Tipo ausente na declaração da variável	|
|	INCLUDE_HEADER_ONLY	|	Inclusões de arquivos .c são proibidas	|
|	INCLUDE_START_FILE	|	Include deve estar no início do arquivo	|
|	INCORRECT_DEFINE	|	Valores incorretos em Define	|
|	INVALID_HEADER	|	Cabeçalho 42 ausente ou inválido	|
|	LABEL_FBIDDEN	|	As declarações do rótulo são proibidas	|
|	LINE_TOO_LONG	|	Linha muito longa, no máximo 80 colunas	|
|	MACRO_NAME_CAPITAL	|	O nome da Macro deve estar em letras maiúsculas	|
|	MISALIGNED_FUNC_DECL	|	Declaração de função desalinhada	|
|	MISALIGNED_VAR_DECL	|	Declaração de variável desalinhada	|
|	MISSING_IDENTIFIER	|	Qualificador ou Identificador de tipo ausente em argumentos de função	|
|	MISSING_TAB_FUNC	|	Tab ausente antes do nome da função	|
|	MISSING_TAB_VAR	|	Tab ausente antes do nome da variável	|
|	MISSING_TYPEDEF_ID	|	Identificador ausente na declaração typedef	|
|	MIXED_SPACE_TAB	|	Espaços e tabulações misturados	|
|	MULT_ASSIGN_LINE	|	Múltiplas atribuições em uma única linha	|
|	MULT_DECL_LINE	|	Várias declarações em uma única linha	|
|	MULT_IN_SINGLE_INSTR	|	Múltiplas instruções em estrutura de controle de linha única	|
|	NEWLINE_DEFINE	|	Nova linha em Define	|
|	NEWLINE_IN_DECL	|	Nova linha na declaração	|
|	NEWLINE_PRECEDES_FUNC	|	As funções devem ser separadas por uma nova linha	|
|	NL_AFTER_PREPROC	|	A instrução do pré-processador deve ser seguida por uma nova linha	|
|	NL_AFTER_VAR_DECL	|	Declarações de variáveis devem ser seguidas por uma nova linha	|
|	NO_ARGS_VOID	|	Argumento de função vazio requer void	|
|	NO_SPC_AFR_OPR	|	Espaço extra após o operador	|
|	NO_SPC_AFR_PAR	|	Espaço extra após parênteses (chave/colchete)	|
|	NO_SPC_BFR_OPR	|	Espaço extra antes do operador	|
|	NO_SPC_BFR_PAR	|	Espaço extra antes dos parênteses (chave/colchete)	|
|	PREPROC_BAD_INDENT	|	Indentação incorreta do pré-processador	|
|	PREPROC_CONSTANT	|	A instrução do pré-processador deve conter apenas definições constantes	|
|	PREPROC_EXPECTED_EOL	|	EOL esperado após a instrução do pré-processador	|
|	PREPROC_GLOBAL	|	Os pré-processadores só podem ser usados no escopo global	|
|	PREPROC_START_LINE	|	Instrução do pré-processador fora do início da linha	|
|	PREPROC_UKN_STATEMENT	|	Declaração de pré-processador não reconhecida	|
|	RETURN_PARENTHESIS	|	O valor de retorno deve estar entre parênteses	|
|	SPACE_AFTER_KW	|	Espaço ausente após a palavra-chave	|
|	SPACE_BEFORE_FUNC	|	Espaço antes do nome da função	|
|	SPACE_EMPTY_LINE	|	Espaço na linha vazia	|
|	SPACE_REPLACE_TAB	|	Espaço encontrado ao esperar Tab	|
|	SPC_AFTER_OPERATOR	|	Falta espaço depois do operador	|
|	SPC_AFTER_PAR	|	Espaço ausente após parênteses (colchete/colchete)	|
|	SPC_AFTER_POINTER	|	Espaço após o ponteiro	|
|	SPC_BEFORE_NL	|	Espaço antes da nova linha	|
|	SPC_BFR_OPERATOR	|	Falta de espaço antes do operador	|
|	SPC_BFR_PAR	|	Espaço ausente antes dos parênteses (colchete/colchete)	|
|	SPC_BFR_POINTER	|	Espaçamento ruim antes do ponteiro	|
|	SPC_INSTEAD_TAB	|	Espaços no início da linha	|
|	SPC_LINE_START	|	Espaço/tabulação inesperados no início da linha	|
|	STRUCT_TYPE_NAMING	|	O nome da estrutura deve começar com s_	|
|	TAB_INSTEAD_SPC	|	Tab Encontrado ao esperar espaço	|
|	TAB_REPLACE_SPACE	|	Tab Encontrado ao esperar espaço	|
|	TERNARY_FBIDDEN	|	Ternários são proibidos	|
|	TOO_FEW_TAB	|	Tabs ausentes para o nível de recuo	|
|	TOO_MANY_ARGS	|	A função tem mais de 4 argumentos	|
|	TOO_MANY_FUNCS	|	Muitas funções no arquivo, só são permitidas 5 por arquivo	|
|	TOO_MANY_INSTR	|	Muitas instruções em uma única linha	|
|	TOO_MANY_LINES	|	Função tem mais de 25 linhas	|
|	TOO_MANY_TAB	|	Tabs extras para nível de recuo	|
|	TOO_MANY_TAB_VAR	|	Tab extra antes do nome da variável	|
|	TOO_MANY_TABS_FUNC	|	Tabs extras antes do nome da função	|
|	TOO_MANY_TABS_TD	|	Tabs extras antes do nome typedef	|
|	TOO_MANY_VALS	|	Muitos valores em Define	|
|	TOO_MANY_VARS_FUNC	|	Muitas declarações de variáveis em uma função, só são permitidas 5	|
|	UNION_TYPE_NAMING	|	Union deve começar com u_	|
|	USER_DEFINED_TYPEDEF	|	Typedef definido pelo usuário deve começar com t_	|
|	VAR_DECL_START_FUNC	|	Declaração de variável não está no início da função	|
|	VLA_FORBIDDEN	|	Matriz de comprimento variável proibida	|
|	WRONG_SCOPE	|	A declaração está no escopo incorreto	|
|	WRONG_SCOPE_COMMENT	|	O comentário é inválido neste escopo	|
|	WRONG_SCOPE_FCT	|	Protótipo de função em escopo incorreto	|
|	WRONG_SCOPE_VAR	|	Variável declarada em escopo incorreto	|

## Exigências da Norminette
### Denominação
* O nome de um struct deve começar por s_.
* O nome de um typedef deve começar por t_.
* O nome de um union deve começar por u_.
* O nome de um enum deve começar por e_.
* O nome de uma variável global deve começar por g_.
* Os nomes de variáveis e funções só podem conter letras minúsculas, dígitos e ’_’ (Unix Case).
* Os nomes de arquivos e diretórios só podem conter minúsculas, dígitos e ’_’ (Unix Case).
* Caracteres que não fazem parte da tabela ASCII padrão é proibida.
* Variáveis, funções e qualquer outro identificador deve usar snake case. Sem letras maiúsculas, e cada palavra separada por um sublinhado.
* Todos os identificadores (funções, macros, tipos, variáveis, etc.) devem estar em inglês.
* Objetos (variáveis, funções, macros, tipos, arquivos ou diretórios) devem ter os nomes mais explícitos ou mais mnemônicos possíveis.
* Usando uma variável global em um projeto onde não é explicitamente permitido é um erro de norma, exceto onde é obrigatório (manuseio de sinais, por exemplo).
* O arquivo deve compilar. Um arquivo que não compila não é esperado que passe na norma

### Formatação
* Você deve indentar seu código com tabulação de 4 espaços. Isto não é o mesmo que 4 espaços, estamos falando de tabulações reais aqui.
* Cada função deve ter no máximo 25 linhas, não contando suas próprias chaves ’{}’.
* Cada linha deve ter no máximo 80 colunas de largura, comentários incluídos. Aviso: uma tabulação não conta como uma coluna, mas como o número de espaços que representa.
* Cada função deve ser separada por uma nova linha. Qualquer comentário ou instrução de pré-processador pode estar logo acima da função. A nova linha é após a função anterior.
* Apenas uma instrução por linha.
* Uma linha vazia deve estar vazia: sem espaços ou tabulações.
* Uma linha nunca pode terminar com espaços ou tabulações.
* Você nunca pode ter dois espaços consecutivos.
* Você precisa iniciar uma nova linha após cada chave ’{}’ ou final da estrutura de controle.
* A menos que seja o fim de uma linha, cada vírgula ou ponto-e-vírgula deve ser seguido por um espaço.
* Cada operador ou operando deve ser separado por um - e apenas um - espaço.
* Cada palavra-chave do C deve ser seguida por um espaço, exceto Palavras-chave para tipos (como int, char, float, etc.), bem como sizeof. 
* Cada declaração de variável deve ser indentada na mesmo coluna para seu escopo.
* Os asteriscos que vão com ponteiros devem estar juntos aos nomes das variáveis.
* Uma única declaração variável por linha.
* Declaração e uma inicialização não podem estar na mesma linha, exceto para variáveis globais (quando permitido), variáveis estáticas e constantes.
* Declarações devem estar no início de uma função.
* Em uma função, você deve colocar uma linha vazia entre as declarações de variáveis e o restante da função. Nenhuma outra linha vazia é permitida em uma função.
* Atribuições múltiplas são estritamente proibidas.
* Você pode adicionar uma nova linha após uma instrução ou estrutura de controle, mas você terá que adicionar um indentação com chaves ou operador de atribuição.
* Os operadores devem estar no início de uma linha.
* Estruturas de controle (if, while ...) devem ter chaves, a menos que contenham uma única linha ou uma única condição.

### Funções
* Uma função pode ter até 4 parâmetros definidos no máximo.
* Uma função que não tem argumentos deve ser explicitamente prototipada com a palavra "void"como o argumento.
* Parâmetros em protótipos de funções devem ser nomeados.
* Cada função deve ser separada da próxima por uma linha vazia.
* Você não pode declarar mais de 5 variáveis por função.
* O retorno de uma função deve estar entre parênteses.
* Cada função deve ter uma tabulação única entre seu tipo de retorno e seu nome.

### Typedef, Struct, Enum e Union
* Adicione uma tabulação ao declarar um struct, enum ou union.
* Ao declarar uma variável do tipo struct, enum ou union, adicione um único espaço no tipo.
* Ao declarar um struct, union ou enum com um typedef, todas as regras de indentação aplicam-se.
* O nome de um typedef deve ser precedido por uma tabulação.
* Você deve recuar todos os nomes de estruturas na mesma coluna para o escopo deles.
* Você não pode declarar uma estrutura em um arquivo .c.

### Cabeçalhos
* As coisas permitidas em arquivos de cabeçalho são: Inclusões de cabeçalho (sistema ou não), declarações, definições, protótipos e macros.
* Todas inclusões devem estar no início do arquivo.
* Você não pode incluir um arquivo C.
* Os arquivos de cabeçalho devem ser protegidos contra inclusões duplas. Se o arquivo é ft_foo.h, a macro que o acompanhará é FT_FOO_H.
* Inclusões de cabeçalho não utilizadas (.h) são proibidas.
* Todas as inclusões de cabeçalho devem ser justificadas em um arquivo .c bem como em um arquivo .h.

### O Header da 42
* Todo arquivo .c e .h deve, imediatamente, começar com o header da 42: um comentário multilinha com um formato específico, incluindo informações úteis. O header padrão se encontra naturalmente disponível nos computadores dos clusters para diversos editores de texto (emacs: usando C-c C-h, vim: usando :Stdheader ou F1, etc...)
* O header da 42 deve conter informações atualizadas, incluindo o criador com login e email, a data de criação e a data da atualização mais recente.

### Macros e pré-processadores
* Constantes do pré-processador (ou #define) que você criar devem ser usadas apenas para valores literais e constantes.
* Todos #define criados para ignorar a norma e/ou ofuscação de código são proibidos. Esta parte deve ser verificada por um humano.
* Você pode usar macros disponíveis em bibliotecas padrão, apenas se estas são permitidas no escopo do projeto.
* Macros multilinhas são proibidas.
* Nomes de macro devem ser todos maiúsculos (uppercase).
* Você deve recuar caracteres que seguirem #if, #ifdef or #ifndef.

### Coisas proibidas!
* Você não tem permissão para usar:
  ◦ for<br>
  ◦ do...while<br>
  ◦ switch<br>
  ◦ case<br>
  ◦ goto<br>
* Operadores ternários como ‘?’.
* VLAs - Matrizes de comprimento variável.
* Tipo implícito em declarações variáveis.

### Comentários
* Os comentários não podem estar dentro do corpo das funções. Os comentários devem estar no final de uma linha, ou em sua própria linha
* Seus comentários devem estar em inglês. E eles devem ser úteis.
* Um comentário não pode ser usado para justificar uma função mal feita.

### Arquivos
* Você não pode incluir um arquivo .c.
* Você não pode ter mais de 5 definições de função em um arquivo .c.

### Makefile
> Makefiles não são verificados pela norma e devem ser verificados durante a avaliação pelo estudante.
* AS regras $(NAME), clean, fclean, re and all são obrigatórias.
* Se o makefile fizer relink, o projeto será considerado não funcional.
* No caso de um projeto multibinário, além das regras acima, você deve ter uma regra que compila ambos os binários, bem como uma regra específica para cada binário compilado.
* No caso de um projeto que chama uma função de uma biblioteca não-sistema (por exemplo: libft), seu makefile deve compilar esta biblioteca automaticamente.
* Todos os arquivos de origem que você precisa compilar seu projeto deve ser explicitamente nomeado em seu makefile.
