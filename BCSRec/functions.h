#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	int setLength(int input);
	int setWidth(int input);
	int getPerimeter(int length, int width);
	int getArea(int length, int width);
	int getIntInput(char message[]);
	void printWelcomeMenu(void);
	void printOptions(void);

#ifdef __cplusplus
}
#endif