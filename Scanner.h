#ifndef _SCANNER_H_
#define _SCANNER_H_
#include <string>

enum EToken
{
	TOKEN_END, /* ���� */
	TOKEN_ERROR, /* ���� */
	TOKEN_NUMBER, /* ���� */
	TOKEN_PLUS, /* + */
	TOKEN_MINUS, /* - */
	TOKEN_MULTIPLY, /* * */
	TOKEN_DIVIDE, /* / */
	TOKEN_LPARENTHESIS, /* ( */
	TOKEN_RPARENTHESIS, /* ) */ 
	TOKEN_IDENTIFIER,
	TOKEN_ASSIGN /* = */
};

class Scanner
{
public:
	Scanner(const std::string& buf);
	void accept();
	double number() const;
	EToken token() const;
private:
	void skipSpace();
	const std::string buf_;
	unsigned int curPos_; // ָ��Ҫ������λ��
	EToken token_;
	double number_;
};

#endif 
