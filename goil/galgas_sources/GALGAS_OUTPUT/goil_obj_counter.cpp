//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'goil_obj_counter.cpp'                         *
//                        Generated by version 1.8.3                         *
//                       may 29th, 2009, at 11h47'58"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 491
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "goil_obj_counter.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_counter.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of production rule 'counter'                 *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_counter::
pr_counter_goil_obj_counter_46_14_ (goil_lexique & _inLexique,
                                GGS_counter_map  &var_cas_counters) {
  GGS_lstring  var_cas_counter_name ;
  GGS_counter_obj  var_cas_counter ;
  GGS_basic_type  var_cas_max_allowed_value ;
  GGS_basic_type  var_cas_ticks_per_base ;
  GGS_basic_type  var_cas_min_cycle ;
  GGS_lstring  var_cas_source ;
  GGS_lstringlist  var_cas_acc_apps ;
  GGS_counter_type  var_cas_type ;
  GGS_lstring  var_cas_unit ;
  GGS_lstring  var_cas_desc ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_COUNTER) COMMA_HERE) ;
  _inLexique._assignFromAttribute_att_token (var_cas_counter_name) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
  if ((var_cas_counters.reader_hasKey (_inLexique, var_cas_counter_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (63)) COMMA_SOURCE_FILE_AT_LINE (63))).isBuiltAndTrue ()) {
    var_cas_counters.modifier_del (_inLexique, var_cas_counter_name, var_cas_counter COMMA_SOURCE_FILE_AT_LINE (64)) ;
    var_cas_max_allowed_value = var_cas_counter.reader_max_allowed_value (_inLexique COMMA_SOURCE_FILE_AT_LINE (65)) ;
    var_cas_ticks_per_base = var_cas_counter.reader_ticks_per_base (_inLexique COMMA_SOURCE_FILE_AT_LINE (66)) ;
    var_cas_min_cycle = var_cas_counter.reader_min_cycle (_inLexique COMMA_SOURCE_FILE_AT_LINE (67)) ;
    var_cas_source = var_cas_counter.reader_source (_inLexique COMMA_SOURCE_FILE_AT_LINE (68)) ;
    var_cas_acc_apps = var_cas_counter.reader_acc_apps (_inLexique COMMA_SOURCE_FILE_AT_LINE (69)) ;
    var_cas_type = var_cas_counter.reader_type (_inLexique COMMA_SOURCE_FILE_AT_LINE (70)) ;
    var_cas_unit = var_cas_counter.reader_unit (_inLexique COMMA_SOURCE_FILE_AT_LINE (71)) ;
    var_cas_desc = var_cas_counter.reader_desc (_inLexique COMMA_SOURCE_FILE_AT_LINE (72)) ;
  }else{
    var_cas_max_allowed_value = GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
    var_cas_ticks_per_base = GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
    var_cas_min_cycle = GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
    var_cas_source = GGS_lstring ::constructor_new (_inLexique, GGS_string (""), GGS_location (_inLexique) COMMA_HERE) ;
    var_cas_acc_apps = GGS_lstringlist ::constructor_emptyList () ;
    var_cas_type = GGS_void_counter ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
    var_cas_unit = GGS_lstring ::constructor_new (_inLexique, GGS_string (""), GGS_location (_inLexique) COMMA_HERE) ;
    var_cas_desc = GGS_lstring ::constructor_new (_inLexique, GGS_string (""), GGS_location (_inLexique) COMMA_HERE) ;
    var_cas_counter = GGS_counter_obj ::constructor_new (_inLexique, var_cas_desc, var_cas_max_allowed_value, var_cas_ticks_per_base, var_cas_min_cycle, var_cas_source, var_cas_acc_apps, var_cas_type, var_cas_unit COMMA_HERE) ;
  }
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B) COMMA_HERE) ;
  nt_counter_parameters_ (_inLexique, var_cas_max_allowed_value, var_cas_ticks_per_base, var_cas_min_cycle, var_cas_source, var_cas_acc_apps, var_cas_type, var_cas_unit) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D) COMMA_HERE) ;
  nt_description_ (_inLexique, var_cas_desc) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
  var_cas_counter = GGS_counter_obj ::constructor_new (_inLexique, var_cas_desc, var_cas_max_allowed_value, var_cas_ticks_per_base, var_cas_min_cycle, var_cas_source, var_cas_acc_apps, var_cas_type, var_cas_unit COMMA_HERE) ;
  var_cas_counters.modifier_put (_inLexique, var_cas_counter_name, var_cas_counter COMMA_SOURCE_FILE_AT_LINE (107)) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of production rule 'counter_parameters'           *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_counter::
