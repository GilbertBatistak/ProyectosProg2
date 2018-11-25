#include "pch.h"
#include <iostream>
#include <Vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>


using namespace std;


struct Datos_Est {
	int ID;
	string nombre;
	int muestra[50];
	bool estatus;
} estudio[10000];

int main(){
	int total = 0;
	int p = 0;
	bool found = false;
	bool keep = true;
	bool keep1 = true;
	int des1;
	string mystr;
	char manOrAuto;
	int size = 0;
	string mues;
	int muesPrub;
	int b = 0;
	int j = 0;
	int k = 0;
	string rest;
	string delName;
	int delID = 0;
	string estuName;
	int convertNum;
	bool autoo = true;
	int o = 0;
	vector<int> vec1;
	vector<int> vec2;
	vector<int> vec3;
	vector<int> vec4;

	while (keep1)
	{
		cout << "1- Agregar estudio" << endl;
		cout << "2- Listar estudios" << endl;
		cout << "3- Cancelar estudio" << endl;
		cout << "4- Seleccionar estudio" << endl;
		cout << "5- Salir" << endl;

		cin >> des1;
		switch (des1)
		{
		case 1:
			
			for (j; j < sizeof(estudio); j++) {
				srand(time(0));
				estudio[j].ID = rand() % 100 + 1;
				system("cls");
				cout << "Desea ingresar la muestra manualmente: s/n: ";
				cin >> manOrAuto;
				cout << "Nombre: ";
				cin >> estudio[j].nombre;
				tolower(manOrAuto);
				estudio[j].estatus = true;
				if (manOrAuto == 's') {
					for (int i = 0; i < 50; i++) {
						cin >> estudio[j].muestra[i];
					}
				}

				cout << "ID: ";
				cout << estudio[j].ID << endl;

				if (estudio[j].estatus) {
					cout << "Estatus: " << estudio[j].estatus << endl;
				}

				if (tolower(manOrAuto) == 'n') {
					cout << "Muestra: ";
					for (int z = 0; z < 49; z++) {
						estudio[j].muestra[z] = rand() % 100 + 1;
						cout << estudio[j].muestra[z] << " ";
						vec1.push_back(estudio[j].muestra[z]);
						vec2.push_back(estudio[j].muestra[z]);
						vec3.push_back(estudio[j].muestra[z]);
						vec4.push_back(estudio[j].muestra[z]);
					}
				}

				else {
					cout << "Esa no es una opcion valida" << endl;
				}

				
				size++;
				cout << "" << endl;
				cout << "" << endl;
				j++;
				break;
			}
			break;
		case 2:
			for (int m = 0; m < size; m++) {
				if (estudio[m].estatus) {
					cout << "Nombre: ";
					cout << estudio[m].nombre << endl;
					cout << "ID: ";
					cout << estudio[m].ID << endl;
					cout << "Estatus: ";
					cout << "Activo" << endl;
					cout << "Muestra: ";
					k = 0;
					for (int z = 0; z < 49; z++) {
						cout << estudio[m].muestra[z] << " ";
					}
				}

				cout << " " << endl;
				cout << " " << endl;
			}
			
			break;
		case 3:
			cout << "Desea eliminar por: " << endl;
			cout << "1-) Nombre" << endl;
			cout << "2-) ID" << endl;
			int desSearch;
			cin >> desSearch;
			switch (desSearch){
			case 1:
				cout << "Introduzca el nombre" << endl;
				cin >> delName;
				for (int l = 0; l < size; l++) {
					if (delName == estudio[l].nombre) {
						estudio[l].estatus = false;
						cout << "Eliminado exitosamente" << endl;
						cin.get();
					}
					else
					{
						cout << "El nombre insertado no coincidio con ninguno de los estudios" << endl;
					}
				}
				break;
			case 2:
				cout << "Introduzca el ID" << endl;
				cin >> delID;
				for (int l = 0; l < size; l++) {
					if (delID == estudio[l].ID) {
						estudio[l].estatus = false;
						cout << "Eliminado exitosamente" << endl;
						cin.get();
					}
					else
					{
						cout << "El nombre insertado no coincidio con ninguno de los estudios" << endl;
					}
				}
				break;
			default:
				break;
			}
			for (int h = 0; h < size; h++) {

			}
			break;
		case 4:
			cout << "Indique el nombre del estudio: " << endl;
			cin >> estuName;
			p = 0;
			found = false;
			for (p; p < size; p++) {
				if (estuName == estudio[p].nombre) {
					for (int z = 0; z < 49; z++) {
						vec1.push_back(estudio[p].muestra[z]);
						vec2.push_back(estudio[p].muestra[z]);
						vec3.push_back(estudio[p].muestra[z]);
						vec4.push_back(estudio[p].muestra[z]);
					}
					int des = 0;
					int divCount = 0;
					found = true;
					keep = true;
					while (keep)
					{
						cout << "" << endl;
						cout << "" << endl;

						cout << "1- Numero mayor y menor" << endl;
						cout << "2- primer numero a la potencia del tercero" << endl;
						cout << "3- promedio" << endl;
						cout << "4- numero divisible por 3 y 5" << endl;
						cout << "5- generar x letras de la a a la z aleatoriamente donde x es el 2do numero menor" << endl;
						cout << "6- salir" << endl;

						cout << "" << endl;
						cout << "Introduzca su opcion: ";
						cin >> des;

						if (des == 1) {
							sort(vec1.begin(), vec1.end());
							cout << "El mayor es: ";
							cout << *max_element(vec1.begin(), vec1.end()) << endl;
							cout << "El menor es: " << vec1[0] << endl;

							cout << "" << endl;
							cout << "" << endl;

						}
						else if (des == 2) {
							int a = vec2[0];
							int c = vec2[2];

							cout << vec2[0] << " ^ " << vec2[2] << " = ";
							cout << pow(a, c) << endl;

							cout << "" << endl;
							cout << "" << endl;
						}
						else if (des == 3) {
							for (int l = 0; l < 49; l++) {
								total = total + vec3[l];
							}
							cout << "El promedio es: " << total / 50;

							cout << "" << endl;
							cout << "" << endl;
						}
						else if (des == 4) {
							for (int k = 0; k < vec3.size(); k++) {
								if (vec3[k] % 3 == 0 && vec3[k] % 5 == 0) {
									cout << vec3[k] << endl;
									divCount++;
								}
							}

							if (divCount == 0) {
								cout << "Ninguno es divisible" << endl;
							}
						}
						else if (des == 5) {
							sort(vec4.begin(), vec4.end());
							for (int i = 0; i < vec4[1]; i++) {
								char digits[] = { 'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
								cout << digits[rand() % 26] << endl;

							}
						}
						else if (des == 6) {
							keep = false;
							cout << "Pase buen dia" << endl;
						}

						else {
							cout << "Esa no es una opcion correcta" << endl;
						}
					}
				}
			}
			vec1.clear();
			vec2.clear();
			vec3.clear();
			vec4.clear();
			if (found == false) {
				cout << "El nombre insertado no coincidio con ninguno de los estudios" << endl;
			}
			break;
		case 5:
			keep1 = false;
			break;

		default:
			cout << "Esa no es una opcion" << endl;
			break;
		}

	}
}