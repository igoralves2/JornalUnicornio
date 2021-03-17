#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	//	O resto da inicialização vem aqui!
	//	Carregar os Recursos
	carregarRecursos();
	
	//Definindo a base do jornal.
	sprite_tempJornal.setSpriteSheet("templateJornal");
	sprite_tempJornal.setEscala(0.5, 0.5);
	//carregar fontes
	
	texto_tituloJornal.setFonte("TituloJornal");
	texto_tituloJornal.setString("Movimento Diário");
	texto_tituloJornal.setCor(0, 0, 0);
	texto_tituloJornal.setAlinhamento(TEXTO_CENTRALIZADO);
	texto_tituloJornal.setCorPalavra("Diário", 128, 0, 0);
	texto_tituloJornal.setEscala(5, 5);
	
	//TextoColuna
	texto_coluna.setFonte("TextoColuna");
	texto_coluna.setString("Na introdução, poderia ter mais informações do porque foram escolhidos os jogos para serem analisados, por exemplo ao citarem um jogo que vão desenvolver, apresentar uma breve descrição");
	texto_coluna.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	texto_coluna.setLarguraMaxima(100);
	texto_coluna.setEscala(0.5,0.5);
	texto_coluna.setCor(0, 0, 0);
	texto_coluna.setEspacamentoLinhas(1.5);
	//Player
	
	player.setSpriteSheet("player");
	player.setAnimacao(0);
	//Painel Debug
	gDebug.setPos(150, 350);
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		//	Se pressionou R, restaura o painel de debug
		if (gTeclado.pressionou[TECLA_R])
			gDebug.restaurar();
		//	Seu código vem aqui!
		//	...
		sprite_tempJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() /1.2);
		texto_tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 6);
		texto_coluna.desenhar(gJanela.getLargura() / 3.8, gJanela.getAltura() / 1.8);
		gDebug.depurar("FPS", (int)gTempo.getFPS());
		gDebug.depurar("deltaTempo", gTempo.getDeltaTempo());
		player.avancarAnimacao();
		player.desenhar(gJanela.getLargura() / 3, gJanela.getAltura() / 6);
		uniTerminarFrame();
	}
}

void Jogo::carregarRecursos()
{
	gRecursos.carregarFonte("TituloJornal", "../assets/pixelplay.ttf");
	gRecursos.carregarFonte("TextoColuna", "../assets/new_browserlink.ttf");
	gRecursos.carregarSpriteSheet("templateJornal", "../assets/JornalTemplate.png", 1, 1);
	gRecursos.carregarSpriteSheet("player", "../assets/Player.png", 1, 2);
}
