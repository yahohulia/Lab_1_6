#include <iostream>

int main()
{
	//Îïèñó çì³ííèõ òèï³â int, float, unsigned short.
	int nA;
	float fltB;
	unsigned short wC;

	//²í³ö³þâàííÿ çì³ííèõ, ùî îïèñàíí³ â ï.1 äàíîãî çàâäàííÿ
	nA = 13915;
	fltB = 4.78e5;
	wC = 9765;

	//Îïèñó çì³ííèõ òèï³â double, int, char.

	double dblD;
	int nE;
	char chF;

	//²í³ö³þâàííÿ çì³ííèõ

	//çà äîïîìîãîþ íåÿâíîãî ïðèâåäåííÿ òèï³â

	dblD = nA;
	nE = fltB;
	chF = wC;

	//çà äîïîìîãîþ ÿâíîãî ïðèâåäåííÿ

	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	//ç îáõîäîì ñóâîðî¿ òèï³çàö³¿

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
 return 0;
}
