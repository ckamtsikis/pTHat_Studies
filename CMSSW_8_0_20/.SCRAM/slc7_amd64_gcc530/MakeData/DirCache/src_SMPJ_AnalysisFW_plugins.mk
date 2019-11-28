ifeq ($(strip $(SMPJAnalysisFWPlugins)),)
SMPJAnalysisFWPlugins := self/src/SMPJ/AnalysisFW/plugins
PLUGINS:=yes
SMPJAnalysisFWPlugins_files := $(patsubst src/SMPJ/AnalysisFW/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/SMPJ/AnalysisFW/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/SMPJ/AnalysisFW/plugins/$(file). Please fix src/SMPJ/AnalysisFW/plugins/BuildFile.))))
SMPJAnalysisFWPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/SMPJ/AnalysisFW/plugins/BuildFile
SMPJAnalysisFWPlugins_LOC_USE := self  RecoMET/METAlgorithms JetMETCorrections/Algorithms RecoJets/JetAlgorithms DataFormats/JetReco DataFormats/VertexReco DataFormats/Candidate DataFormats/Common DataFormats/HepMCCandidate DataFormats/TrackCandidate DataFormats/HLTReco PhysicsTools/UtilAlgos PhysicsTools/PatUtils PhysicsTools/PatAlgos JetMETCorrections/Objects FWCore/Framework FWCore/PluginManager FWCore/ServiceRegistry clhep root HLTrigger/HLTcore L1Trigger/GlobalTriggerAnalyzer CondFormats/L1TObjects CondFormats/DataRecord CondFormats/JetMETObjects SMPJ/AnalysisFW
SMPJAnalysisFWPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,SMPJAnalysisFWPlugins,SMPJAnalysisFWPlugins,$(SCRAMSTORENAME_LIB),src/SMPJ/AnalysisFW/plugins))
SMPJAnalysisFWPlugins_PACKAGE := self/src/SMPJ/AnalysisFW/plugins
ALL_PRODS += SMPJAnalysisFWPlugins
SMPJ/AnalysisFW_forbigobj+=SMPJAnalysisFWPlugins
SMPJAnalysisFWPlugins_INIT_FUNC        += $$(eval $$(call Library,SMPJAnalysisFWPlugins,src/SMPJ/AnalysisFW/plugins,src_SMPJ_AnalysisFW_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
SMPJAnalysisFWPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,SMPJAnalysisFWPlugins,src/SMPJ/AnalysisFW/plugins))
endif
ALL_COMMONRULES += src_SMPJ_AnalysisFW_plugins
src_SMPJ_AnalysisFW_plugins_parent := SMPJ/AnalysisFW
src_SMPJ_AnalysisFW_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_SMPJ_AnalysisFW_plugins,src/SMPJ/AnalysisFW/plugins,PLUGINS))
