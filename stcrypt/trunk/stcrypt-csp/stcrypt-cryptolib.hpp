//================================================================================================================================================
// FILE: stcrypt-cryptolib.h
// (c) GIE 2009-12-09  18:51
//
//================================================================================================================================================
#ifndef H_GUARD_STCRYPT_CRYPTOLIB_2009_12_09_18_51
#define H_GUARD_STCRYPT_CRYPTOLIB_2009_12_09_18_51
//================================================================================================================================================
#pragma once
//================================================================================================================================================
#include "stcrypt-exceptions.hpp"

#include "CryptoLibTypes.h"
#include "CryptoLib.h"
//================================================================================================================================================
#define GOST28147DestroyContext DestroyContext
#define DSTU4145DestroyContext DestroyContext
//================================================================================================================================================
typedef CL_CONTEXT	cryptolib_context_t;

#define STCRYPT_CRYPTO_THROW_FROM_CODE(x) \
	do {	\
		assert(x!=CL_RES_SUCCESS);	\
		STCRYPT_THROW_EXCEPTION(exception::cryptolib_error() << exception::cryptolib_einfo(x));	\
	} while(false)	\
	/**/


#define STCRYPT_CHECK_CRYPTO(x)	\
	do {		\
		DWORD const ret = (x);		\
		if(ret)STCRYPT_CRYPTO_THROW_FROM_CODE(ret);		\
	} while(false)		\
	/**/

#define STCRYPT_DEBUG_CHECK_CRYPTO(x)	\
	do {		\
		DWORD const ret = (x);		\
		assert(ret==0);		\
	} while(false)		\
	/**/

//================================================================================================================================================
#endif
//================================================================================================================================================
