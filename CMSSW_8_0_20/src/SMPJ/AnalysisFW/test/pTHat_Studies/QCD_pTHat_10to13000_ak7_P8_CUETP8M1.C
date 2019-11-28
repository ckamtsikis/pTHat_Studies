#include "/home/ckamtsik/WorkingArea/Style/lib.h"

using namespace std;

void Get_Xsection(TH1F *histo);

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void QCD_pTHat_10to13000_ak7_P8_CUETP8M1(){
  setTDRStyle();
  gStyle->SetPalette(1);
  gStyle->SetOptFit(0);
  char tmpstr[256];

  cout<<"Begin process..."<<endl;

  TFile *pTHat_ROOTFile= TFile::Open("../Multijets_ak7_P8_CUETM1_10to13000_all.root"); // --- Open ROOT file
  TDirectory *pTHat_Dir1=pTHat_ROOTFile->GetDirectory("analyzer;1");
  TDirectory *pTHat_Dir2=pTHat_Dir1->GetDirectory("pTHat_Directory;1");
  
  TH1F *pt0_histo=(TH1F*)pTHat_Dir2->Get("Leading_jet_Pt_Distribution;1");
  pt0_histo->SetXTitle("Pt_{0} (GeV)");
  pt0_histo->SetYTitle("Events");
  pt0_histo->SetLineColor(1);
  pt0_histo->SetMarkerStyle(3);
  pt0_histo->SetMarkerSize(0.55);
  pt0_histo->SetMarkerColor(1);
 
  TH1F *pTHat_Histos[10];
  //sprintf(tmpstr,"MC_Pt0_for_pTHat%d_hweight;1", 20);
  //pTHat_Histos[0]=(TH1F*)pTHat_Dir2->Get(tmpstr);
  for(int i=20; i<=100; i=i+10){
    sprintf(tmpstr,"MC_Pt0_for_pTHat%d_hweight;1", i);
    pTHat_Histos[(i-20)/10]=(TH1F*)pTHat_Dir2->Get(tmpstr);
    pTHat_Histos[(i-20)/10]->SetLineColor((i-20)/10+2);
    pTHat_Histos[(i-20)/10]->SetMarkerStyle((i-20)/10+20);
    pTHat_Histos[(i-20)/10]->SetMarkerSize(0.55);
    pTHat_Histos[(i-20)/10]->SetMarkerColor((i-20)/10+2);
  
  }
  pTHat_Histos[8]->SetLineColor(11); 
  pTHat_Histos[8]->SetMarkerStyle(11);
  pTHat_Histos[8]->SetMarkerColor(11); 

  TCanvas *pHCanv=new TCanvas("pTHat studies","pTHat studies",1200,800);

  pHCanv->cd();
  pHCanv->SetGrid();
  pHCanv->SetLogy();
  pHCanv->SetLogx();
  pt0_histo->Draw();
  for(int i=20; i<=100; i=i+10){
    pTHat_Histos[(i-20)/10]->Draw("same");
  }

  TLegend *leg;
  leg=new TLegend(0.72,0.55,1.02,0.98,"","brNDC");
  leg->AddEntry(pTHat_Histos[0],"#font[62]{CMS Preliminary}", "");
  leg->AddEntry(pTHat_Histos[0],"#sqrt{s}= 13 TeV", "");
  leg->AddEntry(pTHat_Histos[0],"anti-K_{t} R=0.7", "");
  leg->AddEntry(pt0_histo, "Leading Jet Pt", "lp");
  for(int i=20; i<=100; i=i+10){
    sprintf(tmpstr, "pTHat cut = %d", i);
    leg->AddEntry(pTHat_Histos[(i-20)/10],tmpstr, "lp");
  }
  leg->SetTextAlign(13);
  leg->SetBorderSize(0);
  leg->SetTextFont(42);
  leg->SetFillColor(kWhite);
  leg->SetFillStyle(0);
  leg->SetLineColor(kWhite);
  leg->SetFillStyle(0);
  leg->Draw();

  pHCanv->Print("Plot_pTHat_cut_Studies.pdf");
        

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//------------- Xsection function --------------
void Get_Xsection(TH1F *histo){
  for(int i=0; i<histo->GetNbinsX(); ++i){
     float bin_value = histo->GetBinContent(1+i);
     float bin_error = histo->GetBinError(1+i);
     float bin_width = histo->GetBinWidth(1+i);
     float new_bin_value = bin_value/(bin_width);
     float new_bin_error = bin_error/(bin_width);


     histo->SetBinContent(1+i,new_bin_value);
     histo->SetBinError(1+i,new_bin_error);
  }
}

