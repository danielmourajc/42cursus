## INTRODUÇÃO
> Se houver suspeita de trapaça, a avaliação para aqui. Use o sinalizador "Cheat" para denunciá-lo. Tome essa decisão com calma, sabedoria e, por favor, use este botão com cautela.

### Testes Preliminares
- A defesa só pode acontecer se o aluno que está sendo avaliado ou o grupo estiver presente. Desta forma, todos aprendem compartilhando conhecimentos uns com os outros.
- Se nenhum trabalho foi enviado (ou arquivos errados, diretório errado ou nomes de arquivos errados), a nota é 0 e o processo de avaliação termina.
- Para este projeto, você deve clonar o repositório Git em sua estação.

## INSTRUÇÕES GERAIS
> Durante a defesa, assim que precisar de ajuda para verificar um ponto, o aluno avaliado deverá ajudá-lo.
- Certifique-se de que o arquivo "signature.txt" esteja presente na raiz do repositório clonado.
- Verifique se a assinatura contida em "signature.txt" é idêntica à do arquivo ".vdi" da máquina virtual a ser avaliada. Um simples "diff" deve permitir que você compare as duas assinaturas. Se necessário, pergunte ao aluno avaliado onde está localizado o arquivo ".vdi".
- Como precaução, você pode duplicar a máquina virtual inicial para manter uma cópia.
- Inicie a máquina virtual a ser avaliada.
> Se algo não funcionar como esperado ou as duas assinaturas forem diferentes, a avaliação para aqui.

## PARTE OBRIGATÓRIA
> O projeto consiste em criar e configurar uma máquina virtual seguindo regras rígidas. O aluno avaliado terá que ajudá-lo durante a defesa. Certifique-se de que todos os pontos a seguir sejam observados.

### Visão Geral do Projeto

O aluno avaliado deverá explicar-lhe de forma simples:<br>
- Como funciona uma máquina virtual.
- Sua escolha de sistema operacional.
- As diferenças básicas entre CentOS e Debian.
- A finalidade das máquinas virtuais.
- Se o aluno avaliado escolheu CentOS: o que são SELinux e DNF.
- Se o aluno avaliado escolheu Debian: a diferença entre aptitude e apt, e o que é APPArmor. Durante a defesa, um script deve exibir todas as informações a cada 10 minutos. Seu funcionamento será verificado em detalhes posteriormente. 
> Se as explicações não forem claras, a avaliação para aqui.

### Configuração Simples
> Lembre-se: Sempre que você precisar de ajuda para verificar alguma coisa, o aluno que está sendo avaliado deve poder ajudá-lo.
- Certifique-se de que a máquina não tenha um ambiente gráfico no lançamento.
- Uma senha será solicitada antes de tentar se conectar a esta máquina.
- Por fim, conecte-se com um usuário com a ajuda do aluno que está sendo avaliado. Este usuário não deve ser root.
- Preste atenção na senha escolhida, ela deve seguir as regras impostas no assunto.
- Verifique se o serviço UFW foi iniciado com a ajuda do avaliador.
- Verifique se o serviço SSH foi iniciado com a ajuda do avaliador.
- Verifique se o sistema operacional escolhido é Debian ou CentOS com a ajuda do avaliador. Se algo não funcionar como esperado ou não for explicado claramente, a avaliação para aqui.

### Usuário
> Lembre-se: Sempre que você precisar de ajuda para verificar alguma coisa, o aluno que está sendo avaliado deve poder ajudá-lo.
- O subject solicita que um usuário com o login do aluno que está sendo avaliado esteja presente na máquina virtual. Verifique se foi adicionado e se pertence aos grupos "sudo" e "user42".
- Certifique-se de que as regras impostas no assunto sobre a política de senhas foram implementadas seguindo as etapas a seguir.
- Primeiro, crie um novo usuário. Atribua a ele uma senha de sua escolha, respeitando as regras do assunto. O aluno que está sendo avaliado agora deve explicar para você como conseguiu configurar as regras solicitadas no subject em sua máquina virtual. Normalmente deve haver um ou dois arquivos modificados. Se houver algum problema, a avaliação para aqui.
- Agora que você tem um novo usuário, peça ao aluno que está sendo avaliado para criar um grupo chamado "evaluating" na sua frente e atribua-o a esse usuário. Por fim, verifique se este usuário pertence ao grupo "evaluating".
- Por fim, peça ao aluno avaliado que explique as vantagens desta política de senhas, bem como as vantagens e desvantagens de sua implementação. Claro que responder que é porque o subject pede não conta.
> Se algo não funcionar como esperado ou não for explicado claramente, a avaliação para aqui.

### Hostname e Partições
> Lembre-se: Sempre que você precisar de ajuda para verificar alguma coisa, o aluno que está sendo avaliado deve poder ajudá-lo.
- Verifique se o hostname da máquina está formatado corretamente da seguinte forma: login 42 (login do aluno que está sendo avaliado).
- Modifique este nome de host substituindo o login pelo seu e reinicie a máquina. Se na reinicialização, o nome do host não foi atualizado, a avaliação para aqui.
- Agora você pode restaurar a máquina para o nome de host original.
- Pergunte ao aluno avaliado como visualizar as partições dessa máquina virtual.
- Compare a saída com o exemplo dado no assunto. Atenção: se o aluno avaliado fizer os bônus, será necessário consultar o exemplo de bônus.
- Esta parte é uma oportunidade para discutir as pontuações! O aluno que está sendo avaliado deve lhe dar uma breve explicação de como o LVM funciona e do que se trata 
> Se algo não funcionar como esperado ou não for explicado claramente, a avaliação termina aqui.

