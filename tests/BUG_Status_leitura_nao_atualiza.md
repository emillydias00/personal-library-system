Solução Correta:
int novoStatus;
cin >> novoStatus;

if (novoStatus == 0 || novoStatus == 1) {
    livros[id].lido = novoStatus;
} else {
    cout << "Status inválido, mantendo o anterior.\n";
}
cin.ignore(numeric_limits<streamsize>::max(), '\n');
