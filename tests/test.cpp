#define CATCH_CONFIG_RUNNER
#include "catch2/catch_template_test_macros.hpp"
#include "test_helpers.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "test" << std::endl;
	int result = Catch::Session().run(argc, argv);

	return result;
}