ALL_COMMONRULES += src_SMPJ_AnalysisFW_test
src_SMPJ_AnalysisFW_test_parent := SMPJ/AnalysisFW
src_SMPJ_AnalysisFW_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_SMPJ_AnalysisFW_test,src/SMPJ/AnalysisFW/test,TEST))
ifeq ($(strip $(PySMPJAnalysisFW)),)
PySMPJAnalysisFW := self/src/SMPJ/AnalysisFW/python
src_SMPJ_AnalysisFW_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/SMPJ/AnalysisFW/python)
PySMPJAnalysisFW_files := $(patsubst src/SMPJ/AnalysisFW/python/%,%,$(wildcard $(foreach dir,src/SMPJ/AnalysisFW/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PySMPJAnalysisFW_LOC_USE := self  
PySMPJAnalysisFW_PACKAGE := self/src/SMPJ/AnalysisFW/python
ALL_PRODS += PySMPJAnalysisFW
PySMPJAnalysisFW_INIT_FUNC        += $$(eval $$(call PythonProduct,PySMPJAnalysisFW,src/SMPJ/AnalysisFW/python,src_SMPJ_AnalysisFW_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PySMPJAnalysisFW,src/SMPJ/AnalysisFW/python))
endif
ALL_COMMONRULES += src_SMPJ_AnalysisFW_python
src_SMPJ_AnalysisFW_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_SMPJ_AnalysisFW_python,src/SMPJ/AnalysisFW/python,PYTHON))
ALL_SUBSYSTEMS+=SMPJ
subdirs_src_SMPJ = src_SMPJ_AnalysisFW
ALL_PACKAGES += SMPJ/AnalysisFW
subdirs_src_SMPJ_AnalysisFW := src_SMPJ_AnalysisFW_plugins src_SMPJ_AnalysisFW_interface src_SMPJ_AnalysisFW_test src_SMPJ_AnalysisFW_data src_SMPJ_AnalysisFW_src src_SMPJ_AnalysisFW_python
