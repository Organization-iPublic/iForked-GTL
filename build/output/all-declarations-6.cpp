#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWarningStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWarningStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & ioArgument_context,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWarningStatementInstruction * object = (const cPtr_gtlWarningStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWarningStatementInstruction) ;
  GALGAS_location var_warningLocation_27065 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_hereInstead.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_warningLocation_27065 = object->mProperty_where ;
    }
  }
  if (kBoolFalse == test_0) {
    var_warningLocation_27065 = extensionGetter_get (object->mProperty_identifier, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 907)).getter_where (SOURCE_FILE ("gtl_instructions.galgas", 907)) ;
  }
  GALGAS_gtlData var_warningMessageData_27226 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_warningMessage.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 909)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_warningMessageData_27226.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 910)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_gtlString temp_2 ;
      if (var_warningMessageData_27226.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (var_warningMessageData_27226.ptr ())) {
          temp_2 = (cPtr_gtlString *) var_warningMessageData_27226.ptr () ;
        }else{
          inCompiler->castError ("gtlString", var_warningMessageData_27226.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 911)) ;
        }
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (var_warningLocation_27065, temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 911)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 911)) ;
    }
  }
  if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_warningMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 913)), GALGAS_string ("string expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 913)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWarningStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWarningStatementInstruction.mSlotID,
                                extensionMethod_gtlWarningStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWarningStatementInstruction_execute (defineExtensionMethod_gtlWarningStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlPrintStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlPrintStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & ioArgument_context,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & ioArgument_lib,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlPrintStatementInstruction * object = (const cPtr_gtlPrintStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPrintStatementInstruction) ;
  GALGAS_string var_messageToPrintString_27989 = callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_messageToPrint.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 932)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 932)) ;
  inCompiler->printMessage (var_messageToPrintString_27989  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 933)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_carriageReturn.boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 934)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlPrintStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlPrintStatementInstruction.mSlotID,
                                extensionMethod_gtlPrintStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlPrintStatementInstruction_execute (defineExtensionMethod_gtlPrintStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDisplayStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDisplayStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & ioArgument_context,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDisplayStatementInstruction * object = (const cPtr_gtlDisplayStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDisplayStatementInstruction) ;
  GALGAS_gtlData var_variable_28598 = extensionGetter_get (object->mProperty_variablePath, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 950)) ;
  inCompiler->printMessage (extensionGetter_stringPath (object->mProperty_variablePath, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 951)).add_operation (GALGAS_string (" from "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 951)).add_operation (object->mProperty_where.getter_locationString (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 952)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 952)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 952)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) var_variable_28598.ptr (), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 952))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 951)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDisplayStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlDisplayStatementInstruction.mSlotID,
                                extensionMethod_gtlDisplayStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDisplayStatementInstruction_execute (defineExtensionMethod_gtlDisplayStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlAbstractSortInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlAbstractSortInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & ioArgument_context,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlAbstractSortInstruction * object = (const cPtr_gtlAbstractSortInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAbstractSortInstruction) ;
  GALGAS_gtlData var_variable_30523 = extensionGetter_get (object->mProperty_variablePath, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1024)) ;
  if (var_variable_30523.isValid ()) {
    if (var_variable_30523.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_30612_variableList ((cPtr_gtlList *) var_variable_30523.ptr ()) ;
      GALGAS_list var_listToSort_30634 = cast_30612_variableList.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1027)) ;
      GALGAS_uint var_length_30674 = var_listToSort_30634.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1028)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, var_length_30674.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          const GALGAS_gtlAbstractSortInstruction temp_1 = object ;
          callExtensionMethod_sort ((const cPtr_gtlAbstractSortInstruction *) temp_1.ptr (), var_listToSort_30634, GALGAS_uint ((uint32_t) 0U), var_length_30674.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1030)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1030)) ;
        }
      }
      extensionMethod_set (object->mProperty_variablePath, ioArgument_context, ioArgument_vars, ioArgument_lib, GALGAS_gtlList::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1036)), var_listToSort_30634  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1032)) ;
    }else{
      GALGAS_gtlVarItem var_lastComponent_30959 ;
      object->mProperty_variablePath.method_last (var_lastComponent_30959, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1039)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlVarItem *) var_lastComponent_30959.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1040)), GALGAS_string ("list expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1040)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlAbstractSortInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlAbstractSortInstruction.mSlotID,
                                extensionMethod_gtlAbstractSortInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlAbstractSortInstruction_execute (defineExtensionMethod_gtlAbstractSortInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSortStatementStructInstruction compare'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_sint extensionGetter_gtlSortStatementStructInstruction_compare (const cPtr_gtlAbstractSortInstruction * inObject,
                                                                              const GALGAS_gtlData constinArgument_s_31_,
                                                                              const GALGAS_gtlData constinArgument_s_32_,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_result ; // Returned variable
  const cPtr_gtlSortStatementStructInstruction * object = (const cPtr_gtlSortStatementStructInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementStructInstruction) ;
  const GALGAS_gtlSortStatementStructInstruction temp_0 = object ;
  result_result = callExtensionGetter_compareElements ((const cPtr_gtlSortStatementStructInstruction *) temp_0.ptr (), constinArgument_s_31_, constinArgument_s_32_, object->mProperty_sortingKey, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1054)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSortStatementStructInstruction_compare (void) {
  enterExtensionGetter_compare (kTypeDescriptor_GALGAS_gtlSortStatementStructInstruction.mSlotID,
                                extensionGetter_gtlSortStatementStructInstruction_compare) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSortStatementStructInstruction_compare (defineExtensionGetter_gtlSortStatementStructInstruction_compare, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSortStatementInstruction compare'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_sint extensionGetter_gtlSortStatementInstruction_compare (const cPtr_gtlAbstractSortInstruction * inObject,
                                                                        const GALGAS_gtlData constinArgument_s_31_,
                                                                        const GALGAS_gtlData constinArgument_s_32_,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_result ; // Returned variable
  const cPtr_gtlSortStatementInstruction * object = (const cPtr_gtlSortStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementInstruction) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_ltOp ((const cPtr_gtlData *) constinArgument_s_31_.ptr (), constinArgument_s_32_, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1101)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1108)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1102)).multiply_operation (object->mProperty_order.getter_sint (SOURCE_FILE ("gtl_instructions.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1102)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_gtOp ((const cPtr_gtlData *) constinArgument_s_31_.ptr (), constinArgument_s_32_, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1104)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1107)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = GALGAS_sint ((int32_t) 1L).multiply_operation (object->mProperty_order.getter_sint (SOURCE_FILE ("gtl_instructions.galgas", 1105)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1105)) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result = GALGAS_sint ((int32_t) 0L) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSortStatementInstruction_compare (void) {
  enterExtensionGetter_compare (kTypeDescriptor_GALGAS_gtlSortStatementInstruction.mSlotID,
                                extensionGetter_gtlSortStatementInstruction_compare) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSortStatementInstruction_compare (defineExtensionGetter_gtlSortStatementInstruction_compare, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlTabStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlTabStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & ioArgument_context,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & ioArgument_outputString,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTabStatementInstruction * object = (const cPtr_gtlTabStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTabStatementInstruction) ;
  GALGAS_gtlData var_tabValueData_33233 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_tabValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1125)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (var_tabValueData_33233.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlInt temp_1 ;
      if (var_tabValueData_33233.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_tabValueData_33233.ptr ())) {
          temp_1 = (cPtr_gtlInt *) var_tabValueData_33233.ptr () ;
        }else{
          inCompiler->castError ("gtlInt", var_tabValueData_33233.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1127)) ;
        }
      }
      GALGAS_gtlInt var_tabValueInt_33332 = temp_1 ;
      GALGAS_uint var_currentColumn_33382 = ioArgument_outputString.getter_currentColumn (SOURCE_FILE ("gtl_instructions.galgas", 1128)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsSupOrEqual, var_tabValueInt_33332.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1129)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1129)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_uint var_tabColumn_33474 = var_tabValueInt_33332.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1130)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1130)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsStrictSup, var_tabColumn_33474.objectCompare (var_currentColumn_33382)).boolEnum () ;
            if (kBoolTrue == test_3) {
              ioArgument_outputString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_tabColumn_33474.substract_operation (var_currentColumn_33382, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1134)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1134))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1132)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1132)) ;
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_tabValueData_33233.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1140)), GALGAS_string ("int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1140)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlTabStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTabStatementInstruction.mSlotID,
                                extensionMethod_gtlTabStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlTabStatementInstruction_execute (defineExtensionMethod_gtlTabStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlVariablesInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlVariablesInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & /* ioArgument_lib */,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVariablesInstruction * object = (const cPtr_gtlVariablesInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVariablesInstruction) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_shortDisplay.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_gtlVariablesInstruction temp_1 = object ;
      callExtensionMethod_displayShort ((const cPtr_gtlVariablesInstruction *) temp_1.ptr (), ioArgument_vars, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1198)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_gtlVariablesInstruction temp_2 = object ;
    callExtensionMethod_displayLong ((const cPtr_gtlVariablesInstruction *) temp_2.ptr (), ioArgument_vars, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1200)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlVariablesInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlVariablesInstruction.mSlotID,
                                extensionMethod_gtlVariablesInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlVariablesInstruction_execute (defineExtensionMethod_gtlVariablesInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLibrariesInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLibrariesInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & /* ioArgument_vars */,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLibrariesInstruction * object = (const cPtr_gtlLibrariesInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLibrariesInstruction) ;
  GALGAS_string var_delimitor_35856 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1215)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1215)) ;
  GALGAS_string var_varDelim_35934 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1216)) ;
  GALGAS_string var_separator_36014 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 17U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1217)) ;
  inCompiler->printMessage (var_separator_36014.add_operation (GALGAS_string (" Libraries "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1218)).add_operation (var_separator_36014, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1218)).add_operation (GALGAS_string ("= Displayed from "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1219)).add_operation (var_separator_36014, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1220))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1218)) ;
  inCompiler->printMessage (object->mProperty_where.getter_locationString (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1221)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1221))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1221)) ;
  inCompiler->printMessage (var_delimitor_35856  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1222)) ;
  inCompiler->printMessage (GALGAS_string (" Functions \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1223)) ;
  inCompiler->printMessage (var_varDelim_35934  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1224)) ;
  GALGAS_uint var_lineSize_36293 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlFuncMap enumerator_36329 (ioArgument_lib.getter_funcMap (SOURCE_FILE ("gtl_instructions.galgas", 1226)), kENUMERATION_UP) ;
  const bool bool_0 = true ;
  if (enumerator_36329.hasCurrentObject () && bool_0) {
    while (enumerator_36329.hasCurrentObject () && bool_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictSup, var_lineSize_36293.add_operation (enumerator_36329.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1227)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1227)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1227)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_lineSize_36293 = GALGAS_uint ((uint32_t) 0U) ;
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1229)) ;
        }
      }
      inCompiler->printMessage (enumerator_36329.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1231))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1231)) ;
      var_lineSize_36293.plusAssign_operation(enumerator_36329.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1232)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1232)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1232)) ;
      enumerator_36329.gotoNextObject () ;
      if (enumerator_36329.hasCurrentObject () && bool_0) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1234)) ;
        var_lineSize_36293.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1235)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1237)) ;
  }
  inCompiler->printMessage (var_delimitor_35856  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1239)) ;
  inCompiler->printMessage (GALGAS_string (" Getters \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1240)) ;
  inCompiler->printMessage (var_varDelim_35934  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1241)) ;
  var_lineSize_36293 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlGetterMap enumerator_36682 (ioArgument_lib.getter_getterMap (SOURCE_FILE ("gtl_instructions.galgas", 1243)), kENUMERATION_UP) ;
  const bool bool_2 = true ;
  if (enumerator_36682.hasCurrentObject () && bool_2) {
    while (enumerator_36682.hasCurrentObject () && bool_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsStrictSup, var_lineSize_36293.add_operation (enumerator_36682.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1244)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1244)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1244)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_lineSize_36293 = GALGAS_uint ((uint32_t) 0U) ;
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1246)) ;
        }
      }
      inCompiler->printMessage (enumerator_36682.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1248))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1248)) ;
      var_lineSize_36293.plusAssign_operation(enumerator_36682.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1249)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1249)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1249)) ;
      enumerator_36682.gotoNextObject () ;
      if (enumerator_36682.hasCurrentObject () && bool_2) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1251)) ;
        var_lineSize_36293.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1252)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1254)) ;
  }
  inCompiler->printMessage (var_delimitor_35856  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1256)) ;
  inCompiler->printMessage (GALGAS_string (" Setters \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1257)) ;
  inCompiler->printMessage (var_varDelim_35934  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1258)) ;
  var_lineSize_36293 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlSetterMap enumerator_37035 (ioArgument_lib.getter_setterMap (SOURCE_FILE ("gtl_instructions.galgas", 1260)), kENUMERATION_UP) ;
  const bool bool_4 = true ;
  if (enumerator_37035.hasCurrentObject () && bool_4) {
    while (enumerator_37035.hasCurrentObject () && bool_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_lineSize_36293.add_operation (enumerator_37035.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1261)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1261)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1261)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_lineSize_36293 = GALGAS_uint ((uint32_t) 0U) ;
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1263)) ;
        }
      }
      inCompiler->printMessage (enumerator_37035.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1265))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1265)) ;
      var_lineSize_36293.plusAssign_operation(enumerator_37035.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1266)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1266)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1266)) ;
      enumerator_37035.gotoNextObject () ;
      if (enumerator_37035.hasCurrentObject () && bool_4) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1268)) ;
        var_lineSize_36293.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1269)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1271)) ;
  }
  inCompiler->printMessage (var_delimitor_35856  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1273)) ;
  inCompiler->printMessage (GALGAS_string (" Templates \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1274)) ;
  inCompiler->printMessage (var_varDelim_35934  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1275)) ;
  var_lineSize_36293 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlTemplateMap enumerator_37392 (ioArgument_lib.getter_templateMap (SOURCE_FILE ("gtl_instructions.galgas", 1277)), kENUMERATION_UP) ;
  const bool bool_6 = true ;
  if (enumerator_37392.hasCurrentObject () && bool_6) {
    while (enumerator_37392.hasCurrentObject () && bool_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsStrictSup, var_lineSize_36293.add_operation (enumerator_37392.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1278)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1278)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_lineSize_36293 = GALGAS_uint ((uint32_t) 0U) ;
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1280)) ;
        }
      }
      inCompiler->printMessage (enumerator_37392.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1282))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1282)) ;
      var_lineSize_36293.plusAssign_operation(enumerator_37392.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1283)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1283)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1283)) ;
      enumerator_37392.gotoNextObject () ;
      if (enumerator_37392.hasCurrentObject () && bool_6) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1285)) ;
        var_lineSize_36293.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1286)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1288)) ;
  }
  inCompiler->printMessage (var_delimitor_35856  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1290)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLibrariesInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLibrariesInstruction.mSlotID,
                                extensionMethod_gtlLibrariesInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLibrariesInstruction_execute (defineExtensionMethod_gtlLibrariesInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlSetterCallInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlSetterCallInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                              GALGAS_gtlContext & ioArgument_context,
                                                              GALGAS_gtlData & ioArgument_vars,
                                                              GALGAS_library & ioArgument_lib,
                                                              GALGAS_string & /* ioArgument_outputString */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSetterCallInstruction * object = (const cPtr_gtlSetterCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSetterCallInstruction) ;
  GALGAS_gtlDataList var_dataArguments_38210 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_instructions.galgas", 1308)) ;
  cEnumerator_gtlExpressionList enumerator_38245 (object->mProperty_arguments, kENUMERATION_UP) ;
  while (enumerator_38245.hasCurrentObject ()) {
    var_dataArguments_38210.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_38245.current_expression (HERE).ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1310))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1310)) ;
    enumerator_38245.gotoNextObject () ;
  }
  GALGAS_gtlData var_targetData_38336 = extensionGetter_get (object->mProperty_target, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1312)) ;
  {
  var_targetData_38336.insulate (HERE) ;
  cPtr_gtlData * ptr_38387 = (cPtr_gtlData *) var_targetData_38336.ptr () ;
  callExtensionSetter_performSetter ((cPtr_gtlData *) ptr_38387, object->mProperty_setterName, var_dataArguments_38210, ioArgument_context, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1313)) ;
  }
  extensionMethod_set (object->mProperty_target, ioArgument_context, ioArgument_vars, ioArgument_lib, var_targetData_38336, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1314)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlSetterCallInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlSetterCallInstruction.mSlotID,
                                extensionMethod_gtlSetterCallInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlSetterCallInstruction_execute (defineExtensionMethod_gtlSetterCallInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlInputStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlInputStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & ioArgument_context,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & /* ioArgument_lib */,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInputStatementInstruction * object = (const cPtr_gtlInputStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInputStatementInstruction) ;
  cEnumerator_gtlArgumentList enumerator_39005 (object->mProperty_formalArguments, kENUMERATION_UP) ;
  while (enumerator_39005.hasCurrentObject ()) {
    GALGAS_gtlData var_arg_39060 ;
    {
    ioArgument_context.insulate (HERE) ;
    cPtr_gtlContext * ptr_39023 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
    callExtensionSetter_popFirstInputArg ((cPtr_gtlContext *) ptr_39023, enumerator_39005.current_name (HERE).getter_location (SOURCE_FILE ("gtl_instructions.galgas", 1331)), var_arg_39060, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1331)) ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_39005.current_typed (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, enumerator_39005.current_type (HERE).objectCompare (var_arg_39060.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 1333)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_arg_39060.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1334)), GALGAS_string ("mistyped argument, ").add_operation (extensionGetter_typeName (var_arg_39060.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1334)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1334)), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1334)) ;
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_39005.current_name (HERE).getter_location (SOURCE_FILE ("gtl_instructions.galgas", 1335)), extensionGetter_typeName (enumerator_39005.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1335)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1335)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1335)) ;
          }
        }
      }
    }
    {
    ioArgument_vars.insulate (HERE) ;
    cPtr_gtlData * ptr_39287 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_39287, enumerator_39005.current_name (HERE), var_arg_39060, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1338)) ;
    }
    enumerator_39005.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlInputStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlInputStatementInstruction.mSlotID,
                                extensionMethod_gtlInputStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlInputStatementInstruction_execute (defineExtensionMethod_gtlInputStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlSetRandomSeedStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlSetRandomSeedStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                          GALGAS_gtlContext & ioArgument_context,
                                                                          GALGAS_gtlData & ioArgument_vars,
                                                                          GALGAS_library & ioArgument_lib,
                                                                          GALGAS_string & /* ioArgument_outputString */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSetRandomSeedStatementInstruction * object = (const cPtr_gtlSetRandomSeedStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSetRandomSeedStatementInstruction) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_expressionProvided.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlData var_seed_39875 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_seedNumber.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1357)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (var_seed_39875.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_gtlInt temp_2 ;
          if (var_seed_39875.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_seed_39875.ptr ())) {
              temp_2 = (cPtr_gtlInt *) var_seed_39875.ptr () ;
            }else{
              inCompiler->castError ("gtlInt", var_seed_39875.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1359)) ;
            }
          }
          GALGAS_bigint var_seedValue_39970 = temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1359)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_seedValue_39970.getter_fitsInUInt (SOURCE_FILE ("gtl_instructions.galgas", 1360)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              GALGAS_uint::class_method_setRandomSeed (var_seedValue_39970.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1361)) COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1361)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_seedNumber.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1363)), GALGAS_string ("seed value should be a 32 bits unsigned integer"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1363)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_seedNumber.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1366)), GALGAS_string ("int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1366)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    cEnumerator_stringlist enumerator_40408 (GALGAS_string::constructor_stringWithCurrentDateTime (SOURCE_FILE ("gtl_instructions.galgas", 1370)).getter_componentsSeparatedByString (GALGAS_string (" ") COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1370)), kENUMERATION_UP) ;
    while (enumerator_40408.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = enumerator_40408.current_mValue (HERE).getter_containsCharacter (GALGAS_char (TO_UNICODE (58)) COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1371)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_uint var_seed_40473 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_stringlist enumerator_40537 (enumerator_40408.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string (":") COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1373)), kENUMERATION_UP) ;
          while (enumerator_40537.hasCurrentObject ()) {
            var_seed_40473.plusAssign_operation(enumerator_40537.current_mValue (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1374)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1374)) ;
            enumerator_40537.gotoNextObject () ;
          }
          {
          GALGAS_uint::class_method_setRandomSeed (var_seed_40473 COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1376)) ;
          }
        }
      }
      enumerator_40408.gotoNextObject () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlSetRandomSeedStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlSetRandomSeedStatementInstruction.mSlotID,
                                extensionMethod_gtlSetRandomSeedStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlSetRandomSeedStatementInstruction_execute (defineExtensionMethod_gtlSetRandomSeedStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct overrideMap'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlStruct extensionGetter_gtlStruct_overrideMap (const cPtr_gtlData * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_mapOverriden ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_mapOverriden = GALGAS_gtlStruct::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 35)), GALGAS_gtlVarMap::constructor_mapWithMapToOverride (object->mProperty_value  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 36))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 33)) ;
//---
  return result_mapOverriden ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_overrideMap (void) {
  enterExtensionGetter_overrideMap (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionGetter_gtlStruct_overrideMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_overrideMap (defineExtensionGetter_gtlStruct_overrideMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct overriddenMap'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlStruct extensionGetter_gtlStruct_overriddenMap (const cPtr_gtlData * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_overriddenMap ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_overriddenMap = GALGAS_gtlStruct::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44)), object->mProperty_value.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44)) ;
//---
  return result_overriddenMap ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_overriddenMap (void) {
  enterExtensionGetter_overriddenMap (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionGetter_gtlStruct_overriddenMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_overriddenMap (defineExtensionGetter_gtlStruct_overriddenMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'wantGtlStruct'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData function_wantGtlStruct (GALGAS_gtlData inArgument_inData,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_outData ; // Returned variable
  if (inArgument_inData.isValid ()) {
    if (inArgument_inData.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
      GALGAS_gtlStruct cast_1500_inDataStruct ((cPtr_gtlStruct *) inArgument_inData.ptr ()) ;
      result_outData = cast_1500_inDataStruct ;
    }else{
      result_outData = GALGAS_gtlStruct::constructor_new (callExtensionGetter_location ((const cPtr_gtlData *) inArgument_inData.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 56)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 56)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 56))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 56)) ;
    }
  }
//---
  return result_outData ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_wantGtlStruct [2] = {
  & kTypeDescriptor_GALGAS_gtlData,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_wantGtlStruct (C_Compiler * inCompiler,
                                                              const cObjectArray & inEffectiveParameterArray,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_gtlData operand0 = GALGAS_gtlData::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_wantGtlStruct (operand0,
                                 inCompiler
                                 COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_wantGtlStruct ("wantGtlStruct",
                                                               functionWithGenericHeader_wantGtlStruct,
                                                               & kTypeDescriptor_GALGAS_gtlData,
                                                               1,
                                                               functionArgs_wantGtlStruct) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'wantGtlMap'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData function_wantGtlMap (GALGAS_gtlData inArgument_inData,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_outData ; // Returned variable
  if (inArgument_inData.isValid ()) {
    if (inArgument_inData.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
      GALGAS_gtlMap cast_1793_inDataMap ((cPtr_gtlMap *) inArgument_inData.ptr ()) ;
      result_outData = cast_1793_inDataMap ;
    }else{
      result_outData = GALGAS_gtlMap::constructor_new (callExtensionGetter_location ((const cPtr_gtlData *) inArgument_inData.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 69)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 69)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 69))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 69)) ;
    }
  }
//---
  return result_outData ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_wantGtlMap [2] = {
  & kTypeDescriptor_GALGAS_gtlData,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_wantGtlMap (C_Compiler * inCompiler,
                                                           const cObjectArray & inEffectiveParameterArray,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_gtlData operand0 = GALGAS_gtlData::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_wantGtlMap (operand0,
                              inCompiler
                              COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_wantGtlMap ("wantGtlMap",
                                                            functionWithGenericHeader_wantGtlMap,
                                                            & kTypeDescriptor_GALGAS_gtlData,
                                                            1,
                                                            functionArgs_wantGtlMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'wantGtlList'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData function_wantGtlList (GALGAS_gtlData inArgument_inData,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_outData ; // Returned variable
  if (inArgument_inData.isValid ()) {
    if (inArgument_inData.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_2083_inDataList ((cPtr_gtlList *) inArgument_inData.ptr ()) ;
      result_outData = cast_2083_inDataList ;
    }else{
      result_outData = GALGAS_gtlList::constructor_new (callExtensionGetter_location ((const cPtr_gtlData *) inArgument_inData.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 82)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 82)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 82))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 82)) ;
    }
  }
//---
  return result_outData ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_wantGtlList [2] = {
  & kTypeDescriptor_GALGAS_gtlData,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_wantGtlList (C_Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GALGAS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_gtlData operand0 = GALGAS_gtlData::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_wantGtlList (operand0,
                               inCompiler
                               COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_wantGtlList ("wantGtlList",
                                                             functionWithGenericHeader_wantGtlList,
                                                             & kTypeDescriptor_GALGAS_gtlData,
                                                             1,
                                                             functionArgs_wantGtlList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemField location'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_gtlVarItemField_location (const cPtr_gtlVarItem * inObject,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_loc ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_loc = object->mProperty_field.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 155)) ;
//---
  return result_loc ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemField_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                 extensionGetter_gtlVarItemField_location) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemField_location (defineExtensionGetter_gtlVarItemField_location, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemField stringPath'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlVarItemField_stringPath (const cPtr_gtlVarItem * inObject,
                                                                 const GALGAS_gtlContext /* constinArgument_exeContext */,
                                                                 const GALGAS_gtlData /* constinArgument_vars */,
                                                                 const GALGAS_library /* constinArgument_lib */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_result = object->mProperty_field.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 164)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemField_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                   extensionGetter_gtlVarItemField_stringPath) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemField_stringPath (defineExtensionGetter_gtlVarItemField_stringPath, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlVarItemField setInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlVarItemField_setInContext (const cPtr_gtlVarItem * inObject,
                                                          const GALGAS_gtlContext constinArgument_exeContext,
                                                          GALGAS_gtlData & ioArgument_context,
                                                          const GALGAS_gtlData constinArgument_vars,
                                                          const GALGAS_library constinArgument_lib,
                                                          const GALGAS_gtlVarPath constinArgument_path,
                                                          const GALGAS_gtlData constinArgument_newData,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 184)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_context.insulate (HERE) ;
      cPtr_gtlData * ptr_5576 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_5576, object->mProperty_field, constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 186)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_gtlData var_data_5662 ;
    GALGAS_bool joker_5664 ; // Joker input parameter
    callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, var_data_5662, joker_5664, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 188)) ;
    callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 189)).ptr (), constinArgument_exeContext, var_data_5662, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 194)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 189)) ;
    {
    ioArgument_context.insulate (HERE) ;
    cPtr_gtlData * ptr_5830 = (cPtr_gtlData *) ioArgument_context.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_5830, object->mProperty_field, var_data_5662, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 197)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlVarItemField_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                     extensionMethod_gtlVarItemField_setInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlVarItemField_setInContext (defineExtensionMethod_gtlVarItemField_setInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemField getInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlVarItemField_getInContext (const cPtr_gtlVarItem * inObject,
                                                                    const GALGAS_gtlContext constinArgument_exeContext,
                                                                    const GALGAS_gtlData constinArgument_context,
                                                                    const GALGAS_gtlData constinArgument_vars,
                                                                    const GALGAS_library constinArgument_lib,
                                                                    const GALGAS_gtlVarPath constinArgument_path,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  GALGAS_gtlData var_data_6317 ;
  GALGAS_bool var_found_6330 ;
  callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mProperty_field, var_data_6317, var_found_6330, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 212)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 213)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_found_6330.boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result = var_data_6317 ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_data_6317.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 217)), GALGAS_string ("Variable or field does not exist"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 217)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 220)).ptr (), constinArgument_exeContext, var_data_6317, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 220)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemField_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                     extensionGetter_gtlVarItemField_getInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemField_getInContext (defineExtensionGetter_gtlVarItemField_getInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemField existsInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlVarItemField_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                    const GALGAS_gtlContext constinArgument_exeContext,
                                                                    const GALGAS_gtlData constinArgument_context,
                                                                    const GALGAS_gtlData constinArgument_vars,
                                                                    const GALGAS_library constinArgument_lib,
                                                                    const GALGAS_gtlVarPath constinArgument_path,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mProperty_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 241)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 242)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_7193 ;
        GALGAS_bool joker_7195 ; // Joker input parameter
        callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mProperty_field, var_subContext_7193, joker_7195, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 245)) ;
        result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 246)).ptr (), constinArgument_exeContext, var_subContext_7193, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 246)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bool (false) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemField_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                        extensionGetter_gtlVarItemField_existsInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemField_existsInContext (defineExtensionGetter_gtlVarItemField_existsInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlVarItemField deleteInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlVarItemField_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                             const GALGAS_gtlContext constinArgument_exeContext,
                                                             GALGAS_gtlData & ioArgument_context,
                                                             const GALGAS_gtlData constinArgument_vars,
                                                             const GALGAS_library constinArgument_lib,
                                                             const GALGAS_gtlVarPath constinArgument_path,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 269)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 270)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_context.insulate (HERE) ;
          cPtr_gtlData * ptr_7882 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_deleteStructField ((cPtr_gtlData *) ptr_7882, object->mProperty_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 271)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_gtlData var_data_7966 ;
        GALGAS_bool joker_7968 ; // Joker input parameter
        callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, var_data_7966, joker_7968, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 273)) ;
        callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 274)).ptr (), constinArgument_exeContext, var_data_7966, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 274)) ;
        {
        ioArgument_context.insulate (HERE) ;
        cPtr_gtlData * ptr_8138 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_8138, object->mProperty_field, var_data_7966, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 281)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlVarItemField_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                        extensionMethod_gtlVarItemField_deleteInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlVarItemField_deleteInContext (defineExtensionMethod_gtlVarItemField_deleteInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemCollection stringPath'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlVarItemCollection_stringPath (const cPtr_gtlVarItem * inObject,
                                                                      const GALGAS_gtlContext constinArgument_exeContext,
                                                                      const GALGAS_gtlData constinArgument_vars,
                                                                      const GALGAS_library constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  result_result = object->mProperty_field.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 297)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 297)) ;
  GALGAS_gtlData var_keyValue_8670 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 298)) ;
  if (var_keyValue_8670.isValid ()) {
    if (var_keyValue_8670.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_8753_keyString ((cPtr_gtlString *) var_keyValue_8670.ptr ()) ;
      result_result.plusAssign_operation(GALGAS_string ("\"").add_operation (callExtensionGetter_string ((const cPtr_gtlString *) cast_8753_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 301)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 301)) ;
    }else if (var_keyValue_8670.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_8817_keyInt ((cPtr_gtlInt *) var_keyValue_8670.ptr ()) ;
      result_result.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlInt *) cast_8817_keyInt.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 303)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 305)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemCollection_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                   extensionGetter_gtlVarItemCollection_stringPath) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemCollection_stringPath (defineExtensionGetter_gtlVarItemCollection_stringPath, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlVarItemCollection setInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlVarItemCollection_setInContext (const cPtr_gtlVarItem * inObject,
                                                               const GALGAS_gtlContext constinArgument_exeContext,
                                                               GALGAS_gtlData & ioArgument_context,
                                                               const GALGAS_gtlData constinArgument_vars,
                                                               const GALGAS_library constinArgument_lib,
                                                               const GALGAS_gtlVarPath constinArgument_path,
                                                               const GALGAS_gtlData constinArgument_newData,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 319)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 319)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_9354_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 319)).ptr ()) ;
      ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 321)) ;
      GALGAS_gtlData var_data_9440 ;
      GALGAS_bool joker_9442 ; // Joker input parameter
      callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, var_data_9440, joker_9442, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 322)) ;
      var_data_9440 = function_wantGtlMap (var_data_9440, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 323)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          var_data_9440.insulate (HERE) ;
          cPtr_gtlData * ptr_9518 = (cPtr_gtlData *) var_data_9440.ptr () ;
          callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_9518, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_9354_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 325)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 325)) ;
          }
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_9611 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) var_data_9440.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_9354_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 327)), var_subContext_9611, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 327)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 328)).ptr (), constinArgument_exeContext, var_subContext_9611, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 333)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 328)) ;
        {
        var_data_9440.insulate (HERE) ;
        cPtr_gtlData * ptr_9797 = (cPtr_gtlData *) var_data_9440.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_9797, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_9354_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 336)), var_subContext_9611, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 336)) ;
        }
      }
      {
      ioArgument_context.insulate (HERE) ;
      cPtr_gtlData * ptr_9855 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_9855, object->mProperty_field, var_data_9440, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 338)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 319)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_9909_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 319)).ptr ()) ;
      ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 340)) ;
      GALGAS_gtlData var_data_9995 ;
      GALGAS_bool joker_9997 ; // Joker input parameter
      callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, var_data_9995, joker_9997, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 341)) ;
      var_data_9995 = function_wantGtlList (var_data_9995, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 342)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 343)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          var_data_9995.insulate (HERE) ;
          cPtr_gtlData * ptr_10074 = (cPtr_gtlData *) var_data_9995.ptr () ;
          callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_10074, constinArgument_newData, cast_9909_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 344)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_10161 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_data_9995.ptr (), var_subContext_10161, cast_9909_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 346)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 347)).ptr (), constinArgument_exeContext, var_subContext_10161, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 347)) ;
        {
        var_data_9995.insulate (HERE) ;
        cPtr_gtlData * ptr_10355 = (cPtr_gtlData *) var_data_9995.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_10355, var_subContext_10161, cast_9909_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 355)) ;
        }
      }
      {
      ioArgument_context.insulate (HERE) ;
      cPtr_gtlData * ptr_10414 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_10414, object->mProperty_field, var_data_9995, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 357)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 359)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 359)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlVarItemCollection_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                     extensionMethod_gtlVarItemCollection_setInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlVarItemCollection_setInContext (defineExtensionMethod_gtlVarItemCollection_setInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemCollection getInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlVarItemCollection_getInContext (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlContext constinArgument_exeContext,
                                                                         const GALGAS_gtlData constinArgument_context,
                                                                         const GALGAS_gtlData constinArgument_vars,
                                                                         const GALGAS_library constinArgument_lib,
                                                                         const GALGAS_gtlVarPath constinArgument_path,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  GALGAS_gtlData var_collection_10961 ;
  GALGAS_bool joker_10963 ; // Joker input parameter
  callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mProperty_field, var_collection_10961, joker_10963, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 374)) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 375)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 375)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_11037_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 375)).ptr ()) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 377)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_10961.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_11037_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 378)), result_result, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 378)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_11182 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_10961.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_11037_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 380)), var_subContext_11182, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 380)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 381)).ptr (), constinArgument_exeContext, var_subContext_11182, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 381)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 375)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_11378_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 375)).ptr ()) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 390)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_10961.ptr (), result_result, cast_11378_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 391)) ;
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_11517 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_10961.ptr (), var_subContext_11517, cast_11378_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 393)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 394)).ptr (), constinArgument_exeContext, var_subContext_11517, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 394)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 403)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 403)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemCollection_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                     extensionGetter_gtlVarItemCollection_getInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemCollection_getInContext (defineExtensionGetter_gtlVarItemCollection_getInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemCollection existsInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlVarItemCollection_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlContext constinArgument_exeContext,
                                                                         const GALGAS_gtlData constinArgument_context,
                                                                         const GALGAS_gtlData constinArgument_vars,
                                                                         const GALGAS_library constinArgument_lib,
                                                                         const GALGAS_gtlVarPath constinArgument_path,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mProperty_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 419)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlData var_collection_12285 ;
      GALGAS_bool joker_12287 ; // Joker input parameter
      callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mProperty_field, var_collection_12285, joker_12287, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 420)) ;
      if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 421)).isValid ()) {
        if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 421)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
          GALGAS_gtlString cast_12365_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 421)).ptr ()) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 423)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_1) {
              result_result = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_collection_12285.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_12365_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 424)) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_collection_12285.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_12365_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 426)).boolEnum () ;
              if (kBoolTrue == test_2) {
                GALGAS_gtlData var_subContext_12575 ;
                callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_12285.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_12365_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 427)), var_subContext_12575, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 427)) ;
                result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 428)).ptr (), constinArgument_exeContext, var_subContext_12575, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 428)) ;
              }
            }
            if (kBoolFalse == test_2) {
              result_result = GALGAS_bool (false) ;
            }
          }
        }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 421)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
          GALGAS_gtlInt cast_12856_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 421)).ptr ()) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 440)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_collection_12285.ptr (), cast_12856_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 441)) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_collection_12285.ptr (), cast_12856_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 443)).boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_gtlData var_subContext_13061 ;
                callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_12285.ptr (), var_subContext_13061, cast_12856_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 444)) ;
                result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).ptr (), constinArgument_exeContext, var_subContext_13061, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)) ;
              }
            }
            if (kBoolFalse == test_4) {
              result_result = GALGAS_bool (false) ;
            }
          }
        }else{
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 457)), GALGAS_string ("string ot int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 457)) ;
          result_result.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bool (false) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemCollection_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                        extensionGetter_gtlVarItemCollection_existsInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemCollection_existsInContext (defineExtensionGetter_gtlVarItemCollection_existsInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlVarItemCollection deleteInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlVarItemCollection_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                                  const GALGAS_gtlContext constinArgument_exeContext,
                                                                  GALGAS_gtlData & ioArgument_context,
                                                                  const GALGAS_gtlData constinArgument_vars,
                                                                  const GALGAS_library constinArgument_lib,
                                                                  const GALGAS_gtlVarPath constinArgument_path,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_13893_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)).ptr ()) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 476)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_gtlData var_data_13987 ;
          GALGAS_bool joker_13989 ; // Joker input parameter
          callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, var_data_13987, joker_13989, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 477)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 478)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_1) {
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_data_13987.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13893_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 479)).boolEnum () ;
                if (kBoolTrue == test_2) {
                  {
                  var_data_13987.insulate (HERE) ;
                  cPtr_gtlData * ptr_14087 = (cPtr_gtlData *) var_data_13987.ptr () ;
                  callExtensionSetter_deleteMapItem ((cPtr_gtlData *) ptr_14087, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13893_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 480)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_1) {
            GALGAS_gtlData var_subContext_14190 ;
            callExtensionMethod_mapItem ((const cPtr_gtlData *) var_data_13987.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13893_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 483)), var_subContext_14190, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 483)) ;
            callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 484)).ptr (), constinArgument_exeContext, var_subContext_14190, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 484)) ;
            {
            var_data_13987.insulate (HERE) ;
            cPtr_gtlData * ptr_14378 = (cPtr_gtlData *) var_data_13987.ptr () ;
            callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_14378, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13893_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 491)), var_subContext_14190, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 491)) ;
            }
          }
          {
          ioArgument_context.insulate (HERE) ;
          cPtr_gtlData * ptr_14440 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_14440, object->mProperty_field, var_data_13987, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 493)) ;
          }
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_14502_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)).ptr ()) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 496)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_data_14596 ;
          GALGAS_bool joker_14598 ; // Joker input parameter
          callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mProperty_field, var_data_14596, joker_14598, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 497)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 498)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_data_14596.ptr (), cast_14502_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 499)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_data_14596.insulate (HERE) ;
                  cPtr_gtlData * ptr_14697 = (cPtr_gtlData *) var_data_14596.ptr () ;
                  callExtensionSetter_deleteItemAtIndex ((cPtr_gtlData *) ptr_14697, cast_14502_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 500)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_4) {
            GALGAS_gtlData var_subContext_14794 ;
            callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_data_14596.ptr (), var_subContext_14794, cast_14502_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 503)) ;
            callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 504)).ptr (), constinArgument_exeContext, var_subContext_14794, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 504)) ;
            {
            var_data_14596.insulate (HERE) ;
            cPtr_gtlData * ptr_14990 = (cPtr_gtlData *) var_data_14596.ptr () ;
            callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_14990, var_subContext_14794, cast_14502_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 511)) ;
            }
          }
          {
          ioArgument_context.insulate (HERE) ;
          cPtr_gtlData * ptr_15053 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_15053, object->mProperty_field, var_data_14596, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 513)) ;
          }
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 516)), GALGAS_string ("string ot int expected"), fixItArray6  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 516)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlVarItemCollection_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                        extensionMethod_gtlVarItemCollection_deleteInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlVarItemCollection_deleteInContext (defineExtensionMethod_gtlVarItemCollection_deleteInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemSubCollection location'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_gtlVarItemSubCollection_location (const cPtr_gtlVarItem * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_loc ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  result_loc = object->mProperty_subCollectionlocation ;
//---
  return result_loc ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemSubCollection_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                 extensionGetter_gtlVarItemSubCollection_location) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_location (defineExtensionGetter_gtlVarItemSubCollection_location, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemSubCollection stringPath'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlVarItemSubCollection_stringPath (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlContext constinArgument_exeContext,
                                                                         const GALGAS_gtlData constinArgument_vars,
                                                                         const GALGAS_library constinArgument_lib,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  result_result = GALGAS_string ("[") ;
  GALGAS_gtlData var_keyValue_15816 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 544)) ;
  if (var_keyValue_15816.isValid ()) {
    if (var_keyValue_15816.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_15899_keyString ((cPtr_gtlString *) var_keyValue_15816.ptr ()) ;
      result_result.plusAssign_operation(GALGAS_string ("\"").add_operation (callExtensionGetter_string ((const cPtr_gtlString *) cast_15899_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 547)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 547)) ;
    }else if (var_keyValue_15816.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_15963_keyInt ((cPtr_gtlInt *) var_keyValue_15816.ptr ()) ;
      result_result.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlInt *) cast_15963_keyInt.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 549)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 551)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemSubCollection_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                   extensionGetter_gtlVarItemSubCollection_stringPath) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_stringPath (defineExtensionGetter_gtlVarItemSubCollection_stringPath, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlVarItemSubCollection setInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlVarItemSubCollection_setInContext (const cPtr_gtlVarItem * inObject,
                                                                  const GALGAS_gtlContext constinArgument_exeContext,
                                                                  GALGAS_gtlData & ioArgument_context,
                                                                  const GALGAS_gtlData constinArgument_vars,
                                                                  const GALGAS_library constinArgument_lib,
                                                                  const GALGAS_gtlVarPath constinArgument_path,
                                                                  const GALGAS_gtlData constinArgument_newData,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 565)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 565)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_16506_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 565)).ptr ()) ;
      ioArgument_context = function_wantGtlMap (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 567)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 568)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_context.insulate (HERE) ;
          cPtr_gtlData * ptr_16590 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_16590, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_16506_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 569)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 569)) ;
          }
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_16686 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_16506_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 571)), var_subContext_16686, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 571)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 572)).ptr (), constinArgument_exeContext, var_subContext_16686, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 577)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 572)) ;
        {
        ioArgument_context.insulate (HERE) ;
        cPtr_gtlData * ptr_16875 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_16875, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_16506_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 580)), var_subContext_16686, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 580)) ;
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 565)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_16943_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 565)).ptr ()) ;
      ioArgument_context = function_wantGtlList (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 583)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 584)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_context.insulate (HERE) ;
          cPtr_gtlData * ptr_17028 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_17028, constinArgument_newData, cast_16943_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 585)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_17118 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), var_subContext_17118, cast_16943_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 587)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 588)).ptr (), constinArgument_exeContext, var_subContext_17118, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 593)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 588)) ;
        {
        ioArgument_context.insulate (HERE) ;
        cPtr_gtlData * ptr_17315 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_17315, var_subContext_17118, cast_16943_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 596)) ;
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 599)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 599)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlVarItemSubCollection_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                     extensionMethod_gtlVarItemSubCollection_setInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlVarItemSubCollection_setInContext (defineExtensionMethod_gtlVarItemSubCollection_setInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemSubCollection getInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlVarItemSubCollection_getInContext (const cPtr_gtlVarItem * inObject,
                                                                            const GALGAS_gtlContext constinArgument_exeContext,
                                                                            const GALGAS_gtlData constinArgument_context,
                                                                            const GALGAS_gtlData constinArgument_vars,
                                                                            const GALGAS_library constinArgument_lib,
                                                                            const GALGAS_gtlVarPath constinArgument_path,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 614)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 614)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_17901_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 614)).ptr ()) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 616)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_17901_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 617)), result_result, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 617)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_18040 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_17901_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 619)), var_subContext_18040, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 619)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 620)).ptr (), constinArgument_exeContext, var_subContext_18040, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 620)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 614)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_18236_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 614)).ptr ()) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 629)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), result_result, cast_18236_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 630)) ;
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_18369 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), var_subContext_18369, cast_18236_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 632)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 633)).ptr (), constinArgument_exeContext, var_subContext_18369, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 633)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 642)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 642)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemSubCollection_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                     extensionGetter_gtlVarItemSubCollection_getInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_getInContext (defineExtensionGetter_gtlVarItemSubCollection_getInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemSubCollection existsInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlVarItemSubCollection_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                            const GALGAS_gtlContext constinArgument_exeContext,
                                                                            const GALGAS_gtlData constinArgument_context,
                                                                            const GALGAS_gtlData constinArgument_vars,
                                                                            const GALGAS_library constinArgument_lib,
                                                                            const GALGAS_gtlVarPath constinArgument_path,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 657)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 657)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_19119_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 657)).ptr ()) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 659)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          result_result = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19119_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 660)) ;
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19119_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 662)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_gtlData var_subContext_19310 ;
            callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19119_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 663)), var_subContext_19310, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 663)) ;
            result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 664)).ptr (), constinArgument_exeContext, var_subContext_19310, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 664)) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result = GALGAS_bool (false) ;
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 657)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_19567_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 657)).ptr ()) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 676)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          result_result = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), cast_19567_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 677)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), cast_19567_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 679)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_gtlData var_subContext_19753 ;
            callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), var_subContext_19753, cast_19567_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 680)) ;
            result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 681)).ptr (), constinArgument_exeContext, var_subContext_19753, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 681)) ;
          }
        }
        if (kBoolFalse == test_3) {
          result_result = GALGAS_bool (false) ;
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 693)), GALGAS_string ("string ot int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 693)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemSubCollection_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                        extensionGetter_gtlVarItemSubCollection_existsInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_existsInContext (defineExtensionGetter_gtlVarItemSubCollection_existsInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlVarItemSubCollection deleteInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlVarItemSubCollection_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                                     const GALGAS_gtlContext constinArgument_exeContext,
                                                                     GALGAS_gtlData & ioArgument_context,
                                                                     const GALGAS_gtlData constinArgument_vars,
                                                                     const GALGAS_library constinArgument_lib,
                                                                     const GALGAS_gtlVarPath constinArgument_path,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 707)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 707)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_20531_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 707)).ptr ()) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_20531_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 709)).boolEnum () ;
        if (kBoolTrue == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 710)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_1) {
              {
              ioArgument_context.insulate (HERE) ;
              cPtr_gtlData * ptr_20628 = (cPtr_gtlData *) ioArgument_context.ptr () ;
              callExtensionSetter_deleteMapItem ((cPtr_gtlData *) ptr_20628, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_20531_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 711)) ;
              }
            }
          }
          if (kBoolFalse == test_1) {
            GALGAS_gtlData var_subContext_20722 ;
            callExtensionMethod_mapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_20531_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 713)), var_subContext_20722, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 713)) ;
            callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 714)).ptr (), constinArgument_exeContext, var_subContext_20722, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 714)) ;
            {
            ioArgument_context.insulate (HERE) ;
            cPtr_gtlData * ptr_20913 = (cPtr_gtlData *) ioArgument_context.ptr () ;
            callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_20913, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_20531_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 721)), var_subContext_20722, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 721)) ;
            }
          }
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 707)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_20991_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), constinArgument_exeContext, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 707)).ptr ()) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), cast_20991_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 725)).boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 726)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              ioArgument_context.insulate (HERE) ;
              cPtr_gtlData * ptr_21089 = (cPtr_gtlData *) ioArgument_context.ptr () ;
              callExtensionSetter_deleteItemAtIndex ((cPtr_gtlData *) ptr_21089, cast_20991_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 727)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            GALGAS_gtlData var_subContext_21177 ;
            callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), var_subContext_21177, cast_20991_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 729)) ;
            callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 730)).ptr (), constinArgument_exeContext, var_subContext_21177, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 735)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 730)) ;
            {
            ioArgument_context.insulate (HERE) ;
            cPtr_gtlData * ptr_21376 = (cPtr_gtlData *) ioArgument_context.ptr () ;
            callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_21376, var_subContext_21177, cast_20991_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 737)) ;
            }
          }
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 741)), GALGAS_string ("string ot int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 741)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlVarItemSubCollection_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                        extensionMethod_gtlVarItemSubCollection_deleteInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlVarItemSubCollection_deleteInContext (defineExtensionMethod_gtlVarItemSubCollection_deleteInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlEmptyExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlEmptyExpression_eval (const cPtr_gtlExpression * inObject,
                                                               const GALGAS_gtlContext /* constinArgument_context */,
                                                               const GALGAS_gtlData /* constinArgument_vars */,
                                                               const GALGAS_library /* constinArgument_lib */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEmptyExpression * object = (const cPtr_gtlEmptyExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEmptyExpression) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("empty expression cannot be evalued"), fixItArray0  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 910)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlEmptyExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlEmptyExpression.mSlotID,
                             extensionGetter_gtlEmptyExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlEmptyExpression_eval (defineExtensionGetter_gtlEmptyExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlTerminal eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlTerminal_eval (const cPtr_gtlExpression * inObject,
                                                        const GALGAS_gtlContext /* constinArgument_context */,
                                                        const GALGAS_gtlData /* constinArgument_vars */,
                                                        const GALGAS_library /* constinArgument_lib */,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlTerminal * object = (const cPtr_gtlTerminal *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTerminal) ;
  result_result = object->mProperty_value ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlTerminal_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlTerminal.mSlotID,
                             extensionGetter_gtlTerminal_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlTerminal_eval (defineExtensionGetter_gtlTerminal_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarRef eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlVarRef_eval (const cPtr_gtlExpression * inObject,
                                                      const GALGAS_gtlContext constinArgument_context,
                                                      const GALGAS_gtlData constinArgument_vars,
                                                      const GALGAS_library constinArgument_lib,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarRef * object = (const cPtr_gtlVarRef *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarRef) ;
  result_result = extensionGetter_get (object->mProperty_variableName, constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 943)) ;
  {
  result_result.setter_setWhere (object->mProperty_where COMMA_SOURCE_FILE ("gtl_expressions.galgas", 944)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarRef_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlVarRef.mSlotID,
                             extensionGetter_gtlVarRef_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarRef_eval (defineExtensionGetter_gtlVarRef_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlAllVarsRef eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlAllVarsRef_eval (const cPtr_gtlExpression * /* inObject */,
                                                          const GALGAS_gtlContext /* constinArgument_context */,
                                                          const GALGAS_gtlData constinArgument_vars,
                                                          const GALGAS_library /* constinArgument_lib */,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  result_result = constinArgument_vars ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlAllVarsRef_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlAllVarsRef.mSlotID,
                             extensionGetter_gtlAllVarsRef_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlAllVarsRef_eval (defineExtensionGetter_gtlAllVarsRef_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlParenthesizedExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlParenthesizedExpression_eval (const cPtr_gtlExpression * inObject,
                                                                       const GALGAS_gtlContext constinArgument_context,
                                                                       const GALGAS_gtlData constinArgument_vars,
                                                                       const GALGAS_library constinArgument_lib,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlParenthesizedExpression * object = (const cPtr_gtlParenthesizedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlParenthesizedExpression) ;
  result_result = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_son.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 974)) ;
  {
  result_result.setter_setWhere (object->mProperty_where COMMA_SOURCE_FILE ("gtl_expressions.galgas", 975)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlParenthesizedExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlParenthesizedExpression.mSlotID,
                             extensionGetter_gtlParenthesizedExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlParenthesizedExpression_eval (defineExtensionGetter_gtlParenthesizedExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMinusExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMinusExpression_eval (const cPtr_gtlExpression * inObject,
                                                               const GALGAS_gtlContext constinArgument_context,
                                                               const GALGAS_gtlData constinArgument_vars,
                                                               const GALGAS_library constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMinusExpression * object = (const cPtr_gtlMinusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMinusExpression) ;
  result_result = callExtensionGetter_minusOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_son.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 989)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 989)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMinusExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMinusExpression.mSlotID,
                             extensionGetter_gtlMinusExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMinusExpression_eval (defineExtensionGetter_gtlMinusExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlPlusExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlPlusExpression_eval (const cPtr_gtlExpression * inObject,
                                                              const GALGAS_gtlContext constinArgument_context,
                                                              const GALGAS_gtlData constinArgument_vars,
                                                              const GALGAS_library constinArgument_lib,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlPlusExpression * object = (const cPtr_gtlPlusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPlusExpression) ;
  result_result = callExtensionGetter_plusOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_son.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1003)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1003)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlPlusExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlPlusExpression.mSlotID,
                             extensionGetter_gtlPlusExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlPlusExpression_eval (defineExtensionGetter_gtlPlusExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlNotExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlNotExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_gtlData constinArgument_vars,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlNotExpression * object = (const cPtr_gtlNotExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotExpression) ;
  result_result = callExtensionGetter_notOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_son.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1017)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1017)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlNotExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlNotExpression.mSlotID,
                             extensionGetter_gtlNotExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlNotExpression_eval (defineExtensionGetter_gtlNotExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlAddExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlAddExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_gtlData constinArgument_vars,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlAddExpression * object = (const cPtr_gtlAddExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAddExpression) ;
  result_result = callExtensionGetter_addOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1033)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1034)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1033)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlAddExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlAddExpression.mSlotID,
                             extensionGetter_gtlAddExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlAddExpression_eval (defineExtensionGetter_gtlAddExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSubstractExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSubstractExpression_eval (const cPtr_gtlExpression * inObject,
                                                                   const GALGAS_gtlContext constinArgument_context,
                                                                   const GALGAS_gtlData constinArgument_vars,
                                                                   const GALGAS_library constinArgument_lib,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSubstractExpression * object = (const cPtr_gtlSubstractExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSubstractExpression) ;
  result_result = callExtensionGetter_subOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1048)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1049)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1048)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSubstractExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlSubstractExpression.mSlotID,
                             extensionGetter_gtlSubstractExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSubstractExpression_eval (defineExtensionGetter_gtlSubstractExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMultiplyExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMultiplyExpression_eval (const cPtr_gtlExpression * inObject,
                                                                  const GALGAS_gtlContext constinArgument_context,
                                                                  const GALGAS_gtlData constinArgument_vars,
                                                                  const GALGAS_library constinArgument_lib,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMultiplyExpression * object = (const cPtr_gtlMultiplyExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMultiplyExpression) ;
  result_result = callExtensionGetter_mulOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1063)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1064)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1063)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMultiplyExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMultiplyExpression.mSlotID,
                             extensionGetter_gtlMultiplyExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMultiplyExpression_eval (defineExtensionGetter_gtlMultiplyExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlDivideExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlDivideExpression_eval (const cPtr_gtlExpression * inObject,
                                                                const GALGAS_gtlContext constinArgument_context,
                                                                const GALGAS_gtlData constinArgument_vars,
                                                                const GALGAS_library constinArgument_lib,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlDivideExpression * object = (const cPtr_gtlDivideExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDivideExpression) ;
  result_result = callExtensionGetter_divOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1078)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1079)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1078)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlDivideExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlDivideExpression.mSlotID,
                             extensionGetter_gtlDivideExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlDivideExpression_eval (defineExtensionGetter_gtlDivideExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlModulusExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlModulusExpression_eval (const cPtr_gtlExpression * inObject,
                                                                 const GALGAS_gtlContext constinArgument_context,
                                                                 const GALGAS_gtlData constinArgument_vars,
                                                                 const GALGAS_library constinArgument_lib,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlModulusExpression * object = (const cPtr_gtlModulusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlModulusExpression) ;
  result_result = callExtensionGetter_modOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1093)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1093)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlModulusExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlModulusExpression.mSlotID,
                             extensionGetter_gtlModulusExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlModulusExpression_eval (defineExtensionGetter_gtlModulusExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlAndExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlAndExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_gtlData constinArgument_vars,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlAndExpression * object = (const cPtr_gtlAndExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAndExpression) ;
  result_result = callExtensionGetter_andOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1108)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1109)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1108)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlAndExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlAndExpression.mSlotID,
                             extensionGetter_gtlAndExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlAndExpression_eval (defineExtensionGetter_gtlAndExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlOrExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlOrExpression_eval (const cPtr_gtlExpression * inObject,
                                                            const GALGAS_gtlContext constinArgument_context,
                                                            const GALGAS_gtlData constinArgument_vars,
                                                            const GALGAS_library constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlOrExpression * object = (const cPtr_gtlOrExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlOrExpression) ;
  result_result = callExtensionGetter_orOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1123)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1124)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1123)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlOrExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlOrExpression.mSlotID,
                             extensionGetter_gtlOrExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlOrExpression_eval (defineExtensionGetter_gtlOrExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlXorExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlXorExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_gtlData constinArgument_vars,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlXorExpression * object = (const cPtr_gtlXorExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlXorExpression) ;
  result_result = callExtensionGetter_xorOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1138)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1139)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1138)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlXorExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlXorExpression.mSlotID,
                             extensionGetter_gtlXorExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlXorExpression_eval (defineExtensionGetter_gtlXorExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlShiftLeftExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlShiftLeftExpression_eval (const cPtr_gtlExpression * inObject,
                                                                   const GALGAS_gtlContext constinArgument_context,
                                                                   const GALGAS_gtlData constinArgument_vars,
                                                                   const GALGAS_library constinArgument_lib,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlShiftLeftExpression * object = (const cPtr_gtlShiftLeftExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlShiftLeftExpression) ;
  result_result = callExtensionGetter_slOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1153)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1154)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1153)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlShiftLeftExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlShiftLeftExpression.mSlotID,
                             extensionGetter_gtlShiftLeftExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlShiftLeftExpression_eval (defineExtensionGetter_gtlShiftLeftExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlShiftRightExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlShiftRightExpression_eval (const cPtr_gtlExpression * inObject,
                                                                    const GALGAS_gtlContext constinArgument_context,
                                                                    const GALGAS_gtlData constinArgument_vars,
                                                                    const GALGAS_library constinArgument_lib,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlShiftRightExpression * object = (const cPtr_gtlShiftRightExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlShiftRightExpression) ;
  result_result = callExtensionGetter_srOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1168)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1169)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1168)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlShiftRightExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlShiftRightExpression.mSlotID,
                             extensionGetter_gtlShiftRightExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlShiftRightExpression_eval (defineExtensionGetter_gtlShiftRightExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlNotEqualExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlNotEqualExpression_eval (const cPtr_gtlExpression * inObject,
                                                                  const GALGAS_gtlContext constinArgument_context,
                                                                  const GALGAS_gtlData constinArgument_vars,
                                                                  const GALGAS_library constinArgument_lib,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlNotEqualExpression * object = (const cPtr_gtlNotEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotEqualExpression) ;
  result_result = callExtensionGetter_neqOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1183)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1184)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1183)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlNotEqualExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlNotEqualExpression.mSlotID,
                             extensionGetter_gtlNotEqualExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlNotEqualExpression_eval (defineExtensionGetter_gtlNotEqualExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlEqualExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlEqualExpression_eval (const cPtr_gtlExpression * inObject,
                                                               const GALGAS_gtlContext constinArgument_context,
                                                               const GALGAS_gtlData constinArgument_vars,
                                                               const GALGAS_library constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEqualExpression * object = (const cPtr_gtlEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEqualExpression) ;
  result_result = callExtensionGetter_eqOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1198)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1199)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1198)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlEqualExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlEqualExpression.mSlotID,
                             extensionGetter_gtlEqualExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlEqualExpression_eval (defineExtensionGetter_gtlEqualExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLowerThanExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlLowerThanExpression_eval (const cPtr_gtlExpression * inObject,
                                                                   const GALGAS_gtlContext constinArgument_context,
                                                                   const GALGAS_gtlData constinArgument_vars,
                                                                   const GALGAS_library constinArgument_lib,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLowerThanExpression * object = (const cPtr_gtlLowerThanExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLowerThanExpression) ;
  result_result = callExtensionGetter_ltOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1213)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1214)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1213)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLowerThanExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLowerThanExpression.mSlotID,
                             extensionGetter_gtlLowerThanExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLowerThanExpression_eval (defineExtensionGetter_gtlLowerThanExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLowerOrEqualExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlLowerOrEqualExpression_eval (const cPtr_gtlExpression * inObject,
                                                                      const GALGAS_gtlContext constinArgument_context,
                                                                      const GALGAS_gtlData constinArgument_vars,
                                                                      const GALGAS_library constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLowerOrEqualExpression * object = (const cPtr_gtlLowerOrEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLowerOrEqualExpression) ;
  result_result = callExtensionGetter_leOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1228)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1229)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1228)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLowerOrEqualExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLowerOrEqualExpression.mSlotID,
                             extensionGetter_gtlLowerOrEqualExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLowerOrEqualExpression_eval (defineExtensionGetter_gtlLowerOrEqualExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlGreaterThanExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlGreaterThanExpression_eval (const cPtr_gtlExpression * inObject,
                                                                     const GALGAS_gtlContext constinArgument_context,
                                                                     const GALGAS_gtlData constinArgument_vars,
                                                                     const GALGAS_library constinArgument_lib,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlGreaterThanExpression * object = (const cPtr_gtlGreaterThanExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGreaterThanExpression) ;
  result_result = callExtensionGetter_gtOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1243)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1244)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1243)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlGreaterThanExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlGreaterThanExpression.mSlotID,
                             extensionGetter_gtlGreaterThanExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlGreaterThanExpression_eval (defineExtensionGetter_gtlGreaterThanExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlGreaterOrEqualExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlGreaterOrEqualExpression_eval (const cPtr_gtlExpression * inObject,
                                                                        const GALGAS_gtlContext constinArgument_context,
                                                                        const GALGAS_gtlData constinArgument_vars,
                                                                        const GALGAS_library constinArgument_lib,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlGreaterOrEqualExpression * object = (const cPtr_gtlGreaterOrEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGreaterOrEqualExpression) ;
  result_result = callExtensionGetter_geOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1258)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1259)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1258)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlGreaterOrEqualExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlGreaterOrEqualExpression.mSlotID,
                             extensionGetter_gtlGreaterOrEqualExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlGreaterOrEqualExpression_eval (defineExtensionGetter_gtlGreaterOrEqualExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlGetterCallExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlGetterCallExpression_eval (const cPtr_gtlExpression * inObject,
                                                                    const GALGAS_gtlContext constinArgument_context,
                                                                    const GALGAS_gtlData constinArgument_vars,
                                                                    const GALGAS_library constinArgument_lib,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlGetterCallExpression * object = (const cPtr_gtlGetterCallExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGetterCallExpression) ;
  GALGAS_gtlDataList var_dataArguments_38733 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1277)) ;
  cEnumerator_gtlExpressionList enumerator_38768 (object->mProperty_arguments, kENUMERATION_UP) ;
  while (enumerator_38768.hasCurrentObject ()) {
    var_dataArguments_38733.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_38768.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1279))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1279)) ;
    enumerator_38768.gotoNextObject () ;
  }
  GALGAS_gtlData var_targetData_38859 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_target.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1281)) ;
  result_result = callExtensionGetter_performGetter ((const cPtr_gtlData *) var_targetData_38859.ptr (), object->mProperty_getterName, var_dataArguments_38733, constinArgument_context, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1282)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlGetterCallExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlGetterCallExpression.mSlotID,
                             extensionGetter_gtlGetterCallExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlGetterCallExpression_eval (defineExtensionGetter_gtlGetterCallExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkArgumentError'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkArgumentError (const GALGAS_lstring constinArgument_name,
                                 const GALGAS_type constinArgument_formalType,
                                 const GALGAS_gtlData constinArgument_actualArgument,
                                 const GALGAS_uint constinArgument_argumentNum,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_formalType.objectCompare (callExtensionGetter_embeddedType ((const cPtr_gtlData *) constinArgument_actualArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1292)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1293)), extensionGetter_typeName (constinArgument_formalType, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1293)).add_operation (GALGAS_string (" expected for argument "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1293)).add_operation (constinArgument_argumentNum.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1293)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1293)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1294)).add_operation (extensionGetter_typeName (constinArgument_actualArgument.getter_dynamicType (SOURCE_FILE ("gtl_expressions.galgas", 1294)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1294)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1294)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1294)), fixItArray1  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1293)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'validateReturnValue'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData function_validateReturnValue (const GALGAS_lstring & constinArgument_functionName,
                                             const GALGAS_object & constinArgument_returnedValue,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  GALGAS_type var_returnedType_39460 = constinArgument_returnedValue.getter_objectDynamicType (SOURCE_FILE ("gtl_expressions.galgas", 1304)) ;
  GALGAS_location var_loc_39512 = constinArgument_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1305)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_returnedType_39460.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bigint))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_gtlInt::constructor_new (var_loc_39512, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1307)), GALGAS_bigint::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1307))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1307)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_returnedType_39460.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_double))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_result = GALGAS_gtlFloat::constructor_new (var_loc_39512, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1309)), GALGAS_double::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1309))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1309)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_returnedType_39460.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_string))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result_result = GALGAS_gtlString::constructor_new (var_loc_39512, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1311)), GALGAS_string::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1311))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1311)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, var_returnedType_39460.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bool))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result_result = GALGAS_gtlBool::constructor_new (var_loc_39512, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1313)), GALGAS_bool::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1313))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1313)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, var_returnedType_39460.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_list))).boolEnum () ;
            if (kBoolTrue == test_8) {
              result_result = GALGAS_gtlList::constructor_new (var_loc_39512, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1315)), GALGAS_list::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1315))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1315)) ;
            }
          }
          if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (constinArgument_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1317)), GALGAS_string ("this function does not return a compatible type"), fixItArray10  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1317)) ;
            result_result.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_validateReturnValue [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_object,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_validateReturnValue (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_object operand1 = GALGAS_object::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_validateReturnValue (operand0,
                                       operand1,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_validateReturnValue ("validateReturnValue",
                                                                     functionWithGenericHeader_validateReturnValue,
                                                                     & kTypeDescriptor_GALGAS_gtlData,
                                                                     2,
                                                                     functionArgs_validateReturnValue) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlFunctionCallExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlFunctionCallExpression_eval (const cPtr_gtlExpression * inObject,
                                                                      const GALGAS_gtlContext constinArgument_context,
                                                                      const GALGAS_gtlData constinArgument_vars,
                                                                      const GALGAS_library constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFunctionCallExpression * object = (const cPtr_gtlFunctionCallExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFunctionCallExpression) ;
  GALGAS_uint var_currentErrorCount_40740 = GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_expressions.galgas", 1336)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_function::constructor_isFunctionDefined (object->mProperty_functionName.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1338))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1338)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_objectlist var_arguments_40877 = GALGAS_objectlist::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1340)) ;
      GALGAS_gtlDataList var_dataArguments_40921 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1341)) ;
      cEnumerator_gtlExpressionList enumerator_40967 (object->mProperty_functionArguments, kENUMERATION_UP) ;
      while (enumerator_40967.hasCurrentObject ()) {
        GALGAS_gtlData var_arg_40989 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_40967.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1344)) ;
        var_dataArguments_40921.addAssign_operation (var_arg_40989  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1345)) ;
        callExtensionMethod_addMyValue ((const cPtr_gtlData *) var_arg_40989.ptr (), var_arguments_40877, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1346)) ;
        enumerator_40967.gotoNextObject () ;
      }
      GALGAS_function var_function_41128 = GALGAS_function::constructor_functionWithName (object->mProperty_functionName.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1349))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1349)) ;
      GALGAS_typelist var_formalParameterList_41214 = var_function_41128.getter_formalParameterTypeList (SOURCE_FILE ("gtl_expressions.galgas", 1351)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_formalParameterList_41214.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1352)).objectCompare (var_arguments_40877.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1352)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_arguments_40877.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1355)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_4 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_formalParameterList_41214.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1357)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            temp_4 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_5) {
            temp_4 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1353)), GALGAS_string ("this function is invoked with ").add_operation (var_arguments_40877.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1354)).getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1353)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1353)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1354)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1354)).add_operation (GALGAS_string (", but requires "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1355)).add_operation (var_formalParameterList_41214.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1356)).getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1356)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1356)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1356)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1356)), fixItArray6  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1353)) ;
          result_result.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        cEnumerator_typelist enumerator_41681 (var_formalParameterList_41214, kENUMERATION_UP) ;
        cEnumerator_gtlDataList enumerator_41708 (var_dataArguments_40921, kENUMERATION_UP) ;
        GALGAS_uint index_41649 ((uint32_t) 0) ;
        while (enumerator_41681.hasCurrentObject () && enumerator_41708.hasCurrentObject ()) {
          {
          routine_checkArgumentError (object->mProperty_functionName, enumerator_41681.current_mValue (HERE), enumerator_41708.current_data (HERE), index_41649, inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1361)) ;
          }
          enumerator_41681.gotoNextObject () ;
          enumerator_41708.gotoNextObject () ;
          index_41649.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1360)) ;
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (kIsEqual, var_currentErrorCount_40740.objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_expressions.galgas", 1363)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_object var_returnedValue_41880 = var_function_41128.getter_invoke (var_arguments_40877, object->mProperty_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1365)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1365)) ;
            result_result = function_validateReturnValue (object->mProperty_functionName, var_returnedValue_41880, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1366)) ;
          }
        }
        if (kBoolFalse == test_7) {
          result_result = GALGAS_gtlUnconstructed::constructor_new (object->mProperty_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1369)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1370))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1368)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_gtlFunction var_function_42188 = callExtensionGetter_getFunction ((const cPtr_library *) constinArgument_lib.ptr (), object->mProperty_functionName, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1375)) ;
    GALGAS_gtlDataList var_arguments_42249 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1376)) ;
    cEnumerator_gtlExpressionList enumerator_42294 (object->mProperty_functionArguments, kENUMERATION_UP) ;
    while (enumerator_42294.hasCurrentObject ()) {
      var_arguments_42249.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_42294.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1378))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1378)) ;
      enumerator_42294.gotoNextObject () ;
    }
    result_result = callExtensionGetter_call ((const cPtr_gtlFunction *) var_function_42188.ptr (), object->mProperty_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1380)), constinArgument_context, constinArgument_lib, var_arguments_42249, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1380)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlFunctionCallExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlFunctionCallExpression.mSlotID,
                             extensionGetter_gtlFunctionCallExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlFunctionCallExpression_eval (defineExtensionGetter_gtlFunctionCallExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExistsExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExistsExpression_eval (const cPtr_gtlExpression * inObject,
                                                                const GALGAS_gtlContext constinArgument_context,
                                                                const GALGAS_gtlData constinArgument_vars,
                                                                const GALGAS_library constinArgument_lib,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExistsExpression * object = (const cPtr_gtlExistsExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExistsExpression) ;
  result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1398)), extensionGetter_exists (object->mProperty_variable, constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1398))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1397)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExistsExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlExistsExpression.mSlotID,
                             extensionGetter_gtlExistsExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExistsExpression_eval (defineExtensionGetter_gtlExistsExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExistsDefaultExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExistsDefaultExpression_eval (const cPtr_gtlExpression * inObject,
                                                                       const GALGAS_gtlContext constinArgument_context,
                                                                       const GALGAS_gtlData constinArgument_vars,
                                                                       const GALGAS_library constinArgument_lib,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExistsDefaultExpression * object = (const cPtr_gtlExistsDefaultExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExistsDefaultExpression) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = extensionGetter_exists (object->mProperty_variable, constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1416)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = extensionGetter_get (object->mProperty_variable, constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1417)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_defaultValue.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1419)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExistsDefaultExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlExistsDefaultExpression.mSlotID,
                             extensionGetter_gtlExistsDefaultExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExistsDefaultExpression_eval (defineExtensionGetter_gtlExistsDefaultExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlTypeOfExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlTypeOfExpression_eval (const cPtr_gtlExpression * inObject,
                                                                const GALGAS_gtlContext constinArgument_context,
                                                                const GALGAS_gtlData constinArgument_vars,
                                                                const GALGAS_library constinArgument_lib,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlTypeOfExpression * object = (const cPtr_gtlTypeOfExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTypeOfExpression) ;
  GALGAS_gtlData var_variableValue_44145 = extensionGetter_get (object->mProperty_variable, constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1436)) ;
  result_result = GALGAS_gtlType::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1437)), var_variableValue_44145.getter_dynamicType (SOURCE_FILE ("gtl_expressions.galgas", 1437))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1437)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlTypeOfExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlTypeOfExpression.mSlotID,
                             extensionGetter_gtlTypeOfExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlTypeOfExpression_eval (defineExtensionGetter_gtlTypeOfExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMapOfStructExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMapOfStructExpression_eval (const cPtr_gtlExpression * inObject,
                                                                     const GALGAS_gtlContext constinArgument_context,
                                                                     const GALGAS_gtlData constinArgument_vars,
                                                                     const GALGAS_library constinArgument_lib,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMapOfStructExpression * object = (const cPtr_gtlMapOfStructExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMapOfStructExpression) ;
  GALGAS_gtlData var_expressionValue_44737 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_expression.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1453)) ;
  if (var_expressionValue_44737.isValid ()) {
    if (var_expressionValue_44737.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
      GALGAS_gtlStruct cast_44843_expressionValueStruct ((cPtr_gtlStruct *) var_expressionValue_44737.ptr ()) ;
      result_result = GALGAS_gtlMap::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1458)), cast_44843_expressionValueStruct.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1459))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1456)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct expected"), fixItArray0  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1462)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMapOfStructExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMapOfStructExpression.mSlotID,
                             extensionGetter_gtlMapOfStructExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMapOfStructExpression_eval (defineExtensionGetter_gtlMapOfStructExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMapOfListExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMapOfListExpression_eval (const cPtr_gtlExpression * inObject,
                                                                   const GALGAS_gtlContext constinArgument_context,
                                                                   const GALGAS_gtlData constinArgument_vars,
                                                                   const GALGAS_library constinArgument_lib,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMapOfListExpression * object = (const cPtr_gtlMapOfListExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMapOfListExpression) ;
  GALGAS_gtlData var_expressionValue_45483 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_expression.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1479)) ;
  if (var_expressionValue_45483.isValid ()) {
    if (var_expressionValue_45483.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_45585_expressionValueList ((cPtr_gtlList *) var_expressionValue_45483.ptr ()) ;
      GALGAS_gtlVarMap var_resultMap_45611 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 1482)) ;
      cEnumerator_list enumerator_45669 (cast_45585_expressionValueList.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1483)), kENUMERATION_UP) ;
      GALGAS_uint index_45631 ((uint32_t) 0) ;
      while (enumerator_45669.hasCurrentObject ()) {
        if (enumerator_45669.current_value (HERE).isValid ()) {
          if (enumerator_45669.current_value (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
            GALGAS_gtlStruct cast_45732_itemStruct ((cPtr_gtlStruct *) enumerator_45669.current_value (HERE).ptr ()) ;
            enumGalgasBool test_0 = kBoolTrue ;
            if (kBoolTrue == test_0) {
              test_0 = cast_45732_itemStruct.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1486)).getter_hasKey (object->mProperty_key.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1486)) COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1486)).boolEnum () ;
              if (kBoolTrue == test_0) {
                GALGAS_gtlData var_keyValue_45849 ;
                cast_45732_itemStruct.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1487)).method_get (object->mProperty_key, var_keyValue_45849, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1487)) ;
                {
                var_resultMap_45611.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) var_keyValue_45849.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1489)), enumerator_45669.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1488)) ;
                }
              }
            }
            if (kBoolFalse == test_0) {
              TC_Array <C_FixItDescription> fixItArray1 ;
              inCompiler->emitSemanticError (var_expressionValue_45483.getter_where (SOURCE_FILE ("gtl_expressions.galgas", 1493)), GALGAS_string ("item at index ").add_operation (index_45631.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1493)).add_operation (GALGAS_string (" does not have field named "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1493)).add_operation (object->mProperty_key.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1494)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1494)), fixItArray1  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1493)) ;
            }
          }else{
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (var_expressionValue_45483.getter_where (SOURCE_FILE ("gtl_expressions.galgas", 1497)), GALGAS_string ("list of struct expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1497)) ;
          }
        }
        enumerator_45669.gotoNextObject () ;
        index_45631.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1483)) ;
      }
      result_result = GALGAS_gtlMap::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1500)), var_resultMap_45611  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1500)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_expressionValue_45483.getter_where (SOURCE_FILE ("gtl_expressions.galgas", 1502)), GALGAS_string ("list expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1502)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMapOfListExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMapOfListExpression.mSlotID,
                             extensionGetter_gtlMapOfListExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMapOfListExpression_eval (defineExtensionGetter_gtlMapOfListExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlListOfExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlListOfExpression_eval (const cPtr_gtlExpression * inObject,
                                                                const GALGAS_gtlContext constinArgument_context,
                                                                const GALGAS_gtlData constinArgument_vars,
                                                                const GALGAS_library constinArgument_lib,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlListOfExpression * object = (const cPtr_gtlListOfExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlListOfExpression) ;
  GALGAS_gtlData var_expressionValue_46768 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_expression.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1519)) ;
  if (var_expressionValue_46768.isValid ()) {
    if (var_expressionValue_46768.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
      GALGAS_gtlMap cast_46868_expressionValueMap ((cPtr_gtlMap *) var_expressionValue_46768.ptr ()) ;
      GALGAS_list var_resultList_46890 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1522)) ;
      cEnumerator_gtlVarMap enumerator_46952 (cast_46868_expressionValueMap.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1523)), kENUMERATION_UP) ;
      while (enumerator_46952.hasCurrentObject ()) {
        var_resultList_46890.addAssign_operation (enumerator_46952.current_value (HERE)  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1524)) ;
        enumerator_46952.gotoNextObject () ;
      }
      result_result = GALGAS_gtlList::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1526)), var_resultList_46890  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1526)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map expected"), fixItArray0  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1528)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlListOfExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlListOfExpression.mSlotID,
                             extensionGetter_gtlListOfExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlListOfExpression_eval (defineExtensionGetter_gtlListOfExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLiteralStructExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlLiteralStructExpression_eval (const cPtr_gtlExpression * inObject,
                                                                       const GALGAS_gtlContext constinArgument_context,
                                                                       const GALGAS_gtlData constinArgument_vars,
                                                                       const GALGAS_library constinArgument_lib,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLiteralStructExpression * object = (const cPtr_gtlLiteralStructExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralStructExpression) ;
  GALGAS_gtlVarMap var_resultStruct_47556 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 1545)) ;
  cEnumerator_gtlExpressionMap enumerator_47594 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_47594.hasCurrentObject ()) {
    {
    var_resultStruct_47556.setter_put (enumerator_47594.current_lkey (HERE), callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_47594.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1547)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1547)) ;
    }
    enumerator_47594.gotoNextObject () ;
  }
  result_result = GALGAS_gtlStruct::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1549)), var_resultStruct_47556  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1549)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLiteralStructExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLiteralStructExpression.mSlotID,
                             extensionGetter_gtlLiteralStructExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLiteralStructExpression_eval (defineExtensionGetter_gtlLiteralStructExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLiteralMapExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlLiteralMapExpression_eval (const cPtr_gtlExpression * inObject,
                                                                    const GALGAS_gtlContext constinArgument_context,
                                                                    const GALGAS_gtlData constinArgument_vars,
                                                                    const GALGAS_library constinArgument_lib,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLiteralMapExpression * object = (const cPtr_gtlLiteralMapExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralMapExpression) ;
  GALGAS_gtlVarMap var_resultStruct_48171 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 1565)) ;
  cEnumerator_gtlExpressionMap enumerator_48209 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_48209.hasCurrentObject ()) {
    {
    var_resultStruct_48171.setter_put (enumerator_48209.current_lkey (HERE), callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_48209.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1567)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1567)) ;
    }
    enumerator_48209.gotoNextObject () ;
  }
  result_result = GALGAS_gtlMap::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1569)), var_resultStruct_48171  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1569)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLiteralMapExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLiteralMapExpression.mSlotID,
                             extensionGetter_gtlLiteralMapExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLiteralMapExpression_eval (defineExtensionGetter_gtlLiteralMapExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLiteralListExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlLiteralListExpression_eval (const cPtr_gtlExpression * inObject,
                                                                     const GALGAS_gtlContext constinArgument_context,
                                                                     const GALGAS_gtlData constinArgument_vars,
                                                                     const GALGAS_library constinArgument_lib,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLiteralListExpression * object = (const cPtr_gtlLiteralListExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralListExpression) ;
  GALGAS_list var_resultList_48780 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1585)) ;
  cEnumerator_gtlExpressionList enumerator_48815 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_48815.hasCurrentObject ()) {
    var_resultList_48780.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_48815.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1587))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1587)) ;
    enumerator_48815.gotoNextObject () ;
  }
  result_result = GALGAS_gtlList::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1589)), var_resultList_48780  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1589)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLiteralListExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLiteralListExpression.mSlotID,
                             extensionGetter_gtlLiteralListExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLiteralListExpression_eval (defineExtensionGetter_gtlLiteralListExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLiteralSetExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlLiteralSetExpression_eval (const cPtr_gtlExpression * inObject,
                                                                    const GALGAS_gtlContext constinArgument_context,
                                                                    const GALGAS_gtlData constinArgument_vars,
                                                                    const GALGAS_library constinArgument_lib,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLiteralSetExpression * object = (const cPtr_gtlLiteralSetExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralSetExpression) ;
  GALGAS_lstringset var_resultSet_49375 = GALGAS_lstringset::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 1605)) ;
  cEnumerator_gtlExpressionList enumerator_49409 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_49409.hasCurrentObject ()) {
    GALGAS_lstring var_itemValue_49435 = callExtensionGetter_lstring ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_49409.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1607)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1607)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_resultSet_49375.getter_hasKey (var_itemValue_49435.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1608)) COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1608)).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        var_resultSet_49375.setter_del (var_itemValue_49435, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1609)) ;
        }
      }
    }
    {
    var_resultSet_49375.setter_put (var_itemValue_49435, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1611)) ;
    }
    enumerator_49409.gotoNextObject () ;
  }
  result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1613)), var_resultSet_49375  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1613)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLiteralSetExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLiteralSetExpression.mSlotID,
                             extensionGetter_gtlLiteralSetExpression_eval) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLiteralSetExpression_eval (defineExtensionGetter_gtlLiteralSetExpression_eval, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'signature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_signature (GALGAS_location inArgument_loc,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_gtl_5F_options_debug.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_signatureString_789 = inArgument_loc.getter_file (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 33)).getter_lastPathComponent (SOURCE_FILE ("gtl_debugger.galgas", 33)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 33)).add_operation (inArgument_loc.getter_line (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 35)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 34)) ;
      result_result = var_signatureString_789.getter_md_35_ (SOURCE_FILE ("gtl_debugger.galgas", 36)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string::makeEmptyString () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_signature [2] = {
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_signature (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_signature (operand0,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_signature ("signature",
                                                           functionWithGenericHeader_signature,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_signature) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'bold'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_bold (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_bold ; // Returned variable
  result_bold = GALGAS_string ("\x1B""[1m") ;
//---
  return result_bold ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_bold = false ;
static GALGAS_string gOnceFunctionResult_bold ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_bold (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_bold) {
    gOnceFunctionResult_bold = onceFunction_bold (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_bold = true ;
  }
  return gOnceFunctionResult_bold ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_bold (void) {
  gOnceFunctionResult_bold.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_bold (NULL,
                                                  releaseOnceFunctionResult_bold) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_bold [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_bold (C_Compiler * inCompiler,
                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                     const GALGAS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  return function_bold (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_bold ("bold",
                                                      functionWithGenericHeader_bold,
                                                      & kTypeDescriptor_GALGAS_string,
                                                      0,
                                                      functionArgs_bold) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'underline'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_underline (C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_underline ; // Returned variable
  result_underline = GALGAS_string ("\x1B""[4m") ;
//---
  return result_underline ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_underline = false ;
static GALGAS_string gOnceFunctionResult_underline ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_underline (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_underline) {
    gOnceFunctionResult_underline = onceFunction_underline (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_underline = true ;
  }
  return gOnceFunctionResult_underline ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_underline (void) {
  gOnceFunctionResult_underline.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_underline (NULL,
                                                       releaseOnceFunctionResult_underline) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_underline [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_underline (C_Compiler * inCompiler,
                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  return function_underline (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_underline ("underline",
                                                           functionWithGenericHeader_underline,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           0,
                                                           functionArgs_underline) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'blink'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_blink (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_blink ; // Returned variable
  result_blink = GALGAS_string ("\x1B""[5m") ;
//---
  return result_blink ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_blink = false ;
static GALGAS_string gOnceFunctionResult_blink ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_blink (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_blink) {
    gOnceFunctionResult_blink = onceFunction_blink (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_blink = true ;
  }
  return gOnceFunctionResult_blink ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_blink (void) {
  gOnceFunctionResult_blink.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_blink (NULL,
                                                   releaseOnceFunctionResult_blink) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_blink [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_blink (C_Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_blink (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_blink ("blink",
                                                       functionWithGenericHeader_blink,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       0,
                                                       functionArgs_blink) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'black'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_black (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_black ; // Returned variable
  result_black = GALGAS_string ("\x1B""[90m") ;
//---
  return result_black ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_black = false ;
static GALGAS_string gOnceFunctionResult_black ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_black (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_black) {
    gOnceFunctionResult_black = onceFunction_black (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_black = true ;
  }
  return gOnceFunctionResult_black ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_black (void) {
  gOnceFunctionResult_black.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_black (NULL,
                                                   releaseOnceFunctionResult_black) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_black [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_black (C_Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_black (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_black ("black",
                                                       functionWithGenericHeader_black,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       0,
                                                       functionArgs_black) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'red'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_red (C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_red ; // Returned variable
  result_red = GALGAS_string ("\x1B""[91m") ;
//---
  return result_red ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_red = false ;
static GALGAS_string gOnceFunctionResult_red ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_red (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_red) {
    gOnceFunctionResult_red = onceFunction_red (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_red = true ;
  }
  return gOnceFunctionResult_red ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_red (void) {
  gOnceFunctionResult_red.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_red (NULL,
                                                 releaseOnceFunctionResult_red) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_red [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_red (C_Compiler * inCompiler,
                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                    const GALGAS_location & /* inErrorLocation */
                                                    COMMA_LOCATION_ARGS) {
  return function_red (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_red ("red",
                                                     functionWithGenericHeader_red,
                                                     & kTypeDescriptor_GALGAS_string,
                                                     0,
                                                     functionArgs_red) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'green'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_green (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_green ; // Returned variable
  result_green = GALGAS_string ("\x1B""[92m") ;
//---
  return result_green ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_green = false ;
static GALGAS_string gOnceFunctionResult_green ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_green (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_green) {
    gOnceFunctionResult_green = onceFunction_green (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_green = true ;
  }
  return gOnceFunctionResult_green ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_green (void) {
  gOnceFunctionResult_green.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_green (NULL,
                                                   releaseOnceFunctionResult_green) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_green [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_green (C_Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_green (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_green ("green",
                                                       functionWithGenericHeader_green,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       0,
                                                       functionArgs_green) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'yellow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_yellow (C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_yellow ; // Returned variable
  result_yellow = GALGAS_string ("\x1B""[93m") ;
//---
  return result_yellow ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_yellow = false ;
static GALGAS_string gOnceFunctionResult_yellow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_yellow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_yellow) {
    gOnceFunctionResult_yellow = onceFunction_yellow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_yellow = true ;
  }
  return gOnceFunctionResult_yellow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_yellow (void) {
  gOnceFunctionResult_yellow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_yellow (NULL,
                                                    releaseOnceFunctionResult_yellow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_yellow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_yellow (C_Compiler * inCompiler,
                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                       const GALGAS_location & /* inErrorLocation */
                                                       COMMA_LOCATION_ARGS) {
  return function_yellow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_yellow ("yellow",
                                                        functionWithGenericHeader_yellow,
                                                        & kTypeDescriptor_GALGAS_string,
                                                        0,
                                                        functionArgs_yellow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'blue'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_blue (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_blue ; // Returned variable
  result_blue = GALGAS_string ("\x1B""[94m") ;
//---
  return result_blue ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_blue = false ;
static GALGAS_string gOnceFunctionResult_blue ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_blue (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_blue) {
    gOnceFunctionResult_blue = onceFunction_blue (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_blue = true ;
  }
  return gOnceFunctionResult_blue ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_blue (void) {
  gOnceFunctionResult_blue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_blue (NULL,
                                                  releaseOnceFunctionResult_blue) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_blue [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_blue (C_Compiler * inCompiler,
                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                     const GALGAS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  return function_blue (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_blue ("blue",
                                                      functionWithGenericHeader_blue,
                                                      & kTypeDescriptor_GALGAS_string,
                                                      0,
                                                      functionArgs_blue) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'magenta'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_magenta (C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_magenta ; // Returned variable
  result_magenta = GALGAS_string ("\x1B""[95m") ;
//---
  return result_magenta ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_magenta = false ;
static GALGAS_string gOnceFunctionResult_magenta ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_magenta (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_magenta) {
    gOnceFunctionResult_magenta = onceFunction_magenta (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_magenta = true ;
  }
  return gOnceFunctionResult_magenta ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_magenta (void) {
  gOnceFunctionResult_magenta.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_magenta (NULL,
                                                     releaseOnceFunctionResult_magenta) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_magenta [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_magenta (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_magenta (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_magenta ("magenta",
                                                         functionWithGenericHeader_magenta,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_magenta) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'cyan'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_cyan (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_cyan ; // Returned variable
  result_cyan = GALGAS_string ("\x1B""[96m") ;
//---
  return result_cyan ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_cyan = false ;
static GALGAS_string gOnceFunctionResult_cyan ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_cyan (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_cyan) {
    gOnceFunctionResult_cyan = onceFunction_cyan (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_cyan = true ;
  }
  return gOnceFunctionResult_cyan ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_cyan (void) {
  gOnceFunctionResult_cyan.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_cyan (NULL,
                                                  releaseOnceFunctionResult_cyan) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_cyan [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_cyan (C_Compiler * inCompiler,
                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                     const GALGAS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  return function_cyan (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_cyan ("cyan",
                                                      functionWithGenericHeader_cyan,
                                                      & kTypeDescriptor_GALGAS_string,
                                                      0,
                                                      functionArgs_cyan) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'darkred'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_darkred (C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_red ; // Returned variable
  result_red = GALGAS_string ("\x1B""[31m") ;
//---
  return result_red ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_darkred = false ;
static GALGAS_string gOnceFunctionResult_darkred ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_darkred (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkred) {
    gOnceFunctionResult_darkred = onceFunction_darkred (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkred = true ;
  }
  return gOnceFunctionResult_darkred ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_darkred (void) {
  gOnceFunctionResult_darkred.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_darkred (NULL,
                                                     releaseOnceFunctionResult_darkred) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_darkred [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_darkred (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_darkred (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_darkred ("darkred",
                                                         functionWithGenericHeader_darkred,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_darkred) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'darkgreen'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_darkgreen (C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_green ; // Returned variable
  result_green = GALGAS_string ("\x1B""[32m") ;
//---
  return result_green ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_darkgreen = false ;
static GALGAS_string gOnceFunctionResult_darkgreen ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_darkgreen (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkgreen) {
    gOnceFunctionResult_darkgreen = onceFunction_darkgreen (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkgreen = true ;
  }
  return gOnceFunctionResult_darkgreen ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_darkgreen (void) {
  gOnceFunctionResult_darkgreen.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_darkgreen (NULL,
                                                       releaseOnceFunctionResult_darkgreen) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_darkgreen [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_darkgreen (C_Compiler * inCompiler,
                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  return function_darkgreen (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_darkgreen ("darkgreen",
                                                           functionWithGenericHeader_darkgreen,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           0,
                                                           functionArgs_darkgreen) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'darkyellow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_darkyellow (C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_yellow ; // Returned variable
  result_yellow = GALGAS_string ("\x1B""[33m") ;
//---
  return result_yellow ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_darkyellow = false ;
static GALGAS_string gOnceFunctionResult_darkyellow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_darkyellow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkyellow) {
    gOnceFunctionResult_darkyellow = onceFunction_darkyellow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkyellow = true ;
  }
  return gOnceFunctionResult_darkyellow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_darkyellow (void) {
  gOnceFunctionResult_darkyellow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_darkyellow (NULL,
                                                        releaseOnceFunctionResult_darkyellow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_darkyellow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_darkyellow (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_darkyellow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_darkyellow ("darkyellow",
                                                            functionWithGenericHeader_darkyellow,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_darkyellow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'darkblue'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_darkblue (C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_blue ; // Returned variable
  result_blue = GALGAS_string ("\x1B""[34m") ;
//---
  return result_blue ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_darkblue = false ;
static GALGAS_string gOnceFunctionResult_darkblue ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_darkblue (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkblue) {
    gOnceFunctionResult_darkblue = onceFunction_darkblue (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkblue = true ;
  }
  return gOnceFunctionResult_darkblue ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_darkblue (void) {
  gOnceFunctionResult_darkblue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_darkblue (NULL,
                                                      releaseOnceFunctionResult_darkblue) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_darkblue [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_darkblue (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_darkblue (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_darkblue ("darkblue",
                                                          functionWithGenericHeader_darkblue,
                                                          & kTypeDescriptor_GALGAS_string,
                                                          0,
                                                          functionArgs_darkblue) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'darkmagenta'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_darkmagenta (C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_magenta ; // Returned variable
  result_magenta = GALGAS_string ("\x1B""[35m") ;
//---
  return result_magenta ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_darkmagenta = false ;
static GALGAS_string gOnceFunctionResult_darkmagenta ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_darkmagenta (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkmagenta) {
    gOnceFunctionResult_darkmagenta = onceFunction_darkmagenta (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkmagenta = true ;
  }
  return gOnceFunctionResult_darkmagenta ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_darkmagenta (void) {
  gOnceFunctionResult_darkmagenta.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_darkmagenta (NULL,
                                                         releaseOnceFunctionResult_darkmagenta) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_darkmagenta [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_darkmagenta (C_Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GALGAS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_darkmagenta (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_darkmagenta ("darkmagenta",
                                                             functionWithGenericHeader_darkmagenta,
                                                             & kTypeDescriptor_GALGAS_string,
                                                             0,
                                                             functionArgs_darkmagenta) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'darkcyan'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_darkcyan (C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_cyan ; // Returned variable
  result_cyan = GALGAS_string ("\x1B""[36m") ;
//---
  return result_cyan ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_darkcyan = false ;
static GALGAS_string gOnceFunctionResult_darkcyan ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_darkcyan (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkcyan) {
    gOnceFunctionResult_darkcyan = onceFunction_darkcyan (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkcyan = true ;
  }
  return gOnceFunctionResult_darkcyan ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_darkcyan (void) {
  gOnceFunctionResult_darkcyan.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_darkcyan (NULL,
                                                      releaseOnceFunctionResult_darkcyan) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_darkcyan [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_darkcyan (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_darkcyan (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_darkcyan ("darkcyan",
                                                          functionWithGenericHeader_darkcyan,
                                                          & kTypeDescriptor_GALGAS_string,
                                                          0,
                                                          functionArgs_darkcyan) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'white'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_white (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_white ; // Returned variable
  result_white = GALGAS_string ("\x1B""[97m") ;
//---
  return result_white ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_white = false ;
static GALGAS_string gOnceFunctionResult_white ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_white (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_white) {
    gOnceFunctionResult_white = onceFunction_white (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_white = true ;
  }
  return gOnceFunctionResult_white ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_white (void) {
  gOnceFunctionResult_white.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_white (NULL,
                                                   releaseOnceFunctionResult_white) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_white [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_white (C_Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_white (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_white ("white",
                                                       functionWithGenericHeader_white,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       0,
                                                       functionArgs_white) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'endc'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_endc (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_endc ; // Returned variable
  result_endc = GALGAS_string ("\x1B""[0m") ;
//---
  return result_endc ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_endc = false ;
static GALGAS_string gOnceFunctionResult_endc ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_endc (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_endc) {
    gOnceFunctionResult_endc = onceFunction_endc (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_endc = true ;
  }
  return gOnceFunctionResult_endc ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_endc (void) {
  gOnceFunctionResult_endc.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_endc (NULL,
                                                  releaseOnceFunctionResult_endc) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_endc [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_endc (C_Compiler * inCompiler,
                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                     const GALGAS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  return function_endc (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_endc ("endc",
                                                      functionWithGenericHeader_endc,
                                                      & kTypeDescriptor_GALGAS_string,
                                                      0,
                                                      functionArgs_endc) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'defaultDebugSettings'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_debuggerContext function_defaultDebugSettings (C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_debuggerContext result_debugSettings ; // Returned variable
  result_debugSettings = GALGAS_debuggerContext::constructor_new (GALGAS_bool (gOption_gtl_5F_options_debug.getter_value ()), GALGAS_bool (gOption_gtl_5F_options_debug.getter_value ()), GALGAS_bool (false), function_red (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 404)), GALGAS_string::makeEmptyString (), function_blue (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 406)), function_bold (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 407)), function_darkgreen (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 408)), GALGAS_string::makeEmptyString (), function_darkyellow (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 410)), function_bold (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 411)), GALGAS_bool (false), GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 413)), GALGAS_gtlBreakpointList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 414)), GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 415)), GALGAS_uint ((uint32_t) 0U), GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 417)), GALGAS_gtlInstructionListContextStack::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 418)), GALGAS_debugCommandInput::constructor_new (GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 419))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 419))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 400)) ;
//---
  return result_debugSettings ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_defaultDebugSettings [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_defaultDebugSettings (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_defaultDebugSettings (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_defaultDebugSettings ("defaultDebugSettings",
                                                                      functionWithGenericHeader_defaultDebugSettings,
                                                                      & kTypeDescriptor_GALGAS_debuggerContext,
                                                                      0,
                                                                      functionArgs_defaultDebugSettings) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemField stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlVarItemField_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                                           const GALGAS_string constinArgument_concatString,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_result = constinArgument_concatString.add_operation (object->mProperty_field.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 669)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemField_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                             extensionGetter_gtlVarItemField_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemField_stringRepresentation (defineExtensionGetter_gtlVarItemField_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemSubCollection stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlVarItemSubCollection_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                                                   const GALGAS_string /* constinArgument_concatString */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  result_result = GALGAS_string ("[").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 677)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 677)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemSubCollection_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                             extensionGetter_gtlVarItemSubCollection_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_stringRepresentation (defineExtensionGetter_gtlVarItemSubCollection_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarItemCollection stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlVarItemCollection_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                                                const GALGAS_string constinArgument_concatString,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  result_result = constinArgument_concatString.add_operation (object->mProperty_field.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 685)).add_operation (GALGAS_char (TO_UNICODE (91)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 685)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 685)).add_operation (GALGAS_char (TO_UNICODE (93)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 685)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarItemCollection_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                             extensionGetter_gtlVarItemCollection_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarItemCollection_stringRepresentation (defineExtensionGetter_gtlVarItemCollection_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlEmptyExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlEmptyExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEmptyExpression * object = (const cPtr_gtlEmptyExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEmptyExpression) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("an empty expression does not have string representation"), fixItArray0  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 695)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlEmptyExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlEmptyExpression.mSlotID,
                                             extensionGetter_gtlEmptyExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlEmptyExpression_stringRepresentation (defineExtensionGetter_gtlEmptyExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlAddExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlAddExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlAddExpression * object = (const cPtr_gtlAddExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAddExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 702)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 702)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 702)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlAddExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlAddExpression.mSlotID,
                                             extensionGetter_gtlAddExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlAddExpression_stringRepresentation (defineExtensionGetter_gtlAddExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlAndExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlAndExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlAndExpression * object = (const cPtr_gtlAndExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAndExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 709)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 709)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 709)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlAndExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlAndExpression.mSlotID,
                                             extensionGetter_gtlAndExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlAndExpression_stringRepresentation (defineExtensionGetter_gtlAndExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlDivideExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlDivideExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlDivideExpression * object = (const cPtr_gtlDivideExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDivideExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 716)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 716)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 716)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlDivideExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlDivideExpression.mSlotID,
                                             extensionGetter_gtlDivideExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlDivideExpression_stringRepresentation (defineExtensionGetter_gtlDivideExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlEqualExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlEqualExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEqualExpression * object = (const cPtr_gtlEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEqualExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 723)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 723)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 723)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlEqualExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlEqualExpression.mSlotID,
                                             extensionGetter_gtlEqualExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlEqualExpression_stringRepresentation (defineExtensionGetter_gtlEqualExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlGreaterOrEqualExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlGreaterOrEqualExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlGreaterOrEqualExpression * object = (const cPtr_gtlGreaterOrEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGreaterOrEqualExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 730)).add_operation (GALGAS_string (" >= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 730)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 730)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlGreaterOrEqualExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlGreaterOrEqualExpression.mSlotID,
                                             extensionGetter_gtlGreaterOrEqualExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlGreaterOrEqualExpression_stringRepresentation (defineExtensionGetter_gtlGreaterOrEqualExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlGreaterThanExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlGreaterThanExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlGreaterThanExpression * object = (const cPtr_gtlGreaterThanExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGreaterThanExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 737)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 737)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 737)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlGreaterThanExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlGreaterThanExpression.mSlotID,
                                             extensionGetter_gtlGreaterThanExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlGreaterThanExpression_stringRepresentation (defineExtensionGetter_gtlGreaterThanExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLowerOrEqualExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlLowerOrEqualExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLowerOrEqualExpression * object = (const cPtr_gtlLowerOrEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLowerOrEqualExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 744)).add_operation (GALGAS_string (" <= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 744)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 744)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLowerOrEqualExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLowerOrEqualExpression.mSlotID,
                                             extensionGetter_gtlLowerOrEqualExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLowerOrEqualExpression_stringRepresentation (defineExtensionGetter_gtlLowerOrEqualExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLowerThanExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlLowerThanExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLowerThanExpression * object = (const cPtr_gtlLowerThanExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLowerThanExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 751)).add_operation (GALGAS_string (" < "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 751)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 751)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLowerThanExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLowerThanExpression.mSlotID,
                                             extensionGetter_gtlLowerThanExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLowerThanExpression_stringRepresentation (defineExtensionGetter_gtlLowerThanExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlModulusExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlModulusExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlModulusExpression * object = (const cPtr_gtlModulusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlModulusExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 758)).add_operation (GALGAS_string (" mod "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 758)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 758)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlModulusExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlModulusExpression.mSlotID,
                                             extensionGetter_gtlModulusExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlModulusExpression_stringRepresentation (defineExtensionGetter_gtlModulusExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMultiplyExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlMultiplyExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMultiplyExpression * object = (const cPtr_gtlMultiplyExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMultiplyExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 765)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 765)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 765)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMultiplyExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlMultiplyExpression.mSlotID,
                                             extensionGetter_gtlMultiplyExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMultiplyExpression_stringRepresentation (defineExtensionGetter_gtlMultiplyExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlNotEqualExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlNotEqualExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlNotEqualExpression * object = (const cPtr_gtlNotEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotEqualExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 772)).add_operation (GALGAS_string (" != "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 772)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 772)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlNotEqualExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlNotEqualExpression.mSlotID,
                                             extensionGetter_gtlNotEqualExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlNotEqualExpression_stringRepresentation (defineExtensionGetter_gtlNotEqualExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlOrExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlOrExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlOrExpression * object = (const cPtr_gtlOrExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlOrExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 779)).add_operation (GALGAS_string (" | "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 779)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 779)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 779)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlOrExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlOrExpression.mSlotID,
                                             extensionGetter_gtlOrExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlOrExpression_stringRepresentation (defineExtensionGetter_gtlOrExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlShiftLeftExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlShiftLeftExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlShiftLeftExpression * object = (const cPtr_gtlShiftLeftExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlShiftLeftExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 786)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 786)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 786)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 786)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlShiftLeftExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlShiftLeftExpression.mSlotID,
                                             extensionGetter_gtlShiftLeftExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlShiftLeftExpression_stringRepresentation (defineExtensionGetter_gtlShiftLeftExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlShiftRightExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlShiftRightExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlShiftRightExpression * object = (const cPtr_gtlShiftRightExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlShiftRightExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 793)).add_operation (GALGAS_string (" >> "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 793)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 793)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlShiftRightExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlShiftRightExpression.mSlotID,
                                             extensionGetter_gtlShiftRightExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlShiftRightExpression_stringRepresentation (defineExtensionGetter_gtlShiftRightExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSubstractExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlSubstractExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSubstractExpression * object = (const cPtr_gtlSubstractExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSubstractExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 800)).add_operation (GALGAS_string (" - "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 800)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 800)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 800)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSubstractExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlSubstractExpression.mSlotID,
                                             extensionGetter_gtlSubstractExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSubstractExpression_stringRepresentation (defineExtensionGetter_gtlSubstractExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlXorExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlXorExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlXorExpression * object = (const cPtr_gtlXorExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlXorExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 807)).add_operation (GALGAS_string (" ^ "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 807)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 807)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlXorExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlXorExpression.mSlotID,
                                             extensionGetter_gtlXorExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlXorExpression_stringRepresentation (defineExtensionGetter_gtlXorExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExistsExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlExistsExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlExistsExpression * object = (const cPtr_gtlExistsExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExistsExpression) ;
  result_result = GALGAS_string ("exists ").add_operation (extensionGetter_stringRepresentation (object->mProperty_variable, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 814)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExistsExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlExistsExpression.mSlotID,
                                             extensionGetter_gtlExistsExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExistsExpression_stringRepresentation (defineExtensionGetter_gtlExistsExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExistsDefaultExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlExistsDefaultExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlExistsDefaultExpression * object = (const cPtr_gtlExistsDefaultExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExistsDefaultExpression) ;
  result_result = GALGAS_string ("exists ").add_operation (extensionGetter_stringRepresentation (object->mProperty_variable, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 822)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 821)).add_operation (GALGAS_string (" default ( "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 822)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_defaultValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 824)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 823)).add_operation (GALGAS_string (" )"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 824)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExistsDefaultExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlExistsDefaultExpression.mSlotID,
                                             extensionGetter_gtlExistsDefaultExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExistsDefaultExpression_stringRepresentation (defineExtensionGetter_gtlExistsDefaultExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlFunctionCallExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlFunctionCallExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlFunctionCallExpression * object = (const cPtr_gtlFunctionCallExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFunctionCallExpression) ;
  result_result = object->mProperty_functionName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 832)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 832)).add_operation (extensionGetter_stringRepresentation (object->mProperty_functionArguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 832)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 832)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlFunctionCallExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlFunctionCallExpression.mSlotID,
                                             extensionGetter_gtlFunctionCallExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlFunctionCallExpression_stringRepresentation (defineExtensionGetter_gtlFunctionCallExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlGetterCallExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlGetterCallExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlGetterCallExpression * object = (const cPtr_gtlGetterCallExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGetterCallExpression) ;
  result_result = GALGAS_string ("[").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_target.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 839)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 839)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 839)).add_operation (object->mProperty_getterName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 839)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 839)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_arguments.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 840)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = result_result.add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 841)).add_operation (extensionGetter_stringRepresentation (object->mProperty_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 841)) ;
    }
  }
  result_result = result_result.add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 843)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlGetterCallExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlGetterCallExpression.mSlotID,
                                             extensionGetter_gtlGetterCallExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlGetterCallExpression_stringRepresentation (defineExtensionGetter_gtlGetterCallExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlListOfExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlListOfExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlListOfExpression * object = (const cPtr_gtlListOfExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlListOfExpression) ;
  result_result = GALGAS_string ("listof ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_expression.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 850)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlListOfExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlListOfExpression.mSlotID,
                                             extensionGetter_gtlListOfExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlListOfExpression_stringRepresentation (defineExtensionGetter_gtlListOfExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLiteralListExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlLiteralListExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLiteralListExpression * object = (const cPtr_gtlLiteralListExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralListExpression) ;
  result_result = GALGAS_string ("@( ").add_operation (extensionGetter_stringRepresentation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 857)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 857)).add_operation (GALGAS_string (" )"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 857)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLiteralListExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLiteralListExpression.mSlotID,
                                             extensionGetter_gtlLiteralListExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLiteralListExpression_stringRepresentation (defineExtensionGetter_gtlLiteralListExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLiteralMapExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlLiteralMapExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLiteralMapExpression * object = (const cPtr_gtlLiteralMapExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralMapExpression) ;
  result_result = GALGAS_string ("@[ ").add_operation (extensionGetter_mapRepresentation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 864)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 864)).add_operation (GALGAS_string (" ]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 864)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLiteralMapExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLiteralMapExpression.mSlotID,
                                             extensionGetter_gtlLiteralMapExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLiteralMapExpression_stringRepresentation (defineExtensionGetter_gtlLiteralMapExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLiteralSetExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlLiteralSetExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLiteralSetExpression * object = (const cPtr_gtlLiteralSetExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralSetExpression) ;
  result_result = GALGAS_string ("@! ").add_operation (extensionGetter_stringRepresentation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 871)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 871)).add_operation (GALGAS_string (" !"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 871)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLiteralSetExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLiteralSetExpression.mSlotID,
                                             extensionGetter_gtlLiteralSetExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLiteralSetExpression_stringRepresentation (defineExtensionGetter_gtlLiteralSetExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlLiteralStructExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlLiteralStructExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLiteralStructExpression * object = (const cPtr_gtlLiteralStructExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralStructExpression) ;
  result_result = GALGAS_string ("@{ ").add_operation (extensionGetter_structRepresentation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 878)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 878)).add_operation (GALGAS_string (" }"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 878)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlLiteralStructExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLiteralStructExpression.mSlotID,
                                             extensionGetter_gtlLiteralStructExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlLiteralStructExpression_stringRepresentation (defineExtensionGetter_gtlLiteralStructExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMapOfStructExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlMapOfStructExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMapOfStructExpression * object = (const cPtr_gtlMapOfStructExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMapOfStructExpression) ;
  result_result = GALGAS_string ("mapof ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_expression.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 885)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 885)).add_operation (GALGAS_string (" end"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 885)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMapOfStructExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlMapOfStructExpression.mSlotID,
                                             extensionGetter_gtlMapOfStructExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMapOfStructExpression_stringRepresentation (defineExtensionGetter_gtlMapOfStructExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlTerminal stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlTerminal_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlTerminal * object = (const cPtr_gtlTerminal *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTerminal) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlData *) object->mProperty_value.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 892)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlTerminal_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlTerminal.mSlotID,
                                             extensionGetter_gtlTerminal_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlTerminal_stringRepresentation (defineExtensionGetter_gtlTerminal_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlTypeOfExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlTypeOfExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlTypeOfExpression * object = (const cPtr_gtlTypeOfExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTypeOfExpression) ;
  result_result = GALGAS_string ("typeof ").add_operation (extensionGetter_stringRepresentation (object->mProperty_variable, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 899)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlTypeOfExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlTypeOfExpression.mSlotID,
                                             extensionGetter_gtlTypeOfExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlTypeOfExpression_stringRepresentation (defineExtensionGetter_gtlTypeOfExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMinusExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlMinusExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMinusExpression * object = (const cPtr_gtlMinusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMinusExpression) ;
  result_result = GALGAS_string ("-").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_son.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 906)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 906)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMinusExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlMinusExpression.mSlotID,
                                             extensionGetter_gtlMinusExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMinusExpression_stringRepresentation (defineExtensionGetter_gtlMinusExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlNotExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlNotExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlNotExpression * object = (const cPtr_gtlNotExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotExpression) ;
  result_result = GALGAS_string ("not ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_son.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 913)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 913)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlNotExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlNotExpression.mSlotID,
                                             extensionGetter_gtlNotExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlNotExpression_stringRepresentation (defineExtensionGetter_gtlNotExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlParenthesizedExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlParenthesizedExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlParenthesizedExpression * object = (const cPtr_gtlParenthesizedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlParenthesizedExpression) ;
  result_result = GALGAS_string ("(").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_son.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 920)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 920)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 920)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlParenthesizedExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlParenthesizedExpression.mSlotID,
                                             extensionGetter_gtlParenthesizedExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlParenthesizedExpression_stringRepresentation (defineExtensionGetter_gtlParenthesizedExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlPlusExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlPlusExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlPlusExpression * object = (const cPtr_gtlPlusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPlusExpression) ;
  result_result = GALGAS_string ("+").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_son.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 927)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlPlusExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlPlusExpression.mSlotID,
                                             extensionGetter_gtlPlusExpression_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlPlusExpression_stringRepresentation (defineExtensionGetter_gtlPlusExpression_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlVarRef stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlVarRef_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarRef * object = (const cPtr_gtlVarRef *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarRef) ;
  result_result = extensionGetter_stringRepresentation (object->mProperty_variableName, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 934)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlVarRef_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlVarRef.mSlotID,
                                             extensionGetter_gtlVarRef_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlVarRef_stringRepresentation (defineExtensionGetter_gtlVarRef_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlAllVarsRef stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlAllVarsRef_stringRepresentation (const cPtr_gtlExpression * /* inObject */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("__VARS__") ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlAllVarsRef_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlAllVarsRef.mSlotID,
                                             extensionGetter_gtlAllVarsRef_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlAllVarsRef_stringRepresentation (defineExtensionGetter_gtlAllVarsRef_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlBool_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const GALGAS_gtlBool temp_0 = object ;
  result_result = callExtensionGetter_string ((const cPtr_gtlBool *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 952)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                             extensionGetter_gtlBool_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_stringRepresentation (defineExtensionGetter_gtlBool_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlChar stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlChar_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const GALGAS_gtlChar temp_0 = object ;
  result_result = callExtensionGetter_string ((const cPtr_gtlChar *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 959)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlChar_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                             extensionGetter_gtlChar_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlChar_stringRepresentation (defineExtensionGetter_gtlChar_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlEnum stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlEnum_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const GALGAS_gtlEnum temp_0 = object ;
  result_result = GALGAS_string ("$").add_operation (callExtensionGetter_string ((const cPtr_gtlEnum *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 966)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 966)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlEnum_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                             extensionGetter_gtlEnum_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlEnum_stringRepresentation (defineExtensionGetter_gtlEnum_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlFloat stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlFloat_stringRepresentation (const cPtr_gtlData * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const GALGAS_gtlFloat temp_0 = object ;
  result_result = callExtensionGetter_string ((const cPtr_gtlFloat *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 973)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlFloat_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                             extensionGetter_gtlFloat_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlFloat_stringRepresentation (defineExtensionGetter_gtlFloat_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlInt stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlInt_stringRepresentation (const cPtr_gtlData * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const GALGAS_gtlInt temp_0 = object ;
  result_result = callExtensionGetter_string ((const cPtr_gtlInt *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 980)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlInt_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                             extensionGetter_gtlInt_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlInt_stringRepresentation (defineExtensionGetter_gtlInt_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlString_stringRepresentation (const cPtr_gtlData * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const GALGAS_gtlString temp_0 = object ;
  GALGAS_string var_literalString_30278 = callExtensionGetter_string ((const cPtr_gtlString *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 987)) ;
  var_literalString_30278 = var_literalString_30278.getter_stringByReplacingStringByString (GALGAS_string ("\n"), GALGAS_string ("\\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 988)) ;
  var_literalString_30278 = var_literalString_30278.getter_stringByReplacingStringByString (GALGAS_string ("\t"), GALGAS_string ("\\t"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 989)) ;
  var_literalString_30278 = var_literalString_30278.getter_stringByReplacingStringByString (GALGAS_string ("\f"), GALGAS_string ("\\f"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 990)) ;
  var_literalString_30278 = var_literalString_30278.getter_stringByReplacingStringByString (GALGAS_string ("\r"), GALGAS_string ("\\r"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 991)) ;
  var_literalString_30278 = var_literalString_30278.getter_stringByReplacingStringByString (GALGAS_string ("\v"), GALGAS_string ("\\v"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 992)) ;
  var_literalString_30278 = var_literalString_30278.getter_stringByReplacingStringByString (GALGAS_string ("\\"), GALGAS_string ("\\\\"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 993)) ;
  var_literalString_30278 = var_literalString_30278.getter_stringByReplacingStringByString (GALGAS_string ("\""), GALGAS_string ("\\\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 994)) ;
  result_result = GALGAS_string ("\"").add_operation (var_literalString_30278, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 995)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 995)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                             extensionGetter_gtlString_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_stringRepresentation (defineExtensionGetter_gtlString_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlUnconstructed stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlUnconstructed_stringRepresentation (const cPtr_gtlData * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("*UNCONSTRUCTED*") ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlUnconstructed_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                             extensionGetter_gtlUnconstructed_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlUnconstructed_stringRepresentation (defineExtensionGetter_gtlUnconstructed_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlType stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlType_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const GALGAS_gtlType temp_0 = object ;
  result_result = GALGAS_string ("@").add_operation (callExtensionGetter_string ((const cPtr_gtlType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1009)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1009)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlType_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                             extensionGetter_gtlType_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlType_stringRepresentation (defineExtensionGetter_gtlType_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlList_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  result_result = GALGAS_string ("@( ") ;
  cEnumerator_list enumerator_31459 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_31459.hasCurrentObject ()) {
    result_result = result_result.add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlData *) enumerator_31459.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1018)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1018)) ;
    if (enumerator_31459.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1020)) ;
    }
    enumerator_31459.gotoNextObject () ;
  }
  result_result = result_result.add_operation (GALGAS_string (" )"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1022)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                             extensionGetter_gtlList_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_stringRepresentation (defineExtensionGetter_gtlList_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlMap_stringRepresentation (const cPtr_gtlData * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  result_result = GALGAS_string ("@[ ") ;
  cEnumerator_gtlVarMap enumerator_31772 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_31772.hasCurrentObject ()) {
    result_result = result_result.add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1031)).add_operation (enumerator_31772.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1031)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1031)).add_operation (GALGAS_string ("\": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1031)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlData *) enumerator_31772.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1031)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1031)) ;
    if (enumerator_31772.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1033)) ;
    }
    enumerator_31772.gotoNextObject () ;
  }
  result_result = result_result.add_operation (GALGAS_string (" ]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1035)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                             extensionGetter_gtlMap_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_stringRepresentation (defineExtensionGetter_gtlMap_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlStruct_stringRepresentation (const cPtr_gtlData * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_result = GALGAS_string ("@{ ") ;
  cEnumerator_gtlVarMap enumerator_32112 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_32112.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_32112.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1044)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1044)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1044)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlData *) enumerator_32112.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1044)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1044)) ;
    if (enumerator_32112.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1046)) ;
    }
    enumerator_32112.gotoNextObject () ;
  }
  result_result = result_result.add_operation (GALGAS_string (" }"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1048)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                             extensionGetter_gtlStruct_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_stringRepresentation (defineExtensionGetter_gtlStruct_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlSet_stringRepresentation (const cPtr_gtlData * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  result_result = GALGAS_string ("@! ") ;
  cEnumerator_lstringset enumerator_32436 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_32436.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_32436.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1057)) ;
    if (enumerator_32436.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1059)) ;
    }
    enumerator_32436.gotoNextObject () ;
  }
  result_result = result_result.add_operation (GALGAS_string (" !"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1061)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                             extensionGetter_gtlSet_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_stringRepresentation (defineExtensionGetter_gtlSet_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlExpr_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  result_result = GALGAS_string ("@\? ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_value.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1068)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1068)).add_operation (GALGAS_string (" \?"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1068)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                             extensionGetter_gtlExpr_stringRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_stringRepresentation (defineExtensionGetter_gtlExpr_stringRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetUnconstructedInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetUnconstructedInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetUnconstructedInstruction * object = (const cPtr_gtlLetUnconstructedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetUnconstructedInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1167)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1167))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1167)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetUnconstructedInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction.mSlotID,
                                extensionMethod_gtlLetUnconstructedInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetUnconstructedInstruction_display (defineExtensionMethod_gtlLetUnconstructedInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetInstruction_display (const cPtr_gtlInstruction * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetInstruction * object = (const cPtr_gtlLetInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1174)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1173)).add_operation (GALGAS_string (" := "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1174)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1176)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1175))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1173)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetInstruction.mSlotID,
                                extensionMethod_gtlLetInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetInstruction_display (defineExtensionMethod_gtlLetInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetAddInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetAddInstruction_display (const cPtr_gtlInstruction * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetAddInstruction * object = (const cPtr_gtlLetAddInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetAddInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1183)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1182)).add_operation (GALGAS_string (" += "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1183)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1185)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1184))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1182)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetAddInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetAddInstruction.mSlotID,
                                extensionMethod_gtlLetAddInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetAddInstruction_display (defineExtensionMethod_gtlLetAddInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetSubstractInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetSubstractInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetSubstractInstruction * object = (const cPtr_gtlLetSubstractInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetSubstractInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1192)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1191)).add_operation (GALGAS_string (" -= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1192)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1193))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1191)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetSubstractInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetSubstractInstruction.mSlotID,
                                extensionMethod_gtlLetSubstractInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetSubstractInstruction_display (defineExtensionMethod_gtlLetSubstractInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetMultiplyInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetMultiplyInstruction_display (const cPtr_gtlInstruction * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetMultiplyInstruction * object = (const cPtr_gtlLetMultiplyInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetMultiplyInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1201)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1200)).add_operation (GALGAS_string (" *= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1201)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1203)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1202))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1200)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetMultiplyInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetMultiplyInstruction.mSlotID,
                                extensionMethod_gtlLetMultiplyInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetMultiplyInstruction_display (defineExtensionMethod_gtlLetMultiplyInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetDivideInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetDivideInstruction_display (const cPtr_gtlInstruction * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetDivideInstruction * object = (const cPtr_gtlLetDivideInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetDivideInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1210)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1209)).add_operation (GALGAS_string (" /= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1210)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1212)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1211))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1209)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetDivideInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetDivideInstruction.mSlotID,
                                extensionMethod_gtlLetDivideInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetDivideInstruction_display (defineExtensionMethod_gtlLetDivideInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetModuloInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetModuloInstruction_display (const cPtr_gtlInstruction * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetModuloInstruction * object = (const cPtr_gtlLetModuloInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetModuloInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1219)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1218)).add_operation (GALGAS_string (" mod= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1219)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1221)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1220))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1218)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetModuloInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetModuloInstruction.mSlotID,
                                extensionMethod_gtlLetModuloInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetModuloInstruction_display (defineExtensionMethod_gtlLetModuloInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetShiftLeftInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetShiftLeftInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetShiftLeftInstruction * object = (const cPtr_gtlLetShiftLeftInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetShiftLeftInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1228)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1227)).add_operation (GALGAS_string (" <<= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1228)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1230)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1229))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1227)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetShiftLeftInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetShiftLeftInstruction.mSlotID,
                                extensionMethod_gtlLetShiftLeftInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetShiftLeftInstruction_display (defineExtensionMethod_gtlLetShiftLeftInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetShiftRightInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetShiftRightInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetShiftRightInstruction * object = (const cPtr_gtlLetShiftRightInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetShiftRightInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1237)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1236)).add_operation (GALGAS_string (" >>= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1237)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1238))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1236)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetShiftRightInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetShiftRightInstruction.mSlotID,
                                extensionMethod_gtlLetShiftRightInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetShiftRightInstruction_display (defineExtensionMethod_gtlLetShiftRightInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetAndInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetAndInstruction_display (const cPtr_gtlInstruction * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetAndInstruction * object = (const cPtr_gtlLetAndInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetAndInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1246)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1245)).add_operation (GALGAS_string (" &= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1246)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1248)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1247))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1245)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetAndInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetAndInstruction.mSlotID,
                                extensionMethod_gtlLetAndInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetAndInstruction_display (defineExtensionMethod_gtlLetAndInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetOrInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetOrInstruction_display (const cPtr_gtlInstruction * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetOrInstruction * object = (const cPtr_gtlLetOrInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetOrInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1255)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1254)).add_operation (GALGAS_string (" |= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1255)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1257)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1256))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1254)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetOrInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetOrInstruction.mSlotID,
                                extensionMethod_gtlLetOrInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetOrInstruction_display (defineExtensionMethod_gtlLetOrInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetXorInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetXorInstruction_display (const cPtr_gtlInstruction * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetXorInstruction * object = (const cPtr_gtlLetXorInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetXorInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mProperty_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1264)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1263)).add_operation (GALGAS_string (" ^= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1264)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1266)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1265))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1263)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetXorInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetXorInstruction.mSlotID,
                                extensionMethod_gtlLetXorInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetXorInstruction_display (defineExtensionMethod_gtlLetXorInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLoopStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLoopStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLoopStatementInstruction * object = (const cPtr_gtlLoopStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLoopStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_upDown.objectCompare (GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1276)).getter_sint_36__34_ (SOURCE_FILE ("gtl_debugger.galgas", 1276)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string (" down") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("loop ").add_operation (object->mProperty_identifier.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1272)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1272)).add_operation (GALGAS_string (" from "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1273)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_start.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1275)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1274)).add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1275)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1276)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_stop.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1277)).add_operation (GALGAS_string (" step "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1278)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_step.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1280)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1279)).add_operation (GALGAS_string (" do"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1280))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1272)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLoopStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLoopStatementInstruction.mSlotID,
                                extensionMethod_gtlLoopStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLoopStatementInstruction_display (defineExtensionMethod_gtlLoopStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWarningStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWarningStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWarningStatementInstruction * object = (const cPtr_gtlWarningStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWarningStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_hereInstead.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("here") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = extensionGetter_stringRepresentation (object->mProperty_identifier, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1288)) ;
  }
  inCompiler->printMessage (GALGAS_string ("warning ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1287)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1288)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_warningMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1290)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1289))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1287)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWarningStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlWarningStatementInstruction.mSlotID,
                                extensionMethod_gtlWarningStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWarningStatementInstruction_display (defineExtensionMethod_gtlWarningStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlErrorStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlErrorStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlErrorStatementInstruction * object = (const cPtr_gtlErrorStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlErrorStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_hereInstead.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("here") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = extensionGetter_stringRepresentation (object->mProperty_identifier, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1297)) ;
  }
  inCompiler->printMessage (GALGAS_string ("error ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1296)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1297)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_errorMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1299)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1298))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1296)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlErrorStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlErrorStatementInstruction.mSlotID,
                                extensionMethod_gtlErrorStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlErrorStatementInstruction_display (defineExtensionMethod_gtlErrorStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDisplayStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDisplayStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDisplayStatementInstruction * object = (const cPtr_gtlDisplayStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDisplayStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("display ").add_operation (extensionGetter_stringRepresentation (object->mProperty_variablePath, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1305)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1305))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1305)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDisplayStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlDisplayStatementInstruction.mSlotID,
                                extensionMethod_gtlDisplayStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDisplayStatementInstruction_display (defineExtensionMethod_gtlDisplayStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlPrintStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlPrintStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlPrintStatementInstruction * object = (const cPtr_gtlPrintStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPrintStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_carriageReturn.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ln ") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string (" ") ;
  }
  inCompiler->printMessage (GALGAS_string ("print").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1311)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_messageToPrint.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1313)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1312))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1311)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlPrintStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlPrintStatementInstruction.mSlotID,
                                extensionMethod_gtlPrintStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlPrintStatementInstruction_display (defineExtensionMethod_gtlPrintStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlSetRandomSeedStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlSetRandomSeedStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSetRandomSeedStatementInstruction * object = (const cPtr_gtlSetRandomSeedStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSetRandomSeedStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_expressionProvided.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string (" ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_seedNumber.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1320)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1320)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("seed").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1319))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1319)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlSetRandomSeedStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlSetRandomSeedStatementInstruction.mSlotID,
                                extensionMethod_gtlSetRandomSeedStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlSetRandomSeedStatementInstruction_display (defineExtensionMethod_gtlSetRandomSeedStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlTemplateStringInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlTemplateStringInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateStringInstruction * object = (const cPtr_gtlTemplateStringInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateStringInstruction) ;
  inCompiler->printMessage (GALGAS_string ("%").add_operation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1326)).add_operation (GALGAS_string ("%"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1326))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1326)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlTemplateStringInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlTemplateStringInstruction.mSlotID,
                                extensionMethod_gtlTemplateStringInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlTemplateStringInstruction_display (defineExtensionMethod_gtlTemplateStringInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlInputStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlInputStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInputStatementInstruction * object = (const cPtr_gtlInputStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInputStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("input ( ").add_operation (extensionGetter_stringRepresentation (object->mProperty_formalArguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1332)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1332)).add_operation (GALGAS_string (" )"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1332))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1332)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlInputStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlInputStatementInstruction.mSlotID,
                                extensionMethod_gtlInputStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlInputStatementInstruction_display (defineExtensionMethod_gtlInputStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlSortStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlSortStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSortStatementInstruction * object = (const cPtr_gtlSortStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("sort ").add_operation (extensionGetter_stringRepresentation (object->mProperty_variablePath, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1339)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1338)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1339)).add_operation (extensionGetter_stringRepresentation (object->mProperty_order, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1341)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1340))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1338)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlSortStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlSortStatementInstruction.mSlotID,
                                extensionMethod_gtlSortStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlSortStatementInstruction_display (defineExtensionMethod_gtlSortStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlSortStatementStructInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlSortStatementStructInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSortStatementStructInstruction * object = (const cPtr_gtlSortStatementStructInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementStructInstruction) ;
  inCompiler->printMessage (GALGAS_string ("sort ").add_operation (extensionGetter_stringRepresentation (object->mProperty_variablePath, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1347)).add_operation (GALGAS_string (" by "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1348)).add_operation (extensionGetter_stringRepresentation (object->mProperty_sortingKey, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1350)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1349))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1347)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlSortStatementStructInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlSortStatementStructInstruction.mSlotID,
                                extensionMethod_gtlSortStatementStructInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlSortStatementStructInstruction_display (defineExtensionMethod_gtlSortStatementStructInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlTemplateInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlTemplateInstruction_display (const cPtr_gtlInstruction * inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateInstruction * object = (const cPtr_gtlTemplateInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_isGlobal.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("( ").add_operation (extensionGetter_stringRepresentation (object->mProperty_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1357)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1357)).add_operation (GALGAS_string (" ) "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1357)) ;
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mProperty_ifExists.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("if exists ") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mProperty_prefix.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1360)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string (" ") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string (" in ").add_operation (object->mProperty_prefix.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1360)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1360)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1360)) ;
  }
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = object->mProperty_ifExists.operator_and (GALGAS_bool (kIsStrictSup, object->mProperty_instructionsIfNotFound.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 1361)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1361)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("or ...") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("template ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1356)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1357)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_fileName.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1359)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1358)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1359)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1360))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1356)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlTemplateInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlTemplateInstruction.mSlotID,
                                extensionMethod_gtlTemplateInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlTemplateInstruction_display (defineExtensionMethod_gtlTemplateInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlEmitInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlEmitInstruction_display (const cPtr_gtlInstruction * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlEmitInstruction * object = (const cPtr_gtlEmitInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEmitInstruction) ;
  inCompiler->printMessage (GALGAS_string ("! ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1367)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1367))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1367)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlEmitInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlEmitInstruction.mSlotID,
                                extensionMethod_gtlEmitInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlEmitInstruction_display (defineExtensionMethod_gtlEmitInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlIfStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlIfStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlIfStatementInstruction * object = (const cPtr_gtlIfStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlIfStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("if ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_thenElsifList.getter_conditionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1374)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1374)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1373)).add_operation (GALGAS_string (" then"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1374))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1373)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlIfStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlIfStatementInstruction.mSlotID,
                                extensionMethod_gtlIfStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlIfStatementInstruction_display (defineExtensionMethod_gtlIfStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlForStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlForStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForStatementInstruction * object = (const cPtr_gtlForStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlForStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("for ").add_operation (object->mProperty_identifier.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1381)).add_operation (GALGAS_string (" in "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1382)).add_operation (extensionGetter_stringRepresentation (object->mProperty_iterable, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1384)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1383)).add_operation (GALGAS_string (" do"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1384))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1381)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlForStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlForStatementInstruction.mSlotID,
                                extensionMethod_gtlForStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlForStatementInstruction_display (defineExtensionMethod_gtlForStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlForeachStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlForeachStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = (const cPtr_gtlForeachStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mProperty_keyName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1392)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mProperty_keyName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1392)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1392)) ;
  }
  inCompiler->printMessage (GALGAS_string ("foreach ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1391)).add_operation (object->mProperty_variableName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1392)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1392)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1393)).add_operation (object->mProperty_indexName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1394)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1394)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1394)).add_operation (GALGAS_string (" in "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1394)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_iterable.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1396)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1395))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1391)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlForeachStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                extensionMethod_gtlForeachStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_display (defineExtensionMethod_gtlForeachStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlGetColumnInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlGetColumnInstruction_display (const cPtr_gtlInstruction * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlGetColumnInstruction * object = (const cPtr_gtlGetColumnInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGetColumnInstruction) ;
  inCompiler->printMessage (GALGAS_string ("\? ").add_operation (extensionGetter_stringRepresentation (object->mProperty_destVariable, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1402)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1402))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1402)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlGetColumnInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlGetColumnInstruction.mSlotID,
                                extensionMethod_gtlGetColumnInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlGetColumnInstruction_display (defineExtensionMethod_gtlGetColumnInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLibrariesInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLibrariesInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("libraries")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1408)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLibrariesInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLibrariesInstruction.mSlotID,
                                extensionMethod_gtlLibrariesInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLibrariesInstruction_display (defineExtensionMethod_gtlLibrariesInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlRepeatStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlRepeatStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlRepeatStatementInstruction * object = (const cPtr_gtlRepeatStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlRepeatStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("repeat ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1414)) ;
  if (object->mProperty_limit.isValid ()) {
    if (object->mProperty_limit.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlTerminal) {
      GALGAS_gtlTerminal cast_42454_term ((cPtr_gtlTerminal *) object->mProperty_limit.ptr ()) ;
      if (cast_42454_term.getter_value (SOURCE_FILE ("gtl_debugger.galgas", 1417)).isValid ()) {
        if (cast_42454_term.getter_value (SOURCE_FILE ("gtl_debugger.galgas", 1417)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
          GALGAS_gtlInt cast_42506_intLimit ((cPtr_gtlInt *) cast_42454_term.getter_value (SOURCE_FILE ("gtl_debugger.galgas", 1417)).ptr ()) ;
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = GALGAS_bool (kIsNotEqual, cast_42506_intLimit.getter_value (SOURCE_FILE ("gtl_debugger.galgas", 1419)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1419)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 1419)))).boolEnum () ;
            if (kBoolTrue == test_0) {
              inCompiler->printMessage (GALGAS_string (" (").add_operation (callExtensionGetter_string ((const cPtr_gtlInt *) cast_42506_intLimit.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1420)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1420)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1420))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1420)) ;
            }
          }
        }
      }
    }else{
      inCompiler->printMessage (GALGAS_string (" (").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_limit.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1424)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1424)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1424))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1424)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlRepeatStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlRepeatStatementInstruction.mSlotID,
                                extensionMethod_gtlRepeatStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlRepeatStatementInstruction_display (defineExtensionMethod_gtlRepeatStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlSetterCallInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlSetterCallInstruction_display (const cPtr_gtlInstruction * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSetterCallInstruction * object = (const cPtr_gtlSetterCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSetterCallInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_arguments.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 1434)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string (": ").add_operation (extensionGetter_stringRepresentation (object->mProperty_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1435)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1435)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1435)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("]") ;
  }
  inCompiler->printMessage (GALGAS_string ("[!").add_operation (extensionGetter_stringRepresentation (object->mProperty_target, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1432)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1431)).add_operation (object->mProperty_setterName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1432)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1432)).add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1433))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1431)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlSetterCallInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlSetterCallInstruction.mSlotID,
                                extensionMethod_gtlSetterCallInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlSetterCallInstruction_display (defineExtensionMethod_gtlSetterCallInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlVariablesInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlVariablesInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("variables")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1444)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlVariablesInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlVariablesInstruction.mSlotID,
                                extensionMethod_gtlVariablesInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlVariablesInstruction_display (defineExtensionMethod_gtlVariablesInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWriteToInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWriteToInstruction_display (const cPtr_gtlInstruction * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWriteToInstruction * object = (const cPtr_gtlWriteToInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWriteToInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_isExecutable.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("executable ") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("write to ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1450)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_fileNameExpression.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1451)).add_operation (GALGAS_string (" :"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1452))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1450)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWriteToInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlWriteToInstruction.mSlotID,
                                extensionMethod_gtlWriteToInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWriteToInstruction_display (defineExtensionMethod_gtlWriteToInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlTabStatementInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlTabStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTabStatementInstruction * object = (const cPtr_gtlTabStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTabStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("tab ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_tabValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1460))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1460)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlTabStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlTabStatementInstruction.mSlotID,
                                extensionMethod_gtlTabStatementInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlTabStatementInstruction_display (defineExtensionMethod_gtlTabStatementInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlDisplayStatementInstruction mayExecuteWithoutError'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlDisplayStatementInstruction_mayExecuteWithoutError (const cPtr_gtlInstruction * inObject,
                                                                                          const GALGAS_gtlContext constinArgument_exeContext,
                                                                                          const GALGAS_gtlData constinArgument_context,
                                                                                          const GALGAS_library constinArgument_lib,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_may ; // Returned variable
  const cPtr_gtlDisplayStatementInstruction * object = (const cPtr_gtlDisplayStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDisplayStatementInstruction) ;
  result_may = extensionGetter_exists (object->mProperty_variablePath, constinArgument_exeContext, constinArgument_context, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1481)) ;
//---
  return result_may ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlDisplayStatementInstruction_mayExecuteWithoutError (void) {
  enterExtensionGetter_mayExecuteWithoutError (kTypeDescriptor_GALGAS_gtlDisplayStatementInstruction.mSlotID,
                                               extensionGetter_gtlDisplayStatementInstruction_mayExecuteWithoutError) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlDisplayStatementInstruction_mayExecuteWithoutError (defineExtensionGetter_gtlDisplayStatementInstruction_mayExecuteWithoutError, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlStepInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlStepInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                        GALGAS_gtlContext & ioArgument_context,
                                                        GALGAS_gtlData & /* ioArgument_vars */,
                                                        GALGAS_library & /* ioArgument_lib */,
                                                        GALGAS_string & /* ioArgument_outputString */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_44618 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_setLoopOnCommand ((cPtr_gtlContext *) ptr_44618, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1495)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlStepInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlStepInstruction.mSlotID,
                                extensionMethod_gtlStepInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlStepInstruction_execute (defineExtensionMethod_gtlStepInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlStepInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlStepInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("step")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1500)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlStepInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlStepInstruction.mSlotID,
                                extensionMethod_gtlStepInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlStepInstruction_display (defineExtensionMethod_gtlStepInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDoInstInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDoInstInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & ioArgument_context,
                                                          GALGAS_gtlData & /* ioArgument_vars */,
                                                          GALGAS_library & /* ioArgument_lib */,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDoInstInstruction * object = (const cPtr_gtlDoInstInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDoInstInstruction) ;
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_45182 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_appendInstructionToStepDo ((cPtr_gtlContext *) ptr_45182, object->mProperty_instructionToDo, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1517)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDoInstInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlDoInstInstruction.mSlotID,
                                extensionMethod_gtlDoInstInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDoInstInstruction_execute (defineExtensionMethod_gtlDoInstInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDoInstInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDoInstInstruction_display (const cPtr_gtlInstruction * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDoInstInstruction * object = (const cPtr_gtlDoInstInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDoInstInstruction) ;
  inCompiler->printMessage (GALGAS_string ("do ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1522)) ;
  callExtensionMethod_display ((const cPtr_gtlInstruction *) object->mProperty_instructionToDo.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1523)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDoInstInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlDoInstInstruction.mSlotID,
                                extensionMethod_gtlDoInstInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDoInstInstruction_display (defineExtensionMethod_gtlDoInstInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDoNotInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDoNotInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                         GALGAS_gtlContext & ioArgument_context,
                                                         GALGAS_gtlData & /* ioArgument_vars */,
                                                         GALGAS_library & /* ioArgument_lib */,
                                                         GALGAS_string & /* ioArgument_outputString */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDoNotInstruction * object = (const cPtr_gtlDoNotInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDoNotInstruction) ;
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_45777 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_deleteStepDoInstruction ((cPtr_gtlContext *) ptr_45777, object->mProperty_numToDelete, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1540)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDoNotInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlDoNotInstruction.mSlotID,
                                extensionMethod_gtlDoNotInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDoNotInstruction_execute (defineExtensionMethod_gtlDoNotInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDoNotInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDoNotInstruction_display (const cPtr_gtlInstruction * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDoNotInstruction * object = (const cPtr_gtlDoNotInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDoNotInstruction) ;
  inCompiler->printMessage (GALGAS_string ("do not ").add_operation (object->mProperty_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 1545)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1545)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1545))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1545)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDoNotInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlDoNotInstruction.mSlotID,
                                extensionMethod_gtlDoNotInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDoNotInstruction_display (defineExtensionMethod_gtlDoNotInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDoNotAllInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDoNotAllInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                            GALGAS_gtlContext & ioArgument_context,
                                                            GALGAS_gtlData & /* ioArgument_vars */,
                                                            GALGAS_library & /* ioArgument_lib */,
                                                            GALGAS_string & /* ioArgument_outputString */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_46345 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_deleteAllStepDoInstructions ((cPtr_gtlContext *) ptr_46345, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1561)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDoNotAllInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlDoNotAllInstruction.mSlotID,
                                extensionMethod_gtlDoNotAllInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDoNotAllInstruction_execute (defineExtensionMethod_gtlDoNotAllInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDoNotAllInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDoNotAllInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("do not all")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1566)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDoNotAllInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlDoNotAllInstruction.mSlotID,
                                extensionMethod_gtlDoNotAllInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDoNotAllInstruction_display (defineExtensionMethod_gtlDoNotAllInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDoInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDoInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                      GALGAS_gtlContext & ioArgument_context,
                                                      GALGAS_gtlData & /* ioArgument_vars */,
                                                      GALGAS_library & /* ioArgument_lib */,
                                                      GALGAS_string & /* ioArgument_outputString */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  callExtensionMethod_listStepDoInstructions ((const cPtr_gtlContext *) ioArgument_context.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1582)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDoInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlDoInstruction.mSlotID,
                                extensionMethod_gtlDoInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDoInstruction_execute (defineExtensionMethod_gtlDoInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlDoInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlDoInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("do")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1587)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlDoInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlDoInstruction.mSlotID,
                                extensionMethod_gtlDoInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlDoInstruction_display (defineExtensionMethod_gtlDoInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlContinueInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlContinueInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                            GALGAS_gtlContext & ioArgument_context,
                                                            GALGAS_gtlData & /* ioArgument_vars */,
                                                            GALGAS_library & /* ioArgument_lib */,
                                                            GALGAS_string & /* ioArgument_outputString */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_47386 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_setBreakOnNext ((cPtr_gtlContext *) ptr_47386, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1603)) ;
  }
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_47422 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_setLoopOnCommand ((cPtr_gtlContext *) ptr_47422, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1604)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlContinueInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlContinueInstruction.mSlotID,
                                extensionMethod_gtlContinueInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlContinueInstruction_execute (defineExtensionMethod_gtlContinueInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlContinueInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlContinueInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("cont")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1609)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlContinueInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlContinueInstruction.mSlotID,
                                extensionMethod_gtlContinueInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlContinueInstruction_display (defineExtensionMethod_gtlContinueInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBreakpointInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBreakpointInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                              GALGAS_gtlContext & ioArgument_context,
                                                              GALGAS_gtlData & /* ioArgument_vars */,
                                                              GALGAS_library & /* ioArgument_lib */,
                                                              GALGAS_string & /* ioArgument_outputString */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlBreakpointInstruction * object = (const cPtr_gtlBreakpointInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBreakpointInstruction) ;
  GALGAS_gtlInstructionList var_instructionList_48010 = ioArgument_context.getter_debuggerContext (SOURCE_FILE ("gtl_debugger.galgas", 1627)).getter_instructionList (SOURCE_FILE ("gtl_debugger.galgas", 1627)) ;
  GALGAS_string var_localFileName_48080 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_instructionList_48010.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 1629)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_localFileName_48080 = callExtensionGetter_location ((const cPtr_gtlInstruction *) var_instructionList_48010.getter_instructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1631)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1631)).getter_file (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1631)).getter_lastPathComponent (SOURCE_FILE ("gtl_debugger.galgas", 1632)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, object->mProperty_fileName.objectCompare (var_localFileName_48080)).operator_or (GALGAS_bool (kIsEqual, object->mProperty_fileName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1634)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("Setting breakpoint at ").add_operation (var_localFileName_48080, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1635)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1635)).add_operation (object->mProperty_lineNum.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1635)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1635)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1635))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1635)) ;
          {
          ioArgument_context.insulate (HERE) ;
          cPtr_gtlContext * ptr_48390 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
          callExtensionSetter_setBreakpoint ((cPtr_gtlContext *) ptr_48390, var_localFileName_48080, object->mProperty_lineNum, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1636)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        inCompiler->printMessage (GALGAS_string ("Setting breakpoint at ").add_operation (object->mProperty_fileName, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1638)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1638)).add_operation (object->mProperty_lineNum.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1638)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1638)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1638))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1638)) ;
        {
        ioArgument_context.insulate (HERE) ;
        cPtr_gtlContext * ptr_48533 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
        callExtensionSetter_setBreakpoint ((cPtr_gtlContext *) ptr_48533, object->mProperty_fileName, object->mProperty_lineNum, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1639)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("Unable to set a breakpoint in an empty file\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1642)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBreakpointInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlBreakpointInstruction.mSlotID,
                                extensionMethod_gtlBreakpointInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBreakpointInstruction_execute (defineExtensionMethod_gtlBreakpointInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBreakpointInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBreakpointInstruction_display (const cPtr_gtlInstruction * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlBreakpointInstruction * object = (const cPtr_gtlBreakpointInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBreakpointInstruction) ;
  inCompiler->printMessage (GALGAS_string ("break ").add_operation (object->mProperty_fileName, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1648)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1648)).add_operation (object->mProperty_lineNum.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1648)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1648))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1648)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBreakpointInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlBreakpointInstruction.mSlotID,
                                extensionMethod_gtlBreakpointInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBreakpointInstruction_display (defineExtensionMethod_gtlBreakpointInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBreakpointListInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBreakpointListInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                                  GALGAS_gtlContext & ioArgument_context,
                                                                  GALGAS_gtlData & /* ioArgument_vars */,
                                                                  GALGAS_library & /* ioArgument_lib */,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  callExtensionMethod_listBreakpoints ((const cPtr_gtlContext *) ioArgument_context.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1664)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBreakpointListInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlBreakpointListInstruction.mSlotID,
                                extensionMethod_gtlBreakpointListInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBreakpointListInstruction_execute (defineExtensionMethod_gtlBreakpointListInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBreakpointListInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBreakpointListInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("break")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1669)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBreakpointListInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlBreakpointListInstruction.mSlotID,
                                extensionMethod_gtlBreakpointListInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBreakpointListInstruction_display (defineExtensionMethod_gtlBreakpointListInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBreakpointDeleteInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBreakpointDeleteInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & ioArgument_context,
                                                                    GALGAS_gtlData & /* ioArgument_vars */,
                                                                    GALGAS_library & /* ioArgument_lib */,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlBreakpointDeleteInstruction * object = (const cPtr_gtlBreakpointDeleteInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBreakpointDeleteInstruction) ;
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_49779 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_deleteBreakpoint ((cPtr_gtlContext *) ptr_49779, object->mProperty_numToDelete, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1686)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBreakpointDeleteInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlBreakpointDeleteInstruction.mSlotID,
                                extensionMethod_gtlBreakpointDeleteInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBreakpointDeleteInstruction_execute (defineExtensionMethod_gtlBreakpointDeleteInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBreakpointDeleteInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBreakpointDeleteInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlBreakpointDeleteInstruction * object = (const cPtr_gtlBreakpointDeleteInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBreakpointDeleteInstruction) ;
  inCompiler->printMessage (GALGAS_string ("break not ").add_operation (object->mProperty_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 1691)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1691)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1691))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1691)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBreakpointDeleteInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlBreakpointDeleteInstruction.mSlotID,
                                extensionMethod_gtlBreakpointDeleteInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBreakpointDeleteInstruction_display (defineExtensionMethod_gtlBreakpointDeleteInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBreakpointDeleteAllInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBreakpointDeleteAllInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                                       GALGAS_gtlContext & ioArgument_context,
                                                                       GALGAS_gtlData & /* ioArgument_vars */,
                                                                       GALGAS_library & /* ioArgument_lib */,
                                                                       GALGAS_string & /* ioArgument_outputString */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_50387 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_deleteAllBreakpoints ((cPtr_gtlContext *) ptr_50387, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1707)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBreakpointDeleteAllInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlBreakpointDeleteAllInstruction.mSlotID,
                                extensionMethod_gtlBreakpointDeleteAllInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBreakpointDeleteAllInstruction_execute (defineExtensionMethod_gtlBreakpointDeleteAllInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBreakpointDeleteAllInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBreakpointDeleteAllInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("break not all")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1712)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBreakpointDeleteAllInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlBreakpointDeleteAllInstruction.mSlotID,
                                extensionMethod_gtlBreakpointDeleteAllInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBreakpointDeleteAllInstruction_display (defineExtensionMethod_gtlBreakpointDeleteAllInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWatchpointInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWatchpointInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                              GALGAS_gtlContext & ioArgument_context,
                                                              GALGAS_gtlData & /* ioArgument_vars */,
                                                              GALGAS_library & /* ioArgument_lib */,
                                                              GALGAS_string & /* ioArgument_outputString */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWatchpointInstruction * object = (const cPtr_gtlWatchpointInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWatchpointInstruction) ;
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_50979 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_setWatchpoint ((cPtr_gtlContext *) ptr_50979, object->mProperty_watchExpression, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1729)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWatchpointInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWatchpointInstruction.mSlotID,
                                extensionMethod_gtlWatchpointInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWatchpointInstruction_execute (defineExtensionMethod_gtlWatchpointInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWatchpointInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWatchpointInstruction_display (const cPtr_gtlInstruction * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWatchpointInstruction * object = (const cPtr_gtlWatchpointInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWatchpointInstruction) ;
  inCompiler->printMessage (GALGAS_string ("watch ( ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_watchExpression.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1734)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1734)).add_operation (GALGAS_string (" )"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1734))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1734)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWatchpointInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlWatchpointInstruction.mSlotID,
                                extensionMethod_gtlWatchpointInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWatchpointInstruction_display (defineExtensionMethod_gtlWatchpointInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWatchpointListInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWatchpointListInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                                  GALGAS_gtlContext & ioArgument_context,
                                                                  GALGAS_gtlData & /* ioArgument_vars */,
                                                                  GALGAS_library & /* ioArgument_lib */,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  callExtensionMethod_listWatchpoints ((const cPtr_gtlContext *) ioArgument_context.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1750)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWatchpointListInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWatchpointListInstruction.mSlotID,
                                extensionMethod_gtlWatchpointListInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWatchpointListInstruction_execute (defineExtensionMethod_gtlWatchpointListInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWatchpointListInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWatchpointListInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("watch")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1755)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWatchpointListInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlWatchpointListInstruction.mSlotID,
                                extensionMethod_gtlWatchpointListInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWatchpointListInstruction_display (defineExtensionMethod_gtlWatchpointListInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWatchpointDeleteInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWatchpointDeleteInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & ioArgument_context,
                                                                    GALGAS_gtlData & /* ioArgument_vars */,
                                                                    GALGAS_library & /* ioArgument_lib */,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWatchpointDeleteInstruction * object = (const cPtr_gtlWatchpointDeleteInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWatchpointDeleteInstruction) ;
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_52165 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_deleteWatchpoint ((cPtr_gtlContext *) ptr_52165, object->mProperty_numToDelete, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1772)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWatchpointDeleteInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWatchpointDeleteInstruction.mSlotID,
                                extensionMethod_gtlWatchpointDeleteInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWatchpointDeleteInstruction_execute (defineExtensionMethod_gtlWatchpointDeleteInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWatchpointDeleteInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWatchpointDeleteInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWatchpointDeleteInstruction * object = (const cPtr_gtlWatchpointDeleteInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWatchpointDeleteInstruction) ;
  inCompiler->printMessage (GALGAS_string ("watch not ").add_operation (object->mProperty_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 1777)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1777)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1777))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1777)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWatchpointDeleteInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlWatchpointDeleteInstruction.mSlotID,
                                extensionMethod_gtlWatchpointDeleteInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWatchpointDeleteInstruction_display (defineExtensionMethod_gtlWatchpointDeleteInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWatchpointDeleteAllInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWatchpointDeleteAllInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                                       GALGAS_gtlContext & ioArgument_context,
                                                                       GALGAS_gtlData & /* ioArgument_vars */,
                                                                       GALGAS_library & /* ioArgument_lib */,
                                                                       GALGAS_string & /* ioArgument_outputString */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_52774 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
  callExtensionSetter_deleteAllWatchpoints ((cPtr_gtlContext *) ptr_52774, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1793)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWatchpointDeleteAllInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWatchpointDeleteAllInstruction.mSlotID,
                                extensionMethod_gtlWatchpointDeleteAllInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWatchpointDeleteAllInstruction_execute (defineExtensionMethod_gtlWatchpointDeleteAllInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWatchpointDeleteAllInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWatchpointDeleteAllInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("watch not all")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1798)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWatchpointDeleteAllInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlWatchpointDeleteAllInstruction.mSlotID,
                                extensionMethod_gtlWatchpointDeleteAllInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWatchpointDeleteAllInstruction_display (defineExtensionMethod_gtlWatchpointDeleteAllInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlListInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlListInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                        GALGAS_gtlContext & ioArgument_context,
                                                        GALGAS_gtlData & /* ioArgument_vars */,
                                                        GALGAS_library & /* ioArgument_lib */,
                                                        GALGAS_string & /* ioArgument_outputString */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlListInstruction * object = (const cPtr_gtlListInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlListInstruction) ;
  callExtensionMethod_hereWeAre ((const cPtr_gtlContext *) ioArgument_context.ptr (), object->mProperty_window, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1815)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlListInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlListInstruction.mSlotID,
                                extensionMethod_gtlListInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlListInstruction_execute (defineExtensionMethod_gtlListInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlListInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlListInstruction_display (const cPtr_gtlInstruction * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlListInstruction * object = (const cPtr_gtlListInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlListInstruction) ;
  inCompiler->printMessage (GALGAS_string ("list ").add_operation (object->mProperty_window.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1820)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1820))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1820)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlListInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlListInstruction.mSlotID,
                                extensionMethod_gtlListInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlListInstruction_display (defineExtensionMethod_gtlListInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlHistoryInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlHistoryInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                           GALGAS_gtlContext & ioArgument_context,
                                                           GALGAS_gtlData & /* ioArgument_vars */,
                                                           GALGAS_library & /* ioArgument_lib */,
                                                           GALGAS_string & /* ioArgument_outputString */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  callExtensionMethod_listHistory ((const cPtr_debugCommandInput *) ioArgument_context.getter_debuggerContext (SOURCE_FILE ("gtl_debugger.galgas", 1836)).getter_commandInput (SOURCE_FILE ("gtl_debugger.galgas", 1836)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1836)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlHistoryInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlHistoryInstruction.mSlotID,
                                extensionMethod_gtlHistoryInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlHistoryInstruction_execute (defineExtensionMethod_gtlHistoryInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlHistoryInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlHistoryInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("hist")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1841)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlHistoryInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlHistoryInstruction.mSlotID,
                                extensionMethod_gtlHistoryInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlHistoryInstruction_display (defineExtensionMethod_gtlHistoryInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLoadInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLoadInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                        GALGAS_gtlContext & ioArgument_context,
                                                        GALGAS_gtlData & ioArgument_vars,
                                                        GALGAS_library & ioArgument_lib,
                                                        GALGAS_string & /* ioArgument_outputString */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLoadInstruction * object = (const cPtr_gtlLoadInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLoadInstruction) ;
  extensionMethod_loadCommandFile (object->mProperty_fileName, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1858)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLoadInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLoadInstruction.mSlotID,
                                extensionMethod_gtlLoadInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLoadInstruction_execute (defineExtensionMethod_gtlLoadInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLoadInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLoadInstruction_display (const cPtr_gtlInstruction * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLoadInstruction * object = (const cPtr_gtlLoadInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLoadInstruction) ;
  inCompiler->printMessage (GALGAS_string ("load \"").add_operation (object->mProperty_fileName, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1863)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1863))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1863)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLoadInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLoadInstruction.mSlotID,
                                extensionMethod_gtlLoadInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLoadInstruction_display (defineExtensionMethod_gtlLoadInstruction_display, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlHelpInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlHelpInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                        GALGAS_gtlContext & /* ioArgument_context */,
                                                        GALGAS_gtlData & /* ioArgument_vars */,
                                                        GALGAS_library & /* ioArgument_lib */,
                                                        GALGAS_string & /* ioArgument_outputString */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("Available commands:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1879)) ;
  inCompiler->printMessage (GALGAS_string ("  break <filename>:<line>        : set a breakpoint at <line> in file <filename>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1880)) ;
  inCompiler->printMessage (GALGAS_string ("  break <line>                   : set a breakpoint at <line> in the current file\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1881)) ;
  inCompiler->printMessage (GALGAS_string ("  break                          : lists the breakpoints\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1882)) ;
  inCompiler->printMessage (GALGAS_string ("  break not <num>                : delete breakpoint at index <num>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1883)) ;
  inCompiler->printMessage (GALGAS_string ("  break not all                  : delete all breakpoints\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1884)) ;
  inCompiler->printMessage (GALGAS_string ("  cont                           : continue execution until the next breakpoint or the end\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1885)) ;
  inCompiler->printMessage (GALGAS_string ("  display <variable>             : display variable <variable>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1886)) ;
  inCompiler->printMessage (GALGAS_string ("  do <command>                   : do a command each time a step is done\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1887)) ;
  inCompiler->printMessage (GALGAS_string ("  do                             : list the do commands\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1888)) ;
  inCompiler->printMessage (GALGAS_string ("  do not <num>                   : delete the do command at index <num>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1889)) ;
  inCompiler->printMessage (GALGAS_string ("  do not all                     : delete all the do commands\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1890)) ;
  inCompiler->printMessage (GALGAS_string ("  hist                           : display the command history\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1891)) ;
  inCompiler->printMessage (GALGAS_string ("  if <expression> then ...       : same as GTL if instruction. Must be on one line though\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1892)) ;
  inCompiler->printMessage (GALGAS_string ("  list                           : lists instructions +/- 5 around current one\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1893)) ;
  inCompiler->printMessage (GALGAS_string ("  list <num>                     : lists instructions +/- <num> around current one\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1894)) ;
  inCompiler->printMessage (GALGAS_string ("  let <variable> := <expression> : compute <expression> and set <variable> to the result\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1895)) ;
  inCompiler->printMessage (GALGAS_string ("  load <filename>                : load commands from file <filename>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1896)) ;
  inCompiler->printMessage (GALGAS_string ("  print <expression>             : prints the <expression>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1897)) ;
  inCompiler->printMessage (GALGAS_string ("  step                           : step one instruction\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1898)) ;
  inCompiler->printMessage (GALGAS_string ("  unlet <variable>               : delete <variable>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1899)) ;
  inCompiler->printMessage (GALGAS_string ("  variables                      : display all variables in scope\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1900)) ;
  inCompiler->printMessage (GALGAS_string ("  watch (<expression>)           : set a watchpoint matching the boolean <expression>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1901)) ;
  inCompiler->printMessage (GALGAS_string ("  watch                          : lists the watchpoints\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1902)) ;
  inCompiler->printMessage (GALGAS_string ("  watch not <num>                : delete watchpoint at index <num>\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1903)) ;
  inCompiler->printMessage (GALGAS_string ("  watch not all                  : delete all watchpoints\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1904)) ;
  inCompiler->printMessage (GALGAS_string ("  <return>                       : step one instruction\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1905)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlHelpInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlHelpInstruction.mSlotID,
                                extensionMethod_gtlHelpInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlHelpInstruction_execute (defineExtensionMethod_gtlHelpInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlHelpInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlHelpInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("help")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1910)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlHelpInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlHelpInstruction.mSlotID,
                                extensionMethod_gtlHelpInstruction_display) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlHelpInstruction_display (defineExtensionMethod_gtlHelpInstruction_display, NULL) ;

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "gtl",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .gtl extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "3.0.13" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlContext var_context_825 = function_emptyContext (inCompiler COMMA_SOURCE_FILE ("gtl_program.galgas", 35)) ;
  GALGAS_library var_lib_857 = function_emptyLib (inCompiler COMMA_SOURCE_FILE ("gtl_program.galgas", 36)) ;
  GALGAS_string var_sourceFileDirectory_903 = constinArgument_inSourceFile.getter_string (SOURCE_FILE ("gtl_program.galgas", 39)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("gtl_program.galgas", 39)) ;
  {
  var_context_825.insulate (HERE) ;
  cPtr_gtlContext * ptr_983 = (cPtr_gtlContext *) var_context_825.ptr () ;
  callExtensionSetter_addModulePath ((cPtr_gtlContext *) ptr_983, var_sourceFileDirectory_903, GALGAS_string ("../modules"), inCompiler COMMA_SOURCE_FILE ("gtl_program.galgas", 41)) ;
  }
  GALGAS_gtlData var_vars_1052 = GALGAS_gtlStruct::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_program.galgas", 43)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_program.galgas", 43)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_program.galgas", 43))  COMMA_SOURCE_FILE ("gtl_program.galgas", 43)) ;
  GALGAS_string var_result_1125 = function_invokeGTL (function_lstringToGtlString (constinArgument_inSourceFile, inCompiler COMMA_SOURCE_FILE ("gtl_program.galgas", 46)), var_context_825, var_vars_1052, inCompiler COMMA_SOURCE_FILE ("gtl_program.galgas", 45)) ;
  inCompiler->printMessage (GALGAS_string ("================================================================\n")  COMMA_SOURCE_FILE ("gtl_program.galgas", 51)) ;
  inCompiler->printMessage (var_result_1125  COMMA_SOURCE_FILE ("gtl_program.galgas", 52)) ;
  inCompiler->printMessage (GALGAS_string ("================================================================\n")  COMMA_SOURCE_FILE ("gtl_program.galgas", 53)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "gtl") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_gtl_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_gtl_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_gtl_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_gtl_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

