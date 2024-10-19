#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int main()
{
	plog::init(plog::verbose, "Logfile.txt");

	PLOGD << "main() called";
	PLOGE << "main() errored. (it didnt)";

	return 0;
}
