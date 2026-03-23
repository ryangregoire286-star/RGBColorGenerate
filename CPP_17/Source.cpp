#include <iostream>
#include <tuple>
#include <cstdlib>
#include <ios>

using namespace std;

namespace Color {

	static auto GetColorsCode(int a, int b, int c) {

		auto [x, y, z] = std::make_tuple(a, b, c);
		std::cout << "R: " << x << "\n";
		std::cout << "G: " << y << "\n";
		std::cout << "B: " << z << "\n";
	}

	static void HexColor(int r, int g, int b) {

		std::cout << endl;
		auto [x, y, z] = std::make_tuple(r, g, b);
		std::cout << "Hex: " << std::hex << x << std::hex << y << std::hex << z << std::endl;

	}

	static int random_rgb(int color) {

		return rand() % color + 1;
	}
}


int Red = Color::random_rgb(254);
int Green = Color::random_rgb(254);
int Blue = Color::random_rgb(254);

bool isColorEnabled = false;

int main() {
	
	while (!isColorEnabled) {
		
		Color::GetColorsCode(Red, Green, Blue);
		Color::HexColor(Red, Green, Blue);
		
		isColorEnabled = true;

	}

	system("pause > 0");
	return 0;
}