#ifndef PRISM_OSXWINDOW_H_
#define PRISM_OSXWINDOW_H_

#include "Window.h"
#include <iostream>

class OSXWindow : public Window {
public:
    void show() {
        std::cout << "showing window\n";
    }
};

#endif /* PRISM_OSXWINDOW_H_ */
