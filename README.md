📚 Minha Biblioteca Pessoal
Sistema de Gerenciamento de Acervo Privado de Livros – Projeto em C++
<br>
📝 Descrição Geral

Minha Biblioteca Pessoal é um sistema em C++ desenvolvido para gerenciar um acervo particular de livros utilizados para estudo e leitura pessoal. Ele permite registrar livros, controlar o andamento de leitura, editar informações e consultar o acervo de forma simples e eficiente.

Este projeto foi desenvolvido no contexto da disciplina Programação II, seguindo um conjunto estruturado de 10 checkpoints, cada um representando uma etapa incremental da construção do software.

O repositório contém:

📄 Versão modular e profissional (src/, include/, tests/, docs/)

🧾 Versão compacta em arquivo único para uso no laboratório

📘 Documentação gerada com Doxygen

🛠️ Makefile + testes unitários (TDD)

📊 Modelagem (User Stories + CRC Cards)

🎤 Slides de apresentação (quando prontos)

<br>

🎯 Objetivo do Sistema

Criar uma aplicação capaz de gerenciar um acervo pessoal de livros, fornecendo:

Organização simples e eficiente

Registro de status de leitura

Edição e remoção facilitadas

Busca rápida e listagem filtrada

O sistema existe para resolver um problema cotidiano: controlar o próprio acervo sem depender de sistemas externos, planilhas ou anotações dispersas.

🧠 Motivação

Com o tempo, é comum acumular livros físicos e digitais, e perder o controle sobre:

O que já foi lido

O que está em andamento

O que ainda precisa ser iniciado

Quais autores você mais acompanha

Qual livro você emprestou (ou perdeu!)

A ideia deste projeto nasce da necessidade pessoal de centralizar, organizar e acompanhar leituras e decisões relacionadas ao próprio acervo.

Além disso, o tema proporciona:

Bom nível de complexidade para modelagem

Aplicação de POO real no mundo real

Decisões arquiteturais interessantes

Evolução incremental ao longo dos checkpoints

📌 Funcionalidades Principais
✔️ Cadastro de livros

Registrar título, autor, ano, gênero e status.

✔️ Edição de informações

Atualizar dados de um livro já cadastrado.

✔️ Remoção de livros

Excluir itens do acervo de forma segura.

✔️ Registro de status de leitura

Não iniciado

Lendo

Lido

✔️ Busca por título ou autor

Busca parcial ou total.

✔️ Listagem do acervo com filtros

Por status

Por gênero

Por ano

Completa

🏗️ Modelagem do Sistema
📘 User Stories

US01 — Cadastrar livro
Como leitora, quero registrar meus livros para organizar meu acervo.

US02 — Editar livro
Como leitora, quero atualizar informações para manter meus dados consistentes.

US03 — Remover livro
Como leitora, quero excluir livros que não fazem mais parte do acervo.

US04 — Consultar acervo
Como leitora, quero visualizar meus livros com filtros para facilitar a navegação.

US05 — Buscar livros
Como leitora, quero encontrar rapidamente um título ou autor específico.

US06 — Controlar status
Como leitora, quero acompanhar o andamento das minhas leituras.

🟦 CRC Cards
📌 Classe: Book

Responsabilidades

Armazenar dados do livro

Alterar status e atributos

Colaboradores

Library

📌 Classe: Library

Responsabilidades

Gerenciar coleção de livros

Adicionar, editar, remover

Buscar e filtrar livros

Listar acervo

Colaboradores

Book

📌 Classe: App

Responsabilidades

Controlar o fluxo da aplicação

Interação com o usuário

Exibir menus e coletar entradas

Colaboradores

Library

<br>
🛠️ Implementação

A implementação foi desenvolvida seguindo:

✔️ Programação Orientada a Objetos
✔️ Modularização (.hpp / .cpp)
✔️ Programação defensiva
✔️ Tratamento de exceções
✔️ Padrões de boas práticas em C++
✔️ Separação clara entre interface e lógica
✔️ Documentação Doxygen

Desafios encontrados

Criar um sistema robusto usando apenas console

Controlar entradas inválidas do usuário

Organizar bem a estrutura para crescer ao longo dos checkpoints

Preparar duas versões: simples e profissional

Criar filtros eficientes e fáceis de usar
