#include <iostream>
#include <sstream>
#include <istream>
#include <fstream>
#include <iomanip>
#include <string>
#include <regex>
#include <cmath>
#include <functional>
#include <vector>
#include <cassert>
#include "TMath.h"
#include "TRandom.h"
#include "TFile.h"
#include "boost/format.hpp"

//#include "parsePileUpJSON2.h"
#include "SMPJ/AnalysisFW/plugins/Ratio_aSs_MC_Studies.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/MakerMacros.h"

using namespace std;

Ratio_aSs_MC_Studies::Ratio_aSs_MC_Studies(edm::ParameterSet const& cfg) {
  mFileName		=	cfg.getParameter<std::string>			("fileName");
  mDirName		=	cfg.getParameter<std::string>			("dirName");
  mTreeName             =       cfg.getParameter<std::string>                   ("treeName");
	
  mMinPt		=	cfg.getParameter<double>			("minPt");
  mYMax			=	cfg.getParameter<double>			("yMax");
		
  mGlobalTag		=	cfg.getParameter<std::string>			("pseudoGlobalTag");
  mJetType		=	cfg.getParameter<std::string>			("jetType");
  mIsMCarlo		=	cfg.getUntrackedParameter<bool>			("isMCarlo");
  //mJECUncSrcNames	=	cfg.getParameter<std::vector<std::string> >	("jecUncSrcNames");
  //mJECUncSrc		=	cfg.getParameter<std::string>			("jecUncSrc");

  mJetID		=	cfg.getParameter<int>				("jetID");
  mHCALfilter		=	cfg.getParameter<int>				("hcalNoiseFilter");
  mNEvents		=	cfg.getParameter<int>				("nEvents");
  mNJetsMin		=	cfg.getParameter<int>				("nJetsMin");
  mNJetsMax		=	cfg.getParameter<int>				("nJetsMax");

}

///////////////////////////////////////////////////////////////////////////////////////////////

void Ratio_aSs_MC_Studies::beginJob() {
  cout << "Section beginJob started..." << endl;

  mInf	=  TFile::Open(mFileName.c_str());
  mDir	=  (TDirectoryFile*)mInf->Get(mDirName.c_str());
  mTree =  (TTree*)mDir->Get(mTreeName.c_str());
  Event =  new QCDEvent();
  TBranch *branch = mTree->GetBranch("events");
  branch->SetAddress(&Event);

  
  //------------ The binning ---------- 
  /*double Ptbinning[58] = {150, 174, 196, 220, 245, 272, 300, 330, 362, 395, 430, 468,507, 548, 592, 638, 686, 737, 790, 
                          846, 905, 967,1032, 1101, 1172, 1248, 1327, 1410, 1497, 1588, 1684, 1784, 1890, 2000,2116, 2238,
                          2366, 2500, 2640, 2787, 2941, 3103, 3273, 3450, 3637, 3832,4037, 4252, 4477, 4713, 4961,
                           5220, 5492, 5777, 6076, 6389, 6717, 7000};
  int Ptbins=57;
	*/
  //------------------- Book Histos ---------------------
  TFileDirectory mHT2Dir_fat, mHT2Dir_thin, mpTHat_dir;
  mHT2Dir_fat  = fs->mkdir("fat_incl_Jets_HT2");
  //mHT2Dir_thin = fs->mkdir("thin_incl_Jets_HT2");
  mpTHat_dir   = fs->mkdir("pTHat_Directory");
  
  //========================================
  //---------- Booking Histos --------------
  //========================================
  
  //-------------- Leading Pt --------------
  pt0_histo=mpTHat_dir.make<TH1F>("Leading_jet_Pt_Distribution","Leading_jet_Pt_Distribution",200., 10., 600);
  pt0_histo_nw=mpTHat_dir.make<TH1F>("Leading_jet_Pt_Distribution_no_Weight","Leading_jet_Pt_Distribution_no_Weight",200., 10., 600);

  for (int ipt=20; ipt<=200; ipt=ipt+10){
    ostringstream hist_name;
    hist_name.str("");
    hist_name << "MC_Pt0_for_pTHat" << to_string(ipt) << "_hweight";
    mhpTHat0.push_back(mpTHat_dir.make<TH1F>(hist_name.str().c_str(), hist_name.str().c_str(), 200., 10., 600));
    mhpTHat0[(ipt-20.)/10.]->Sumw2();
    cout << boost::format("\t--->   %-25s") % hist_name.str().c_str() << endl;

  }
  for (int ipt=20; ipt<=200; ipt=ipt+10){
    ostringstream hist_name;
    hist_name.str("");
    hist_name << "MC_Pt0_for_pTHat" << to_string(ipt) << "_No_weight";
    mhpTHat0_nw.push_back(mpTHat_dir.make<TH1F>(hist_name.str().c_str(), hist_name.str().c_str(), 200., 10., 600));
    mhpTHat0_nw[(ipt-20.)/10.]->Sumw2();
    cout << boost::format("\t--->   %-25s") % hist_name.str().c_str() << endl;
  }
  //-------------- subLeading Pt --------------
  
  for (int ipt=20; ipt<=200; ipt=ipt+10){
    ostringstream hist_name;
    hist_name.str("");
    hist_name << "MC_Pt1_for_pTHat" << to_string(ipt) << "_hweight";
    mhpTHat1.push_back(mpTHat_dir.make<TH1F>(hist_name.str().c_str(), hist_name.str().c_str(), 200., 10., 600));
    mhpTHat1[(ipt-20.)/10.]->Sumw2();
    cout << boost::format("\t--->   %-25s") % hist_name.str().c_str() << endl;

  }
  for (int ipt=20; ipt<=200; ipt=ipt+10){
    ostringstream hist_name;
    hist_name.str("");
    hist_name << "MC_Pt1_for_pTHat" << to_string(ipt) << "_No_weight";
    mhpTHat1_nw.push_back(mpTHat_dir.make<TH1F>(hist_name.str().c_str(), hist_name.str().c_str(), 200., 10., 600));
    mhpTHat1_nw[(ipt-20.)/10.]->Sumw2();
    cout << boost::format("\t--->   %-25s") % hist_name.str().c_str() << endl;
  }


  cout << "Begin job finished" << endl;
}//--- beginJob

