int main()
{
	//����� ������ ���� int, float, unsigned short.
	int nA;
	float fltB;
	unsigned short wC;

	//����������� ������, �� �������� � �.1 ������ ��������
	nA = 13915;
	fltB = 4.78e5;
	wC = 9765;

	//����� ������ ���� double, int, char.

	double dblD;
	int nE;
	char chF;

	//����������� ������

	//�� ��������� �������� ���������� ����

	dblD = nA;
	nE = fltB;
	chF = wC;

	//�� ��������� ������ ����������

	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	//� ������� ������ ��������

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