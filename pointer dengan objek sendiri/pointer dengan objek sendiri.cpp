int main()
{
	mahasiswa* mhs = new mahasiswa{ 1 }; // pointer object mhs
	mhs->nim = 2;
	mhs->showNim();
	delete mhs;
	return 0;
}