////////////////////////////////////////////////////////////////////////////////////////////////////////

void Ratio_aSs_MC_Studies::endJob() {
  mInf->Close();
} // ---- endJob()

///////////////////////////////////////////////////////////////////////////////////////////////////////

void Ratio_aSs_MC_Studies::analyze(edm::Event const& iEvent, edm::EventSetup const& iSetup) {

  cout << "Section analyze started" << endl;

  unsigned int nentries;
  ( mNEvents == -1 ) ? nentries = mTree->GetEntries() : nentries = mNEvents;
  cout << "Entries --> " << mTree->GetEntries() << endl;
  //-------------- Weight of slice MC --------------
  double hweight=1.;

  cout << "---> Starting event loop..." << endl;
  cout << "---> Number of events to be processed: " << nentries << endl;


  for (unsigned int iev=0; iev<nentries; iev++) {//--- event loop
  //for (unsigned int iev=0; iev<100; iev++) {//--- event loop
    //---------------------- Progress --------------------------
    if ( iev==nentries-1 || iev%100==99 ) cerr << "Processed " << boost::format("%7.3f%%\r") % (100.*(iev+1)/nentries) << flush;
    if ( iev==nentries-1                ) cerr << "\nProcessed all " << nentries << " events...\n" << flush;
    
    mTree->GetEntry(iev);//-------- Read the Event

    hweight=Event->evtHdr().weight();
    //if (Event->nGenJets()<1) continue;
    if (Event->nGenJets()<2) continue;


     
    //==================================================================
    //------------- Pt Distribution with respect to pTHat --------------
    //==================================================================
    double pt0=0, pt1=0;
    pt0=Event->genjet(0).pt();
    pt1=Event->genjet(1).pt();

		pt0_histo->Fill(pt0,hweight);
    pt0_histo_nw->Fill(pt0);

    for (int ipt=20; ipt<=200; ipt=ipt+10){
      if(Event->evtHdr().pthat()>ipt){
        mhpTHat0[(ipt-20.)/10.]->Fill(pt0,hweight);
        mhpTHat0_nw[(ipt-20.)/10.]->Fill(pt0);
        mhpTHat1[(ipt-20.)/10.]->Fill(pt1,hweight);
        mhpTHat1_nw[(ipt-20.)/10.]->Fill(pt1);
      }
    }
 
  } //---- iev
  

} // ---- closing analyze()

/////////////////////////////////////////////////////////////////////////////////////////////////////////

Ratio_aSs_MC_Studies::~Ratio_aSs_MC_Studies(){}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

DEFINE_FWK_MODULE(Ratio_aSs_MC_Studies);
