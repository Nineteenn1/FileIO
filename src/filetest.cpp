#include <iostream>
#include <fstream>

int main()
{
    std::ofstream luaScript;

    luaScript.open("../scripts/script.lua");

    luaScript << "#Template lua script\n"
    "\n"
    "print \"Hello World!\"";

    luaScript.close();
}