ifeq ($(strip $(PyHTTutilitiesJet2TauFakes)),)
PyHTTutilitiesJet2TauFakes := self/src/HTTutilities/Jet2TauFakes/python
src_HTTutilities_Jet2TauFakes_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HTTutilities/Jet2TauFakes/python)
PyHTTutilitiesJet2TauFakes_files := $(patsubst src/HTTutilities/Jet2TauFakes/python/%,%,$(wildcard $(foreach dir,src/HTTutilities/Jet2TauFakes/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHTTutilitiesJet2TauFakes_LOC_USE := self  
PyHTTutilitiesJet2TauFakes_PACKAGE := self/src/HTTutilities/Jet2TauFakes/python
ALL_PRODS += PyHTTutilitiesJet2TauFakes
PyHTTutilitiesJet2TauFakes_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHTTutilitiesJet2TauFakes,src/HTTutilities/Jet2TauFakes/python,src_HTTutilities_Jet2TauFakes_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHTTutilitiesJet2TauFakes,src/HTTutilities/Jet2TauFakes/python))
endif
ALL_COMMONRULES += src_HTTutilities_Jet2TauFakes_python
src_HTTutilities_Jet2TauFakes_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HTTutilities_Jet2TauFakes_python,src/HTTutilities/Jet2TauFakes/python,PYTHON))
