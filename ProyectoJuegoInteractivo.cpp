#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;
int AtaqueAleatorio(){
	int ataque = 0;
	srand(time(NULL));
	ataque=rand()%10;
	return ataque;
}
void delay(int secs){
	for(int i = (time(NULL)+secs); time(NULL)!= i; time(NULL));
}
void Cargando(){
	for(int i=0; i<3; i++){
		cout<<"Cargando historia";
		delay(1);
		system("cls");
		cout<<"Cargando historia .";
		delay(1);
		system("cls");
		cout<<"Cargando historia ..";
		delay(1);
		system("cls");
		cout<<"Cargando historia ...";
		delay(1);
		system("cls");
	}
}
int main(){
	int opcion = 0;
	int opcion2 = 0;
	int vida = 0;
	int defensa = 0;
	int ataque = 0;
	int dinero = 0;
	int vidaMonstruo = 0;
	int ataqueMonstruo = 0;
	bool salida = 0;
	bool apoyo = 0;
	string nombrePersonaje = "Hector Trujillo";
	string clase = "B";
	cout<<"\tTHE ORDER OF UVLIUS THE INMORTAL\n\n\n"<<endl;
	system("pause");
	system("cls");
	do{
		cout<<"\tTHE ORDER OF UVLIUS THE INMORTAL\n\n"<<endl;
		cout<<"\t1 - Comenzar partida\n\n\t2 - Instrucciones del juego\n\n\t3 - Idioma\n\n\t4 - Creditos\n\n\t5 - Salir del Juego"<<endl;
		cout<<"\nIngrese numero entero para elegir cualquier opcion"<<endl;
		cin>>opcion;
		system("cls");
		switch(opcion){
			case 1: //Opcion para empezar la partida
				vida= 100; //Se inicia la vida en 100 para el comienzo
				dinero= 100; //Se otorgan 100 de oro para iniciar el juego
				cout<<"Bienvenido a THE ORDER OF UVLIUS THE INMORTAL, elige el nombre\nde tu personaje\n"<<endl;
				cout<<"nombre del personaje: ";
				cin.ignore();
				getline(cin, nombrePersonaje); //Guarda el nombre para el personaje
				system("cls");
				Cargando(); //simula la carga del juego y empieza la partida
				//Comienzo de la historia
				cout<<"Esta es la historia de "<<nombrePersonaje<<", una persona con una vida tranquila\nen un rancho a las afueras de la ciudad Rottenburg, donde"<<endl;
				cout<<"se encontraba el castillo del rey Eugenio III en aquellos tiempos de 1240;\n"<<nombrePersonaje<<" no buscaba nada mas que vivir una vida tranquila"<<endl;
				cout<<"y alejada de los problemas, pero a pesar de eso,\nestaba al tanto de que en cualquier momento de cualquier dia podria pasar"<<endl;
				cout<<"cualquier cosa, y era justo lo que pasaria el 16 de Julio de 1247.\n"<<endl;
				system("pause");
				system("cls");
				
				cout<<"Al norte del rancho de "<<nombrePersonaje<<", se encontraba un gran monte,\ndonde albergaban un grupo de hechiceros liderados por Uvlius el"<<endl;
				cout<<"Inmortal, quienes buscaban la forma de poder enfrentar a las fuerzas de\nEugenio III ya que sus predecesores eran grandes enemigos de este grupo"<<endl;
				cout<<"y a lo largo del tiempo han eliminado a multiples miembros del mismo\n"<<endl;
				system("pause");
				system("cls");
				
				cout<<"Dichos hechiceros despues de un largo y duro trabajo, encontraron la\nforma de crear un hechizo que permite revivir a los muertos y mutar a"<<endl;
				cout<<"los animales vivos; fue entonces que empezaron a trabajar en conjunto\nlos hechiceros mas importantes y poderosos del grupo para poder formar"<<endl;
				cout<<"un ejercito que fuera capaz de dar batalla y acabar con el reino de Eugenio III\n"<<endl;
				system("pause");
				system("cls");
				
				do{ //comienza la primera interaccion
					cout<<"En la tarde del 16 de Julio, "<<nombrePersonaje<<" se encontraba recogiendo\nlos cultivos de lechuga, tomate, calabacines, entre otras verduras los"<<endl;
					cout<<"cuales habia cuidado con tanto esfuerzo y dedicacion; una vez recolectados\nlos guardo en cajas que posteriormente poso en el interior de la carreta"<<endl;
					cout<<"de carga para posteriormente llevarlo a vender a la ciudad\n"<<endl;
					cout<<"Que hara ahora "<<nombrePersonaje<<"?\n"<<endl;
					cout<<"1: Entrar a su casa\n2: Revisar las verduras\n3: Ir a la ciudad\n4: Salir al menu principal\n"<<endl;
					cout<<"[Vida: "<<vida<<"]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){ //primera toma de decisiones
						case 1:
							cout<<nombrePersonaje<<" se dirige caminando y con calma hacia la puerta principal,\ncon gentileza abre la puerta de madera la cual se encontraba"<<endl;
							cout<<"un poco deteriorada por el tiempo y la humedad, al abrir la puerta fue\nposible observar que a pesar de que algunas partes se encontraban"<<endl;
							cout<<"desgastadas, la casa se encontraba bien organizada y limpia, como si el\npolvo no fuera algo capaz de existir dentro de la casa, ademas de que"<<endl;
							cout<<"resaltaba un sillon cubierto de cuero, una mesa de centro y un librero\nhechos de madera tallada completamente a mano. (debe ser muy lindo"<<endl;
							cout<<"vivir en una casa asi)\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 2:
							cout<<nombrePersonaje<<" se acerca a la parte trasera de la carreta en donde\nse encuentran almancenadas las verduras que recientemente cosecho,"<<endl;
							cout<<"verifica que no hayan bichos asquerosos o alguna verdura que se\nencuentre en mal estado.\n"<<endl;
							cout<<"Despues de una cuidadosa revision le enorgullecio poder contemplar\nque nunca habia podido conseguir tantas verduras en tan perfecto"<<endl;
							cout<<"estado, esta seguro de que en esta ocasion podra vender bastante mas\nque en las ultimas 3 ocasiones\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 3: //Opcion de continuacion de la historia
							cout<<"Una vez que "<<nombrePersonaje<<" se aseguro de que todo estuviera en\norden y no faltara nada mas, subio a su carreta determinado a vender"<<endl;
							cout<<"todo lo que lleva, tomo las riendas, dio la orden al caballo y emprendio su\nviaje hacia la ciudad\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 4: //salida al menu principal
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
						default:
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida==1){
						break;
					}
				}
				while(opcion!=3); //fin de la primera interaccion para la toma de decisiones
				if(salida==1){
					salida = 0;
					break;
				}
				// Continuacion de la historia
				cout<<nombrePersonaje<<" mientras viajaba, aunque lo ha hecho antes, aprecio el\ntan bello paisaje que uno podia encontrar en el recorrido, pudo observar"<<endl;
				cout<<"grandes llanura solo separadas por el camino que llevaba a la ciudad,\npor un lado eran completamente verdes y llenos de animales que convivian"<<endl;
				cout<<"en gran armonia, y por el otro una gran llanura decorada con flores de\ntodos los colores que adornaban tan perfectamente dicho ambiente.\n"<<endl;
				system("pause");
				system("cls");
				cout<<"Larga fue la espera, pero finalmente "<<nombrePersonaje<<" ha llegado a la\nciudad, como siempre, maravillado por lo grande que pueden llegar a ser"<<endl;
				cout<<"las construcciones, la gran cantidad de gente que transitaban las calles y\nlas grandes banderas tan coloridas que posaban en las puntas de las"<<endl;
				cout<<"casas, las cuales mostraban un gran escudo dorado con un leon\ncon una gran melena en la parte central y un fondo de cuatro colores diferentes"<<endl;
				cout<<"entre si los cuales resaltaban mucho el escudo\n"<<endl;
				system("pause");
				system("cls");
				
				do{//Segunda interaccion de la historia
					cout<<"Una vez que "<<nombrePersonaje<<" llega a las puertas, fue recibido por los\nguardias, quienes se encontraban altamente armados y portaban"<<endl;
					cout<<"grandes piezas de hierro que cubrian todo su cuerpo, uno de los\nguardias se acerca y pregunto con una cara seria e imponente:\n"<<endl;
					cout<<"Quien osa querer entrar a la gran ciudad de nuestro Rey Eugenio III y que\nbusca obtener?\n"<<endl;
					cout<<"Que responde "<<nombrePersonaje<<"?\n"<<endl;
					cout<<"1: Mi nombre es "<<nombrePersonaje<<", soy solo alguien que busca vender en\neste pueblo, traigo grandes cantidades de verdura jugosa y en perfectas"<<endl;
					cout<<"condiciones para otorgar a sus residentes.\n2: Señor, no se me acerque tanto que me da amsiedad y luego no se que\nresponder."<<endl;
					cout<<"3: Soy tu mama hijito que ya no me visitas, vengo a decirte que te\nlargues, que me estorbas, no ves?"<<endl;
					cout<<"4: Salir al menu principal\n\n[Vida: "<<vida<<"]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){
						case 1: // opcion para continuar la historia
							cout<<"Manteniendo su mirada seria, el soldado hecha un rapido vistazo a la\ncarga que lleva "<<nombrePersonaje<<", vuelve al centro y con una voz fuerte"<<endl;
							cout<<"pronuncio: "<<nombrePersonaje<<" puede usted pasar, solo recuerde que ante\ncualquier violacion ante la ley, sera usted acusado y enjuiciado!\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 2:
							cout<<"Parece que el soldado esta perdiendo la paciencia y paso de tener\nuna cara seria a tener una mirada asesina lista para atacar, mejor"<<endl;
							cout<<"responder pronto.\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 3: //evento de perdida de vida
							cout<<"El soldado se ha enfurecido y sin pensarlo te ha golpeado en la nuca,\nvuelve a repetir la pregunta pero esta vez te lo ha gritado en cara, mejor"<<endl;
							cout<<"no volver a bromear.\n\nHas perdido 3 HP"<<endl;
							apoyo=1;
							system("pause");
							system("cls");
							break;
							
						case 4: // salida al menu
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
							
						default: //Opcion de descarte
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida==1){ //Proceso en caso de querer salir
						break;
					}
				}
				while(opcion!=1); //FIN DE LA SEGUNDA INTERACCION
				
				if(salida==1){ //Terminacion del proceso en caso de querer salir
					salida = 0;
					break;
				}
				if(apoyo == 1){ //Rama de perdida de vida durante interaccion
					vida = vida - 3;
					apoyo = 0;
				}
				// Continuacion de la historia
				cout<<"Una vez le fue otorgado el acceso, continuo con su camino. Mientras\nrecorria las calles, en busca de puestos en donde vender la carga,"<<endl;
				cout<<nombrePersonaje<<" alcanzo a escuchar a dos personas quienes tenian la cara lo\nsuficientemente tapada como para distinguirlos, a pesar del ruido"<<endl;
				cout<<"escucho que bajo sus murmuros, hablaban acerca de un hechicero de\nnombre Noxlumos el Sabio, por el ruido no alcanzo a escuchar con"<<endl;
				cout<<"claridad lo que decian, pero si escucho algo acerca de muertos vivientes\ny mutantes en el monte.\n"<<endl;
				system("pause");
				system("cls");
				
				do{ //Tercera interaccion de la historia
					cout<<"Esta informacion sorprendio a "<<nombrePersonaje<<", al haberlo escuchado\nno pudo pensar en seguir vendiendo lo que tenia, sentia que no podia"<<endl;
					cout<<"continuar sin hacer algo al respecto, debia contarle a alguien o hacer\nalgo por su cuenta.\n"<<endl;
					cout<<"Que deberia hacer?\n\n1: Seguir vendiendo, no es asunto tuyo\n2: Buscar a algun guardia y contarle lo sucedido\n3: Acercarte a los chicos y preguntar al respecto"<<endl;
					cout<<"4: Salir al menu principal\n"<<endl;
					cout<<"[Vida: "<<vida<<"]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){
						case 1: //interaccion de mas dinero
							cout<<nombrePersonaje<<" siguio vendiendo en 3 puestos mas, pero no pudo\npensar con claridad, a pesar de ello tuvo una buena venta\n"<<endl;
							cout<<"Has ganado 15 monedas de oro\n"<<endl;
							apoyo=1;
							system("pause");
							system("cls");
							break;
							
						case 2: //continuacion de la historia
							cout<<"En una esquina encuentra a un guardia y se acerca con rapidez pero no\nla suficiente como para llamar la atencion. Una vez que el guardia"<<endl;
							cout<<"percibe la presencia de "<<nombrePersonaje<<" lo mira atentamente con la\nguardia en alto. "<<nombrePersonaje<<"con voz preocupada y realizando"<<endl;
							cout<<"pausas entre las palabras para pensar, explica al guardia lo sucedido,\ntrata de advertir de que deben tener cuidado, sin embargo el guardia hace"<<endl;
							cout<<"caso omiso de lo que dice y en cambio le da una advertencia.\n"<<endl;
							system("pause");
							system("cls");
							
							cout<<"Guardia: Si sigues perturbando la paz de esta manera tendre que llevarte\na prision por un tiempo, y no queremos eso o si? Mejor llevate tus"<<endl;
							cout<<"historias a otro lado.\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 3:
							cout<<nombrePersonaje<<" trata de acercarse a estas personas tan misteriosas,\npero un sentimiento de miedo le invade y decide mejor alejarse.\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 4: //Opcion de salida
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
							
						default: //Opcion de descarte
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida == 1){ //Proceso de salida
						break;
					}
				}
				while(opcion != 2); // terminacion de la tercera interaccion
				if(salida == 1){ //Proceso de salida
					salida = 0;
					break;
				}
				if(apoyo == 1){
					dinero = dinero + 15;
					apoyo = 0;
				} //Continuacion de la historia
				
				cout<<"Al ver que los esfuerzos de "<<nombrePersonaje<<" fueron en vano, decide ser\naquel que haga algo al respecto, esto debido a que si algo malo le pasa a"<<endl;
				cout<<"la ciudad, tendra que hacer viajes bastantes mas largos para vender su\nmercancia y esta tan comodo con la vida que tiene como para"<<endl;
				cout<<"permitir algo asi\n"<<endl;
				system("pause");
				system("cls");
				
				do{ //Cuarta interaccion de la historia
					cout<<"Se le ocurre formar un equipo con gente valiente con quienes pueda ir en\ncontra de aquel grupo maligno, pero antes tiene que pensar donde"<<endl;
					cout<<"buscar, ademas de que tiene que conseguir dinero para conseguir\narmamento para poder luchar sin tantos problemas, tambien teniendo"<<endl;
					cout<<"en cuenta que solo tiene "<<dinero<<" monedas de oro.\n"<<endl;
					cout<<"Que deberia hacer primero?\n"<<endl;
					cout<<"1: Buscar en una plaza\n2: Buscar una taberna\n3: Buscar una armeria\n4: Salir al menu principal\n"<<endl;
					cout<<"[Vida: "<<vida<<"]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){
						case 1:
							cout<<nombrePersonaje<<" decide ir a la plaza principal, gritando por todos\nlados que esta en busca de gente valiente que le apoye en la gran"<<endl;
							cout<<"aventura que estaba por tomar, sin embargo, no parece haber muchos\nvoluntarios, creo que hasta lo tomaron por loco, por lo que decide"<<endl;
							cout<<"buscar en otra parte.\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 2: //Opcion de continuacion de la historia
							cout<<"Con ayuda de la guia de la gente, "<<nombrePersonaje<<" fue capaz de\npoder encontrar una taberna la cual tenia una forma muy peculiar pero"<<endl;
							cout<<"era grande, aunque un poco descuidado, igual parecia un buen lugar\npara poder reclutar gente, caminando un poco apresurado, se dirigio"<<endl;
							cout<<"hacia la puerta de la taberna para poder entrar.\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 3:
							cout<<"Facilmente "<<nombrePersonaje<<" pudo encontrar una armeria en donde\npregunto por el valor de las armas y armaduras, pero el armero comenzo a"<<endl;
							cout<<"hacer preguntas con respecto a que necesitabas, para que, cuanto\ntiempo, de que tipo, entre muchas otras cosas, por lo que "<<nombrePersonaje<<endl;
							cout<<"termino muy confundido puesto que no sabia mucho al\nrespecto y decide volver una vez que tenga ideas mas claras\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 4: //Salida al menu principal
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
							
						default: //Opcion de descarte
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida == 1){ //Proceso de salida
						break;
					}
				}
				while(opcion!=2); //Fin de cuarta interaccion
				if(salida == 1){ //Proceso de salida
					salida = 0;
					break;
				}
				cout<<"Una vez que "<<nombrePersonaje<<" entra en aquella taberna, abrio los ojos\ntanto como pudo, ya que quedo sorprendido ante lo que vio. En dicha"<<endl;
				cout<<"taberna habian destellos brillantes por luces en todas partes, iluminando\ntodo el establecimiento; ademas de eso, habia mucha gente, pero sobre"<<endl;
				cout<<"todo, personas con grandes y brillantes armaduras. Entre risas, gritos y\ncantares, con cautela y tratando de pasar desapercibido, "<<nombrePersonaje<<endl;
				cout<<"se acerca a la barra y es atendido por el cantinero\n"<<endl;
				system("pause");
				system("cls");
				
				do{ //Quinta interaccion de la historia
					cout<<"Cantinero: Saludos mi estimado! Que desea, que lo trae a estos\naposentos?\n"<<endl;
					cout<<"Que responde?\n"<<endl;
					cout<<"1: Saludos, soy "<<nombrePersonaje<<", es posible que pueda reclutar gente aqui?"<<endl;
					cout<<"2: Vengo por una buena cerveza (-3 de oro)\n3: Que te importa?\n4: Salir al menu principal\n"<<endl;
					cout<<"[Vida: "<<vida<<"HP]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){
						case 1: //Opcion de continuacion de la historia
							cout<<"Cantinero: Claro que si, para ello tiene usted que realizar una peticion\nen aquella oficina (el cantinero apunta por encima suyo,"<<endl;
							cout<<"donde un o puede darse cuenta que al subir las escaleras en el primer pasillo\npuede encontrarse la oficina principal), tiene usted que declarar lo"<<endl;
							cout<<"que necesita y la recompensa que pueden obtener, entre mayor sea la\nrecompensa, mayores seran las probabilidades de que encuentre gente"<<endl;
							cout<<"que lo ayude\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 2: //Opcion de recuperacion de vida
							cout<<"El cantinero con una sonrisa pintada en el rostro, con gran animo y\nmovimientos rapidos toma un gran tarro, se voltea de espaldas,"<<endl;
							cout<<"mostrando que atras suyo habia un gran barril de madera que contenia\ngrandes cantidades de cerveza, sirve cerveza en el tarro y lo posa frente"<<endl;
							cout<<"a "<<nombrePersonaje<<", agradecido paga 3 monedas de oro\n\nHas perdido 3 monedas de oro\n"<<endl;
							system("pause");
							system("cls");
							if(vida<100){
								apoyo=1;
								cout<<"Has recuperado 3 HP\n"<<endl;
								system("pause");
								system("cls");
							}
							break;
						case 3:
							cout<<"El cantinero hace como si no hubiera escuchado eso ...\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 4:
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
							
						default:
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida == 1){ //Proceso de salida
						break;
					}
				}
				while(opcion != 1);
				if(salida == 1){ //Proceso de salida
					salida = 0;
					break;
				}
				if(apoyo == 1){ //aplicacion del aumento de vida en caso de requerirla
					vida = vida + 3;
					dinero = dinero - 3;
					apoyo = 0;
				} //continuacion de la historia
				cout<<"Agradecido, "<<nombrePersonaje<<" se encamina hacia la oficina, no sin antes\ntoparse con alguien que no se encontraba en muy buenas condiciones,"<<endl;
				cout<<"parecia estar borracho...\n\nEl borracho tambaleandose entre pierna y pierna, se dirige hacia"<<endl;
				cout<<nombrePersonaje<<", no parece estar muy contento.\n"<<endl;
				system("pause");
				system("cls");
				
				do{ //Sexta interaccion de la historia
					cout<<"Borracho: Oye imbe***, tu me debes 4000 monedas de oro y te llego la hora\npara pagarme!\n"<<endl;
					cout<<"Que respondes?\n"<<endl;
					cout<<"1: Señor, usted me esta confundiendo con otra persona, ni siquiera lo\nconozco"<<endl;
					cout<<"2: Esta bien señor, pagare, solo tranquilicese"<<endl;
					cout<<"3: Si usted esta buscando pelea, pelea tendra"<<endl;
					cout<<"4: Salir al menu principal\n\n[Vida: "<<vida<<" HP]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){
						case 1:
							cout<<"El borracho parece insistente, no quiere dejarte ir\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 2:
							cout<<"Al revisar tus bolsillos, te percatas de que no cuentas con la cantidad de\ndinero que esta exigiendo, parece que se esta molestando mas\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 3:
							cout<<"Tomando una pose de pelea, te preparas para pelear contra aquel\nborracho sin verguenza, puesto que el borracho no esta en sus cinco"<<endl;
							cout<<"sentidos, no puede hacer mas que levantar medio brazo y sostener su\ncerveza. Rapidamente metes un derechazo hacia su menton, aunque no"<<endl;
							cout<<"tengas mucha fuerza, consigues derribarlo, aunque no estas seguro si lo\nque lo derribo fue el golpe con tu puño, o el golpe de alcohol\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 4:
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
							
						default:
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida == 1){ //Proceso de salida
						break;
					}
				}
				while(opcion != 3); //Fin de la sexta interaccion
				if(salida == 1){ //Proceso de salida
					salida = 0;
					break;
				} //continacion de la historia
				cout<<"Despues de aquel incidente, se acerca una gran figura de lo que parecia\nser una armadura que tenia una forma de espartano mezclado con"<<endl;
				cout<<"templario. "<<nombrePersonaje<<" se da la vuelta y logra apreciar por completo\naquella figura imponente que posaba a unos centimetros de nuestro"<<endl;
				cout<<"personaje, (hasta a mi me dio escalofrios)\n"<<endl;
				system("pause");
				system("cls");
				
				do{ //Septima interaccion de la historia
					cout<<"Con una voz profunda pero comprensible, aquel caballero dirigio la\npalabra hacia "<<nombrePersonaje<<".\n"<<endl;
					cout<<"Caballero misterioso: Estas buscando problemas amigo?\n"<<endl;
					cout<<"Que respondes?\n"<<endl;
					cout<<"1: No caballero, me disculpo, este borracho aseguraba que yo le debia dinero y\nestaba siendo demasiado molesto, yo solo estoy buscando a un grupo que"<<endl;
					cout<<"me ayude"<<endl;
					cout<<"2: ..."<<endl;
					cout<<"3: Me disculpo por la interrupcion, permitame invitarle una cerveza"<<endl;
					cout<<"4: Salir al menu principal\n"<<endl;
					cout<<"[Vida: "<<vida<<"HP]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){
						case 1:
							cout<<"El caballero se acerca mas a "<<nombrePersonaje<<", luciendo cada vez mas intimidante, luego\nde unos segundos, aquel caballero tan atemorizante comenzo a soltar"<<endl;
							cout<<"una serie de carcajadas\n\nCaballero: Amigo, haberlo dicho antes, que es lo que necesitas?\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 2:
							cout<<"No hacen mas que mirarse entre si, se desencadena usa gran guerra\nde miradas (en serio alguien eligio esta opcion?)\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 3:
							cout<<"Aquel caballero no parece convencido por tu respuesta, sera mejor\npensar en otra cosa\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 4: //Opcion de salida al menu
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
							
						default: //Opcion de descarte
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida == 1){ //Proceso de salida
						break;
					}
				}
				while(opcion != 1); //Fin de la septima interaccion de la historia
				if(salida == 1){ //Proceso de salida
					salida = 0;
					break;
				} //Continuacion de la historia
				cout<<"Luego de una larga explicación, el caballero parece intrigado, por lo que\nlleva a "<<nombrePersonaje<<" a conocer a su grupo. Este grupo se encontraba"<<endl;
				cout<<"reunido en una de las esquinas alejadas de la taberna, dentro del grupo\ndestacaban algunas cosas, en principio es que en total eran 3 personas"<<endl;
				cout<<"contando al caballero, en segundo es que uno de los miembros no\nparecía llevar gran protección en comparación con sus compañeros,"<<endl;
				cout<<"portaba ropa ligera y un gorro con lo que parecía ser una pluma muy\nlarga al color de las llamas, y por último, uno de los miembros destacaba"<<endl;
				cout<<"por su baja estatura, "<<nombrePersonaje<<" no sabía qué pensar, ya que era la\nprimera vez que veía e interactuaba con alguien de la raza de los enanos\n"<<endl;
				system("pause");
				system("cls");
				cout<<"El caballero gentilmente presentó a "<<nombrePersonaje<<" ante sus\ncompañeros, normalmente, sus compañeros devolvieron el saludo, del"<<endl;
				cout<<"cual podía resaltar el hecho de que el enano tenía una voz rasposa y de\nalto volumen, y el tercer compañero una voz suave pero firme. El"<<endl;
				cout<<"caballero explicó la situación a sus compañeros quienes se mostraron\ninteresados ante tal historia.\n"<<endl;
				system("pause");
				system("cls");
				
				do{ //Inicio de la octava interaccion
					cout<<"Una vez terminada la explicación, el caballero hace la tan esperada\npregunta a "<<nombrePersonaje<<". Cuál será la paga para el grupo?\n"<<endl;
					cout<<"1: 2500 monedas de oro"<<endl;
					cout<<"2: No habra paga"<<endl;
					cout<<"3: Lo que encuentren"<<endl;
					cout<<"4: Salir al menu principal\n\n[Vida: "<<vida<<"HP]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){
						case 1:
							cout<<"El caballero quien parece ser el líder del grupo denota el hecho de\nque hay que pagar con anticipación si es una paga monetaria, sin"<<endl;
							cout<<"embargo no parece que cuentes con la suficiente cantidad para pagarlo\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 2:
							cout<<"El caballero suelta una gran carcajada al igual que sus compañeros.\nUna vez terminó de reír, con una voz que denotaba molestia, vuelve a"<<endl;
							cout<<"preguntar exigiendo que no hayan más bromas\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 3: //Opcion de continuacion de la historia
							cout<<"Antes de comentar el precio, "<<nombrePersonaje<<" da a conocer su\nhistoria, su oficio y su estilo de vida, afirmando que aunque quisiera"<<endl;
							cout<<"pagarles grandes cantidades, el oficio que tiene no le permite tener\ngrandes cantidades de dinero, sin embargo luego de algunos"<<endl;
							cout<<"argumentos (algunos no tan sólidos o llamativos), logra convencer al\ngrupo de que podrán obtener algo más valioso que el oro, y eso es"<<endl;
							cout<<"aquellas riquezas y tesoros guardados por los hechiceros.\n"<<endl;
							system("pause");
							system("cls");
							break;
							
						case 4: //Opcion de salida al menu
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
							
						default: //Opcion de descarte
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida == 1){ //Proceso de salida
						break;
					}
				}
				while(opcion!=3); //Fin de la octava interaccion
				if(salida == 1){ //Proceso de salida
					salida = 0;
					break;
				} //Continuacion de la historia
				cout<<"Caballero: Una vez aclarado todo, no queda más que presentarnos\nformalmente, mi nombre es Julius el Grande, el enano es Frederick"<<endl;
				cout<<"Leibhammer y por ultimo Erick Eaglesight\n\n"<<nombrePersonaje<<": Es un placer, mi nombre es "<<nombrePersonaje<<"."<<endl;
				system("pause");
				system("cls");
				cout<<"Todo parece ir acorde a lo planeado, "<<nombrePersonaje<<" ya cuenta con un\ngrupo con quien aventurarse, sin embargo, todavia hace falta conseguir"<<endl;
				cout<<"un mejor armamento para poder defenderse, ya que si bien el grupo\nparece estar muy bien armado, "<<nombrePersonaje<<" no podra siempre"<<endl;
				cout<<"depender de ellos y será mejor que entre todos se ayuden.\n"<<endl;
				system("pause");
				system("cls");
				do{ // Definicion de la clase del jugador
					cout<<"Tras consultar sobre armas con el grupo, has tomado una decisión para\ncomprar. Has elegido comprar de la categoria\n"<<endl;
					cout<<"1: Escudero\n2: Botanico\n3: Curandero\n4: Salir al menu principal\n"<<endl;
					cout<<"[Vida: "<<vida<<"HP]\t[Dinero: "<<dinero<<"]\n"<<endl;
					cin>>opcion;
					system("cls");
					
					switch(opcion){
						case 1: //Compra clase escudero
							cout<<"Escudo redondo metalico y piezas de armadura +25 puntos de vida,\n4 puntos de resistencia, 80 monedas de oro. Comprar?\n"<<endl;
							cout<<"1: Comprar\n0: Volver\n"<<endl;
							cin>>apoyo;
							if(apoyo==1){
								clase = "Escudero";
								dinero = dinero - 80; //Se aplica la compra
								vida = vida + 25;
								defensa = defensa + 4;
							}
							system("cls");
							break;
							
						case 2: //Compra clase botanico
							cout<<"Ropaje de cuero +10 puntos de vida, 2 puntos de resistencia,\nconocimientos sobre hiervas de todo tipo, 80 monedas de oro. Comprar?\n"<<endl;
							cout<<"1: Comprar\n0: Volver\n"<<endl;
							cin>>apoyo;
							if(apoyo==1){
								clase = "Botanico";
								dinero = dinero - 80; //Se aplica la compra
								vida = vida + 10;
								defensa = defensa + 2;
							}
							system("cls");
							break;
							
						case 3: //Compra clase curandero
							cout<<"Botarga del doctor Simi, +10 puntos de vida, 3 puntos de resistencia,\nconocimiento sobre la salud (es el favorito de los niños), 80 monedas de"<<endl;
							cout<<"oro. Comprar?\n"<<endl;
							cout<<"1: Comprar\n0: Volver\n"<<endl;
							cin>>apoyo;
							if(apoyo==1){
								clase = "Curandero";
								dinero = dinero - 80; // Se aplica la compra
								vida = vida + 10;
								defensa = defensa + 3;
							}
							system("cls");
							break;
							
						case 4: //Opcion de salida al menu principal
							cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
							cin>>salida;
							system("cls");
							break;
							
						default: //opcion de descarte
							cout<<"Esa opcion no es posible, elige otra\n"<<endl;
							system("pause");
							system("cls");
							break;
					}
					if(salida == 1){ //Proceso de salida
						break;
					}
				}
				while(apoyo != 1); //Fin de la compra para la clase del jugador
				if(salida == 1){ //Proceso de salida
					salida = 0;
					break;
				}
				apoyo = 0;
				
				if(clase == "Escudero"){ //Rama de escudero
					cout<<nombrePersonaje<<" ha decidido ser escudero y ser aquel que mitigue el\nataque para sus compañeros y asi ellos terminen con cualquier amenaza,"<<endl;
					cout<<"naturalmente, Julius el Grande se siente honrado y te elogia por tan\nsabia eleccion\n"<<endl;
					system("pause");
					system("cls");
				}
				
				if(clase == "Botanico"){ //Rama de Botanico
					cout<<nombrePersonaje<<" ha decidido ser botanico, asi demostrara lo valioso que\nson los conocimientos sobre las plantas y la naturaleza para poder usarla"<<endl;
					cout<<"a su favor y ayudar a sus compañeros durante las batallas, Frederick\nLiebhammer tuvo viejos recuerdos de su aldea y no pudo evitar sacar"<<endl;
					cout<<"una gran sonrisa\n"<<endl;
					system("pause");
					system("cls");
				}
				
				if(clase == "Curandero"){ //Rama de curandero
					cout<<nombrePersonaje<<" ha decidido ir de curandero, apoyar a sus compañeros\ncon los poderes de los bailes cumbieros de botarga y de las medicinas y"<<endl;
					cout<<"pociones de salud que son lo mismo que las plantas medicinales pero\nmás baratas, si bien suena como una gran manera de apoyar a tus"<<endl;
					cout<<"compañeros, estos no pueden evitar reirse de tan fina botarga\n"<<endl;
					system("pause");
					system("cls");
				} //Continuacion de la historia
				cout<<"Parecia que ya todo estaba en orden, se ha encontrado un buen grupo y\nse ha conseguido una armadura para aguantar aquella aventura, por lo"<<endl;
				cout<<"que "<<nombrePersonaje<<" decide pasar la noche en la ciudad junto a su grupo\ny partir en la mañana. "<<nombrePersonaje<<" echa un último vistazo a la"<<endl;
				cout<<"ciudad, a aquellas llanuras tan preciosas y bien decoradas, no esta\nseguro si es la ultima vez que las vera, pero esta seguro que las"<<endl;
				cout<<"extrañara.\n"<<endl;
				system("pause");
				system("cls");
				
				cout<<"Y asi fue como nuestro grupo de valientes heroes (para nada lo hacian\npor conveniencia), viajaron por dias hasta llegar a donde se tenia"<<endl;
				cout<<"pensado que estarian, segun la informacion que pudieron recolectar de\npueblos y ciudades, aquel grupo maligno se encontraba en los Montes"<<endl;
				cout<<"Azufre; ya con la informacion en mente, durante el viaje propusieron\nvarias ideas para vencer al grupo, pero dado que era largo el viaje que"<<endl;
				cout<<"tomaron, decidieron ponerse de acuerdo una vez estuvieran por llegar\n"<<endl;
				system("pause");
				system("cls");
				
				cout<<"Cuanto mas cerca estaban de aquellos montes, el ambiente se volvia\nmas y mas frio, cada vez habia menos vida tanto en plantas como en"<<endl;
				cout<<"animales, inclusive de vez en cuando podian encontrarse solo sus restos,\nmezclas entre hojas secas y marchitas y huesos que a veces llegaban a"<<endl;
				cout<<"estar rodeados de insectos o gusanos carroñeros.\n"<<endl;
				system("pause");
				system("cls");
				
				cout<<"Mientras caminaban, escucharon el sonido de multiples hojas\nquebrandose a unos metros mas adelante de su posicion, rapidamente"<<endl;
				cout<<"el grupo se puso en guardia, no sabian con exactitud lo que podrian\nllegar a encontrar asi que de ser necesario, lo darian todo."<<endl;
				cout<<"Fue entonces que un monstruo de aproximadamente 2 metros y medio\naparecio de detras de una gran piedra, tenia el pelaje de un oso, los"<<endl;
				cout<<"colmillos de un diente de sable, los ojos de un reptil y los brazos de una\nmantis, era dificil de creer lo que podían ver sus ojos, era sin duda una"<<endl;
				cout<<"bestia nunca antes vista y horrible en todo el sentido de la palabra\n"<<endl;
				system("pause");
				system("cls");
				
				cout<<"WARNING: BATALLA INMINENTE!\n"<<endl;
				cout<<"Parece que el grupo no tendra de otra mas que enfrentar a dicha bestia\npara poder continuar con la travesia, asi que "<<nombrePersonaje<<" se pone"<<endl;
				cout<<"en posición junto con su grupo\n"<<endl;
				system("pause");
				system("cls");
				
				vidaMonstruo = 125;
				do{ // Inicio de la fase de batalla
					//Datos de la partida
					do{ //Turno y opciones a elegir del usuario para la batalla
						cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
						if(clase == "Escudero"){ //Opciones de escudero
							cout<<"1: Enviar a un aliado a atacar\n2: Apoyar\n3: Intentar huir\n4: Salir al menu principal\n"<<endl;
							cin>>opcion;
							system("cls");
							
							switch(opcion){
								case 1: //Opcion de ataque
									cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
									cout<<"1: Julius - 15 ATK\n2: Frederick - 20 ATK\n3: Erick 8 ATK\n4: Volver\n"<<endl;
									cin>>opcion2; // Se elige al atacante
									system("cls");
									if(opcion2==4){
										opcion = 0;
									}
									switch(opcion2){
										case 1:
											cout<<"Julius se avalanza contra la bestia, realiza un rapido movimiento con su\ngran espada y golpea a la bestia.\n"<<endl;
											cout<<"La bestia ha perdido 15 HP\n"<<endl;
											vidaMonstruo = vidaMonstruo - 15;
											system("pause");
											system("cls");
											break;
										case 2:
											cout<<"Frederick esquiva los ataques de la bestia y logra conectar un fuerte\ngolpe con su mazo, la bestia quedo confundida un momento pero esta"<<endl;
											cout<<"lista para continuar\n"<<endl;
											cout<<"La bestia ha perdido 20 HP\n"<<endl;
											vidaMonstruo = vidaMonstruo - 20;
											system("pause");
											system("cls");
											break;
										case 3:
											cout<<"Erick toma rapidamente su arco y flecha, carga y dispara.\n"<<endl;
											cout<<"Parece que la piel de la bestia está bastante blindada\n"<<endl;
											cout<<"La bestia ha perdido 8 HP\n"<<endl;
											vidaMonstruo = vidaMonstruo - 8;
											system("pause");
											system("cls");
											break;
										case 4:
											system("cls");
											break;
										default:
											cout<<"Esa opcion no es posible, elige otra\n"<<endl;
											system("pause");
											system("cls");
											opcion = 0;
											break;
									}
									if(apoyo == 1){
										defensa = defensa + 3;
									}
									break;
								case 2: // Se elige la forma de apoyo
									cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
									cout<<"1: Defender - +3 DP\n2: Curar - +5 HP\n3: Volver\n"<<endl;
									cin>>opcion2;
									system("cls");
									switch(opcion2){
										case 1: //Aumento de defensa
											apoyo = 1;
											cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
											cout<<"Ordenas a tus aliados formarse detras tuyo para que de esa forma\npuedas defenderlos de un golpe\n"<<endl;
											cout<<"Defensa +3 DP\n"<<endl;
											system("pause");
											system("cls");
											break;
										case 2: //Opcion de recuperacion de vida
											cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
											if(vida < 125){
												vida = vida + 5;
												if(vida>125){
													vida = 125;
												}
												cout<<"Tu equipo ha recuperado 5 HP\n"<<endl;
												opcion = 1;
											}
											else{
												cout<<"Tu equipo tiene vida completa\n"<<endl;
											}
											system("pause");
											system("cls");
											break;
										case 3:
											system("cls");
											break;
										default: //Opcion descarte
											cout<<"Esa opcion no es posible, elige otra\n"<<endl;
											system("pause");
											system("cls");
											break;
									}
									break;
								case 3: // Se intenta la huida
									cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
									cout<<"Sugieres la huida, pero no parece que la bestia piense en dejarlos ir y\ntu grupo está muy inspirado como para hacerlo.\n"<<endl;
									cout<<"Huida fallida\n"<<endl;
									system("pause");
									system("cls");
									break;
								case 4: //Salida al menu principal
									cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
									cin>>salida;
									system("cls");
									break;
								default: //Opcion de descarte
									cout<<"Esa opcion no es posible, elige otra\n"<<endl;
									system("pause");
									system("cls");
									break;
							}
						} //Finalizacion de las opciones de escudero
						if(clase == "Botanico"){ //Opciones de Botanico
							cout<<"1: Enviar a un aliado a atacar\n2: Apoyar\n3: Intentar huir\n4: Salir al menu principal\n"<<endl;
							cin>>opcion;
							system("cls");
							
							switch(opcion){
								case 1: //Opcion de ataque
									cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
									cout<<"1: Julius - 15 ATK\n2: Frederick - 20 ATK\n3: Erick 8 ATK\n4: Volver\n"<<endl;
									cin>>opcion2; // Se elige al atacante
									system("cls");
									if(opcion2==4){
										opcion = 0;
									}
									switch(opcion2){
										case 1: //Eleccion de Julius
											cout<<"Julius se avalanza contra la bestia, realiza un rapido movimiento con su\ngran espada y golpea a la bestia.\n"<<endl;
											ataque = 15;
											if(apoyo == 1){
												ataque = ataque + 3;
												cout<<"La bestia ha perdido "<<ataque<<" HP\n"<<endl;
												vidaMonstruo = vidaMonstruo - ataque;
												ataque = ataque - 3;
											}
											else{
												cout<<"La bestia ha perdido "<<ataque<<" HP\n"<<endl;
												vidaMonstruo = vidaMonstruo - ataque;
											}
											system("pause");
											system("cls");
											break;
										case 2: //Eleccion de Frederick
											cout<<"Frederick esquiva los ataques de la bestia y logra conectar un fuerte\ngolpe con su mazo, la bestia quedo confundida un momento pero esta"<<endl;
											cout<<"lista para continuar\n"<<endl;
											ataque = 20;
											if(apoyo == 1){
												ataque = ataque + 3;
												cout<<"La bestia ha perdido "<<ataque<<" HP\n"<<endl;
												vidaMonstruo = vidaMonstruo - ataque;
												ataque = ataque - 3;
											}
											else{
												cout<<"La bestia ha perdido "<<ataque<<" HP\n"<<endl;
												vidaMonstruo = vidaMonstruo - ataque;
											}
											system("pause");
											system("cls");
											break;
										case 3: //Eleccion de Erick
											cout<<"Erick toma rapidamente su arco y flecha, carga y dispara.\n"<<endl;
											cout<<"Parece que la piel de la bestia está bastante blindada\n"<<endl;
											ataque = 8;
											if(apoyo == 1){
												ataque = ataque + 3;
												cout<<"La bestia ha perdido "<<ataque<<" HP\n"<<endl;
												vidaMonstruo = vidaMonstruo - ataque;
												ataque = ataque - 3;
											}
											else{
												cout<<"La bestia ha perdido "<<ataque<<" HP\n"<<endl;
												vidaMonstruo = vidaMonstruo - ataque;
											}
											system("pause");
											system("cls");
											break;
										case 4:
											system("cls");
											break;
										default: //Eleccion de descarte
											cout<<"Esa opcion no es posible, elige otra\n"<<endl;
											system("pause");
											system("cls");
											opcion = 0;
											break;
									}
									break;
								case 2: //Opcion de Apoyo
									cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
									cout<<"1: Aumentar daño - +3 ATK\n2: Curar - +7 HP\n3: Volver\n"<<endl;
									cin>>opcion2;
									system("cls");
									
									switch(opcion2){
										case 1: //Opcion de Aumento de ataque
											cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
											cout<<"Ofreces a tus aliados consumir una de tus plantas, algo dudosos\nlo tomaron y consumieron\n"<<endl;
											cout<<"Aumento de 3 ATK\n"<<endl;
											apoyo = 1;
											system("pause");
											system("cls");
											break;
										case 2: //Opcion de recuperacion de vida
											cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
											if(vida < 110){
												vida = vida + 7;
												if(vida>110){
													vida = 110;
												}
												cout<<"Tu equipo ha recuperado 7 HP\n"<<endl;
												opcion = 1;
											}
											else{
												cout<<"Tu equipo tiene vida completa\n"<<endl;
											}
											system("pause");
											system("cls");
											break;
										case 3:
											system("cls");
											break;
										default:
											cout<<"Esa opcion no es posible, elige otra\n"<<endl;
											system("pause");
											system("cls");
											break;
									}
									break;
								case 3:
									cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
									cout<<"Sugieres la huida, pero no parece que la bestia piense en dejarlos ir y\ntu grupo está muy inspirado como para hacerlo.\n"<<endl;
									cout<<"Huida fallida\n"<<endl;
									system("pause");
									system("cls");
									break;
								case 4:
									cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
									cin>>salida;
									system("cls");
									break;
								default:
									cout<<"Esa opcion no es posible, elige otra\n"<<endl;
									system("pause");
									system("cls");
									break;
							} 
						}	//finalizacion de las opciones de botanico
						if(clase == "Curandero"){ //Inicio de opciones de Curandero
							cout<<"1: Enviar a un aliado a atacar\n2: Curar - +12 HP\n3: Intentar huir\n4: Salir al menu principal\n"<<endl;
							cin>>opcion;
							system("cls");
							
							switch(opcion){
								case 1: //Opcion de ataque
									cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
									cout<<"1: Julius - 15 ATK\n2: Frederick - 20 ATK\n3: Erick 8 ATK\n4: Volver\n"<<endl;
									cin>>opcion2; // Se elige al atacante
									system("cls");
									if(opcion2==4){
										opcion = 0;
									}
									switch(opcion2){
										case 1: //Opcion de Julius
											cout<<"Julius se avalanza contra la bestia, realiza un rapido movimiento con su\ngran espada y golpea a la bestia.\n"<<endl;
											cout<<"La bestia ha perdido 15 HP\n"<<endl;
											vidaMonstruo = vidaMonstruo - 15;
											system("pause");
											system("cls");
											break;
										case 2: //Opcion de Frederick
											cout<<"Frederick esquiva los ataques de la bestia y logra conectar un fuerte\ngolpe con su mazo, la bestia quedo confundida un momento pero esta"<<endl;
											cout<<"lista para continuar\n"<<endl;
											cout<<"La bestia ha perdido 20 HP\n"<<endl;
											vidaMonstruo = vidaMonstruo - 20;
											system("pause");
											system("cls");
											break;
										case 3: //Opcion de Erick
											cout<<"Erick toma rapidamente su arco y flecha, carga y dispara.\n"<<endl;
											cout<<"Parece que la piel de la bestia está bastante blindada\n"<<endl;
											cout<<"La bestia ha perdido 8 HP\n"<<endl;
											vidaMonstruo = vidaMonstruo - 8;
											system("pause");
											system("cls");
											break;
										case 4: //Volver al menu anterior
											system("cls");
											break;
										default: //Opcion de descarte
											cout<<"Esa opcion no es posible, elige otra\n"<<endl;
											system("pause");
											system("cls");
											opcion = 0;
											break;
									}
									break;
								case 2: //Opcion de curacion
									if(vida < 110){
										vida = vida + 12;
										if(vida>110){
											vida = 110;
										}
										cout<<"Con la botarga bien puesta, te echas un cumbion bien sabroso que por el poder de\nlos precios bajos mágicamente curas a tus compañeros\n"<<endl;
										cout<<"El grupo se ha curado 12 HP\n"<<endl;
										opcion = 1;
									}
									else{
										cout<<"Tu equipo tiene vida completa\n"<<endl;
									}
									system("pause");
									system("cls");
									break;
								case 3: //Opcion de huida
									cout<<"Oso mutante\n[Vida del monstruo: "<<vidaMonstruo<<"HP]\nAtaque normal 8 ATK\nAtaque fuerte 12 ATK\n\n[Vida: "<<vida<<"HP]\t[Defensa: "<<defensa<<"DP]\t[Dinero: "<<dinero<<"]\n"<<endl;
									cout<<"Sugieres la huida, pero no parece que la bestia piense en dejarlos ir y\ntu grupo está muy inspirado como para hacerlo.\n"<<endl;
									cout<<"Huida fallida\n"<<endl;
									system("pause");
									system("cls");
									break;
								case 4: //Regreso al menu principal
									cout<<"Estas seguro de salir?\nEl progreso no quedara guardado\n\n0:No, quiero volver\n1:Si, quiero salir al menu\n"<<endl;
									cin>>salida;
									system("cls");
									break;
								default: //Opcion de descarte
									cout<<"Esa opcion no es posible, elige otra\n"<<endl;
									system("pause");
									system("cls");
									break;
							}
						} //Finalizacion de las opciones de curandero
						if(salida==1){ //proceso de salida al menu
							break;
						}
					}
					while(opcion!=1);//Fin del turno del jugador
					if(salida == 1){ //proceso de salida al menu
						break;
					}
					apoyo = 0;
					if(vidaMonstruo > 0){ //Inicio del turno del monstruo
						cout<<"Tu turno ha terminado\n\nLa bestia esta lista para atacar!\n"<<endl;
						system("pause");
						system("cls");
						ataqueMonstruo=AtaqueAleatorio();
						if(ataqueMonstruo>5){
							cout<<"La bestia toma carrera y embiste contra el grupo hasta chocar (eso si\nque debe doler)\n"<<endl;
							ataqueMonstruo = 12 - defensa;
							cout<<"El grupo ha perdido "<<ataqueMonstruo<<" HP\n"<<endl;
							vida = vida - ataqueMonstruo;
						}
						else{
							cout<<"La bestia encesta un golpe de arriba hacia abajo contra el grupo\n"<<endl;
							ataqueMonstruo = 8 - defensa;
							cout<<"El grupo ha perdido "<<ataqueMonstruo<<" HP\n"<<endl;
							vida = vida - ataqueMonstruo;
						}
						system("pause");
						system("cls");
					}
					if(clase == "Escudero"){ //Se desactiva la defensa previa del escudero
						if(defensa > 4){
							defensa = defensa - 3;
						}
					}
				}
				while(vidaMonstruo > 0 && vida > 0); //Fin de la fase de batalla
				if(salida == 1){
					salida = 0;
					break;
				}
				if(vida <= 0){ //Final Game Over
					cout<<"A pesar de sus grandes esfuerzos, esa bestia era demasiado fuerte para\nser derrotada, el grupo ha perecido en el olvido y la ciudad arrasada por"<<endl;
					cout<<"Uvlius el inmortal.\n"<<endl;
					cout<<"Volviendo al menu principal\n"<<endl;
					system("pause");
					system("cls");
				}
				else{ //Final exitoso
					cout<<"Luego de una dura batalla, el equipo salio victorioso y listo para mas.\nFelicidades por tan buena coordinacion!\n"<<endl;
					cout<<"Has obtenido 25 monedas de oro\n"<<endl;
					dinero = dinero + 25;
					system("pause");
					system("cls");
					cout<<"Una vez que el grupo derroto a la bestia, el grupo sano sus heridas y se\npreparo para continuar, despues de aquella experiencia, era mas que"<<endl;
					cout<<"claro que estaban cerca de su destino y pronto conocerian lo que este\nalbergaba.\n"<<endl;
					system("pause");
					system("cls");
					cout<<"Gracias por jugar la version Demo de THE ORDER OF UVLIUS THE\nINMORTAL, proximamente estara disponible la version completa\n"<<endl;
					system("pause");
					system("cls");
				}
				break; //Fin del juego
				
			case 2: //instrucciones para jugar
				cout<<"Bienvenido a THE ORDER OF UVLIUS THE INMORTAL, en este juego\nencontraras diferentes puntos de la historia en donde tengas que"<<endl;
				cout<<"interactuar, para hacerlo, de forma numerica elige cualquiera de las\nopciones que aparezcan en pantalla\n"<<endl;
				cout<<"Ejemplo:\n\t1: Ejemplo de opcion 1\n\t2: Ejemplo de opcion 2\n\t3: Ejemplo de opcion 3\n\t4: Ejemplo de opcion 4\n"<<endl;
				cout<<"*Aqui escribiras la opcion a elegir*\n"<<endl;
				system("pause");
				system("cls");
				cout<<"Para los combates es muy similar, por medio de los numeros debes\nelegir la accion a tomar, los cuales pueden ser ataque, apoyo"<<endl;
				cout<<"o huida.\n\nLos puntos de vida seran representados como HP, si llegan a 0 pierdes la\npartida.\n"<<endl;
				cout<<"Los puntos de defensa seran representados como DP, entre mayor el\nnumero, menor sera la perdida de vida\n"<<endl;
				cout<<"Los puntos de ataque seran representados como ATK, esto aplica tanto\npara el personaje y su equipo como con los enemigos, entre mayor sea"<<endl;
				cout<<"el numero, mas vida perderan.\n"<<endl;
				system("pause");
				system("cls");
				break;
				
			case 3: //apartado de idiomas
				cout<<"[PROXIMAMENTE]\n"<<endl;
				system("pause");
				system("cls");
				break;
				
			case 4: //Creditos, autor del juego
				cout<<"Juego realizado por:\n\nEdgar Fragoso Siliceo\n\nHistoria escrita por:\n\nEdgar Fragoso Siliceo\n"<<endl;
				system("pause");
				system("cls");
				break;
			case 5: //Salida del juego
				cout<<"Estas seguro de salir del juego?\n\n\t0: No, quiero regresar\n\n\t1: Si, quiero salir\n"<<endl;
				cin>>salida;
				system("cls");
				break;
				
			default: //Demostracion de opcion no valida
				cout<<"Esa opcion no es posible, elige otra\n"<<endl;
				system("pause");
				system("cls");
				break;
		}
	}
	while(salida==0);
	return 0;
}
