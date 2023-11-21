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
	int opcion;
	int vida = 0;
	int defensa = 0;
	int ataque = 0;
	int dinero = 0;
	int vidaMonstruo = 0;
	int ataqueMonstruo = 0;
	bool salida = 0;
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
				vida= 100;
				dinero= 100;
				cout<<"Bienvenido a THE ORDER OF UVLIUS THE INMORTAL, elige el nombre\nde tu personaje\n"<<endl;
				cout<<"nombre del personaje: "<<endl;
				cin>>nombrePersonaje; //Guarda el nombre para el personaje
				system("cls");
				Cargando(); //simula la carga del juego y empieza la partida
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
					cout<<"[Vida: "<<vida<<"]\n"<<endl;
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
						case 3:
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
					cout<<"4: Salir al menu principal\n\n[Vida: "<<vida<<"]\n"<<endl;
				}
				while(opcion!=1);
				salida=0;
				break;
			case 2:
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
			case 3:
				cout<<"[PROXIMAMENTE]\n"<<endl;
				system("pause");
				system("cls");
				break;
			case 4:
				cout<<"Juego realizado por:\n\nEdgar Fragoso Siliceo\n\nHistoria escrita por:\n\nEdgar Fragoso Siliceo\n"<<endl;
				system("pause");
				system("cls");
				break;
			case 5:
				cout<<"Estas seguro de salir del juego?\n\n\t0: No, quiero regresar\n\n\t1: Si, quiero salir\n"<<endl;
				cin>>salida;
				system("cls");
				break;
			default:
				cout<<"Esa opcion no es posible, elige otra\n"<<endl;
				system("pause");
				system("cls");
				break;
		}
	}
	while(salida==0);
	return 0;
}
