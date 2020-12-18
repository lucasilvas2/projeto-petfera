<h1 align="center">
  <img alt="PetShopBoys" title="#PetShopBoys" src="https://github.com/lucasilvas2/projeto-petfera/blob/main/img/petshop1.png?raw=true">
</h1>
<p align="center">
  <a href="https://github.com/lucasilvas2/projeto-petfera/blob/main/LICENSE"><img alt="GitHub license" src="https://img.shields.io/github/license/lucasilvas2/projeto-petfera"></a>
  <a href="https://github.com/lucasilvas2/projeto-petfera/network"><img alt="GitHub forks" src="https://img.shields.io/github/forks/lucasilvas2/projeto-petfera?style=social"></a>
  <a href="https://github.com/lucasilvas2/projeto-petfera/stargazers"><img alt="GitHub stars" src="https://img.shields.io/github/stars/lucasilvas2/projeto-petfera?style=social"></a>
  <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/lucasilvas2/projeto-petfera">
  <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/lucasilvas2/projeto-petfera">
</p>
<p aling="center"> 
</p>

## 💻 Sobre o projeto
<p align="justify"> 🐾 Pet Shop Boys - é criação de um programa de gerenciamento para o Pet Shop Fera. Projeto idealizado pela disciplina de Linguagem de Programação I (UFRN-IMD), ministrada pelo professor Silvio Costa Sampaio. Com o objetivo da criação de um sistema para um pet shop, possibilitando o cadastro e comercialização de animais silvestre doméstico, nativos e exóticos. Seguindo todas as ordens de manejo definida pelo IBAMA.</p>

<p align="center">
 <a href="#funcionalidades">Funcionalidades</a> •
 <a href="#pré-requisito">Pré-requisito</a> •
 <a href="#como-rodar-o-programa">Como rodar o programa</a> • 
 <a href="#vídeo-demonstração">Vídeo demonstração</a> •
 <a href="#tecnologias-utilizadas">Tecnologias utilizadas</a> •
 <a href="#autores">Autores</a> •
 <a href="#licença">Licença</a> •
 <a href="#considerações-do-projeto">Considerações do projeto</a> 

</p>

## ⚙️ Funcionalidades
* Cadastrar, listar, excluir e alterar:
    - Animal
    - Veterinário
    - Tratador
 * Atribuição de veterinário e tratadores para cada animal
 * Salvar dados em memória secundária
 ### Parte I
 * Na primeira parte do projeto foram implementadas todas as classes e métodos necessários para atender as funcionalidades para o gerenciamento dos animais e funcionários do pet shop. Após a avaliação, o código apresentou os seguintes pontos a serem melhorados:
    - Arquivo Readme sem as informações essenciais do projeto
    - Warning ao compilar o programa
    - Não utilização de ponteiros inteligentes
    - Ausência de um link para o video de demonstração
 ### Parte II
 * Na segunda parte do projeto foi implementado os recursos de gravação e leitura de arquivos, para persistência de dados. Foram realizadas também as melhorias pendentes da parte 1 do projeto:
    - Arquivo Readme editado com todas as informações importantes sobre o projeto
    - Ausência de warnings durante a compilação
    - Utilização de ponteiros inteligentes
    - Link para o video de demonstração

## 🔎 Pré-requisito

Será necessário ter instalado em sua máquina g++ e make. Caso não tenha siga os passos informados a seguir.

  ```bash
  #Comando para instalação g++ e make (Linux)
    $ sudo apt-get install g++
    $ sudo apt-get install make
  ```
 ## ▶️ Como rodar o programa
 ```bash
  #Clone o projeto, utilizando o link para o repositório 
  $ git clone https://github.com/lucasilvas2/projeto-petfera.git
  
  #Inicie o terminal dentro do repositório clonado e utilize o comando make realizar a compilação
  $ make
  
  #Utilize o comando para inciar o programa
  $ ./bin/main
  
  #Caso deseje apagar os arquivos criados para compilação utilize o comando
  $ make clean 
 ```
 ## 📼 Vídeo demonstração
  Acesse o vídeo de demonstração no [YouTube.](https://youtu.be/30sNDTukXC8)
 
 ## 🛠️ Tecnologias utilizadas
 
 Ferramentas utilizadas na construção do projeto.
  
  - [G++](https://gcc.gnu.org/)
  - [GNU Make](http://www.gnu.org/gnu/gnu.html)
  - [Doxygen](https://www.doxygen.nl/index.html)
  
 ## 🤝 Autores
  
  - [Fernando Pereira](https://github.com/fernandocunhapereira)
  - [Jordy Araujo](https://github.com/JordyAraujo)
  - [Lucas Silva](https://github.com/lucasilvas2)
  
 ## 📜 Licença
 
  Utilizamos licença [MIT](https://github.com/lucasilvas2/projeto-petfera/blob/main/LICENSE)
  
 ## 🗣 Considerações do projeto
  <p align="justify">Durante a elaboração do projeto foi necessário a aplicação e desenvolvimento das habilidades em programação orientada a objetos (POO). Conceitos fundamentais tais como, classes, métodos, encapsulamento, heranças, sobrecargas e outros estudados durante a disciplina são encontrados no código desenvolvido por esta equipe. Desenvolvemos um código capaz de fazer o gerenciamento dos animais e funcionários de um pet shop no que diz respeito ao cadastramento, alterações, listagem e exclusão, além do armazenamento desses dados em arquivos. Tanto os animais quanto os profissionais foram subdivididos em subclasses de acordo com suas peculiaridades que os diferenciam entre si, tornando esses "objetos" criados no ambiente virtual mais próximos do mundo real. Desse forma foi requerido esforço maior na criação das heranças e implentação utilizando ponteiros inteligenstes. Além disso, o projeto lançou novos desafios como o trabalho em equipe, que é uma condição essencial para o mercado de trabalho principalmente na área de programação, e feito de forma remota, que é uma tendência cada vez mais presente em nossa realidade. Sem dúvidas não foi uma tarefa simples pois, pessoas com idéias e preferências diferentes, que praticamente não se conhecem pessoalmente e vieram a ter o primeiro contato virtualmente, se encontram com um projeto a ser entregue. Mas com empenho de todos acreditamos ter entregado um trabalho que satisfaz o objetivo principal da disciplina. Como todo software, sempre há melhorias que podem ser feitas, e com o avanço de nosso aprendizado e experiência isso nos tornará cada vez mais capacitados para realizá-las.</p>



