<h2>SOBRE O LIBFT</h2>
No Libft iremos criar uma biblioteca pessoal das nossas funções mais usadas, para facilitar em todos os outros projetos que iremos desenvolver.<br>

Criamos funções para manipulação de memória, teste de caracteres entre outras.<br>

Veja aqui com alguns detalhes todas as <a href="https://github.com/danielmourajc/42cursus/wiki/LIBFT:-Fun%C3%A7%C3%B5es">Funções do LIBFT</a>.<br>

<h2>O QUE APRENDEMOS NO LIBFT</h2>
<details>
  <summary>Como criar uma Biblioteca em C</summary>
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
  </details>
  
 <details>
  <summary>Como fazer um bom Makefile</summary>
  Saiba mais em breve
  </details>
  
 <details>
  <summary>Como fazer o Header Files</summary>
  Saiba mais em breve
  </details>

<h2>ONDE USAR O LIBFT</h2>
. <br>
. <br>

<h2>TESTERS DO LIBFT</h2>
- <a href="https://github.com/alelievr/libft-unit-test">UNIT</a><br>
- <a href="https://github.com/Tripouille/libftTester">TRIPOUILLE</a><br>
- <a href="https://github.com/y3ll0w42/libft-war-machine">WAR MACHINE</a><br>
