#include <engine/core/Engine.hpp>
#include <MyApp.hpp>

/**
 * 1. MyApp class
 * 2. Controllers (Main, Graphics, GUI, ...)
 * 3. U engine pravimo promjene kada pravimo nesto sto je na globalnom nivou potrebno  
 * 4. 
 * 
 */



int main(int argc, char **argv) {
    auto app = std::make_unique<app::MyApp>();
    return app->run(argc,argv);
}
