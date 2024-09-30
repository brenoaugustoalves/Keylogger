Keylogger em C para Windows
Descrição
Este projeto é um keylogger, um programa que registra as teclas pressionadas no teclado e as salva em um arquivo de texto. Ele foi desenvolvido em C para sistemas operacionais Windows e executa de maneira oculta, sem exibir uma janela de console durante a execução.

Aviso: Este software foi criado para fins educativos e de demonstração. O uso indevido de keyloggers pode ser ilegal e antiético. Certifique-se de que você tem permissão para usar este programa no ambiente em que pretende executá-lo.

Funcionalidades
Registra todas as teclas pressionadas no teclado do computador.
Salva as teclas pressionadas em um arquivo de texto (dados.txt).
Executa em segundo plano, sem exibir uma janela de console.
Pré-requisitos
Para compilar e executar o programa, você precisará de:

Um compilador C, como o MinGW ou Visual Studio.
Sistema operacional Windows.
Como utilizar
Passo 1: Compilar o código
Você pode compilar o código utilizando o GCC ou MinGW. No terminal ou no prompt de comando, execute o seguinte comando:

bash
Copiar código
gcc keylogger.c -o keylogger.exe -mwindows
Esse comando cria o arquivo keylogger.exe, que será executado no Windows sem abrir uma janela de console.

Passo 2: Executar o keylogger
Após a compilação, basta executar o arquivo gerado (keylogger.exe). O programa começará a registrar as teclas pressionadas em um arquivo de texto chamado dados.txt.

O arquivo dados.txt será criado no mesmo diretório onde o programa foi executado.

Passo 3: Encerrar a execução
Para interromper o programa, você pode finalizá-lo no Gerenciador de Tarefas do Windows:

Pressione Ctrl + Shift + Esc para abrir o Gerenciador de Tarefas.
Procure pelo processo keylogger.exe.
Selecione o processo e clique em Finalizar tarefa.
Uso Responsável
Este keylogger foi desenvolvido para fins acadêmicos e de aprendizado. O uso de keyloggers sem o consentimento adequado é ilegal e viola a privacidade de outras pessoas. Certifique-se de usar este programa apenas em ambientes onde você tenha permissão explícita para monitorar as atividades.

Aviso Legal
O autor deste projeto não se responsabiliza por qualquer uso indevido do software. Este programa foi criado com propósitos educacionais, e cabe ao usuário garantir que o uso esteja em conformidade com as leis locais e com a ética.


