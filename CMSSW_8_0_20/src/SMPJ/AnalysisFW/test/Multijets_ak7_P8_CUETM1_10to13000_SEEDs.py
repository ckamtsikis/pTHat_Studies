# -*- coding: utf-8 -*-
import FWCore.ParameterSet.Config as cms

process = cms.Process("myprocess")
#process.TFileService=cms.Service("TFileService",fileName=cms.string('Multijets_ak7_P8_CUETM1_10to13000_SEED1234000.root'))
process.TFileService=cms.Service("TFileService",fileName=cms.string('Multijets_ak7_P8_CUETM1_10to13000_SEED1234001.root'))


##-------------------- Define the source  ----------------------------
process.maxEvents = cms.untracked.PSet(
        input = cms.untracked.int32(1)
        )
process.source = cms.Source("EmptySource")

##-------------------- User analyzer  --------------------------------
process.analyzer	= cms.EDAnalyzer('Ratio_aSs_MC_Studies',
  #fileName		= cms.string('/data01/ckamtsik_MCGEN_13TeV/NTuples/pTHat_Studies/MC_ProcessedTreeProducer_For_QCD_Pt_10to13000_13TeV_TuneCUETP8M1_SEED1234000.root'),
  #treeName              = cms.string('ProcessedTree;8'),
  fileName              = cms.string('/data01/ckamtsik_MCGEN_13TeV/NTuples/pTHat_Studies/MC_ProcessedTreeProducer_For_QCD_Pt_10to13000_13TeV_TuneCUETP8M1_SEED1234001.root'),
  treeName		= cms.string('ProcessedTree;15'),
  dirName		= cms.string('ak7'),
  
  nEvents		= cms.int32(-1),
          
##-------for Multijets
  minPt           = cms.double(150.0),
  yMax            = cms.double(2.5),
  nJetsMin        = cms.int32(2),
  nJetsMax        = cms.int32(5),
  jetID           = cms.int32(2),

  verbose         = cms.int32(0),   # 0: not verbose   1: verbose for first 100 events   2: verbose   3: too verbose...
  verboseHt2      = cms.double(2000),

  pseudoGlobalTag = cms.string('Summer16_07Aug2017_V10'), #Make sure that the name is the same as in data direcotry

  jetType         = cms.string('AK8PFchs'),     #AKXPF or AKXPFchs  -  this is only for JECs
         
  hcalNoiseFilter = cms.int32(0),
  isMCarlo        = cms.untracked.bool(True),




)

process.p = cms.Path(process.analyzer)


