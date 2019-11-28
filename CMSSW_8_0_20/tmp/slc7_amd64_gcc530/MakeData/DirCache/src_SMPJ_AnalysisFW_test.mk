ALL_COMMONRULES += src_SMPJ_AnalysisFW_test
src_SMPJ_AnalysisFW_test_parent := SMPJ/AnalysisFW
src_SMPJ_AnalysisFW_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_SMPJ_AnalysisFW_test,src/SMPJ/AnalysisFW/test,TEST))
