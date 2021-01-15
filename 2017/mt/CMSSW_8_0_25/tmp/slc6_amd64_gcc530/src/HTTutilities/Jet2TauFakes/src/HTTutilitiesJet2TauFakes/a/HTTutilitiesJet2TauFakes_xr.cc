// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc530dIsrcdIHTTutilitiesdIJet2TauFakesdIsrcdIHTTutilitiesJet2TauFakesdIadIHTTutilitiesJet2TauFakes_xr

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "src/HTTutilities/Jet2TauFakes/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *IFunctionWrapper_Dictionary();
   static void IFunctionWrapper_TClassManip(TClass*);
   static void *new_IFunctionWrapper(void *p = 0);
   static void *newArray_IFunctionWrapper(Long_t size, void *p);
   static void delete_IFunctionWrapper(void *p);
   static void deleteArray_IFunctionWrapper(void *p);
   static void destruct_IFunctionWrapper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IFunctionWrapper*)
   {
      ::IFunctionWrapper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IFunctionWrapper));
      static ::ROOT::TGenericClassInfo 
         instance("IFunctionWrapper", "HTTutilities/Jet2TauFakes/interface/IFunctionWrapper.h", 12,
                  typeid(::IFunctionWrapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &IFunctionWrapper_Dictionary, isa_proxy, 0,
                  sizeof(::IFunctionWrapper) );
      instance.SetNew(&new_IFunctionWrapper);
      instance.SetNewArray(&newArray_IFunctionWrapper);
      instance.SetDelete(&delete_IFunctionWrapper);
      instance.SetDeleteArray(&deleteArray_IFunctionWrapper);
      instance.SetDestructor(&destruct_IFunctionWrapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IFunctionWrapper*)
   {
      return GenerateInitInstanceLocal((::IFunctionWrapper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::IFunctionWrapper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IFunctionWrapper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::IFunctionWrapper*)0x0)->GetClass();
      IFunctionWrapper_TClassManip(theClass);
   return theClass;
   }

   static void IFunctionWrapper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WrapperTGraph_Dictionary();
   static void WrapperTGraph_TClassManip(TClass*);
   static void *new_WrapperTGraph(void *p = 0);
   static void *newArray_WrapperTGraph(Long_t size, void *p);
   static void delete_WrapperTGraph(void *p);
   static void deleteArray_WrapperTGraph(void *p);
   static void destruct_WrapperTGraph(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WrapperTGraph*)
   {
      ::WrapperTGraph *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WrapperTGraph));
      static ::ROOT::TGenericClassInfo 
         instance("WrapperTGraph", "HTTutilities/Jet2TauFakes/interface/WrapperTGraph.h", 9,
                  typeid(::WrapperTGraph), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WrapperTGraph_Dictionary, isa_proxy, 0,
                  sizeof(::WrapperTGraph) );
      instance.SetNew(&new_WrapperTGraph);
      instance.SetNewArray(&newArray_WrapperTGraph);
      instance.SetDelete(&delete_WrapperTGraph);
      instance.SetDeleteArray(&deleteArray_WrapperTGraph);
      instance.SetDestructor(&destruct_WrapperTGraph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WrapperTGraph*)
   {
      return GenerateInitInstanceLocal((::WrapperTGraph*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WrapperTGraph*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WrapperTGraph_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WrapperTGraph*)0x0)->GetClass();
      WrapperTGraph_TClassManip(theClass);
   return theClass;
   }

   static void WrapperTGraph_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WrapperTFormula_Dictionary();
   static void WrapperTFormula_TClassManip(TClass*);
   static void *new_WrapperTFormula(void *p = 0);
   static void *newArray_WrapperTFormula(Long_t size, void *p);
   static void delete_WrapperTFormula(void *p);
   static void deleteArray_WrapperTFormula(void *p);
   static void destruct_WrapperTFormula(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WrapperTFormula*)
   {
      ::WrapperTFormula *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WrapperTFormula));
      static ::ROOT::TGenericClassInfo 
         instance("WrapperTFormula", "HTTutilities/Jet2TauFakes/interface/WrapperTFormula.h", 9,
                  typeid(::WrapperTFormula), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WrapperTFormula_Dictionary, isa_proxy, 0,
                  sizeof(::WrapperTFormula) );
      instance.SetNew(&new_WrapperTFormula);
      instance.SetNewArray(&newArray_WrapperTFormula);
      instance.SetDelete(&delete_WrapperTFormula);
      instance.SetDeleteArray(&deleteArray_WrapperTFormula);
      instance.SetDestructor(&destruct_WrapperTFormula);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WrapperTFormula*)
   {
      return GenerateInitInstanceLocal((::WrapperTFormula*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WrapperTFormula*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WrapperTFormula_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WrapperTFormula*)0x0)->GetClass();
      WrapperTFormula_TClassManip(theClass);
   return theClass;
   }

   static void WrapperTFormula_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WrapperTH1D_Dictionary();
   static void WrapperTH1D_TClassManip(TClass*);
   static void *new_WrapperTH1D(void *p = 0);
   static void *newArray_WrapperTH1D(Long_t size, void *p);
   static void delete_WrapperTH1D(void *p);
   static void deleteArray_WrapperTH1D(void *p);
   static void destruct_WrapperTH1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WrapperTH1D*)
   {
      ::WrapperTH1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WrapperTH1D));
      static ::ROOT::TGenericClassInfo 
         instance("WrapperTH1D", "HTTutilities/Jet2TauFakes/interface/WrapperTH1D.h", 9,
                  typeid(::WrapperTH1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WrapperTH1D_Dictionary, isa_proxy, 0,
                  sizeof(::WrapperTH1D) );
      instance.SetNew(&new_WrapperTH1D);
      instance.SetNewArray(&newArray_WrapperTH1D);
      instance.SetDelete(&delete_WrapperTH1D);
      instance.SetDeleteArray(&deleteArray_WrapperTH1D);
      instance.SetDestructor(&destruct_WrapperTH1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WrapperTH1D*)
   {
      return GenerateInitInstanceLocal((::WrapperTH1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WrapperTH1D*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WrapperTH1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WrapperTH1D*)0x0)->GetClass();
      WrapperTH1D_TClassManip(theClass);
   return theClass;
   }

   static void WrapperTH1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WrapperTH2F_Dictionary();
   static void WrapperTH2F_TClassManip(TClass*);
   static void *new_WrapperTH2F(void *p = 0);
   static void *newArray_WrapperTH2F(Long_t size, void *p);
   static void delete_WrapperTH2F(void *p);
   static void deleteArray_WrapperTH2F(void *p);
   static void destruct_WrapperTH2F(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WrapperTH2F*)
   {
      ::WrapperTH2F *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WrapperTH2F));
      static ::ROOT::TGenericClassInfo 
         instance("WrapperTH2F", "HTTutilities/Jet2TauFakes/interface/WrapperTH2F.h", 9,
                  typeid(::WrapperTH2F), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WrapperTH2F_Dictionary, isa_proxy, 0,
                  sizeof(::WrapperTH2F) );
      instance.SetNew(&new_WrapperTH2F);
      instance.SetNewArray(&newArray_WrapperTH2F);
      instance.SetDelete(&delete_WrapperTH2F);
      instance.SetDeleteArray(&deleteArray_WrapperTH2F);
      instance.SetDestructor(&destruct_WrapperTH2F);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WrapperTH2F*)
   {
      return GenerateInitInstanceLocal((::WrapperTH2F*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WrapperTH2F*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WrapperTH2F_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WrapperTH2F*)0x0)->GetClass();
      WrapperTH2F_TClassManip(theClass);
   return theClass;
   }

   static void WrapperTH2F_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WrapperTH2D_Dictionary();
   static void WrapperTH2D_TClassManip(TClass*);
   static void *new_WrapperTH2D(void *p = 0);
   static void *newArray_WrapperTH2D(Long_t size, void *p);
   static void delete_WrapperTH2D(void *p);
   static void deleteArray_WrapperTH2D(void *p);
   static void destruct_WrapperTH2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WrapperTH2D*)
   {
      ::WrapperTH2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WrapperTH2D));
      static ::ROOT::TGenericClassInfo 
         instance("WrapperTH2D", "HTTutilities/Jet2TauFakes/interface/WrapperTH2D.h", 9,
                  typeid(::WrapperTH2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WrapperTH2D_Dictionary, isa_proxy, 0,
                  sizeof(::WrapperTH2D) );
      instance.SetNew(&new_WrapperTH2D);
      instance.SetNewArray(&newArray_WrapperTH2D);
      instance.SetDelete(&delete_WrapperTH2D);
      instance.SetDeleteArray(&deleteArray_WrapperTH2D);
      instance.SetDestructor(&destruct_WrapperTH2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WrapperTH2D*)
   {
      return GenerateInitInstanceLocal((::WrapperTH2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WrapperTH2D*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WrapperTH2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WrapperTH2D*)0x0)->GetClass();
      WrapperTH2D_TClassManip(theClass);
   return theClass;
   }

   static void WrapperTH2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WrapperTH3D_Dictionary();
   static void WrapperTH3D_TClassManip(TClass*);
   static void *new_WrapperTH3D(void *p = 0);
   static void *newArray_WrapperTH3D(Long_t size, void *p);
   static void delete_WrapperTH3D(void *p);
   static void deleteArray_WrapperTH3D(void *p);
   static void destruct_WrapperTH3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WrapperTH3D*)
   {
      ::WrapperTH3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WrapperTH3D));
      static ::ROOT::TGenericClassInfo 
         instance("WrapperTH3D", "HTTutilities/Jet2TauFakes/interface/WrapperTH3D.h", 9,
                  typeid(::WrapperTH3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WrapperTH3D_Dictionary, isa_proxy, 0,
                  sizeof(::WrapperTH3D) );
      instance.SetNew(&new_WrapperTH3D);
      instance.SetNewArray(&newArray_WrapperTH3D);
      instance.SetDelete(&delete_WrapperTH3D);
      instance.SetDeleteArray(&deleteArray_WrapperTH3D);
      instance.SetDestructor(&destruct_WrapperTH3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WrapperTH3D*)
   {
      return GenerateInitInstanceLocal((::WrapperTH3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WrapperTH3D*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WrapperTH3D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WrapperTH3D*)0x0)->GetClass();
      WrapperTH3D_TClassManip(theClass);
   return theClass;
   }

   static void WrapperTH3D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_FakeFactor(void *p = 0);
   static void *newArray_FakeFactor(Long_t size, void *p);
   static void delete_FakeFactor(void *p);
   static void deleteArray_FakeFactor(void *p);
   static void destruct_FakeFactor(void *p);
   static void streamer_FakeFactor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FakeFactor*)
   {
      ::FakeFactor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FakeFactor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("FakeFactor", ::FakeFactor::Class_Version(), "HTTutilities/Jet2TauFakes/interface/FakeFactor.h", 16,
                  typeid(::FakeFactor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FakeFactor::Dictionary, isa_proxy, 16,
                  sizeof(::FakeFactor) );
      instance.SetNew(&new_FakeFactor);
      instance.SetNewArray(&newArray_FakeFactor);
      instance.SetDelete(&delete_FakeFactor);
      instance.SetDeleteArray(&deleteArray_FakeFactor);
      instance.SetDestructor(&destruct_FakeFactor);
      instance.SetStreamerFunc(&streamer_FakeFactor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FakeFactor*)
   {
      return GenerateInitInstanceLocal((::FakeFactor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::FakeFactor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr FakeFactor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FakeFactor::Class_Name()
{
   return "FakeFactor";
}

//______________________________________________________________________________
const char *FakeFactor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FakeFactor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FakeFactor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FakeFactor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FakeFactor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FakeFactor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FakeFactor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FakeFactor*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IFunctionWrapper(void *p) {
      return  p ? new(p) ::IFunctionWrapper : new ::IFunctionWrapper;
   }
   static void *newArray_IFunctionWrapper(Long_t nElements, void *p) {
      return p ? new(p) ::IFunctionWrapper[nElements] : new ::IFunctionWrapper[nElements];
   }
   // Wrapper around operator delete
   static void delete_IFunctionWrapper(void *p) {
      delete ((::IFunctionWrapper*)p);
   }
   static void deleteArray_IFunctionWrapper(void *p) {
      delete [] ((::IFunctionWrapper*)p);
   }
   static void destruct_IFunctionWrapper(void *p) {
      typedef ::IFunctionWrapper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IFunctionWrapper

namespace ROOT {
   // Wrappers around operator new
   static void *new_WrapperTGraph(void *p) {
      return  p ? new(p) ::WrapperTGraph : new ::WrapperTGraph;
   }
   static void *newArray_WrapperTGraph(Long_t nElements, void *p) {
      return p ? new(p) ::WrapperTGraph[nElements] : new ::WrapperTGraph[nElements];
   }
   // Wrapper around operator delete
   static void delete_WrapperTGraph(void *p) {
      delete ((::WrapperTGraph*)p);
   }
   static void deleteArray_WrapperTGraph(void *p) {
      delete [] ((::WrapperTGraph*)p);
   }
   static void destruct_WrapperTGraph(void *p) {
      typedef ::WrapperTGraph current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WrapperTGraph

namespace ROOT {
   // Wrappers around operator new
   static void *new_WrapperTFormula(void *p) {
      return  p ? new(p) ::WrapperTFormula : new ::WrapperTFormula;
   }
   static void *newArray_WrapperTFormula(Long_t nElements, void *p) {
      return p ? new(p) ::WrapperTFormula[nElements] : new ::WrapperTFormula[nElements];
   }
   // Wrapper around operator delete
   static void delete_WrapperTFormula(void *p) {
      delete ((::WrapperTFormula*)p);
   }
   static void deleteArray_WrapperTFormula(void *p) {
      delete [] ((::WrapperTFormula*)p);
   }
   static void destruct_WrapperTFormula(void *p) {
      typedef ::WrapperTFormula current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WrapperTFormula

namespace ROOT {
   // Wrappers around operator new
   static void *new_WrapperTH1D(void *p) {
      return  p ? new(p) ::WrapperTH1D : new ::WrapperTH1D;
   }
   static void *newArray_WrapperTH1D(Long_t nElements, void *p) {
      return p ? new(p) ::WrapperTH1D[nElements] : new ::WrapperTH1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_WrapperTH1D(void *p) {
      delete ((::WrapperTH1D*)p);
   }
   static void deleteArray_WrapperTH1D(void *p) {
      delete [] ((::WrapperTH1D*)p);
   }
   static void destruct_WrapperTH1D(void *p) {
      typedef ::WrapperTH1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WrapperTH1D

namespace ROOT {
   // Wrappers around operator new
   static void *new_WrapperTH2F(void *p) {
      return  p ? new(p) ::WrapperTH2F : new ::WrapperTH2F;
   }
   static void *newArray_WrapperTH2F(Long_t nElements, void *p) {
      return p ? new(p) ::WrapperTH2F[nElements] : new ::WrapperTH2F[nElements];
   }
   // Wrapper around operator delete
   static void delete_WrapperTH2F(void *p) {
      delete ((::WrapperTH2F*)p);
   }
   static void deleteArray_WrapperTH2F(void *p) {
      delete [] ((::WrapperTH2F*)p);
   }
   static void destruct_WrapperTH2F(void *p) {
      typedef ::WrapperTH2F current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WrapperTH2F

namespace ROOT {
   // Wrappers around operator new
   static void *new_WrapperTH2D(void *p) {
      return  p ? new(p) ::WrapperTH2D : new ::WrapperTH2D;
   }
   static void *newArray_WrapperTH2D(Long_t nElements, void *p) {
      return p ? new(p) ::WrapperTH2D[nElements] : new ::WrapperTH2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_WrapperTH2D(void *p) {
      delete ((::WrapperTH2D*)p);
   }
   static void deleteArray_WrapperTH2D(void *p) {
      delete [] ((::WrapperTH2D*)p);
   }
   static void destruct_WrapperTH2D(void *p) {
      typedef ::WrapperTH2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WrapperTH2D

namespace ROOT {
   // Wrappers around operator new
   static void *new_WrapperTH3D(void *p) {
      return  p ? new(p) ::WrapperTH3D : new ::WrapperTH3D;
   }
   static void *newArray_WrapperTH3D(Long_t nElements, void *p) {
      return p ? new(p) ::WrapperTH3D[nElements] : new ::WrapperTH3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_WrapperTH3D(void *p) {
      delete ((::WrapperTH3D*)p);
   }
   static void deleteArray_WrapperTH3D(void *p) {
      delete [] ((::WrapperTH3D*)p);
   }
   static void destruct_WrapperTH3D(void *p) {
      typedef ::WrapperTH3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WrapperTH3D

//______________________________________________________________________________
void FakeFactor::Streamer(TBuffer &R__b)
{
   // Stream an object of class FakeFactor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FakeFactor::Class(),this);
   } else {
      R__b.WriteClassBuffer(FakeFactor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FakeFactor(void *p) {
      return  p ? new(p) ::FakeFactor : new ::FakeFactor;
   }
   static void *newArray_FakeFactor(Long_t nElements, void *p) {
      return p ? new(p) ::FakeFactor[nElements] : new ::FakeFactor[nElements];
   }
   // Wrapper around operator delete
   static void delete_FakeFactor(void *p) {
      delete ((::FakeFactor*)p);
   }
   static void deleteArray_FakeFactor(void *p) {
      delete [] ((::FakeFactor*)p);
   }
   static void destruct_FakeFactor(void *p) {
      typedef ::FakeFactor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FakeFactor(TBuffer &buf, void *obj) {
      ((::FakeFactor*)obj)->::FakeFactor::Streamer(buf);
   }
} // end of namespace ROOT for class ::FakeFactor

namespace ROOT {
   static TClass *vectorlEvectorlEunsignedsPlonggRsPgR_Dictionary();
   static void vectorlEvectorlEunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEunsignedsPlonggRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEunsignedsPlonggRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEunsignedsPlonggRsPgR(void *p);
   static void destruct_vectorlEvectorlEunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<unsigned long> >*)
   {
      vector<vector<unsigned long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<unsigned long> >", -2, "vector", 214,
                  typeid(vector<vector<unsigned long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEunsignedsPlonggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<unsigned long> >) );
      instance.SetNew(&new_vectorlEvectorlEunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEunsignedsPlonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<unsigned long> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<unsigned long> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<unsigned long> >*)0x0)->GetClass();
      vectorlEvectorlEunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned long> > : new vector<vector<unsigned long> >;
   }
   static void *newArray_vectorlEvectorlEunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned long> >[nElements] : new vector<vector<unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEunsignedsPlonggRsPgR(void *p) {
      delete ((vector<vector<unsigned long> >*)p);
   }
   static void deleteArray_vectorlEvectorlEunsignedsPlonggRsPgR(void *p) {
      delete [] ((vector<vector<unsigned long> >*)p);
   }
   static void destruct_vectorlEvectorlEunsignedsPlonggRsPgR(void *p) {
      typedef vector<vector<unsigned long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<unsigned long> >

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = 0);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 214,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned long>*)0x0)->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete ((vector<unsigned long>*)p);
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] ((vector<unsigned long>*)p);
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR_Dictionary();
   static void maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<vector<unsigned long> > >*)
   {
      map<string,vector<vector<unsigned long> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<vector<unsigned long> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<vector<unsigned long> > >", -2, "map", 96,
                  typeid(map<string,vector<vector<unsigned long> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<vector<unsigned long> > >) );
      instance.SetNew(&new_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<vector<unsigned long> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<vector<unsigned long> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<vector<unsigned long> > >*)0x0)->GetClass();
      maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<vector<unsigned long> > > : new map<string,vector<vector<unsigned long> > >;
   }
   static void *newArray_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<vector<unsigned long> > >[nElements] : new map<string,vector<vector<unsigned long> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(void *p) {
      delete ((map<string,vector<vector<unsigned long> > >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(void *p) {
      delete [] ((map<string,vector<vector<unsigned long> > >*)p);
   }
   static void destruct_maplEstringcOvectorlEvectorlEunsignedsPlonggRsPgRsPgR(void *p) {
      typedef map<string,vector<vector<unsigned long> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<vector<unsigned long> > >

namespace ROOT {
   static TClass *maplEstringcOvectorlEunsignedsPlonggRsPgR_Dictionary();
   static void maplEstringcOvectorlEunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEunsignedsPlonggRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEunsignedsPlonggRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEunsignedsPlonggRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<unsigned long> >*)
   {
      map<string,vector<unsigned long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<unsigned long> >", -2, "map", 96,
                  typeid(map<string,vector<unsigned long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEunsignedsPlonggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<unsigned long> >) );
      instance.SetNew(&new_maplEstringcOvectorlEunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEunsignedsPlonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<unsigned long> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<unsigned long> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<unsigned long> >*)0x0)->GetClass();
      maplEstringcOvectorlEunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<unsigned long> > : new map<string,vector<unsigned long> >;
   }
   static void *newArray_maplEstringcOvectorlEunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<unsigned long> >[nElements] : new map<string,vector<unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEunsignedsPlonggRsPgR(void *p) {
      delete ((map<string,vector<unsigned long> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEunsignedsPlonggRsPgR(void *p) {
      delete [] ((map<string,vector<unsigned long> >*)p);
   }
   static void destruct_maplEstringcOvectorlEunsignedsPlonggRsPgR(void *p) {
      typedef map<string,vector<unsigned long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<unsigned long> >

namespace {
  void TriggerDictionaryInitialization_HTTutilitiesJet2TauFakes_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/mnt/hephy/cms/suman.chatterjee/FakeFactor_MSSM/FF_derivation/AutomaticSubmission/2017/mt/CMSSW_8_0_25/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/cms/cmssw/CMSSW_8_0_25/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/pcre/8.37/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/bz2lib/1.0.6/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/mnt/hephy/cms/suman.chatterjee/FakeFactor_MSSM/FF_derivation/AutomaticSubmission/2017/mt/CMSSW_8_0_25/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "HTTutilitiesJet2TauFakes_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$HTTutilities/Jet2TauFakes/interface/IFunctionWrapper.h")))  IFunctionWrapper;
class __attribute__((annotate("$clingAutoload$HTTutilities/Jet2TauFakes/interface/WrapperTGraph.h")))  WrapperTGraph;
class __attribute__((annotate("$clingAutoload$HTTutilities/Jet2TauFakes/interface/WrapperTFormula.h")))  WrapperTFormula;
class __attribute__((annotate("$clingAutoload$HTTutilities/Jet2TauFakes/interface/WrapperTH1D.h")))  WrapperTH1D;
class __attribute__((annotate("$clingAutoload$HTTutilities/Jet2TauFakes/interface/WrapperTH2F.h")))  WrapperTH2F;
class __attribute__((annotate("$clingAutoload$HTTutilities/Jet2TauFakes/interface/WrapperTH2D.h")))  WrapperTH2D;
class __attribute__((annotate("$clingAutoload$HTTutilities/Jet2TauFakes/interface/WrapperTH3D.h")))  WrapperTH3D;
class __attribute__((annotate("$clingAutoload$HTTutilities/Jet2TauFakes/interface/FakeFactor.h")))  FakeFactor;
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace std{template <typename > class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "HTTutilitiesJet2TauFakes_xr dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef CMS_DICT_IMPL
  #define CMS_DICT_IMPL 1
#endif
#ifndef _REENTRANT
  #define _REENTRANT 1
#endif
#ifndef GNUSOURCE
  #define GNUSOURCE 1
#endif
#ifndef __STRICT_ANSI__
  #define __STRICT_ANSI__ 1
#endif
#ifndef GNU_GCC
  #define GNU_GCC 1
#endif
#ifndef _GNU_SOURCE
  #define _GNU_SOURCE 1
#endif
#ifndef CMSSW_GIT_HASH
  #define CMSSW_GIT_HASH "CMSSW_8_0_25"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_8_0_25"
#endif
#ifndef CMSSW_REFLEX_DICT
  #define CMSSW_REFLEX_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#define G__DICTIONARY

#include "HTTutilities/Jet2TauFakes/interface/IFunctionWrapper.h"
#include "HTTutilities/Jet2TauFakes/interface/WrapperTFormula.h"
#include "HTTutilities/Jet2TauFakes/interface/WrapperTGraph.h"
#include "HTTutilities/Jet2TauFakes/interface/WrapperTH1D.h"
#include "HTTutilities/Jet2TauFakes/interface/WrapperTH2F.h"
#include "HTTutilities/Jet2TauFakes/interface/WrapperTH2D.h"
#include "HTTutilities/Jet2TauFakes/interface/WrapperTH3D.h"
#include "HTTutilities/Jet2TauFakes/interface/FakeFactor.h"

#include <map>
#include <vector>
#include <string>


namespace 
{
    struct HTTutilities_Jet2TauFakes 
    {
        IFunctionWrapper ifctw;
        WrapperTGraph wtgr;
        WrapperTFormula wtfo;
        WrapperTH1D wth1d;
        WrapperTH2F wth2f;
        WrapperTH2D wth2d;
        WrapperTH3D wth3d;

        std::map<std::string, std::vector<size_t>> m1;
        std::map<std::string, std::vector<std::vector<size_t>>> m2;

        FakeFactor ff;
    };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"FakeFactor", payloadCode, "@",
"IFunctionWrapper", payloadCode, "@",
"WrapperTFormula", payloadCode, "@",
"WrapperTGraph", payloadCode, "@",
"WrapperTH1D", payloadCode, "@",
"WrapperTH2D", payloadCode, "@",
"WrapperTH2F", payloadCode, "@",
"WrapperTH3D", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("HTTutilitiesJet2TauFakes_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_HTTutilitiesJet2TauFakes_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_HTTutilitiesJet2TauFakes_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_HTTutilitiesJet2TauFakes_xr() {
  TriggerDictionaryInitialization_HTTutilitiesJet2TauFakes_xr_Impl();
}
