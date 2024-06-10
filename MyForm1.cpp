#include "MyForm1.h"

//void Warp2::MyForm::framebuffer_size_callback(GLFWwindow* window, int width, int height)
//{
//    // make sure the viewport matches the new window dimensions; note that width and 
//    // height will be significantly larger than specified on retina displays.
//    glViewport(0, 0, width, height);
//    throw gcnew System::NotImplementedException();
//}
//
//void Warp2::MyForm::mouse_callback(GLFWwindow* window, double xpos, double ypos)
//{
//    Camera camera(glm::vec3(0.0f, 0.0f, 3.0f));
//    float xpos = static_cast<float>(xpos);
//    float ypos = static_cast<float>(ypos);
//
//    // settings
//    const unsigned int SCR_WIDTH = 800;
//    const unsigned int SCR_HEIGHT = 600;
//
//    float lastX = SCR_WIDTH / 2.0f;
//    float lastY = SCR_HEIGHT / 2.0f;
//    bool firstMouse = true;
//
//    if (firstMouse)
//    {
//        lastX = xpos;
//        lastY = ypos;
//        firstMouse = false;
//    }
//
//    float xoffset = xpos - lastX;
//    float yoffset = lastY - ypos; // reversed since y-coordinates go from bottom to top
//
//    lastX = xpos;
//    lastY = ypos;
//
//    camera.ProcessMouseMovement(xoffset, yoffset);
//    throw gcnew System::NotImplementedException();
//}
