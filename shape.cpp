#include "shape.h"

unsigned int shape::Count = 0;


shape::shape():write("<?xml version=\"1.0\" standalone=\"no\"?>\n<!DOCTYPE svg PUBLIC \" -//W3C//DTD SVG 1.1//EN\"\n\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n<svg width=\"400\" height=\"400\"\nxmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">")
{
  Count++;
}


shape::~shape()
{
}