### Sudo
> Lembre-se: Sempre que você precisar de ajuda para verificar alguma coisa, o aluno que está sendo avaliado deve poder ajudá-lo.
- Verifique se o programa "sudo" está instalado corretamente na máquina virtual.
- O aluno que está sendo avaliado agora deve mostrar atribuindo seu novo usuário ao grupo "sudo".
- O assunto impõe regras rígidas para o sudo. O aluno que está sendo avaliado deve primeiro explicar o valor e o funcionamento do sudo usando exemplos de sua escolha. Em uma segunda etapa, ele deve mostrar a implementação das regras impostas pelo subject.
- Verifique se a pasta "/var/log/sudo/" existe e tem pelo menos um arquivo. Verifique o conteúdo dos arquivos nesta pasta, você deve ver um histórico dos comandos usados com o sudo.
- Por fim, tente executar um comando via sudo. Veja se o(s) arquivo(s) na pasta "/var/log/sudo/" foram atualizados. 
> Se algo não funcionar como esperado ou não for explicado claramente, a avaliação para aqui.

### UFW
> Lembre-se: Sempre que você precisar de ajuda para verificar alguma coisa, o aluno que está sendo avaliado deve poder ajudá-lo.
- Verifique se o programa "UFW" está instalado corretamente na máquina virtual.
- Verifique se está funcionando corretamente.
- O aluno avaliado deverá explicar basicamente o que é o UFW e o valor de sua utilização.
- Liste as regras ativas no UFW. Uma regra deve existir para a porta 4242.
- Adicione uma nova regra para abrir a porta 8080. Verifique se esta foi adicionada listando as regras ativas.
- Por fim, exclua esta nova regra com a ajuda do aluno que está sendo avaliado.
> Se algo não funcionar como esperado ou não for explicado claramente, a avaliação para aqui.

### SSH
> Lembre-se: Sempre que você precisar de ajuda para verificar alguma coisa, o aluno que está sendo avaliado deve poder ajudá-lo.
- Verifique se o serviço SSH está instalado corretamente na máquina virtual.
- Verifique se está funcionando corretamente.
- O aluno avaliado deve ser capaz de explicar basicamente o que é SSH e o valor de usá-lo.
- Verifique se o serviço SSH usa apenas a porta 4242.
- O aluno que está sendo avaliado deve ajudá-lo a usar o SSH para fazer login com o usuário recém-criado. Para fazer isso, você pode usar uma chave ou uma senha simples. Vai depender do aluno que está sendo avaliado. Claro, você precisa ter certeza de que não pode usar SSH com o usuário "root" conforme indicado no assunto.
> Se algo não funcionar como esperado ou não for explicado claramente, a avaliação para aqui.

### Script Monitoring
> Lembre-se: Sempre que você precisar de ajuda para verificar alguma coisa, o aluno que está sendo avaliado deve poder ajudá-lo.
O aluno que está sendo avaliado deve explicar para você de forma simples:
- Como o script dele funciona, mostrando o código.
- O que é "cron".
- Como o aluno avaliado configura seu script para que seja executado a cada 10 minutos a partir da inicialização do servidor.
- Verificado o funcionamento correto do script, o aluno avaliado deve garantir que esse script seja executado a cada minuto. Você pode executar o que quiser para garantir que o script seja executado com valores dinâmicos corretamente.
- Por fim, o aluno avaliado deve fazer com que o script pare de rodar quando o servidor for inicializado, mas sem modificar o próprio script. Para verificar este ponto, você terá que reiniciar o servidor uma última vez. Na inicialização, será necessário verificar se o script ainda existe no mesmo local, se seus direitos permaneceram inalterados e se não foi modificado.
> Se algo não funcionar como esperado ou não for explicado claramente, a avaliação para aqui.

## BÔNUS
> Avalie a parte de bônus se, e somente se, a parte obrigatória tiver sido completa e perfeitamente executada, e o gerenciamento de erros lidar com o uso inesperado ou ruim. Caso todos os pontos obrigatórios não tenham sido passados durante a defesa, os pontos de bônus devem ser totalmente ignorados.

Confira, com a ajuda do subject e do aluno avaliado, os pontos de bônus autorizados para este projeto:
- A criação de partições vale 2 pontos.
- Configurar o WordPress, apenas com os serviços exigidos pelo assunto, vale 2 pontos.
- O serviço de livre escolha vale 1 ponto.
- Verifique e teste o bom funcionamento e implementação de cada serviço extra.
- Para o serviço de livre escolha, o aluno que está sendo avaliado deve dar uma explicação simples sobre como funciona e porque acha que é útil.
- Observe que NGINX e Apache2 são proibidos.