pr_counter_parameters_goil_obj_counter_110_25_ (goil_lexique & _inLexique,
                                GGS_basic_type  &var_cas_max_allowed_value,
                                GGS_basic_type  &var_cas_ticks_per_base,
                                GGS_basic_type  &var_cas_min_cycle,
                                GGS_lstring  &var_cas_source,
                                GGS_lstringlist  &var_cas_acc_apps,
                                GGS_counter_type  &var_cas_type,
                                GGS_lstring  &var_cas_unit) {
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_repeat_goil_obj_counter_0 (_inLexique)) {
        case 2 : {
          GGS_luint64  var_cas_m ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MAXALLOWEDVALUE) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_integerNumber (var_cas_m) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5Fnumber) COMMA_HERE) ;
          GGS_lstring  automatic_var_0 ;
          nt_description_ (_inLexique, automatic_var_0) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          ::routine_set_uint32 (_inLexique,  var_cas_max_allowed_value,  var_cas_m,  GGS_string ("MAXALLOWEDVALUE") COMMA_SOURCE_FILE_AT_LINE (123)) ;
          } break ;
        case 3 : {
          GGS_luint64  var_cas_t ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TICKSPERBASE) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_integerNumber (var_cas_t) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5Fnumber) COMMA_HERE) ;
          GGS_lstring  automatic_var_1 ;
          nt_description_ (_inLexique, automatic_var_1) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          ::routine_set_uint32 (_inLexique,  var_cas_ticks_per_base,  var_cas_t,  GGS_string ("TICKSPERBASE") COMMA_SOURCE_FILE_AT_LINE (127)) ;
          } break ;
        case 4 : {
          GGS_luint64  var_cas_c ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MINCYCLE) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_integerNumber (var_cas_c) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5Fnumber) COMMA_HERE) ;
          GGS_lstring  automatic_var_2 ;
          nt_description_ (_inLexique, automatic_var_2) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          ::routine_set_uint32 (_inLexique,  var_cas_min_cycle,  var_cas_c,  GGS_string ("MINCYCLE") COMMA_SOURCE_FILE_AT_LINE (131)) ;
          } break ;
        case 5 : {
          if (((GGS_bool (_inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (133))))._operator_isEqual (GGS_bool (false))).isBuiltAndTrue ()) {
            GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("AUTOSAR flag is off, turn it on to use TYPE attribute in COUNTER object") COMMA_SOURCE_FILE_AT_LINE (135)) ;
          }
          GGS_counter_type  var_cas_cpt_type ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TYPE) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          nt_counter_type_attrs_ (_inLexique, var_cas_cpt_type) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          { const GGS_counter_type _var_3883 = var_cas_type ; // CAST instruction
            if (_var_3883.getPtr () != NULL) {
              macroValidPointer (_var_3883.getPtr ()) ;
              if (typeid (cPtr_void_counter) == typeid (* (_var_3883.getPtr ()))) {
                var_cas_type = var_cas_cpt_type ;
              }else{
                GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("Redefinitiion of TYPE") COMMA_SOURCE_FILE_AT_LINE (143)) ;
                var_cas_type.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (143)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("was defined here") COMMA_SOURCE_FILE_AT_LINE (144)) ;
              }
            }
          }
          } break ;
        case 6 : {
          if (((GGS_bool (_inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (146))))._operator_isEqual (GGS_bool (false))).isBuiltAndTrue ()) {
            GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("AUTOSAR flag is off, turn it on to use UNIT attribute in COUNTER object") COMMA_SOURCE_FILE_AT_LINE (148)) ;
          }
          GGS_lstring  var_cas_cpt_unit ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_UNIT) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          switch (select_goil_obj_counter_1 (_inLexique)) {
            case 1 : {
              _inLexique._assignFromAttribute_att_token (var_cas_cpt_unit) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TICKS) COMMA_HERE) ;
              } break ;
            case 2 : {
              _inLexique._assignFromAttribute_att_token (var_cas_cpt_unit) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_NANOSECONDS) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          if (((var_cas_unit.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (157)))._operator_isEqual (GGS_string (""))).isBuiltAndTrue ()) {
            var_cas_unit = var_cas_cpt_unit ;
          }else{
            GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("UNIT attribute already defined for this counter") COMMA_SOURCE_FILE_AT_LINE (161)) ;
            var_cas_unit.reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("was defined here") COMMA_SOURCE_FILE_AT_LINE (162)) ;
          }
          } break ;
        case 7 : {
          GGS_lstring  var_cas_src ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_SOURCE) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_src) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_3 ;
          nt_description_ (_inLexique, automatic_var_3) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          ::routine_set_lstring_if_empty (_inLexique,  var_cas_source,  var_cas_src,  GGS_string ("SOURCE") COMMA_SOURCE_FILE_AT_LINE (166)) ;
          } break ;
        case 8 : {
          GGS_lstring  var_cas_app ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ACCESSING_5FAPPLICATION) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_app) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_4 ;
          nt_description_ (_inLexique, automatic_var_4) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          ::routine_add_lstring_unique (_inLexique,  var_cas_acc_apps,  var_cas_app,  GGS_string ("ACCESSING_APPLICATION") COMMA_SOURCE_FILE_AT_LINE (170)) ;
          } break ;
        case 9 : {
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          switch (select_goil_obj_counter_2 (_inLexique)) {
            case 1 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
              } break ;
            case 2 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5Fnumber) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          GGS_lstring  automatic_var_5 ;
          nt_description_ (_inLexique, automatic_var_5) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of production rule 'counter_type_attrs'           *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_counter::
