#pragma once
#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

GLFWwindow* initGLFW();
bool initGLAD();
void processInput(GLFWwindow* window);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void renderLoop(GLFWwindow* window);