#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlEmitInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlEmitInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlEmitInstruction (void) ;

//---
  public : inline const class cPtr_gtlEmitInstruction * ptr (void) const { return (const cPtr_gtlEmitInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlEmitInstruction (const cPtr_gtlEmitInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlEmitInstruction extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlEmitInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_gtlExpression & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlEmitInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setRValue (class GALGAS_gtlExpression inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_rValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlEmitInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlEmitInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlEmitInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlEmitInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlExpression mProperty_rValue ;

//--- Constructor
  public : cPtr_gtlEmitInstruction (const GALGAS_location & in_where,
                                    const GALGAS_string & in_signature,
                                    const GALGAS_gtlExpression & in_rValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_rValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setRValue (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlWriteToInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlWriteToInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlWriteToInstruction (void) ;

//---
  public : inline const class cPtr_gtlWriteToInstruction * ptr (void) const { return (const cPtr_gtlWriteToInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlWriteToInstruction (const cPtr_gtlWriteToInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlWriteToInstruction extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlWriteToInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_gtlExpression & inOperand2,
                                                                      const class GALGAS_bool & inOperand3,
                                                                      const class GALGAS_gtlInstructionList & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlWriteToInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setFileNameExpression (class GALGAS_gtlExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setInstructions (class GALGAS_gtlInstructionList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIsExecutable (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_fileNameExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isExecutable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlWriteToInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlWriteToInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlWriteToInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlWriteToInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlExpression mProperty_fileNameExpression ;
  public : GALGAS_bool mProperty_isExecutable ;
  public : GALGAS_gtlInstructionList mProperty_instructions ;

//--- Constructor
  public : cPtr_gtlWriteToInstruction (const GALGAS_location & in_where,
                                       const GALGAS_string & in_signature,
                                       const GALGAS_gtlExpression & in_fileNameExpression,
                                       const GALGAS_bool & in_isExecutable,
                                       const GALGAS_gtlInstructionList & in_instructions
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_fileNameExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setFileNameExpression (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_isExecutable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIsExecutable (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setInstructions (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlTemplateInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlTemplateInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlTemplateInstruction (void) ;

//---
  public : inline const class cPtr_gtlTemplateInstruction * ptr (void) const { return (const cPtr_gtlTemplateInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlTemplateInstruction (const cPtr_gtlTemplateInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlTemplateInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlTemplateInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2,
                                                                       const class GALGAS_gtlExpression & inOperand3,
                                                                       const class GALGAS_bool & inOperand4,
                                                                       const class GALGAS_bool & inOperand5,
                                                                       const class GALGAS_gtlExpressionList & inOperand6,
                                                                       const class GALGAS_gtlInstructionList & inOperand7
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlTemplateInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setArguments (class GALGAS_gtlExpressionList inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setFileName (class GALGAS_gtlExpression inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIfExists (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setInstructionsIfNotFound (class GALGAS_gtlInstructionList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIsGlobal (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setPrefix (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpressionList getter_arguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_fileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_ifExists (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_instructionsIfNotFound (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGlobal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_prefix (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlTemplateInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlTemplateInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlTemplateInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlTemplateInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_prefix ;
  public : GALGAS_gtlExpression mProperty_fileName ;
  public : GALGAS_bool mProperty_ifExists ;
  public : GALGAS_bool mProperty_isGlobal ;
  public : GALGAS_gtlExpressionList mProperty_arguments ;
  public : GALGAS_gtlInstructionList mProperty_instructionsIfNotFound ;

//--- Constructor
  public : cPtr_gtlTemplateInstruction (const GALGAS_location & in_where,
                                        const GALGAS_string & in_signature,
                                        const GALGAS_lstring & in_prefix,
                                        const GALGAS_gtlExpression & in_fileName,
                                        const GALGAS_bool & in_ifExists,
                                        const GALGAS_bool & in_isGlobal,
                                        const GALGAS_gtlExpressionList & in_arguments,
                                        const GALGAS_gtlInstructionList & in_instructionsIfNotFound
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_prefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setPrefix (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_fileName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setFileName (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_ifExists (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIfExists (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_isGlobal (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIsGlobal (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpressionList getter_arguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setArguments (GALGAS_gtlExpressionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_instructionsIfNotFound (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setInstructionsIfNotFound (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlForeachStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlForeachStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlForeachStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlForeachStatementInstruction * ptr (void) const { return (const cPtr_gtlForeachStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlForeachStatementInstruction (const cPtr_gtlForeachStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlForeachStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlForeachStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2,
                                                                               const class GALGAS_lstring & inOperand3,
                                                                               const class GALGAS_lstring & inOperand4,
                                                                               const class GALGAS_gtlExpression & inOperand5,
                                                                               const class GALGAS_gtlInstructionList & inOperand6,
                                                                               const class GALGAS_gtlInstructionList & inOperand7,
                                                                               const class GALGAS_gtlInstructionList & inOperand8,
                                                                               const class GALGAS_gtlInstructionList & inOperand9
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlForeachStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setAfterList (class GALGAS_gtlInstructionList inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setBeforeList (class GALGAS_gtlInstructionList inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setBetweenList (class GALGAS_gtlInstructionList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setDoList (class GALGAS_gtlInstructionList inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIndexName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIterable (class GALGAS_gtlExpression inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setKeyName (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setVariableName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_afterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_beforeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_betweenList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_doList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_indexName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_iterable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_keyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_variableName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlForeachStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlForeachStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlForeachStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlForeachStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_keyName ;
  public : GALGAS_lstring mProperty_variableName ;
  public : GALGAS_lstring mProperty_indexName ;
  public : GALGAS_gtlExpression mProperty_iterable ;
  public : GALGAS_gtlInstructionList mProperty_beforeList ;
  public : GALGAS_gtlInstructionList mProperty_betweenList ;
  public : GALGAS_gtlInstructionList mProperty_afterList ;
  public : GALGAS_gtlInstructionList mProperty_doList ;

//--- Constructor
  public : cPtr_gtlForeachStatementInstruction (const GALGAS_location & in_where,
                                                const GALGAS_string & in_signature,
                                                const GALGAS_lstring & in_keyName,
                                                const GALGAS_lstring & in_variableName,
                                                const GALGAS_lstring & in_indexName,
                                                const GALGAS_gtlExpression & in_iterable,
                                                const GALGAS_gtlInstructionList & in_beforeList,
                                                const GALGAS_gtlInstructionList & in_betweenList,
                                                const GALGAS_gtlInstructionList & in_afterList,
                                                const GALGAS_gtlInstructionList & in_doList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_keyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setKeyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_variableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setVariableName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_indexName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIndexName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_iterable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIterable (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_beforeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setBeforeList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_betweenList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setBetweenList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_afterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setAfterList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_doList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setDoList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlForeachStatementInstruction iterateOnMap'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap) (const class cPtr_gtlForeachStatementInstruction * inObject,
                                                                                      class GALGAS_gtlContext & ioArgument0,
                                                                                      class GALGAS_gtlData & ioArgument1,
                                                                                      class GALGAS_library & ioArgument2,
                                                                                      class GALGAS_string & ioArgument3,
                                                                                      const class GALGAS_gtlMap constinArgument4,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_iterateOnMap (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_iterateOnMap (const class cPtr_gtlForeachStatementInstruction * inObject,
                                       GALGAS_gtlContext & io_context,
                                       GALGAS_gtlData & io_vars,
                                       GALGAS_library & io_lib,
                                       GALGAS_string & io_outputString,
                                       const GALGAS_gtlMap constin_iterableMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlForeachStatementInstruction iterateOnList'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList) (const class cPtr_gtlForeachStatementInstruction * inObject,
                                                                                       class GALGAS_gtlContext & ioArgument0,
                                                                                       class GALGAS_gtlData & ioArgument1,
                                                                                       class GALGAS_library & ioArgument2,
                                                                                       class GALGAS_string & ioArgument3,
                                                                                       const class GALGAS_gtlList constinArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_iterateOnList (const int32_t inClassIndex,
                                         extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_iterateOnList (const class cPtr_gtlForeachStatementInstruction * inObject,
                                        GALGAS_gtlContext & io_context,
                                        GALGAS_gtlData & io_vars,
                                        GALGAS_library & io_lib,
                                        GALGAS_string & io_outputString,
                                        const GALGAS_gtlList constin_iterableList,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlForeachStatementInstruction iterateOnSet'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet) (const class cPtr_gtlForeachStatementInstruction * inObject,
                                                                                      class GALGAS_gtlContext & ioArgument0,
                                                                                      class GALGAS_gtlData & ioArgument1,
                                                                                      class GALGAS_library & ioArgument2,
                                                                                      class GALGAS_string & ioArgument3,
                                                                                      const class GALGAS_gtlSet constinArgument4,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_iterateOnSet (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_iterateOnSet (const class cPtr_gtlForeachStatementInstruction * inObject,
                                       GALGAS_gtlContext & io_context,
                                       GALGAS_gtlData & io_vars,
                                       GALGAS_library & io_lib,
                                       GALGAS_string & io_outputString,
                                       const GALGAS_gtlSet constin_iterableSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlForStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlForStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlForStatementInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlForStatementInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlForStatementInstruction * ptr (void) const { return (const cPtr_gtlForStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlForStatementInstruction (const cPtr_gtlForStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlForStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlForStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_gtlExpressionList & inOperand3,
                                                                           const class GALGAS_gtlInstructionList & inOperand4,
                                                                           const class GALGAS_gtlInstructionList & inOperand5
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlForStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setBetweenList (class GALGAS_gtlInstructionList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setDoList (class GALGAS_gtlInstructionList inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIdentifier (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIterable (class GALGAS_gtlExpressionList inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_betweenList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_doList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_identifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpressionList getter_iterable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlForStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlForStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlForStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlForStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_identifier ;
  public : GALGAS_gtlExpressionList mProperty_iterable ;
  public : GALGAS_gtlInstructionList mProperty_betweenList ;
  public : GALGAS_gtlInstructionList mProperty_doList ;

//--- Constructor
  public : cPtr_gtlForStatementInstruction (const GALGAS_location & in_where,
                                            const GALGAS_string & in_signature,
                                            const GALGAS_lstring & in_identifier,
                                            const GALGAS_gtlExpressionList & in_iterable,
                                            const GALGAS_gtlInstructionList & in_betweenList,
                                            const GALGAS_gtlInstructionList & in_doList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_identifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIdentifier (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpressionList getter_iterable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIterable (GALGAS_gtlExpressionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_betweenList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setBetweenList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_doList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setDoList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLoopStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLoopStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlLoopStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlLoopStatementInstruction * ptr (void) const { return (const cPtr_gtlLoopStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlLoopStatementInstruction (const cPtr_gtlLoopStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlLoopStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlLoopStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_gtlExpression & inOperand3,
                                                                            const class GALGAS_gtlExpression & inOperand4,
                                                                            const class GALGAS_gtlExpression & inOperand5,
                                                                            const class GALGAS_sint_36__34_ & inOperand6,
                                                                            const class GALGAS_gtlInstructionList & inOperand7,
                                                                            const class GALGAS_gtlInstructionList & inOperand8,
                                                                            const class GALGAS_gtlInstructionList & inOperand9,
                                                                            const class GALGAS_gtlInstructionList & inOperand10
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlLoopStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setAfterList (class GALGAS_gtlInstructionList inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setBeforeList (class GALGAS_gtlInstructionList inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setBetweenList (class GALGAS_gtlInstructionList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setDoList (class GALGAS_gtlInstructionList inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIdentifier (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setStart (class GALGAS_gtlExpression inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setStep (class GALGAS_gtlExpression inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setStop (class GALGAS_gtlExpression inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setUpDown (class GALGAS_sint_36__34_ inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_afterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_beforeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_betweenList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_doList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_identifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_start (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_step (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_stop (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sint_36__34_ getter_upDown (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlLoopStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLoopStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLoopStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLoopStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_identifier ;
  public : GALGAS_gtlExpression mProperty_start ;
  public : GALGAS_gtlExpression mProperty_stop ;
  public : GALGAS_gtlExpression mProperty_step ;
  public : GALGAS_sint_36__34_ mProperty_upDown ;
  public : GALGAS_gtlInstructionList mProperty_beforeList ;
  public : GALGAS_gtlInstructionList mProperty_betweenList ;
  public : GALGAS_gtlInstructionList mProperty_afterList ;
  public : GALGAS_gtlInstructionList mProperty_doList ;

//--- Constructor
  public : cPtr_gtlLoopStatementInstruction (const GALGAS_location & in_where,
                                             const GALGAS_string & in_signature,
                                             const GALGAS_lstring & in_identifier,
                                             const GALGAS_gtlExpression & in_start,
                                             const GALGAS_gtlExpression & in_stop,
                                             const GALGAS_gtlExpression & in_step,
                                             const GALGAS_sint_36__34_ & in_upDown,
                                             const GALGAS_gtlInstructionList & in_beforeList,
                                             const GALGAS_gtlInstructionList & in_betweenList,
                                             const GALGAS_gtlInstructionList & in_afterList,
                                             const GALGAS_gtlInstructionList & in_doList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_identifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIdentifier (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_start (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setStart (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_stop (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setStop (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_step (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setStep (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_sint_36__34_ getter_upDown (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setUpDown (GALGAS_sint_36__34_ inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_beforeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setBeforeList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_betweenList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setBetweenList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_afterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setAfterList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_doList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setDoList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlRepeatStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlRepeatStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlRepeatStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlRepeatStatementInstruction * ptr (void) const { return (const cPtr_gtlRepeatStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlRepeatStatementInstruction (const cPtr_gtlRepeatStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlRepeatStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlRepeatStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_gtlExpression & inOperand2,
                                                                              const class GALGAS_gtlExpression & inOperand3,
                                                                              const class GALGAS_gtlInstructionList & inOperand4,
                                                                              const class GALGAS_gtlInstructionList & inOperand5
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlRepeatStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setCondition (class GALGAS_gtlExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setContinueList (class GALGAS_gtlInstructionList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setDoList (class GALGAS_gtlInstructionList inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setLimit (class GALGAS_gtlExpression inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_condition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_continueList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlInstructionList getter_doList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_limit (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlRepeatStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlRepeatStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlRepeatStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlRepeatStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlExpression mProperty_limit ;
  public : GALGAS_gtlExpression mProperty_condition ;
  public : GALGAS_gtlInstructionList mProperty_continueList ;
  public : GALGAS_gtlInstructionList mProperty_doList ;

//--- Constructor
  public : cPtr_gtlRepeatStatementInstruction (const GALGAS_location & in_where,
                                               const GALGAS_string & in_signature,
                                               const GALGAS_gtlExpression & in_limit,
                                               const GALGAS_gtlExpression & in_condition,
                                               const GALGAS_gtlInstructionList & in_continueList,
                                               const GALGAS_gtlInstructionList & in_doList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_limit (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setLimit (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_condition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setCondition (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_continueList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setContinueList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_doList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setDoList (GALGAS_gtlInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlErrorStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlErrorStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlErrorStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlErrorStatementInstruction * ptr (void) const { return (const cPtr_gtlErrorStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlErrorStatementInstruction (const cPtr_gtlErrorStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlErrorStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlErrorStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_gtlVarPath & inOperand2,
                                                                             const class GALGAS_bool & inOperand3,
                                                                             const class GALGAS_gtlExpression & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlErrorStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setErrorMessage (class GALGAS_gtlExpression inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setHereInstead (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIdentifier (class GALGAS_gtlVarPath inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_errorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_hereInstead (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlVarPath getter_identifier (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlErrorStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlErrorStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlErrorStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlErrorStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlVarPath mProperty_identifier ;
  public : GALGAS_bool mProperty_hereInstead ;
  public : GALGAS_gtlExpression mProperty_errorMessage ;

//--- Constructor
  public : cPtr_gtlErrorStatementInstruction (const GALGAS_location & in_where,
                                              const GALGAS_string & in_signature,
                                              const GALGAS_gtlVarPath & in_identifier,
                                              const GALGAS_bool & in_hereInstead,
                                              const GALGAS_gtlExpression & in_errorMessage
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlVarPath getter_identifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIdentifier (GALGAS_gtlVarPath inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_hereInstead (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setHereInstead (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_errorMessage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setErrorMessage (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlWarningStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlWarningStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlWarningStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlWarningStatementInstruction * ptr (void) const { return (const cPtr_gtlWarningStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlWarningStatementInstruction (const cPtr_gtlWarningStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlWarningStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlWarningStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_gtlVarPath & inOperand2,
                                                                               const class GALGAS_bool & inOperand3,
                                                                               const class GALGAS_gtlExpression & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlWarningStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setHereInstead (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIdentifier (class GALGAS_gtlVarPath inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setWarningMessage (class GALGAS_gtlExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_hereInstead (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlVarPath getter_identifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_warningMessage (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlWarningStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlWarningStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlWarningStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlWarningStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlVarPath mProperty_identifier ;
  public : GALGAS_bool mProperty_hereInstead ;
  public : GALGAS_gtlExpression mProperty_warningMessage ;

//--- Constructor
  public : cPtr_gtlWarningStatementInstruction (const GALGAS_location & in_where,
                                                const GALGAS_string & in_signature,
                                                const GALGAS_gtlVarPath & in_identifier,
                                                const GALGAS_bool & in_hereInstead,
                                                const GALGAS_gtlExpression & in_warningMessage
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlVarPath getter_identifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setIdentifier (GALGAS_gtlVarPath inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_hereInstead (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setHereInstead (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_warningMessage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setWarningMessage (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlSortStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlSortStatementInstruction : public GALGAS_gtlAbstractSortInstruction {
//--- Constructor
  public : GALGAS_gtlSortStatementInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlSortStatementInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlSortStatementInstruction * ptr (void) const { return (const cPtr_gtlSortStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlSortStatementInstruction (const cPtr_gtlSortStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlSortStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlSortStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_gtlVarPath & inOperand2,
                                                                            const class GALGAS_lsint & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlSortStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setOrder (class GALGAS_lsint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint getter_order (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlSortStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlSortStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlSortStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlSortStatementInstruction : public cPtr_gtlAbstractSortInstruction {
//--- Attributes
  public : GALGAS_lsint mProperty_order ;

//--- Constructor
  public : cPtr_gtlSortStatementInstruction (const GALGAS_location & in_where,
                                             const GALGAS_string & in_signature,
                                             const GALGAS_gtlVarPath & in_variablePath,
                                             const GALGAS_lsint & in_order
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint getter_order (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setOrder (GALGAS_lsint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlTabStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlTabStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlTabStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlTabStatementInstruction * ptr (void) const { return (const cPtr_gtlTabStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlTabStatementInstruction (const cPtr_gtlTabStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlTabStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlTabStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_gtlExpression & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlTabStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setTabValue (class GALGAS_gtlExpression inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_tabValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlTabStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlTabStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlTabStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlTabStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlExpression mProperty_tabValue ;

//--- Constructor
  public : cPtr_gtlTabStatementInstruction (const GALGAS_location & in_where,
                                            const GALGAS_string & in_signature,
                                            const GALGAS_gtlExpression & in_tabValue
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_tabValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setTabValue (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlSetterCallInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlSetterCallInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlSetterCallInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlSetterCallInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlSetterCallInstruction * ptr (void) const { return (const cPtr_gtlSetterCallInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlSetterCallInstruction (const cPtr_gtlSetterCallInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlSetterCallInstruction extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlSetterCallInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_gtlVarPath & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_gtlExpressionList & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlSetterCallInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setArguments (class GALGAS_gtlExpressionList inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setSetterName (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setTarget (class GALGAS_gtlVarPath inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpressionList getter_arguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_setterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlVarPath getter_target (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlSetterCallInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlSetterCallInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlSetterCallInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlSetterCallInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlVarPath mProperty_target ;
  public : GALGAS_lstring mProperty_setterName ;
  public : GALGAS_gtlExpressionList mProperty_arguments ;

//--- Constructor
  public : cPtr_gtlSetterCallInstruction (const GALGAS_location & in_where,
                                          const GALGAS_string & in_signature,
                                          const GALGAS_gtlVarPath & in_target,
                                          const GALGAS_lstring & in_setterName,
                                          const GALGAS_gtlExpressionList & in_arguments
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlVarPath getter_target (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setTarget (GALGAS_gtlVarPath inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_setterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setSetterName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpressionList getter_arguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setArguments (GALGAS_gtlExpressionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlInputStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlInputStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlInputStatementInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlInputStatementInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlInputStatementInstruction * ptr (void) const { return (const cPtr_gtlInputStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlInputStatementInstruction (const cPtr_gtlInputStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlInputStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlInputStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_gtlArgumentList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlInputStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setFormalArguments (class GALGAS_gtlArgumentList inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlArgumentList getter_formalArguments (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlInputStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlInputStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlInputStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlInputStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlArgumentList mProperty_formalArguments ;

//--- Constructor
  public : cPtr_gtlInputStatementInstruction (const GALGAS_location & in_where,
                                              const GALGAS_string & in_signature,
                                              const GALGAS_gtlArgumentList & in_formalArguments
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlArgumentList getter_formalArguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setFormalArguments (GALGAS_gtlArgumentList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlSetRandomSeedStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlSetRandomSeedStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlSetRandomSeedStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlSetRandomSeedStatementInstruction * ptr (void) const { return (const cPtr_gtlSetRandomSeedStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlSetRandomSeedStatementInstruction (const cPtr_gtlSetRandomSeedStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlSetRandomSeedStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlSetRandomSeedStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_gtlExpression & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlSetRandomSeedStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setExpressionProvided (class GALGAS_bool inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setSeedNumber (class GALGAS_gtlExpression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_expressionProvided (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_seedNumber (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlSetRandomSeedStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlSetRandomSeedStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlSetRandomSeedStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlSetRandomSeedStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_bool mProperty_expressionProvided ;
  public : GALGAS_gtlExpression mProperty_seedNumber ;

//--- Constructor
  public : cPtr_gtlSetRandomSeedStatementInstruction (const GALGAS_location & in_where,
                                                      const GALGAS_string & in_signature,
                                                      const GALGAS_bool & in_expressionProvided,
                                                      const GALGAS_gtlExpression & in_seedNumber
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_expressionProvided (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setExpressionProvided (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_seedNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setSeedNumber (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlExecutableEntity checkArguments'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlExecutableEntity_checkArguments) (const class cPtr_gtlExecutableEntity * inObject,
                                                                             const class GALGAS_location constinArgument0,
                                                                             const class GALGAS_gtlDataList constinArgument1,
                                                                             class GALGAS_gtlData & outArgument2,
                                                                             class GALGAS_bool & outArgument3,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkArguments (const int32_t inClassIndex,
                                          extensionMethodSignature_gtlExecutableEntity_checkArguments inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkArguments (const class cPtr_gtlExecutableEntity * inObject,
                                         const GALGAS_location constin_fromLocation,
                                         const GALGAS_gtlDataList constin_actualArguments,
                                         GALGAS_gtlData & out_entityVariableMap,
                                         GALGAS_bool & out_result,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlProcedure class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlProcedure : public cPtr_gtlExecutableEntity {
//--- Attributes

//--- Constructor
  public : cPtr_gtlProcedure (const GALGAS_location & in_where,
                              const GALGAS_lstring & in_name,
                              const GALGAS_gtlArgumentList & in_formalArguments,
                              const GALGAS_gtlInstructionList & in_instructions
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlProcedure call'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlProcedure_call) (const class cPtr_gtlProcedure * inObject,
                                                            class GALGAS_gtlContext & ioArgument0,
                                                            class GALGAS_library & ioArgument1,
                                                            class GALGAS_string & ioArgument2,
                                                            const class GALGAS_location constinArgument3,
                                                            const class GALGAS_gtlDataList constinArgument4,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_call (const int32_t inClassIndex,
                                extensionMethodSignature_gtlProcedure_call inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_call (const class cPtr_gtlProcedure * inObject,
                               GALGAS_gtlContext & io_context,
                               GALGAS_library & io_lib,
                               GALGAS_string & io_outputString,
                               const GALGAS_location constin_fromLocation,
                               const GALGAS_gtlDataList constin_actualArguments,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlFunction call'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlFunction_call) (const class cPtr_gtlFunction * inObject,
                                                                       const class GALGAS_location constinArgument0,
                                                                       class GALGAS_gtlContext inArgument1,
                                                                       class GALGAS_library inArgument2,
                                                                       const class GALGAS_gtlDataList constinArgument3,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_call (const int32_t inClassIndex,
                                enterExtensionGetter_gtlFunction_call inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_call (const cPtr_gtlFunction * inObject,
                                               const GALGAS_location constin_fromLocation,
                                               GALGAS_gtlContext in_context,
                                               GALGAS_library in_lib,
                                               const GALGAS_gtlDataList constin_actualArguments,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlGetter callGetter'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlGetter_callGetter) (const class cPtr_gtlGetter * inObject,
                                                                           const class GALGAS_location constinArgument0,
                                                                           class GALGAS_gtlContext inArgument1,
                                                                           class GALGAS_library inArgument2,
                                                                           const class GALGAS_gtlData constinArgument3,
                                                                           const class GALGAS_gtlDataList constinArgument4,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_callGetter (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlGetter_callGetter inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_callGetter (const cPtr_gtlGetter * inObject,
                                                     const GALGAS_location constin_fromLocation,
                                                     GALGAS_gtlContext in_context,
                                                     GALGAS_library in_lib,
                                                     const GALGAS_gtlData constin_target,
                                                     const GALGAS_gtlDataList constin_actualArguments,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlGetter typedName'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_lstring (*enterExtensionGetter_gtlGetter_typedName) (const class cPtr_gtlGetter * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_typedName (const int32_t inClassIndex,
                                     enterExtensionGetter_gtlGetter_typedName inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_typedName (const cPtr_gtlGetter * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlSetter callSetter'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_gtlSetter_callSetter) (const class cPtr_gtlSetter * inObject,
                                                               const class GALGAS_location constinArgument0,
                                                               class GALGAS_gtlContext inArgument1,
                                                               class GALGAS_library inArgument2,
                                                               class GALGAS_gtlData & ioArgument3,
                                                               const class GALGAS_gtlDataList constinArgument4,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_callSetter (const int32_t inClassIndex,
                                      extensionMethodSignature_gtlSetter_callSetter inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_callSetter (const class cPtr_gtlSetter * inObject,
                                     const GALGAS_location constin_fromLocation,
                                     GALGAS_gtlContext in_context,
                                     GALGAS_library in_lib,
                                     GALGAS_gtlData & io_target,
                                     const GALGAS_gtlDataList constin_actualArguments,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlSetter typedName'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_lstring (*enterExtensionGetter_gtlSetter_typedName) (const class cPtr_gtlSetter * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_typedName (const int32_t inClassIndex,
                                     enterExtensionGetter_gtlSetter_typedName inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_typedName (const cPtr_gtlSetter * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlModule class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlModule : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_gtlModule (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlModule constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlModule * ptr (void) const { return (const cPtr_gtlModule *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlModule (const cPtr_gtlModule * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlModule extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlModule constructor_new (const class GALGAS_lstring & inOperand0,
                                                          const class GALGAS_gtlProcMap & inOperand1,
                                                          const class GALGAS_gtlFuncMap & inOperand2
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlModule & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setFunctions (class GALGAS_gtlFuncMap inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setName (class GALGAS_lstring inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setProcedures (class GALGAS_gtlProcMap inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlFuncMap getter_functions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_name (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlProcMap getter_procedures (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlModule class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlModule ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlModule class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlModule : public acPtr_class {
//--- Attributes
  public : GALGAS_lstring mProperty_name ;
  public : GALGAS_gtlProcMap mProperty_procedures ;
  public : GALGAS_gtlFuncMap mProperty_functions ;

//--- Constructor
  public : cPtr_gtlModule (const GALGAS_lstring & in_name,
                           const GALGAS_gtlProcMap & in_procedures,
                           const GALGAS_gtlFuncMap & in_functions
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_name (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlProcMap getter_procedures (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setProcedures (GALGAS_gtlProcMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlFuncMap getter_functions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setFunctions (GALGAS_gtlFuncMap inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlVarItemField lstringPath'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_lstring (*enterExtensionGetter_gtlVarItemField_lstringPath) (const class cPtr_gtlVarItemField * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_lstringPath (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlVarItemField_lstringPath inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_lstringPath (const cPtr_gtlVarItemField * inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlExpression location'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_location (*enterExtensionGetter_gtlExpression_location) (const class cPtr_gtlExpression * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_gtlExpression_location inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_location callExtensionGetter_location (const cPtr_gtlExpression * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlEmptyExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlEmptyExpression : public GALGAS_gtlExpression {
//--- Constructor
  public : GALGAS_gtlEmptyExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlEmptyExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlEmptyExpression * ptr (void) const { return (const cPtr_gtlEmptyExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlEmptyExpression (const cPtr_gtlEmptyExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlEmptyExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlEmptyExpression constructor_new (const class GALGAS_location & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlEmptyExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlEmptyExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlEmptyExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlEmptyExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlEmptyExpression : public cPtr_gtlExpression {
//--- Attributes

//--- Constructor
  public : cPtr_gtlEmptyExpression (const GALGAS_location & in_where
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlExpression eval'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlExpression_eval) (const class cPtr_gtlExpression * inObject,
                                                                         const class GALGAS_gtlContext constinArgument0,
                                                                         const class GALGAS_gtlData constinArgument1,
                                                                         const class GALGAS_library constinArgument2,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_eval (const int32_t inClassIndex,
                                enterExtensionGetter_gtlExpression_eval inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_eval (const class cPtr_gtlExpression * inObject,
                                               const GALGAS_gtlContext constin_context,
                                               const GALGAS_gtlData constin_vars,
                                               const GALGAS_library constin_lib,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

