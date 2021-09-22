#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class QSerialPort{
public:
	enum BuadRate{
		Baud1200 = 1200,
        Baud2400 = 2400,
        Baud4800 = 4800,
        Baud9600 = 9600,
        Baud19200 = 19200,
        Baud38400 = 38400,
        Baud57600 = 57600,
        Baud115200 = 115200
	};
	BuadRate b;
	void chooseBuadRate(QSerialPort s);
};

void QSerialPort::chooseBuadRate(QSerialPort s)
{
	cout<<s.b<<endl;
}
int main(int argc, char** argv) {
	class QSerialPort s1;
	s1.Baud115200;
	s1.chooseBuadRate(s1);
	return 0;
}
