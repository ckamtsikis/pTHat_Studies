#ifndef Ratio_aSs_MC_Studies_h
#define Ratio_aSs_MC_Studies_h

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "SMPJ/AnalysisFW/interface/QCDJet.h"
#include "SMPJ/AnalysisFW/interface/QCDEvent.h"
#include "SMPJ/AnalysisFW/interface/QCDEventHdr.h"
#include "SMPJ/AnalysisFW/interface/QCDPFJet.h"
#include "SMPJ/AnalysisFW/interface/QCDMET.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"
#include "SMPJ/AnalysisFW/plugins/JECs.h"
#include "TTree.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TFile.h"
#include "TProfile.h"
#include <TMath.h>
#include <vector>
#include <boost/shared_ptr.hpp>
using namespace edm;
using namespace std;

class Ratio_aSs_MC_Studies : public edm::EDAnalyzer {
  public:
    explicit Ratio_aSs_MC_Studies(edm::ParameterSet const& cfg);
    virtual void beginJob();
    virtual void analyze(edm::Event const& iEvent, edm::EventSetup const& iSetup);
    virtual void endJob();
    virtual ~Ratio_aSs_MC_Studies();

  private:
    //------- Configurable Parameters ----------
    string mFileName, mTreeName, mDirName, mGlobalTag, mJetType, mJECUncSrc;
    std::vector<string> mJECUncSrcNames;
    double mMinPt, mYMax, mXSection;
    int mJetID, mHCALfilter, mNEvents, mNJetsMin, mNJetsMax;
    bool mIsMCarlo;
    //------- Verbosity -------
    double mVerboseHt2;
    int mVerbose;
    
    edm::Service<TFileService> fs;
    TTree *mTree;
    TFile *mInf;
    TDirectoryFile *mDir;
    //----- Tree Variable ------
    QCDEvent *Event;
    //---- Corrections ------
    JECs *jecs;

    //------ Histo Booking --------
    vector<TH1F*> mhGEN_thin, mhGEN_fat, mhGEN_normal, mhPFchs_thin, mhPFchs_fat, mhPFchs_normal;
    vector<TH1F*> mhpTHat0, mhpTHat1, mhpTHat0_nw, mhpTHat1_nw;
    TH1F *pt0_histo, *pt1_histo, *y0_histo, *y1_histo, *Phi0_histo, *Phi1_histo;
    TH1F* pt0_histo_nw;

};

#endif