pr_counter_type_attrs_goil_obj_counter_176_25_ (goil_lexique & _inLexique,
                                GGS_counter_type  &var_cas_type) {
  switch (select_goil_obj_counter_3 (_inLexique)) {
    case 1 : {
      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_SOFTWARE) COMMA_HERE) ;
      var_cas_type = GGS_software_counter ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
      } break ;
    case 2 : {
      GGS_time_constants  var_cas_tc ;
      var_cas_tc = GGS_time_constants ::constructor_emptyList () ;
      GGS_counter_driver  var_cas_cd ;
      var_cas_cd = GGS_void_driver ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_HARDWARE) COMMA_HERE) ;
      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B) COMMA_HERE) ;
      { bool syntaxRepeat_4 = true ;
        while (syntaxRepeat_4) {
          switch (select_repeat_goil_obj_counter_4 (_inLexique)) {
            case 2 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_DRIVER) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
              GGS_counter_driver  var_cas_cpt_cd ;
              switch (select_goil_obj_counter_5 (_inLexique)) {
                case 1 : {
                  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_OSINTERNAL) COMMA_HERE) ;
                  var_cas_cpt_cd = GGS_os_internal_driver ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
                  } break ;
                case 2 : {
                  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_GPT) COMMA_HERE) ;
                  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B) COMMA_HERE) ;
                  GGS_basic_type  var_cas_npht ;
                  var_cas_npht = GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
                  GGS_lstring  var_cas_gcn ;
                  var_cas_gcn = GGS_lstring ::constructor_new (_inLexique, GGS_string (""), GGS_location (_inLexique) COMMA_HERE) ;
                  { bool syntaxRepeat_6 = true ;
                    while (syntaxRepeat_6) {
                      switch (select_repeat_goil_obj_counter_6 (_inLexique)) {
                        case 2 : {
                          GGS_luint64  var_cas_ui ;
                          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_NS_5FPER_5FHW_5FTICK) COMMA_HERE) ;
                          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
                          _inLexique._assignFromAttribute_integerNumber (var_cas_ui) ;
                          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5Fnumber) COMMA_HERE) ;
                          ::routine_set_uint64 (_inLexique,  var_cas_npht,  var_cas_ui,  GGS_string ("NS_PER_HW_TICK") COMMA_SOURCE_FILE_AT_LINE (201)) ;
                          } break ;
                        case 3 : {
                          GGS_lstring  var_cas_cn ;
                          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_GPTCHANNELNAME) COMMA_HERE) ;
                          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
                          _inLexique._assignFromAttribute_a_string (var_cas_cn) ;
                          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_string) COMMA_HERE) ;
                          ::routine_set_lstring_if_empty (_inLexique,  var_cas_gcn,  var_cas_cn,  GGS_string ("GPTCHANNELNAME") COMMA_SOURCE_FILE_AT_LINE (205)) ;
                          } break ;
                        default :
                          syntaxRepeat_6 = false ;
                          break ;
                      }
                    }
                  }
                  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D) COMMA_HERE) ;
                  { const GGS_basic_type _var_5869 = var_cas_npht ; // CAST instruction
                    if (_var_5869.getPtr () != NULL) {
                      macroValidPointer (_var_5869.getPtr ()) ;
                      if (typeid (cPtr_void) == typeid (* (_var_5869.getPtr ()))) {
                        GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("NS_PER_HW_TICK subattribute not defined for this hardware counter GPT") COMMA_SOURCE_FILE_AT_LINE (211)) ;
                      }else{
                      }
                    }
                  }
                  if (((var_cas_gcn.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (212)))._operator_isEqual (GGS_string (""))).isBuiltAndTrue ()) {
                    GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("GPTCHANNELNAME subattribute not defined for this hardware counter GPT") COMMA_SOURCE_FILE_AT_LINE (214)) ;
                  }
                  var_cas_cpt_cd = GGS_gpt_driver ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_npht, var_cas_gcn COMMA_HERE) ;
                  } break ;
                default :
                  break ;
              }
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
              { const GGS_counter_driver _var_6339 = var_cas_cd ; // CAST instruction
                if (_var_6339.getPtr () != NULL) {
                  macroValidPointer (_var_6339.getPtr ()) ;
                  if (typeid (cPtr_void_driver) == typeid (* (_var_6339.getPtr ()))) {
                    var_cas_cd = var_cas_cpt_cd ;
                  }else{
                    GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("DRIVER subattribute already defined for this hardware counter") COMMA_SOURCE_FILE_AT_LINE (223)) ;
                    var_cas_cd.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (223)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string ("was defined here") COMMA_SOURCE_FILE_AT_LINE (224)) ;
                  }
                }
              }
              } break ;
            case 3 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TIMECONSTANTS) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TIMECONSTANT) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B) COMMA_HERE) ;
              GGS_basic_type  var_cas_ns ;
              var_cas_ns = GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
              GGS_lstring  var_cas_cn ;
              var_cas_cn = GGS_lstring ::constructor_new (_inLexique, GGS_string (""), GGS_location (_inLexique) COMMA_HERE) ;
              { bool syntaxRepeat_7 = true ;
                while (syntaxRepeat_7) {
                  switch (select_repeat_goil_obj_counter_7 (_inLexique)) {
                    case 2 : {
                      GGS_luint64  var_cas_ui ;
                      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_NS) COMMA_HERE) ;
                      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
                      _inLexique._assignFromAttribute_integerNumber (var_cas_ui) ;
                      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5Fnumber) COMMA_HERE) ;
                      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
                      ::routine_set_uint64 (_inLexique,  var_cas_ns,  var_cas_ui,  GGS_string ("NS") COMMA_SOURCE_FILE_AT_LINE (233)) ;
                      } break ;
                    case 3 : {
                      GGS_lstring  var_cas_c ;
                      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_CONSTNAME) COMMA_HERE) ;
                      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
                      _inLexique._assignFromAttribute_a_string (var_cas_c) ;
                      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_string) COMMA_HERE) ;
                      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
                      ::routine_set_lstring_if_empty (_inLexique,  var_cas_cn,  var_cas_c,  GGS_string ("CONSTNAME") COMMA_SOURCE_FILE_AT_LINE (237)) ;
                      } break ;
                    default :
                      syntaxRepeat_7 = false ;
                      break ;
                  }
                }
              }
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
              var_cas_tc._addAssign_operation (var_cas_ns, var_cas_cn) ;
              } break ;
            default :
              syntaxRepeat_4 = false ;
              break ;
          }
        }
      }
      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D) COMMA_HERE) ;
      var_cas_type = GGS_hardware_counter ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_cd, var_cas_tc COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
}

//---------------------------------------------------------------------------*

