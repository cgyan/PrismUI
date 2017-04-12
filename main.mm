#include "inc/prism/App.h"
#include "inc/prism/Window.h"
#include "inc/prism/OSXWindow.h"
#include <iostream>
using namespace std;



int main(int argc, char const *argv[]) {

    App app;

    Window * window = new OSXWindow();
    window->show();
    delete window;

    app.run();

    return 0;
}
