#include <iostream>
#include "cxxopts.hpp"
#include "utils.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    cxxopts::Options options("zadanie2", "Program pre manipuláciu s mojimi úlohami");
    options.add_options()
            ("command", "príkaz funkcionality")
            ("h,help", "výpis použitia programu");

    options.parse_positional("command");
    auto result = options.parse(argc, argv);

    if (result.count("command")) {
        auto cmd = result["command"].as<string>();
        if (cmd == "hello") {
            cout << "Hello World!" << endl;
        }
        return 0;
    }
    if (result.count("help")) {
        cout << options.help() << endl;
        return 0;
    }

    return 0;
}
