#pragma once

//No ponto .h é o que?... o que as funções terão, aqui não há implementação. Somente protótipos das funções, aqui indica o que estará disponivel para o programador utilizar deste arquivo .h
//Lembre da aula que este arquivo .h é chamado de header file. Até agora você usou header files criados por outros programadores.
//agora você fez o seu próprio header file.
//Mas você precisa implementar as funções em algum lugar, já que ai só tem protótipos, é ai que entra o .cpp
//Protótipo das funções
void ExibirMenu();
int RetornarEscolha();
int ProcessarEscolha(int TipoEscolha);