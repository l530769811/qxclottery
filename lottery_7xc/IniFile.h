#ifndef _CINITFILE_H__
#define _CINITFILE_H__

#include <string>

typedef unsigned int UINT;

class CIniFile
{
public:
	CIniFile(std::wstring csFile);
	virtual ~CIniFile();
public:
	bool IsExistFile();		//�ж��ļ��Ƿ���� 
	bool HasWritePermission();	//�ж��ļ��Ƿ��д

	// ��ȡ std::wstring , bool, int, double �������͵�ֵ
	std::wstring  ReadString(const std::wstring & csSection, const std::wstring & csItem,
		const std::wstring & csDefault);
	bool ReadBool(const std::wstring & csSection, const std::wstring & csItem,
		bool bDefault);
	UINT ReadInt(const std::wstring & csSection, const std::wstring & csItem,
		UINT iDefault);
	double ReadDouble(const std::wstring & csSection, const std::wstring & csItem,
		double dDefault);

	// д�� std::wstring , bool, int, double �������͵�ֵ
	void WriteString(const std::wstring & csSection, const std::wstring & csItem,
		const std::wstring & csValue);
	void WriteBool(const std::wstring & csSection, const std::wstring & csItem,
		bool bValue);
	void WriteInt(const std::wstring & csSection, const std::wstring & csItem, UINT iValue);
	void WriteFloat(const std::wstring & csSection, const std::wstring & csItem,
		double fValue);

	

private:
	std::wstring  m_csFile;
};

#endif // _CINITFILE_H__
