int main()
{
	//Опису змінних типів int, float, unsigned short.
	int nA;
	float fltB;
	unsigned short wC;

	//Ініціювання змінних, що описанні в п.1 даного завдання
	nA = 13915;
	fltB = 4.78e5;
	wC = 9765;

	//Опису змінних типів double, int, char.

	double dblD;
	int nE;
	char chF;

	//Ініціювання змінних

	//за допомогою неявного приведення типів

	dblD = nA;
	nE = fltB;
	chF = wC;

	//за допомогою явного приведення

	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	//з обходом суворої типізації

	double* pdblD;
	void* pV;
	pV = &nA;
	pdblD = (double*)pV;
	dblD = *pdblD;
	int* pnE;
	pV = &fltB;
	pnE = (int*)pV;
	nE = *pnE;
	char* pchF;
	pV = &wC;
	pchF = (char*)pV;
	chF = *pchF;
}