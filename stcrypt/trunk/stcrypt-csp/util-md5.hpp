//================================================================================================================================================
// FILE: util-md5.h
// (c) GIE 2009-11-11  23:38
//
//================================================================================================================================================
#ifndef H_GUARD_UTIL_MD5_2009_11_11_23_38
#define H_GUARD_UTIL_MD5_2009_11_11_23_38
//================================================================================================================================================
#pragma once
//================================================================================================================================================
#include <string>
//================================================================================================================================================
namespace stcrypt {
	std::wstring create_md5_hash(std::string const data);
}
//================================================================================================================================================
#endif
//================================================================================================================================================