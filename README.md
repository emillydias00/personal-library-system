# Personal Library System

Sistema de Biblioteca Pessoal desenvolvido como projeto acadêmico de nível mediano.  
O objetivo é permitir ao usuário gerenciar seu acervo de livros, controlar o status de leitura e realizar consultas simples.

## 📚 Funcionalidades Principais
- Cadastro de livros  
- Edição de informações  
- Remoção de livros  
- Registro de status de leitura (lido, lendo, não iniciado)  
- Busca por título ou autor  
- Listagem do acervo com filtros  

## 🛠️ Tecnologias (a definir conforme evolução do projeto)
- Linguagem:  
- Banco de Dados:  
- Paradigma: Programação Orientada a Objetos  
- Interface: (definir futuramente)

> As tecnologias serão adicionadas conforme os requisitos forem finalizados.

## 📁 Estrutura prevista do projeto
- `include/` : headers (.hpp)
- `src/` : implementações (.cpp)
- `tests/` : testes unitários simples
- `main.cpp` : executável
- `Makefile` : regras para build, run, test

## Como compilar
```bash
make
make run
make test

Funcionalidades

Cadastrar, editar, remover livros

Atualizar status de leitura (não iniciado / lendo / lido)

Buscar por título/autor (trechos)

Listar com filtros (por status)

Boas práticas

Doxygen nos headers

Validação e tratamento de exceções (ExcecaoSistema)

Modularização em headers/implementações

Tests simples (pode migrar para GoogleTest)

Notas para o professor

Entreguei:

6+ User Stories com critérios de aceitação (documento C5)

Cartões CRC (documento C5)

Código modularizado e versão única para compiladores simples

Doxygen-ready

Makefile, testes e README
