//================================================================================================================================================
// FILE: qt_def_exception_stubs.h
// (c) GIE 2010-12-20  23:37
//
//================================================================================================================================================
#ifndef H_GUARD_QT_DEF_EXCEPTION_STUBS_2010_12_20_23_37
#define H_GUARD_QT_DEF_EXCEPTION_STUBS_2010_12_20_23_37
//================================================================================================================================================
#pragma once
//================================================================================================================================================
#include <boost/exception/diagnostic_information.hpp>
//================================================================================================================================================
namespace gie {}

#define GIE_QT_DEF_EXCEPTION_GUARD_BEGIN    try {
#define GIE_QT_DEF_EXCEPTION_GUARD_END      \
    } catch( boost::exception const& e ) {  \
        QMessageBox::critical( 0, "Critical", diagnostic_information(e).c_str() );  \
    } catch( std::exception  const& e ) {   \
        QMessageBox::critical( 0, "Critical", e.what() );   \
    } catch(...) {  \
        QMessageBox::critical( 0, "Critical", "unknown exception" );   \
    }       \
    /**/


//================================================================================================================================================
#endif
//================================================================================================================================================
