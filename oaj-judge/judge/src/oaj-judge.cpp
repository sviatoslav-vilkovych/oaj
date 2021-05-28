#include "judge/tcpserver.h"
#include "compiler/compiler.h"

#include <iostream>

int main()
{
	auto compiler = OAJ::Compiler::Compiler("C:\\Users\\User\\Desktop\\oaj\\oaj-compiler\\resources\\supported_languages.xml");
	compiler.process("Cpp", L"#include <iostream>\nusing namespace std;\nint main()\n{\nstd::cout << \"Hello G++!\";\nreturn 1;\n}");
	auto server = OAJ::Judge::Communication::TcpServer{};
	server.start("0");
	std::cout << "Hello World!\n";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
