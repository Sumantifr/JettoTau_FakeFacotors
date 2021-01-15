ifeq ($(strip $(HTTutilities/Jet2TauFakes)),)
ALL_COMMONRULES += src_HTTutilities_Jet2TauFakes_src
src_HTTutilities_Jet2TauFakes_src_parent := HTTutilities/Jet2TauFakes
src_HTTutilities_Jet2TauFakes_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HTTutilities_Jet2TauFakes_src,src/HTTutilities/Jet2TauFakes/src,LIBRARY))
HTTutilitiesJet2TauFakes := self/HTTutilities/Jet2TauFakes
HTTutilities/Jet2TauFakes := HTTutilitiesJet2TauFakes
HTTutilitiesJet2TauFakes_files := $(patsubst src/HTTutilities/Jet2TauFakes/src/%,%,$(wildcard $(foreach dir,src/HTTutilities/Jet2TauFakes/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HTTutilitiesJet2TauFakes_BuildFile    := $(WORKINGDIR)/cache/bf/src/HTTutilities/Jet2TauFakes/BuildFile
HTTutilitiesJet2TauFakes_LOC_USE := self  root
HTTutilitiesJet2TauFakes_LCGDICTS  := x 
HTTutilitiesJet2TauFakes_PRE_INIT_FUNC += $$(eval $$(call LCGDict,HTTutilitiesJet2TauFakes,src/HTTutilities/Jet2TauFakes/src/classes.h,src/HTTutilities/Jet2TauFakes/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
HTTutilitiesJet2TauFakes_EX_LIB   := HTTutilitiesJet2TauFakes
HTTutilitiesJet2TauFakes_EX_USE   := $(foreach d,$(HTTutilitiesJet2TauFakes_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
HTTutilitiesJet2TauFakes_PACKAGE := self/src/HTTutilities/Jet2TauFakes/src
ALL_PRODS += HTTutilitiesJet2TauFakes
HTTutilitiesJet2TauFakes_CLASS := LIBRARY
HTTutilities/Jet2TauFakes_forbigobj+=HTTutilitiesJet2TauFakes
HTTutilitiesJet2TauFakes_INIT_FUNC        += $$(eval $$(call Library,HTTutilitiesJet2TauFakes,src/HTTutilities/Jet2TauFakes/src,src_HTTutilities_Jet2TauFakes_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
