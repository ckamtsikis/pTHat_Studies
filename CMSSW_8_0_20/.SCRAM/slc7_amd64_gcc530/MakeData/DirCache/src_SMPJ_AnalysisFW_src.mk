ifeq ($(strip $(SMPJ/AnalysisFW)),)
ALL_COMMONRULES += src_SMPJ_AnalysisFW_src
src_SMPJ_AnalysisFW_src_parent := SMPJ/AnalysisFW
src_SMPJ_AnalysisFW_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_SMPJ_AnalysisFW_src,src/SMPJ/AnalysisFW/src,LIBRARY))
SMPJAnalysisFW := self/SMPJ/AnalysisFW
SMPJ/AnalysisFW := SMPJAnalysisFW
SMPJAnalysisFW_files := $(patsubst src/SMPJ/AnalysisFW/src/%,%,$(wildcard $(foreach dir,src/SMPJ/AnalysisFW/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
SMPJAnalysisFW_BuildFile    := $(WORKINGDIR)/cache/bf/src/SMPJ/AnalysisFW/BuildFile
SMPJAnalysisFW_LOC_USE := self  RecoMET/METAlgorithms JetMETCorrections/Algorithms RecoJets/JetAlgorithms DataFormats/JetReco DataFormats/VertexReco DataFormats/Candidate DataFormats/Common DataFormats/HepMCCandidate DataFormats/TrackCandidate DataFormats/HLTReco PhysicsTools/UtilAlgos PhysicsTools/PatUtils PhysicsTools/PatAlgos JetMETCorrections/Objects FWCore/Framework FWCore/PluginManager FWCore/ServiceRegistry clhep root HLTrigger/HLTcore L1Trigger/GlobalTriggerAnalyzer CondFormats/L1TObjects CondFormats/DataRecord CondFormats/JetMETObjects
SMPJAnalysisFW_LCGDICTS  := x 
SMPJAnalysisFW_PRE_INIT_FUNC += $$(eval $$(call LCGDict,SMPJAnalysisFW,src/SMPJ/AnalysisFW/src/classes.h,src/SMPJ/AnalysisFW/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
SMPJAnalysisFW_EX_LIB   := SMPJAnalysisFW
SMPJAnalysisFW_EX_USE   := $(foreach d,$(SMPJAnalysisFW_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SMPJAnalysisFW_PACKAGE := self/src/SMPJ/AnalysisFW/src
ALL_PRODS += SMPJAnalysisFW
SMPJAnalysisFW_CLASS := LIBRARY
SMPJ/AnalysisFW_forbigobj+=SMPJAnalysisFW
SMPJAnalysisFW_INIT_FUNC        += $$(eval $$(call Library,SMPJAnalysisFW,src/SMPJ/AnalysisFW/src,src_SMPJ_AnalysisFW_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
