//---------------------------------------------------------------------------*
//                                                                           *
//                    File 'goil_code_schedtable_gen.h'                      *
//                        Generated by version 1.8.3                         *
//                       may 29th, 2009, at 11h49'39"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_code_schedtable_gen_DEFINED
#define goil_code_schedtable_gen_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/C_GGS_Object.h"
#include "galgas/GGS_location.h"
#include "galgas/GGS_lbool.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_lstring.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_binaryset.h"
#include "galgas/GGS_filewrapper.h"
#include "galgas/predefined_types.h"
#include "galgas/AC_galgas_class.h"
#include "galgas/AC_galgas_domain.h"
#include "galgas/AC_galgas_mapindex.h"
#include "galgas/AC_galgas_map.h"
#include "galgas/AC_galgas_listmap.h"
#include "galgas/AC_galgas_list.h"
#include "galgas/AC_galgas_sortedlist.h"

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

// Include imported semantics
#include "goil_routines.h"
#include "goil_semantic_types.h"
#include "goil_types_scheduletable.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                    Routine 'generate_schedule_tables'                     *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_schedule_tables (C_Compiler &,
                                GGS_scheduletable_map  ,
                                GGS_string_map  ,
                                GGS_string &,
                                GGS_string &,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

#endif
