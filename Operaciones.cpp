#include "Operaciones.h"

COperaciones::COperaciones()
{
	n1 = n2 = 0;
}
COperaciones::~COperaciones()
{

}

double COperaciones::getN1() { return n1; }
double COperaciones::getN2() { return n2; }
void COperaciones::setN1(double valor) { n1 = valor; }
void COperaciones::setN2(double valor) { n2 = valor; }

double COperaciones::suma()
{
	double resultado;
	resultado = n1 + n2;
	return resultado;
}
double COperaciones::resta()
{
	double resultado;
	resultado = n1 - n2;
	return resultado;
}
double COperaciones::multi()
{
	double resultado;
	resultado = n1 * n2;
	return resultado;
}
double COperaciones::division()
{
	double resultado;
	resultado = n1 / n2;
	return resultado;
}