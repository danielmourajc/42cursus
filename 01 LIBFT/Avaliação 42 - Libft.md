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
