// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc7_amd64_gcc530dIsrcdISMPJdIAnalysisFWdIsrcdISMPJAnalysisFWdIadISMPJAnalysisFW_xr

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
#include "src/SMPJ/AnalysisFW/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *QCDMET_Dictionary();
   static void QCDMET_TClassManip(TClass*);
   static void *new_QCDMET(void *p = 0);
   static void *newArray_QCDMET(Long_t size, void *p);
   static void delete_QCDMET(void *p);
   static void deleteArray_QCDMET(void *p);
   static void destruct_QCDMET(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::QCDMET*)
   {
      ::QCDMET *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::QCDMET));
      static ::ROOT::TGenericClassInfo 
         instance("QCDMET", "SMPJ/AnalysisFW/interface/QCDMET.h", 7,
                  typeid(::QCDMET), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &QCDMET_Dictionary, isa_proxy, 0,
                  sizeof(::QCDMET) );
      instance.SetNew(&new_QCDMET);
      instance.SetNewArray(&newArray_QCDMET);
      instance.SetDelete(&delete_QCDMET);
      instance.SetDeleteArray(&deleteArray_QCDMET);
      instance.SetDestructor(&destruct_QCDMET);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::QCDMET*)
   {
      return GenerateInitInstanceLocal((::QCDMET*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::QCDMET*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *QCDMET_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::QCDMET*)0x0)->GetClass();
      QCDMET_TClassManip(theClass);
   return theClass;
   }

   static void QCDMET_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *QCDJet_Dictionary();
   static void QCDJet_TClassManip(TClass*);
   static void *new_QCDJet(void *p = 0);
   static void *newArray_QCDJet(Long_t size, void *p);
   static void delete_QCDJet(void *p);
   static void deleteArray_QCDJet(void *p);
   static void destruct_QCDJet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::QCDJet*)
   {
      ::QCDJet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::QCDJet));
      static ::ROOT::TGenericClassInfo 
         instance("QCDJet", "SMPJ/AnalysisFW/interface/QCDJet.h", 8,
                  typeid(::QCDJet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &QCDJet_Dictionary, isa_proxy, 0,
                  sizeof(::QCDJet) );
      instance.SetNew(&new_QCDJet);
      instance.SetNewArray(&newArray_QCDJet);
      instance.SetDelete(&delete_QCDJet);
      instance.SetDeleteArray(&deleteArray_QCDJet);
      instance.SetDestructor(&destruct_QCDJet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::QCDJet*)
   {
      return GenerateInitInstanceLocal((::QCDJet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::QCDJet*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *QCDJet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::QCDJet*)0x0)->GetClass();
      QCDJet_TClassManip(theClass);
   return theClass;
   }

   static void QCDJet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *QCDPFJet_Dictionary();
   static void QCDPFJet_TClassManip(TClass*);
   static void *new_QCDPFJet(void *p = 0);
   static void *newArray_QCDPFJet(Long_t size, void *p);
   static void delete_QCDPFJet(void *p);
   static void deleteArray_QCDPFJet(void *p);
   static void destruct_QCDPFJet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::QCDPFJet*)
   {
      ::QCDPFJet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::QCDPFJet));
      static ::ROOT::TGenericClassInfo 
         instance("QCDPFJet", "SMPJ/AnalysisFW/interface/QCDPFJet.h", 9,
                  typeid(::QCDPFJet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &QCDPFJet_Dictionary, isa_proxy, 0,
                  sizeof(::QCDPFJet) );
      instance.SetNew(&new_QCDPFJet);
      instance.SetNewArray(&newArray_QCDPFJet);
      instance.SetDelete(&delete_QCDPFJet);
      instance.SetDeleteArray(&deleteArray_QCDPFJet);
      instance.SetDestructor(&destruct_QCDPFJet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::QCDPFJet*)
   {
      return GenerateInitInstanceLocal((::QCDPFJet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::QCDPFJet*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *QCDPFJet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::QCDPFJet*)0x0)->GetClass();
      QCDPFJet_TClassManip(theClass);
   return theClass;
   }

   static void QCDPFJet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *QCDPFJetBTag_Dictionary();
   static void QCDPFJetBTag_TClassManip(TClass*);
   static void *new_QCDPFJetBTag(void *p = 0);
   static void *newArray_QCDPFJetBTag(Long_t size, void *p);
   static void delete_QCDPFJetBTag(void *p);
   static void deleteArray_QCDPFJetBTag(void *p);
   static void destruct_QCDPFJetBTag(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::QCDPFJetBTag*)
   {
      ::QCDPFJetBTag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::QCDPFJetBTag));
      static ::ROOT::TGenericClassInfo 
         instance("QCDPFJetBTag", "SMPJ/AnalysisFW/interface/QCDPFJetBTag.h", 8,
                  typeid(::QCDPFJetBTag), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &QCDPFJetBTag_Dictionary, isa_proxy, 0,
                  sizeof(::QCDPFJetBTag) );
      instance.SetNew(&new_QCDPFJetBTag);
      instance.SetNewArray(&newArray_QCDPFJetBTag);
      instance.SetDelete(&delete_QCDPFJetBTag);
      instance.SetDeleteArray(&deleteArray_QCDPFJetBTag);
      instance.SetDestructor(&destruct_QCDPFJetBTag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::QCDPFJetBTag*)
   {
      return GenerateInitInstanceLocal((::QCDPFJetBTag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::QCDPFJetBTag*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *QCDPFJetBTag_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::QCDPFJetBTag*)0x0)->GetClass();
      QCDPFJetBTag_TClassManip(theClass);
   return theClass;
   }

   static void QCDPFJetBTag_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *QCDEventHdr_Dictionary();
   static void QCDEventHdr_TClassManip(TClass*);
   static void *new_QCDEventHdr(void *p = 0);
   static void *newArray_QCDEventHdr(Long_t size, void *p);
   static void delete_QCDEventHdr(void *p);
   static void deleteArray_QCDEventHdr(void *p);
   static void destruct_QCDEventHdr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::QCDEventHdr*)
   {
      ::QCDEventHdr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::QCDEventHdr));
      static ::ROOT::TGenericClassInfo 
         instance("QCDEventHdr", "SMPJ/AnalysisFW/interface/QCDEventHdr.h", 6,
                  typeid(::QCDEventHdr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &QCDEventHdr_Dictionary, isa_proxy, 0,
                  sizeof(::QCDEventHdr) );
      instance.SetNew(&new_QCDEventHdr);
      instance.SetNewArray(&newArray_QCDEventHdr);
      instance.SetDelete(&delete_QCDEventHdr);
      instance.SetDeleteArray(&deleteArray_QCDEventHdr);
      instance.SetDestructor(&destruct_QCDEventHdr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::QCDEventHdr*)
   {
      return GenerateInitInstanceLocal((::QCDEventHdr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::QCDEventHdr*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *QCDEventHdr_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::QCDEventHdr*)0x0)->GetClass();
      QCDEventHdr_TClassManip(theClass);
   return theClass;
   }

   static void QCDEventHdr_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *QCDEvent_Dictionary();
   static void QCDEvent_TClassManip(TClass*);
   static void *new_QCDEvent(void *p = 0);
   static void *newArray_QCDEvent(Long_t size, void *p);
   static void delete_QCDEvent(void *p);
   static void deleteArray_QCDEvent(void *p);
   static void destruct_QCDEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::QCDEvent*)
   {
      ::QCDEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::QCDEvent));
      static ::ROOT::TGenericClassInfo 
         instance("QCDEvent", "SMPJ/AnalysisFW/interface/QCDEvent.h", 16,
                  typeid(::QCDEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &QCDEvent_Dictionary, isa_proxy, 0,
                  sizeof(::QCDEvent) );
      instance.SetNew(&new_QCDEvent);
      instance.SetNewArray(&newArray_QCDEvent);
      instance.SetDelete(&delete_QCDEvent);
      instance.SetDeleteArray(&deleteArray_QCDEvent);
      instance.SetDestructor(&destruct_QCDEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::QCDEvent*)
   {
      return GenerateInitInstanceLocal((::QCDEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::QCDEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *QCDEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::QCDEvent*)0x0)->GetClass();
      QCDEvent_TClassManip(theClass);
   return theClass;
   }

   static void QCDEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_QCDMET(void *p) {
      return  p ? new(p) ::QCDMET : new ::QCDMET;
   }
   static void *newArray_QCDMET(Long_t nElements, void *p) {
      return p ? new(p) ::QCDMET[nElements] : new ::QCDMET[nElements];
   }
   // Wrapper around operator delete
   static void delete_QCDMET(void *p) {
      delete ((::QCDMET*)p);
   }
   static void deleteArray_QCDMET(void *p) {
      delete [] ((::QCDMET*)p);
   }
   static void destruct_QCDMET(void *p) {
      typedef ::QCDMET current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::QCDMET

namespace ROOT {
   // Wrappers around operator new
   static void *new_QCDJet(void *p) {
      return  p ? new(p) ::QCDJet : new ::QCDJet;
   }
   static void *newArray_QCDJet(Long_t nElements, void *p) {
      return p ? new(p) ::QCDJet[nElements] : new ::QCDJet[nElements];
   }
   // Wrapper around operator delete
   static void delete_QCDJet(void *p) {
      delete ((::QCDJet*)p);
   }
   static void deleteArray_QCDJet(void *p) {
      delete [] ((::QCDJet*)p);
   }
   static void destruct_QCDJet(void *p) {
      typedef ::QCDJet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::QCDJet

namespace ROOT {
   // Wrappers around operator new
   static void *new_QCDPFJet(void *p) {
      return  p ? new(p) ::QCDPFJet : new ::QCDPFJet;
   }
   static void *newArray_QCDPFJet(Long_t nElements, void *p) {
      return p ? new(p) ::QCDPFJet[nElements] : new ::QCDPFJet[nElements];
   }
   // Wrapper around operator delete
   static void delete_QCDPFJet(void *p) {
      delete ((::QCDPFJet*)p);
   }
   static void deleteArray_QCDPFJet(void *p) {
      delete [] ((::QCDPFJet*)p);
   }
   static void destruct_QCDPFJet(void *p) {
      typedef ::QCDPFJet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::QCDPFJet

namespace ROOT {
   // Wrappers around operator new
   static void *new_QCDPFJetBTag(void *p) {
      return  p ? new(p) ::QCDPFJetBTag : new ::QCDPFJetBTag;
   }
   static void *newArray_QCDPFJetBTag(Long_t nElements, void *p) {
      return p ? new(p) ::QCDPFJetBTag[nElements] : new ::QCDPFJetBTag[nElements];
   }
   // Wrapper around operator delete
   static void delete_QCDPFJetBTag(void *p) {
      delete ((::QCDPFJetBTag*)p);
   }
   static void deleteArray_QCDPFJetBTag(void *p) {
      delete [] ((::QCDPFJetBTag*)p);
   }
   static void destruct_QCDPFJetBTag(void *p) {
      typedef ::QCDPFJetBTag current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::QCDPFJetBTag

namespace ROOT {
   // Wrappers around operator new
   static void *new_QCDEventHdr(void *p) {
      return  p ? new(p) ::QCDEventHdr : new ::QCDEventHdr;
   }
   static void *newArray_QCDEventHdr(Long_t nElements, void *p) {
      return p ? new(p) ::QCDEventHdr[nElements] : new ::QCDEventHdr[nElements];
   }
   // Wrapper around operator delete
   static void delete_QCDEventHdr(void *p) {
      delete ((::QCDEventHdr*)p);
   }
   static void deleteArray_QCDEventHdr(void *p) {
      delete [] ((::QCDEventHdr*)p);
   }
   static void destruct_QCDEventHdr(void *p) {
      typedef ::QCDEventHdr current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::QCDEventHdr

namespace ROOT {
   // Wrappers around operator new
   static void *new_QCDEvent(void *p) {
      return  p ? new(p) ::QCDEvent : new ::QCDEvent;
   }
   static void *newArray_QCDEvent(Long_t nElements, void *p) {
      return p ? new(p) ::QCDEvent[nElements] : new ::QCDEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_QCDEvent(void *p) {
      delete ((::QCDEvent*)p);
   }
   static void deleteArray_QCDEvent(void *p) {
      delete [] ((::QCDEvent*)p);
   }
   static void destruct_QCDEvent(void *p) {
      typedef ::QCDEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::QCDEvent

namespace {
  void TriggerDictionaryInitialization_SMPJAnalysisFW_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/home/ckamtsik/WorkingArea/PhD/Pythia/pTHat_Studies/CMSSW_8_0_20/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/cms/cmssw/CMSSW_8_0_20/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/cms/coral/CORAL_2_3_21-ikhhed4/include/LCG",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed4/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/boost/1.57.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/pcre/8.37/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/bz2lib/1.0.6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/clhep/2.2.0.4-giojec/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/fastjet/3.1.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/gsl/1.16/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/hepmc/2.06.07/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/ktjet/1.06-giojec/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/openssl/1.0.2d/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/python/2.7.11/include/python2.7",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/sigcpp/2.6.2/include/sigc++-2.0",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/cms/vdt/v0.3.2-giojec/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/xerces-c/2.8.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/xz/5.2.1/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/eigen/3.2.2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/external/fastjet-contrib/1.020/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc530/lcg/root/6.06.00-ikhhed4/include",
"/home/ckamtsik/WorkingArea/PhD/Pythia/pTHat_Studies/CMSSW_8_0_20/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "SMPJAnalysisFW_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$SMPJ/AnalysisFW/interface/QCDMET.h")))  QCDMET;
class __attribute__((annotate("$clingAutoload$SMPJ/AnalysisFW/interface/QCDJet.h")))  QCDJet;
class __attribute__((annotate("$clingAutoload$SMPJ/AnalysisFW/interface/QCDPFJet.h")))  QCDPFJet;
class __attribute__((annotate("$clingAutoload$SMPJ/AnalysisFW/interface/QCDPFJet.h")))  QCDPFJetBTag;
class __attribute__((annotate("$clingAutoload$SMPJ/AnalysisFW/interface/QCDEvent.h")))  QCDEventHdr;
class __attribute__((annotate("$clingAutoload$SMPJ/AnalysisFW/interface/QCDEvent.h")))  QCDEvent;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "SMPJAnalysisFW_xr dictionary payload"

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
  #define CMSSW_GIT_HASH "CMSSW_8_0_20"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_8_0_20"
#endif
#ifndef EIGEN_DONT_PARALLELIZE
  #define EIGEN_DONT_PARALLELIZE 1
#endif
#ifndef KTDOUBLEPRECISION
  #define KTDOUBLEPRECISION 1
#endif
#ifndef BOOST_SPIRIT_THREADSAFE
  #define BOOST_SPIRIT_THREADSAFE 1
#endif
#ifndef PHOENIX_THREADSAFE
  #define PHOENIX_THREADSAFE 1
#endif
#ifndef CMSSW_REFLEX_DICT
  #define CMSSW_REFLEX_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "SMPJ/AnalysisFW/interface/QCDMET.h"
#include "SMPJ/AnalysisFW/interface/QCDJet.h"
//#include "SMPJ/AnalysisFW/interface/QCDCaloJet.h"
#include "SMPJ/AnalysisFW/interface/QCDPFJet.h"
#include "SMPJ/AnalysisFW/interface/QCDEvent.h"
#include "SMPJ/AnalysisFW/interface/QCDEventHdr.h"
//#include "SMPJ/AnalysisFW/interface/MyMuon.h"
//#include "SMPJ/AnalysisFW/interface/MyElectron.h"
 
QCDMET        qcdmet;
QCDJet        qcdjet;
//QCDCaloJet    qcdcalojet;
QCDPFJet      qcdpfjet;
QCDPFJetBTag  qcdpfjetbtag;
QCDEvent      qcdevent;
QCDEventHdr   qcdeventhdr;
//MyMuon        mymuon;
//MyElectron    myelectron;

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"QCDEvent", payloadCode, "@",
"QCDEventHdr", payloadCode, "@",
"QCDJet", payloadCode, "@",
"QCDMET", payloadCode, "@",
"QCDPFJet", payloadCode, "@",
"QCDPFJetBTag", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SMPJAnalysisFW_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SMPJAnalysisFW_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SMPJAnalysisFW_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SMPJAnalysisFW_xr() {
  TriggerDictionaryInitialization_SMPJAnalysisFW_xr_Impl();
}
