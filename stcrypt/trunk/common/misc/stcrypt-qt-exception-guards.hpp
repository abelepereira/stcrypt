//================================================================================================================================================
// FILE: stcrypt-qt-exception-guards.h
// (c) GIE 2010-04-01  15:18
//
//================================================================================================================================================
#ifndef H_GUARD_STCRYPT_QT_EXCEPTION_GUARDS_2010_04_01_15_18
#define H_GUARD_STCRYPT_QT_EXCEPTION_GUARDS_2010_04_01_15_18
//================================================================================================================================================
#pragma once
//================================================================================================================================================
#include "../../../../stcrypt/trunk/stcrypt-csp/stcrypt-exceptions.hpp"
//================================================================================================================================================
#define STCRYPT_VOID_ASYNC_HANDLER_EGUARD_BEGIN try {

#define STCRYPT_VOID_ASYNC_HANDLER_EGUARD_END			\
	} catch(stcrypt::exception::root const& e){			\
		std::string const& diag_info = boost::diagnostic_information(e);	\
		OutputDebugStringA( diag_info.c_str() ) ;		\
		assert(!"STCRYPT_VOID_ASYNC_HANDLER_EGUARD");	\
	} catch(std::exception const& e){					\
		OutputDebugStringA( e.what() ) ;				\
		assert(!"STCRYPT_VOID_ASYNC_HANDLER_EGUARD");	\
	}													\
	/**/

//================================================================================================================================================
#endif
//================================================================================================================================================
