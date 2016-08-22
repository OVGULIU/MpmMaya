#pragma once
/***********************************************************************
   MEL ����: mpmSimulate
   -init			-i	��ʼ��ģ������
   -step			-s	����һ��ģ�⣬����1����������0�����д���
   -name			-n  ָ���ڵ�����
/************************************************************************/

class MpmSimulateCmd: public MPxCommand
{
public:
	MpmSimulateCmd(void){}
	~MpmSimulateCmd(void){}

	MStatus doIt(const MArgList& args);

	static void* creator();

	static MSyntax newSyntax();

	static const char*				s_cmdName;
private:
 	static const char*				s_initFlag[2];
 	static const char*				s_stepFlag[2];
// 	static const char*				m_stepStaticFlag[2];
// 	static const char*				m_recordEleGFFlag[2];
// 	static const char*				m_saveFlag[2];
// 	static const char*				m_saveEleGFFlag[2];
// 	static const char*				m_loadEleMatFlag[2];
// 	static const char*				m_resetEleMatFlag[2];
// 
 	static const char*				m_nameFlag[2];
// 	static const char*				m_hessianFlag[2];
// 	static const char*				m_gradFlag[2];
// 	static const char*				m_intPntFlag[2];
// 	static const char*				m_surfPntFlag[2];
// 	static const char*				m_createFlag[2];
};
