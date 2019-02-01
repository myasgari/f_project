scatter::scatter(const string &name)
{
	Name = name;
}
scatter::~scatter()
{
}
void scatter::create()
{
	setXandY();
	setsize();
}
void scatter::setXandY()
{
	cout << "enter the posion of the chart : " << endl;
	cout << "x : ";
	cin >> X;
	cout << "y : ";
	cin >> Y;
}
void scatter::setsize()
{
	cout << "plz enter the hight and widht of object : " << endl;
	cout << "hight : ";
	cin >> hight;
	cout << "widht : ";
	cin >> widht;
}
string scatter::sayName()
{
	return Name;
}
string scatter::Export()
{
	float x, y;
	fstream data("data.txt", ios::in);
	if (!data) {
		cout << "file could not be open !!!";
//		exit(EXIT_FAILURE);
	}
	write1 += "\n\<rect x=\"" + std::to_string(X) + "\" y=\"" + std::to_string(Y) + "\" width =\"" + std::to_string(widht) + "\" height =\"" +
		std::to_string(hight) + "\" fill =\"" + "white" + "\" ";
		write1 += "stroke-width =\"3\"  stroke = \"black\" />";
		while (!data.eof())
		{
			data >> x >> y;
			write1 += "\n<circle cx=\"" + std::to_string(x) + "\" cy=\"" + std::to_string(y) + "\" r=\"10\" fill =\"blue\" />\n" ;
		}
		data.clear();
		data.seekg(0);
		return write1;
}
