
# Palavreco - Termo

Um clone do popular jogo de adivinhação de palavras Termo, desenvolvido em linguagem C. Este projeto recria a experiência de jogo do navegador diretamente no terminal, desafiando o jogador a adivinhar uma palavra de 5 letras em 6 tentativas.


## Autores

- [@OSilvaDevTI](https://github.com/OSilvaDevTI) - Back End
- [@obuenin](https://www.instagram.com/obuenin/) - Front End
- [@felipe_placo](https://www.instagram.com/felipe_placo/) - Front End

## FAQ

#### 1. Quais são os requisitos para rodar o jogo?

Você precisará de um compilador C (como o Dev-C++) e um terminal. O jogo utiliza a biblioteca conio.c para funções de manipulação de console, o que é comum em ambientes de desenvolvimento como o Windows. Se você estiver usando um sistema operacional diferente, pode ser necessário adaptar o código para bibliotecas equivalentes (como a ncurses no Linux/macOS) ou garantir que seu compilador suporte a conio.c.

#### 2. Posso adicionar minhas próprias palavras ao dicionário?

Sim! O jogo lê as palavras de um arquivo chamado jogo.h. Para adicionar novas palavras, simplesmente edite a linha 12 na constante, adicionando uma palavra após a vírgula, entre as aspas duplas, antes do colchetes final, após isso, adicione +1 em rand() e pronto. Certifique-se de que todas as palavras tenham o mesmo número de letras (5 letras, por padrão).


## Aprendizados

Desenvolver um projeto como este me proporcionou uma excelente oportunidade para aprofundar o conhecimento em várias áreas de programação e lógica. Refletindo sobre a experiência, aqui estão os principais aprendizados e desafios:

#### Aprendizados
- **Manipulação de Strings em C:** C não tem strings como um tipo de dado nativo, o que me forçou a trabalhar com arrays de caracteres (char[]). Aprendemos a usar funções como strcmp() para comparar palavras e a iterar por cada letra para verificar a posição e a presença delas, o que é fundamental para a lógica do jogo.

- **Gerenciamento de Memória:** O trabalho com arrays e strings em C exigiu um cuidado extra com a alocação e o acesso à memória, evitando erros comuns como buffer overflow ou acessos a índices inválidos.

- **Lógica do Jogo:** A lógica para dar o feedback "verde", "amarelo" e "cinza" foi o coração do projeto. Isso envolveu a criação de um algoritmo que compara duas strings (a palavra do jogador e a palavra secreta) e devolve um array de feedback. O desafio foi garantir que o feedback de letras "amarelas" fosse preciso, especialmente quando há letras repetidas na palavra secreta.

#### Desafio e Como Foi Superado
**1. Lógica para Múltiplas Letras Repetidas:** O algoritmo para o feedback de cores apresentou um desafio específico: como lidar com palavras que têm letras repetidas, tanto na palavra secreta quanto na tentativa do jogador? Por exemplo, na palavra "BOLSO", se o jogador tenta "SOUBE". O 'S' em "SOUBE" não deveria ser amarelo, pois o 'S' de "BOLSO" já foi verificado para a posição correta.

  - **Solução:** O algoritmo foi refinado para primeiro verificar todas as letras na posição correta (verdes). Depois, ele faz uma segunda passagem para as letras "amarelas", mas com uma condição: a letra só é marcada como amarela se ainda houver uma "cópia" dela disponível na palavra secreta que não tenha sido marcada como "verde". Isso evita que uma letra "amarela" seja marcada incorretamente.

Esse projeto foi uma jornada de aprendizado contínuo, onde cada problema se tornou uma oportunidade de entender melhor os fundamentos da linguagem C e a arte de resolver problemas de forma lógica e eficiente.
