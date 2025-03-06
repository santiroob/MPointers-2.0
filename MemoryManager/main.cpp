#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    // Variables para los argumentos (valores por defecto)
    int port = 0;
    int memSizeMb = 0;
    std::string dumpFolder = "defaultDump";

    // Procesa la línea de comandos (forma sencilla, a modo de ejemplo)
    // Se asume que recibes algo como:
    // ./mem-mgr --port 50051 --memsize 10 --dumpFolder /ruta/dump
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--port" && i + 1 < argc) {
            port = std::stoi(argv[++i]);
        } else if (arg == "--memsize" && i + 1 < argc) {
            memSizeMb = std::stoi(argv[++i]);
        } else if (arg == "--dumpFolder" && i + 1 < argc) {
            dumpFolder = argv[++i];
        }
    }

    // Imprime los valores para verificar que los leíste bien
    std::cout << "Memory Manager started with:\n";
    std::cout << " - Port: " << port << "\n";
    std::cout << " - Memory Size (MB): " << memSizeMb << "\n";
    std::cout << " - Dump Folder: " << dumpFolder << "\n\n";

    // Mensaje de confirmación
    std::cout << "Basic test successful. Main.cpp is working!\n";

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.