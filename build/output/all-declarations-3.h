#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext appendInstructionToStepDo'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_appendInstructionToStepDo) (class cPtr_debuggerContext * inObject,
                                                                                    class GALGAS_gtlInstruction inArgument0,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_appendInstructionToStepDo (const int32_t inClassIndex,
                                                     extensionSetterSignature_debuggerContext_appendInstructionToStepDo inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_appendInstructionToStepDo (class cPtr_debuggerContext * inObject,
                                                    GALGAS_gtlInstruction in_instruction,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteStepDoInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_deleteStepDoInstruction) (class cPtr_debuggerContext * inObject,
                                                                                  const class GALGAS_lbigint constinArgument0,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteStepDoInstruction (const int32_t inClassIndex,
                                                   extensionSetterSignature_debuggerContext_deleteStepDoInstruction inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteStepDoInstruction (class cPtr_debuggerContext * inObject,
                                                  const GALGAS_lbigint constin_numToDelete,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteAllStepDoInstructions'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_deleteAllStepDoInstructions) (class cPtr_debuggerContext * inObject,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllStepDoInstructions (const int32_t inClassIndex,
                                                       extensionSetterSignature_debuggerContext_deleteAllStepDoInstructions inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllStepDoInstructions (class cPtr_debuggerContext * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debuggerContext listStepDoInstructions'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_debuggerContext_listStepDoInstructions) (const class cPtr_debuggerContext * inObject,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listStepDoInstructions (const int32_t inClassIndex,
                                                  extensionMethodSignature_debuggerContext_listStepDoInstructions inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listStepDoInstructions (const class cPtr_debuggerContext * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext setBreakpoint'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_setBreakpoint) (class cPtr_debuggerContext * inObject,
                                                                        const class GALGAS_string constinArgument0,
                                                                        const class GALGAS_uint constinArgument1,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setBreakpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_debuggerContext_setBreakpoint inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setBreakpoint (class cPtr_debuggerContext * inObject,
                                        const GALGAS_string constin_fileName,
                                        const GALGAS_uint constin_lineNum,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debuggerContext listBreakpoints'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_debuggerContext_listBreakpoints) (const class cPtr_debuggerContext * inObject,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listBreakpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_debuggerContext_listBreakpoints inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listBreakpoints (const class cPtr_debuggerContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteBreakpoint'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_deleteBreakpoint) (class cPtr_debuggerContext * inObject,
                                                                           const class GALGAS_lbigint constinArgument0,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteBreakpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_debuggerContext_deleteBreakpoint inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteBreakpoint (class cPtr_debuggerContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteAllBreakpoints'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_deleteAllBreakpoints) (class cPtr_debuggerContext * inObject,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllBreakpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_debuggerContext_deleteAllBreakpoints inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllBreakpoints (class cPtr_debuggerContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext setWatchpoint'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_setWatchpoint) (class cPtr_debuggerContext * inObject,
                                                                        const class GALGAS_gtlExpression constinArgument0,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setWatchpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_debuggerContext_setWatchpoint inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setWatchpoint (class cPtr_debuggerContext * inObject,
                                        const GALGAS_gtlExpression constin_watchExpression,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debuggerContext listWatchpoints'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_debuggerContext_listWatchpoints) (const class cPtr_debuggerContext * inObject,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listWatchpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_debuggerContext_listWatchpoints inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listWatchpoints (const class cPtr_debuggerContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteWatchpoint'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_deleteWatchpoint) (class cPtr_debuggerContext * inObject,
                                                                           const class GALGAS_lbigint constinArgument0,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteWatchpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_debuggerContext_deleteWatchpoint inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteWatchpoint (class cPtr_debuggerContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteAllWatchpoints'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_deleteAllWatchpoints) (class cPtr_debuggerContext * inObject,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllWatchpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_debuggerContext_deleteAllWatchpoints inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllWatchpoints (class cPtr_debuggerContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@debuggerContext breakOn'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_debuggerContext_breakOn) (const class cPtr_debuggerContext * inObject,
                                                                           const class GALGAS_gtlInstruction constinArgument0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_breakOn (const int32_t inClassIndex,
                                   enterExtensionGetter_debuggerContext_breakOn inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_breakOn (const cPtr_debuggerContext * inObject,
                                               const GALGAS_gtlInstruction constin_instruction,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@debuggerContext watchOn'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_debuggerContext_watchOn) (const class cPtr_debuggerContext * inObject,
                                                                           const class GALGAS_gtlContext constinArgument0,
                                                                           const class GALGAS_gtlData constinArgument1,
                                                                           const class GALGAS_library constinArgument2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_watchOn (const int32_t inClassIndex,
                                   enterExtensionGetter_debuggerContext_watchOn inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_watchOn (const cPtr_debuggerContext * inObject,
                                               const GALGAS_gtlContext constin_context,
                                               const GALGAS_gtlData constin_vars,
                                               const GALGAS_library constin_lib,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debuggerContext hereWeAre'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_debuggerContext_hereWeAre) (const class cPtr_debuggerContext * inObject,
                                                                    const class GALGAS_uint constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_hereWeAre (const int32_t inClassIndex,
                                     extensionMethodSignature_debuggerContext_hereWeAre inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_hereWeAre (const class cPtr_debuggerContext * inObject,
                                    const GALGAS_uint constin_window,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'bold'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_bold (class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'red'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_red (class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext pushInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_pushInstructionList) (class cPtr_debuggerContext * inObject,
                                                                              const class GALGAS_gtlInstructionList constinArgument0,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_pushInstructionList (const int32_t inClassIndex,
                                               extensionSetterSignature_debuggerContext_pushInstructionList inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_pushInstructionList (class cPtr_debuggerContext * inObject,
                                              const GALGAS_gtlInstructionList constin_instructions,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext popInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_popInstructionList) (class cPtr_debuggerContext * inObject,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_popInstructionList (const int32_t inClassIndex,
                                              extensionSetterSignature_debuggerContext_popInstructionList inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_popInstructionList (class cPtr_debuggerContext * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext getCommand'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debuggerContext_getCommand) (class cPtr_debuggerContext * inObject,
                                                                     class GALGAS_string & outArgument0,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_getCommand (const int32_t inClassIndex,
                                      extensionSetterSignature_debuggerContext_getCommand inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_getCommand (class cPtr_debuggerContext * inObject,
                                     GALGAS_string & out_command,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_gtlData_stringRepresentation) (const class cPtr_gtlData * inObject,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlData_stringRepresentation inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_stringRepresentation (const class cPtr_gtlData * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext addModulePath'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_addModulePath) (class cPtr_gtlContext * inObject,
                                                                   const class GALGAS_string constinArgument0,
                                                                   const class GALGAS_string constinArgument1,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_addModulePath (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_addModulePath inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_addModulePath (class cPtr_gtlContext * inObject,
                                        const GALGAS_string constin_rootPath,
                                        const GALGAS_string constin_modulePath,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext addInputVariable'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_addInputVariable) (class cPtr_gtlContext * inObject,
                                                                      class GALGAS_gtlData inArgument0,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_addInputVariable (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_addInputVariable inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_addInputVariable (class cPtr_gtlContext * inObject,
                                           GALGAS_gtlData in_inputVariable,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext popFirstInputArg'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_popFirstInputArg) (class cPtr_gtlContext * inObject,
                                                                      class GALGAS_location inArgument0,
                                                                      class GALGAS_gtlData & outArgument1,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_popFirstInputArg (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_popFirstInputArg inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_popFirstInputArg (class cPtr_gtlContext * inObject,
                                           GALGAS_location in_where,
                                           GALGAS_gtlData & out_result,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext fullPrefix'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_lstring (*enterExtensionGetter_gtlContext_fullPrefix) (const class cPtr_gtlContext * inObject,
                                                                            const class GALGAS_gtlData constinArgument0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_fullPrefix (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlContext_fullPrefix inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_fullPrefix (const cPtr_gtlContext * inObject,
                                                     const GALGAS_gtlData constin_vars,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext fullTemplateFileName'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_lstring (*enterExtensionGetter_gtlContext_fullTemplateFileName) (const class cPtr_gtlContext * inObject,
                                                                                      class GALGAS_gtlContext inArgument0,
                                                                                      class GALGAS_gtlData inArgument1,
                                                                                      class GALGAS_lstring inArgument2,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_fullTemplateFileName (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlContext_fullTemplateFileName inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_fullTemplateFileName (const cPtr_gtlContext * inObject,
                                                               GALGAS_gtlContext in_context,
                                                               GALGAS_gtlData in_vars,
                                                               GALGAS_lstring in_simpleName,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pathWithExtension'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_pathWithExtension (class GALGAS_gtlContext inArgument0,
                                                class GALGAS_string inArgument1,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'gtl_module_parser' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_gtl_5F_module_5F_parser {
//--- Virtual destructor
  public : virtual ~ cParser_gtl_5F_module_5F_parser (void) {}

//--- Non terminal declarations
  protected : virtual void nt_gtl_5F_argument_5F_list_ (class GALGAS_gtlArgumentList & outArgument0,
                                                        class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_argument_5F_list_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_expression_ (class GALGAS_gtlExpression & outArgument0,
                                                  class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_expression_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_function_ (class GALGAS_gtlFunction & outArgument0,
                                                class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_function_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_getter_ (class GALGAS_gtlGetter & outArgument0,
                                              class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_getter_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_import_ (class GALGAS_gtlContext inArgument0,
                                              class GALGAS_library & ioArgument1,
                                              class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_import_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_instruction_ (class GALGAS_gtlInstruction & outArgument0,
                                                   class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_instruction_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_instruction_5F_list_ (class GALGAS_gtlInstructionList & outArgument0,
                                                           class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_instruction_5F_list_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_module_5F_start_5F_symbol_ (class GALGAS_gtlContext inArgument0,
                                                                 class GALGAS_library & ioArgument1,
                                                                 class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_module_5F_start_5F_symbol_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_setter_ (class GALGAS_gtlSetter & outArgument0,
                                              class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_setter_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_simple_5F_instruction_ (class GALGAS_gtlInstruction & outArgument0,
                                                             class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_simple_5F_instruction_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_5F_list_i0_ (GALGAS_gtlInstructionList & outArgument0,
                                                                                C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_5F_list_i0_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_module_5F_start_5F_symbol_i1_ (GALGAS_gtlContext inArgument0,
                                                                                      GALGAS_library & ioArgument1,
                                                                                      C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_module_5F_start_5F_symbol_i1_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_function_i2_ (GALGAS_gtlFunction & outArgument0,
                                                                     C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_function_i2_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_getter_i3_ (GALGAS_gtlGetter & outArgument0,
                                                                   C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_getter_i3_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_setter_i4_ (GALGAS_gtlSetter & outArgument0,
                                                                   C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_setter_i4_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i5_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i5_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i6_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i6_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i7_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i7_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i8_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i8_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i9_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i9_parse (C_Lexique_gtl_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_gtl_5F_module_5F_parser_0 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_1 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_2 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_3 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_4 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_5 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_6 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_7 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_8 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_9 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_10 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_11 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_12 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_13 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_14 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_15 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_16 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_17 (C_Lexique_gtl_5F_scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR gtl_module_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_gtl_5F_module_5F_grammar : public cParser_gtl_5F_module_5F_parser,
                                          public cParser_gtl_5F_instruction_5F_parser,
                                          public cParser_gtl_5F_expression_5F_parser {
//------------------------------------- 'gtl_argument_list' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_argument_5F_list_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_argument_5F_list_ (GALGAS_gtlArgumentList & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_expression' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_expression_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_expression_ (GALGAS_gtlExpression & outArgument0,
                                               C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_factor' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_factor_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_factor_ (GALGAS_gtlExpression & outArgument0,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_function' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_function_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_function_ (GALGAS_gtlFunction & outArgument0,
                                             C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_getter' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_getter_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_getter_ (GALGAS_gtlGetter & outArgument0,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_import' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_import_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_import_ (GALGAS_gtlContext inArgument0,
                                           GALGAS_library & ioArgument1,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_instruction_ (GALGAS_gtlInstruction & outArgument0,
                                                C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_instruction_5F_list_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_instruction_5F_list_ (GALGAS_gtlInstructionList & outArgument0,
                                                        C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_module_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_module_5F_start_5F_symbol_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_module_5F_start_5F_symbol_ (GALGAS_gtlContext inArgument0,
                                                              GALGAS_library & ioArgument1,
                                                              C_Lexique_gtl_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_gtlContext inArgument0,
                                                   GALGAS_library & ioArgument1
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_gtlContext inArgument0,
                                                     GALGAS_library & ioArgument1
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'gtl_relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_relation_5F_factor_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_relation_5F_factor_ (GALGAS_gtlExpression & outArgument0,
                                                       C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_relation_5F_term_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_relation_5F_term_ (GALGAS_gtlExpression & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_setter' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_setter_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_setter_ (GALGAS_gtlSetter & outArgument0,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_simple_5F_expression_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_simple_5F_expression_ (GALGAS_gtlExpression & outArgument0,
                                                         C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_simple_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_simple_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_simple_5F_instruction_ (GALGAS_gtlInstruction & outArgument0,
                                                          C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_sorting_order' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_sorting_5F_order_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_sorting_5F_order_ (GALGAS_lsint & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_term' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_term_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_term_ (GALGAS_gtlExpression & outArgument0,
                                         C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_variable' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_variable_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_variable_ (GALGAS_gtlVarPath & outArgument0,
                                             C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_variable_or_here' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_variable_5F_or_5F_here_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_variable_5F_or_5F_here_ (GALGAS_gtlVarPath & outArgument0,
                                                           GALGAS_bool & outArgument1,
                                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_7 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_8 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_9 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_10 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_11 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_12 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_13 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_14 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_15 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_16 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_17 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_7 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_7 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_8 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_9 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_10 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_11 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_12 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_13 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_14 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_15 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_16 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_17 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_18 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_19 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_20 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_21 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_22 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_23 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_24 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_25 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_26 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_27 (C_Lexique_gtl_5F_scanner *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext appendInstructionToStepDo'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_appendInstructionToStepDo) (class cPtr_gtlContext * inObject,
                                                                               class GALGAS_gtlInstruction inArgument0,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_appendInstructionToStepDo (const int32_t inClassIndex,
                                                     extensionSetterSignature_gtlContext_appendInstructionToStepDo inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_appendInstructionToStepDo (class cPtr_gtlContext * inObject,
                                                    GALGAS_gtlInstruction in_instruction,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteStepDoInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_deleteStepDoInstruction) (class cPtr_gtlContext * inObject,
                                                                             const class GALGAS_lbigint constinArgument0,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteStepDoInstruction (const int32_t inClassIndex,
                                                   extensionSetterSignature_gtlContext_deleteStepDoInstruction inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteStepDoInstruction (class cPtr_gtlContext * inObject,
                                                  const GALGAS_lbigint constin_numToDelete,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteAllStepDoInstructions'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_deleteAllStepDoInstructions) (class cPtr_gtlContext * inObject,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllStepDoInstructions (const int32_t inClassIndex,
                                                       extensionSetterSignature_gtlContext_deleteAllStepDoInstructions inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllStepDoInstructions (class cPtr_gtlContext * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlContext listStepDoInstructions'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlContext_listStepDoInstructions) (const class cPtr_gtlContext * inObject,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listStepDoInstructions (const int32_t inClassIndex,
                                                  extensionMethodSignature_gtlContext_listStepDoInstructions inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listStepDoInstructions (const class cPtr_gtlContext * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setBreakpoint'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_setBreakpoint) (class cPtr_gtlContext * inObject,
                                                                   const class GALGAS_string constinArgument0,
                                                                   const class GALGAS_uint constinArgument1,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setBreakpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_setBreakpoint inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setBreakpoint (class cPtr_gtlContext * inObject,
                                        const GALGAS_string constin_fileName,
                                        const GALGAS_uint constin_lineNum,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlContext listBreakpoints'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlContext_listBreakpoints) (const class cPtr_gtlContext * inObject,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listBreakpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_gtlContext_listBreakpoints inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listBreakpoints (const class cPtr_gtlContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteBreakpoint'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_deleteBreakpoint) (class cPtr_gtlContext * inObject,
                                                                      const class GALGAS_lbigint constinArgument0,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteBreakpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_deleteBreakpoint inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteBreakpoint (class cPtr_gtlContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteAllBreakpoints'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_deleteAllBreakpoints) (class cPtr_gtlContext * inObject,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllBreakpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_gtlContext_deleteAllBreakpoints inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllBreakpoints (class cPtr_gtlContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setWatchpoint'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_setWatchpoint) (class cPtr_gtlContext * inObject,
                                                                   const class GALGAS_gtlExpression constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setWatchpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_setWatchpoint inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setWatchpoint (class cPtr_gtlContext * inObject,
                                        const GALGAS_gtlExpression constin_watchExpression,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlContext listWatchpoints'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlContext_listWatchpoints) (const class cPtr_gtlContext * inObject,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listWatchpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_gtlContext_listWatchpoints inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listWatchpoints (const class cPtr_gtlContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteWatchpoint'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_deleteWatchpoint) (class cPtr_gtlContext * inObject,
                                                                      const class GALGAS_lbigint constinArgument0,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteWatchpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_deleteWatchpoint inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteWatchpoint (class cPtr_gtlContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteAllWatchpoints'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_deleteAllWatchpoints) (class cPtr_gtlContext * inObject,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllWatchpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_gtlContext_deleteAllWatchpoints inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllWatchpoints (class cPtr_gtlContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlContext hereWeAre'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlContext_hereWeAre) (const class cPtr_gtlContext * inObject,
                                                               const class GALGAS_uint constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_hereWeAre (const int32_t inClassIndex,
                                     extensionMethodSignature_gtlContext_hereWeAre inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_hereWeAre (const class cPtr_gtlContext * inObject,
                                    const GALGAS_uint constin_window,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setExecuteDebuggerCommand'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlContext_setExecuteDebuggerCommand) (class cPtr_gtlContext * inObject,
                                                                               class GALGAS_bool inArgument0,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setExecuteDebuggerCommand (const int32_t inClassIndex,
                                                     extensionSetterSignature_gtlContext_setExecuteDebuggerCommand inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setExecuteDebuggerCommand (class cPtr_gtlContext * inObject,
                                                    GALGAS_bool in_debuggerCommand,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

