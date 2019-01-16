
// Lab 2(1) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#pragma once
namespace combi
{
	struct subset
	{
		short n,
			sn,
			*sset;
		unsigned __int64 mask;
		subset(short n = 1);
		short getfirst();
		short getnext();
		short ntx(short i);
		unsigned __int64 count();
		void reset();
	};
}




// Lab 2(2) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<
namespace combi2
{
	struct  xcombination           // ���������  ��������� (���������) 
	{
		short  n,                  // ���������� ��������� ��������� ���������  
			m,                  // ���������� ��������� � ���������� 

			*sset;            	  // ������ �������� �������� ���������  
		xcombination(
			short n = 1, //���������� ��������� ��������� ���������  
			short m = 1  // ���������� ��������� � ����������
		);
		void reset();              // �������� ���������, ������ ������� 
		short getfirst();          // ������������ ������ ������ ��������    
		short getnext();           // ������������ ��������� ������ ��������  
		short ntx(short i);        // �������� i-� ������� ������� ��������  
		unsigned __int64 nc;       // ����� ���������  0,..., count()-1   
		unsigned __int64 count() const;  // ��������� ���������� ���������      
	};
};




// Lab 2(3) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<
namespace combi3
{
	struct  permutation    // ���������   ������������     
	{
		const static bool L = true;  // ����� ������� 
		const static bool R = false; // ������ �������   

		short  n,              // ���������� ��������� ��������� ��������� 
			*sset;           // ������ �������� ������� ������������
		bool  *dart;           // ������  ������� (�����-L � ������-R) 
		permutation(short n = 1); // ����������� (���������� ��������� ��������� ���������) 

		void reset();                // �������� ���������, ������ ������� 

		__int64 getfirst();          // ������������ ������ ������ ��������    
		__int64 getnext();           // ������������ ��������� ������ ��������  

		short ntx(short i);          // �������� i-� ������� ������ �������� 
		unsigned __int64 np;         // ����� ������������ 0,... count()-1 

		unsigned __int64 count() const;  // ��������� ����� ���. ������������    
	};
};




// Lab 2(4) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<




// Lab 2(5) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<