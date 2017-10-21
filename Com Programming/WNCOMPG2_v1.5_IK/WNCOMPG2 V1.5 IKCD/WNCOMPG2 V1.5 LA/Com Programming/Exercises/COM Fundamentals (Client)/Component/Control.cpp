// Control.cpp : Implementation of CControl
#include "stdafx.h"
#include "Component.h"
#include "Control.h"
#include <math.h>

/////////////////////////////////////////////////////////////////////////////
// CControl


STDMETHODIMP CControl::SquareRoot(double number, double* pResult)
{
    *pResult = sqrt(number);
	return S_OK;
}

STDMETHODIMP CControl::Average(double number1, double number2, double * pResult)
{
    *pResult = (number1 + number2) / 2.0;
	return S_OK;
}

STDMETHODIMP CControl::Multiply(double number1, double number2, double * pResult)
{
    *pResult = number1 * number2;
	return S_OK;
}

STDMETHODIMP CControl::Square(double number, double * pResult)
{
    *pResult = number * number;
	return S_OK;
}
