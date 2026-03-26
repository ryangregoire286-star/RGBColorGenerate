#include <iostream>
#include <tuple>
#include <cstdlib>
#include <ios>

using namespace std;

namespace Color {

	static auto GetColorsCode(int a, int b, int c) -> void {

		if constexpr (sizeof(a) > 0) {
			auto [x, y, z] = std::make_tuple(a, b, c);
			std::cout << "R: " << x << "\n";
			std::cout << "G: " << y << "\n";
			std::cout << "B: " << z << "\n";
		}
	}

	static auto HexColor(int r, int g, int b) -> void {

		if constexpr (sizeof(r) > 0) {

			std::cout << endl;
			auto [x, y, z] = std::make_tuple(r, g, b);
			std::cout << "Hex: " << std::hex << x << std::hex << y << std::hex << z << std::endl;

		}

	}


	static auto random_rgb(int color) -> int {

		if constexpr (sizeof(color) > 0) {
			return rand() % color + 1;
		}
		
		return rand() % color + 1;
	}

}

int Red = Color::random_rgb(254);
int Green = Color::random_rgb(254);
int Blue = Color::random_rgb(254);

bool isColorEnabled = false;

auto main() -> int {


	while (!isColorEnabled) {

		if constexpr (sizeof(int) > 0) {

			Color::GetColorsCode(Red, Green, Blue);
			Color::HexColor(Red, Green, Blue);

			isColorEnabled = true;

		}

		system("pause > 0");
		return 0;
	}
}