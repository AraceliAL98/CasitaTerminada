// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
/*#include <conio.h>*/

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <iostream>

using namespace std;


void dibujarTriangulo()
{
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);

	glVertex3f(0, 1, 0);
	glVertex3f(-1, -1, 0);
	glVertex3f(1, -1, 0);


	glColor3f(0.5, 0, 0.5);


	glVertex3f(1, 1, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(0, 0, 0);

	glVertex3f(1, 1, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(0, 0, 0);

	glEnd();

}

void dibujarPuntos()
{
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex3f(0.5f, 0.1f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(0.55f, 0.1f, 0.0f);
	glEnd();
}

void dibujarLineas()
{
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0.4f, 0);


	glColor3f(0, 0, 0);
	glVertex3f(0.2f, 0.5f, 0);

	glColor3f(1, 1, 1);
	glVertex3f(-0.2f, 0.5f, 0);

	glEnd();
}

void dibujarLineaContinua()
{
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0.2f, 0);
	glVertex3f(0.3f, -0.2f, 0);

	glEnd();

}
void dibujarTrianguloContinuo()
{

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(-0.2f, -0.2f, 0);
	glVertex3f(0.2f, -0.2f, 0);
	glColor3f(0, 0, 0);
	glVertex3f(0.2f, -0.4f, 0);

	glEnd();

}
void dibujarCirculo()
{
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2f* cos((double)i*3.14159f / 180) + 0.4f, 0.2f * sin((double)i*3.14159f / 180) - 0.2f, 0);

	}
	glEnd();
}
void casitaChida()
{
	glBegin(GL_POLYGON);


	glColor3f(0.484f, 0.851f, 0.136f);
	glVertex3f(-1, -1, 0);
	glVertex3f(-1, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, -1, 0);
	glEnd();

	

	


	//Casita
	glBegin(GL_POLYGON);
	glColor3f(0.852f, 0.785f, 0.811f);
	glVertex3f(0.3f, -0.2f, 0);
	glVertex3f(0.9f, -0.2f, 0);
	glVertex3f(0.9f, 0.4f, 0);
	glVertex3f(0.3f, 0.4f, 0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.768f, 0.4960f, 0.5f);
	glVertex3f(0.3f, -0.2f, 0);
	glVertex3f(0.32f, 0.4f, 0);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.768f, 0.4960f, 0.5f);
	glVertex3f(0.25f, 0.4f, 0);
	glVertex3f(0.95f, 0.4f, 0);
	glVertex3f(0.615f, 0.7f, 0);
	glVertex3f(0.25f, 0.4f, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.647f, 0.917f, 0.941f);
	glVertex3f(0.35f, 0.2f, 0);
	glVertex3f(0.45f, 0.2f, 0);
	glVertex3f(0.45f, 0.35f, 0);
	glVertex3f(0.35f, 0.35f, 0);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.75f, 0.2f, 0);
	glVertex3f(0.85f, 0.2f, 0);
	glVertex3f(0.85f, 0.35f, 0);
	glVertex3f(0.75f, 0.35f, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.521f, 0.349f, 0.203f);
	glVertex3f(0.55f, -0.2f, 0);
	glVertex3f(0.65f, -0.2f, 0);
	glVertex3f(0.65f, 0.05f, 0);
	glVertex3f(0.55f, 0.05f, 0);
	glEnd();


	glBegin(GL_POLYGON);

	glColor3f(0.941f, 0.703f, 0.187f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15f* cos((double)i*3.14159f / 180) - 0.7f, 0.16f * sin((double)i*3.14159f / 180) + 0.7, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);









	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.3f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.2f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.85, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.75, 0);

	}
	glEnd();









}

void dibujar() {

	//dibujarPuntos();
	//dibujarLineas();
	//dibujarLineaContinua();
	//dibujarTrianguloContinuo();
	casitaChida();
}

void actualizar() {

}
int main()
{
	/*Crear un contexto

	°Un contexto es una ventana de un sistema operativo
	°OpenGL no gestiona el iso de ventanas*/

	//Declaramos un apuntador de ventana.

	GLFWwindow *window;
	// Si no se pudo iniciar glfw terminamos ejecución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	window =
		glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto, activamos funciones modernas(trabajar con GPU/CPU)
	glewExperimental = true;
	GLenum  errorGlew = glewInit();

	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//Ciclo de dibujo(draw loop)
	while (!glfwWindowShouldClose(window)) {
		glViewport(0, 0, 1024, 768);
		//Establece el color de borrado
		glClearColor(0.156f, 0.682f, 0.858f, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar Buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();




	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}

