//---------------------------------------------------------------------------*
//                                                                           *
//                          File 'goil_obj_isr.h'                            *
//                        Generated by version 1.8.3                         *
//                       may 29th, 2009, at 11h48'43"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_obj_isr_DEFINED
#define goil_obj_isr_DEFINED

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

#include "goil_lexique.h"

// Include imported semantics
#include "goil_options.h"
#include "goil_semantics.h"
#include "goil_types_timing_prot.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                  Parser class goil_obj_isr declaration                    *
//                                                                           *
//---------------------------------------------------------------------------*

class goil_obj_isr {
  public : virtual ~goil_obj_isr (void) {}

  protected : virtual void nt_isr_ (goil_lexique &,
                                GGS_isr_map  &) = 0 ;

  protected : virtual void nt_isr_attributes_ (goil_lexique &,
                                GGS_basic_type  &,
                                GGS_basic_type  &,
                                GGS_lstringlist  &,
                                GGS_lstringlist  &,
                                GGS_lstringlist  &,
                                GGS_timing_prot  &,
                                GGS_ident_map  &) = 0 ;

  protected : virtual void nt_description_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_free_field_ (goil_lexique &,
                                GGS_ident_map  &) = 0 ;

  protected : virtual void nt_timing_prot_attrs_ (goil_lexique &,
                                GGS_basic_type  &,
                                GGS_basic_type  &,
                                GGS_basic_type  &,
                                GGS_basic_type  &,
                                GGS_basic_type  &,
                                GGS_basic_type  &,
                                GGS_rezlock_map  &) = 0 ;

  protected : void pr_isr_goil_obj_isr_57_10_ (goil_lexique &,
                                GGS_isr_map  &) ;

  protected : void pr_isr_attributes_goil_obj_isr_103_21_ (goil_lexique &,
                                GGS_basic_type  &,
                                GGS_basic_type  &,
                                GGS_lstringlist  &,
                                GGS_lstringlist  &,
                                GGS_lstringlist  &,
                                GGS_timing_prot  &,
                                GGS_ident_map  &) ;

  protected : virtual sint16 select_repeat_goil_obj_isr_0 (goil_lexique &) = 0 ;

  protected : virtual sint16 select_goil_obj_isr_1 (goil_lexique &) = 0 ;

} ;

//---------------------------------------------------------------------------*

#endif
