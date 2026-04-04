# César 🔒

A Cifra de César é um dos métodos mais antigos e simples de criptografia. Ela funciona através da substituição de cada letra do texto por outra que se encontra um número fixo de posições à frente no alfabeto. Por exemplo, com uma chave de 1, 'A' vira 'B', 'B' vira 'C' e assim por diante.

## Especificação
Num arquivo `caesar.c`, crie um programa que criptografe mensagens utilizando esta técnica:
1. O programa deve aceitar um único argumento de linha de comando: um número inteiro positivo que será a **chave**.
2. Se o programa for executado sem argumentos, com mais de um argumento, ou se o argumento não for um número positivo, o programa deve exibir uma mensagem de erro (`Como usar: ./caesar key`) e retornar `1`.
3. Peça ao usuário o texto original (`plaintext`).
4. Calcule e exiba o texto cifrado (`ciphertext`):
    - Letras maiúsculas devem continuar maiúsculas.
    - Letras minúsculas devem continuar minúsculas.
    - Caracteres não alfabéticos (espaços, pontuação, números) não devem ser alterados.
    - Se a chave for maior que 26, o alfabeto deve "dar a volta" (ou seja, o resultado será o mesmo se eu usar, por exemplo, 13 ou 39).



## Demonstração
```bash
$ ./caesar 13
plaintext:  hello, world
ciphertext: uryyb, jbeyq

$ ./caesar 1
plaintext:  HELLO
ciphertext: IFMMP

$ ./caesar
Como usar: ./caesar key