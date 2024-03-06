#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "WindowManager.h"
#include <iostream>

int main()
{
    GLFWwindow* window = initGLFW();
    if (window == NULL)
    {
        return -1;
    }

    if (!initGLAD())
    {
        return -1;
    }

    renderLoop(window);

    // glfw: terminate, clearing all previously allocated GLFW resources.
    // ------------------------------------------------------------------
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}