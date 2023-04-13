#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Playground.hpp"

using namespace std;

GLFWwindow* CreateWindow(int width, int height, const char* title)
{
	if (!glfwInit())
	{
		cout << "Failed to initialize GLFW" << endl;
		return NULL;
	}
	GLFWwindow* window = glfwCreateWindow(width, height, title, NULL, NULL);
	if (!window)
	{
		cout << "Failed to create window" << endl;
		return NULL;
	}
	glfwMakeContextCurrent(window);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	return window;
}

int main()
{
	GLFWwindow* window = CreateWindow(800, 600, "Hello OpenGL");

	Init();

	while (!glfwWindowShouldClose(window))
	{
		glClearColor(1.0f, 1.0f, 0.882f, 0.0f); 
		glClear(GL_COLOR_BUFFER_BIT);

		Draw();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	Exit();

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}