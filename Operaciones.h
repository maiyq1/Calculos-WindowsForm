#pragma once

class COperaciones
{
private:
	double n1, n2;

public:
	COperaciones();
	~COperaciones();

	double getN1();
	double getN2();

	void setN1(double valor);
	void setN2(double valor);

	double suma();
	double resta();
	double multi();
	double division();
};