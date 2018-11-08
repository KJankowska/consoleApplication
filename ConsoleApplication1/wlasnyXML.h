#include <iostream>
#include <string>
using namespace std;

#include <rapidxml.hpp>
#include <rapidxml_print.hpp>
using namespace rapidxml;
//wygenerowanie wlasnego xml

int main()
{
	xml_document <> document;

	xml_node <>* html = document.allocate_node(node_element, "html");
	xml_node <>* head = document.allocate_node(node_element, "head");

	/**********************************Head************************************/
	//<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-2" />
	xml_node <>* metaHeader = document.allocate_node(node_element, "meta");
	xml_attribute <>* attribute = document.allocate_attribute("http-equiv", "Content-Type");
	metaHeader->append_attribute(attribute);
	metaHeader->append_attribute(document.allocate_attribute("content", "text/html; charset=iso-8859-2"));

	head->append_node(metaHeader);
	head->append_node(document.allocate_node(node_element, "title", "Strona wygenerowana w C++"));

	html->append_node(head);

	document.append_node(html);

	/**********************************Body************************************/
	xml_node <>* body = document.allocate_node(node_element, "body");

	xml_node <>* paragraph = document.allocate_node(node_element, "p");

	const char * content1 = "Ala ma kota";
	paragraph->value(document.allocate_string(content1));
	paragraph->append_attribute(document.allocate_attribute("style", "text-align: center; color: red;"));

	body->append_node(paragraph);
	paragraph = document.clone_node(paragraph);
	const char * content2 = "I psa.";
	paragraph->value(document.allocate_string(content2));
	body->append_node(paragraph);

	xml_node <>* comment = document.allocate_node(node_comment, nullptr, "."); // (1)
	body->insert_node(paragraph->previous_sibling(), comment);

	html->append_node(body);


	cout << document;