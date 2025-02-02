# 🛠 Keylogger em C para Windows

## 📌 Descrição

Este projeto é um **keylogger**, um programa que registra as teclas pressionadas no teclado e as salva em um arquivo de texto. Ele foi desenvolvido em **C** para sistemas operacionais **Windows** e executa de maneira oculta, sem exibir uma janela de console durante a execução.

⚠ **Aviso:** Este software foi criado apenas para fins **educacionais e de demonstração**. O uso indevido de keyloggers pode ser **ilegal** e **antiético**. Certifique-se de que possui permissão para usá-lo no ambiente desejado.

## 🚀 Funcionalidades

- Registra todas as teclas pressionadas no teclado.
- Salva as teclas pressionadas em um arquivo de texto (`dados.txt`).
- Executa em **segundo plano**, sem exibir uma janela de console.

## 🖥️ Pré-requisitos

Para compilar e executar o programa, você precisará de:
- Um **compilador C**, como **MinGW** ou **Visual Studio**.
- Sistema operacional **Windows**.

## 📥 Como Utilizar

### Passo 1: Compilar o código

Você pode compilar o código utilizando **GCC** ou **MinGW**. No terminal ou no prompt de comando, execute:

```sh
gcc keylogger.c -o keylogger.exe -mwindows
```

Esse comando cria o arquivo `keylogger.exe`, que será executado no Windows sem abrir uma janela de console.

### Passo 2: Executar o keylogger

Após a compilação, basta executar o arquivo gerado (`keylogger.exe`). O programa começará a registrar as teclas pressionadas e salvará no arquivo `dados.txt` no mesmo diretório da execução.

### Passo 3: Encerrar a execução

Para interromper o programa, siga estes passos:

1. Pressione `Ctrl + Shift + Esc` para abrir o **Gerenciador de Tarefas**.
2. Procure pelo processo `keylogger.exe`.
3. Selecione o processo e clique em **Finalizar tarefa**.

## ⚖️ Uso Responsável

Este keylogger foi desenvolvido para fins **acadêmicos e de aprendizado**. O uso de keyloggers sem consentimento é **ilegal** e **viola a privacidade**. Certifique-se de usar este programa **apenas em ambientes autorizados**.

## ⚠ Aviso Legal

O autor deste projeto **não se responsabiliza** por qualquer uso indevido do software. Este programa foi criado **exclusivamente para fins educacionais**, e cabe ao usuário garantir que o uso esteja em conformidade com as **leis locais e com a ética**.

---

📌 **Feito para aprendizado e pesquisa** 📌

