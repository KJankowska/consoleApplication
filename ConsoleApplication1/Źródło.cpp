#include <rapidxml.hpp>
using namespace rapidxml;

int main()
{
	const char * xmlDocument = "...";

	xml_document <> document; 
	{
		document.parse < 0 >(text); 
	}
	catch (const parse_error & e)
	{
		std::cerr << e.what() << " here: " << e.where < char >() << std::endl;
		return -1;
	}
}