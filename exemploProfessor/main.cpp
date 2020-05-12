#include <iostream>
#include <string.h>
#include "classeAdministrador.cpp"
#include "classeJogador.cpp"

main(){
	Administrador adm;
	Jogador lv;
	
	
	adm.setNome("Xandao");
	adm.setApelido("O_Lindo");
	adm.setSetor(69);
	
	adm.exibirDadosAdm();
	
	lv.setNome("JC");
	lv.setApelido("LV");
	lv.setPontos(51);
	lv.setRanking(10);
	
	lv.exibeDadosJog();
	
	adm.exibirDados();
	lv.exibirDados();
}
