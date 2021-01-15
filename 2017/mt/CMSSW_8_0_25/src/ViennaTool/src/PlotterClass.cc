#include "ViennaTool/interface/PlotterClass.h"

#include <iostream>
#include <sstream>

using namespace std;

void PlotterClass::plotPieFractions_mutau_etau(TString channel, TString outfile, Int_t preliminary, Float_t *yields){

  Int_t nvals = 5;
  
  Float_t yields_btag_tight[nvals];
  Float_t yields_btag_loosemt[nvals];
  Float_t yields_nobtag_tight[nvals];
  Float_t yields_nobtag_loosemt[nvals];
  for(int i=0; i<5; i++) yields_btag_tight[i] = yields[i];
  for(int i=0; i<5; i++) yields_btag_loosemt[i] = yields[i+5];
  for(int i=0; i<5; i++) yields_nobtag_tight[i] = yields[i+10];
  for(int i=0; i<5; i++) yields_nobtag_loosemt[i] = yields[i+15];
  
  Int_t colors[] = {TColor::GetColor(222,90,106),TColor::GetColor(250,202,253),TColor::GetColor(100,192,232),TColor::GetColor(155,152,204),TColor::GetColor(248,206,104)};
  //Int_t colors[] = {TColor::GetColor(222,90,106),TColor::GetColor(222,90,106),TColor::GetColor(155,152,204),TColor::GetColor(100,192,232),TColor::GetColor(248,206,104)};
  
  cout << "Color Wjets: " << TColor::GetColor(222,90,106) << endl;
  cout << "Color QCD: " << TColor::GetColor(250,202,253) << endl;
  cout << "Color ZJ: " << TColor::GetColor(100,192,232) << endl;
  cout << "Color ttbar: " << TColor::GetColor(155,152,204) << endl;
  
  const char *labels[5]={"W+jets","#splitline{QCD}{multijet}","Z+jets","t_{}#bar{t}","l,#tau_{h}#rightarrow #tau_{h}"};
  const char *labels_nosplit[5]={"W+jets","QCD multijet","Z+jets","t_{}#bar{t}","l,#tau_{h}#rightarrow #tau_{h}"};
  //const char *labels[5]={"W+jets","Multi-jet","Z+jets","t_{}#bar{t}","#splitline{#tau_{h}#rightarrow #tau_{h}}{ l#rightarrow #tau_{h}}"};

  TCanvas *cpie = new TCanvas("cpie","TPie test",800,800);
  //cpie->Divide(2,2)

  TString channelstring;
  if(channel=="mt") channelstring = "#mu^{}#tau_{h}";
  if(channel=="et") channelstring = "e#tau_{h}";
  TPad* gpie = new TPad("Graphs","Graphs",0.01,0.01,1.,1.);
  gpie->Draw();
  gpie->cd();
  gpie->Divide(2,2);
  TPie *pie1 = new TPie("pie1",
                       "",nvals,yields_nobtag_tight,colors);
  TPie *pie2 = new TPie("pie2",
                       "",nvals,yields_btag_tight,colors);
  TPie *pie3 = new TPie("pie3",
                       "",nvals,yields_nobtag_loosemt,colors);
  TPie *pie4 = new TPie("pie4",
                       "",nvals,yields_btag_loosemt,colors);
  gpie->cd(1);
  pie1->SetTitle("");
  //pie1->SetTitleBorderSize(0);
  pie1->SetLabels(labels);
  pie1->SetTextFont(42);
  pie1->SetTextSize(0.04);
  pie1->SetLabelsOffset(.015);
  pie1->SetCircle(.47,.37,.3);
  for(int i=0; i<5; i++) pie1->SetEntryLineWidth(i,1);  
  pie1->Draw("s >");
  TLatex title1 = TLatex( 0.05, 0.78, channelstring+" No B-tag Tight-^{}m_{T}" );
  title1.SetNDC();
  //title1.SetTextFont(42);
  title1.SetTextSize(0.045);
  title1.Draw();
  gpie->cd(2);
  //pie2->SetTitle("#mu#tau B-tag Low-m_{T}");
  pie2->SetLabels(labels_nosplit);
  pie2->SetTextFont(42);
  pie2->SetTextSize(0.04);
  pie2->SetLabelsOffset(.015);
  pie2->SetCircle(.47,.37,.3);
  for(int i=0; i<5; i++) pie2->SetEntryLineWidth(i,1);  
  pie2->Draw("s >");
  TLatex title2 = TLatex( 0.05, 0.78, channelstring+" B-tag Tight-^{}m_{T}" );
  title2.SetNDC();
  title2.SetTextSize(0.045);
  title2.Draw();
  gpie->cd(3);
  //pie3->SetTitle("#mu#tau No B-tag High-m_{T}");
  pie3->SetLabels(labels_nosplit);
  pie3->SetTextFont(42);
  pie3->SetTextSize(0.04);
  pie3->SetLabelsOffset(.015);
  pie3->SetCircle(.47,.37,.3);
  for(int i=0; i<5; i++) pie3->SetEntryLineWidth(i,1);  
  pie3->Draw("s >");
  TLatex title3 = TLatex( 0.05, 0.78, channelstring+" No B-tag Loose-^{}m_{T}" );
  title3.SetNDC();
  title3.SetTextSize(0.045);
  title3.Draw();
  gpie->cd(4);
  //pie4->SetTitle("#mu#tau B-tag High-m_{T}");
  pie4->SetLabels(labels_nosplit);
  pie4->SetTextFont(42);
  pie4->SetTextSize(0.04);
  pie4->SetLabelsOffset(.015);
  pie4->SetCircle(.47,.37,.3);
  for(int i=0; i<5; i++) pie4->SetEntryLineWidth(i,1);  
  pie4->Draw("s >");
  TLatex title4 = TLatex( 0.05, 0.78, channelstring+" B-tag Loose-^{}m_{T}" );
  title4.SetNDC();
  title4.SetTextSize(0.045);
  title4.Draw();

  cpie->cd();
  TLatex cms1 = TLatex( 0.05, 0.955, "CMS" );
  TString caption = "Preliminary";
  if(preliminary) caption = "Preliminary";
  TLatex cms2 = TLatex( 0.183, 0.955, caption );
  //TLatex cms2 = TLatex( 0.183, 0.955, "Preliminary" );
  cms1.SetNDC();
  cms1.SetTextSize(0.055);
  cms2.SetNDC();
  cms2.SetTextFont(52);
  cms2.SetTextSize(0.047);
  cms1.Draw();
  if(preliminary) cms2.Draw();

/*
  if (ver == "2016"){
  	sprintf(lumi_text,"35.87 fb^{-1} (13 TeV)");
  }
  if(ver == "2017"){
  	sprintf(lumi_text,"41.50 fb^{-1} (13 TeV)");
  }
  if(ver == "2018"){
  	sprintf(lumi_text,"59.74 fb^{-1} (13 TeV)");
  }
 */
  char lumi_text[100];
  sprintf(lumi_text,"%0.2f fb^{-1} (13 TeV)",luminosity);
  TLatex infoRight = TLatex( 0.675, 0.955, lumi_text);
  infoRight.SetNDC();
  infoRight.SetTextSize(0.035);
  infoRight.SetTextFont(42);
  infoRight.Draw();
  
  cpie->Draw();
  TString preliminaryString="";
  if(preliminary) preliminaryString= "_preliminary";
  TString namestring=outfile+preliminaryString+".png";
  cpie->SaveAs(namestring);
  if (ALLPLOTS){
    namestring.ReplaceAll( ".png", ".pdf");
    cpie->SaveAs(namestring);
  }
  delete pie1; delete pie2; delete pie3; delete pie4;
  delete cpie;
  
}

void PlotterClass::plotPieFractions_tautau(TString channel, TString outfile, Int_t preliminary, Float_t *yields){

  Int_t nvals = 5;
  
  Float_t yields_btag[nvals];
  Float_t yields_nobtag[nvals];
  for(int i=0; i<5; i++) yields_btag[i] = yields[i];
  for(int i=0; i<5; i++) yields_nobtag[i] = yields[i+10];
  
  Int_t colors[] = {TColor::GetColor(222,90,106),TColor::GetColor(250,202,253),TColor::GetColor(155,152,204),TColor::GetColor(100,192,232),TColor::GetColor(248,206,104)};
  //Int_t colors[] = {TColor::GetColor(222,90,106),TColor::GetColor(222,90,106),TColor::GetColor(155,152,204),TColor::GetColor(100,192,232),TColor::GetColor(248,206,104)};
  
  cout << "Color Wjets: " << TColor::GetColor(222,90,106) << endl;
  cout << "Color QCD: " << TColor::GetColor(250,202,253) << endl;
  cout << "Color ZJ: " << TColor::GetColor(155,152,204) << endl;
  cout << "Color ttbar: " << TColor::GetColor(100,192,232) << endl;
  
  const char *labels_btag[5]={"W+jets","#splitline{QCD}{multijet}","#splitline{}{Z+jets}","t_{}#bar{t}","l,#tau_{h}#rightarrow #tau_{h}"};
  const char *labels_nobtag[5]={"W+jets","#splitline{QCD}{multijet}","#splitline{}{Z+jets}","","l,#tau_{h}#rightarrow #tau_{h}"};
  //const char *labels[5]={"W+jets","Multi-jet","Z+jets","t_{}#bar{t}","#splitline{#tau_{h}#rightarrow #tau_{h}}{ l#rightarrow #tau_{h}}"};

  TCanvas *cpie = new TCanvas("cpie","TPie test",800,400);
  //cpie->Divide(2,2)

  TString channelstring = "#tau_{h}#tau_{h}";
  TPad* gpie = new TPad("Graphs","Graphs",0.01,0.01,1.,1.);
  gpie->Draw();
  gpie->cd();
  gpie->Divide(2,1);
  TPie *pie1 = new TPie("pie1",
                       "",nvals,yields_nobtag,colors);
  TPie *pie2 = new TPie("pie2",
                       "",nvals,yields_btag,colors);
  
  gpie->cd(1);
  pie1->SetTitle("");
  //pie1->SetTitleBorderSize(0);
  pie1->SetLabels(labels_nobtag);
  pie1->SetTextFont(42);
  pie1->SetTextSize(0.04);
  pie1->SetLabelsOffset(.015);
  pie1->SetCircle(.47,.37,.3);
  for(int i=0; i<5; i++) pie1->SetEntryLineWidth(i,1);  
  pie1->Draw("s >");
  TLatex title1 = TLatex( 0.05, 0.78, channelstring+" No B-tag" );
  title1.SetNDC();
  //title1.SetTextFont(42);
  title1.SetTextSize(0.045);
  title1.Draw();
  gpie->cd(2);
  //pie2->SetTitle("#mu#tau B-tag Low-m_{T}");
  pie2->SetLabels(labels_btag);
  pie2->SetTextFont(42);
  pie2->SetTextSize(0.04);
  pie2->SetLabelsOffset(.015);
  pie2->SetCircle(.47,.37,.3);
  for(int i=0; i<5; i++) pie1->SetEntryLineWidth(i,1);  
  pie2->Draw("s >");
  TLatex title2 = TLatex( 0.05, 0.78, channelstring+" B-tag" );
  title2.SetNDC();
  title2.SetTextSize(0.045);
  title2.Draw();

  cpie->cd();
  TLatex cms1 = TLatex( 0.05, 0.91, "CMS" );
  //TLatex cms2 = TLatex( 0.173, 0.91, "Preliminary" );
  TLatex cms2 = TLatex( 0.173, 0.91, "Preliminary" );
  cms1.SetNDC();
  cms1.SetTextSize(0.11);
  cms1.SetTextFont(62);
  cms2.SetNDC();
  cms2.SetTextFont(52);
  cms2.SetTextSize(0.094);
  cms1.Draw();
  if(preliminary) cms2.Draw();

  char lumi_text[100];
  sprintf(lumi_text,"%0.2f fb^{-1} (13 TeV)",luminosity);
  TLatex infoRight = TLatex( 0.675, 0.915, lumi_text );
  infoRight.SetNDC();
  infoRight.SetTextSize(0.07);
  infoRight.SetTextFont(42);
  infoRight.Draw();
  
  cpie->Draw();
  TString preliminaryString="";
  if(preliminary) preliminaryString= "_preliminary";
  TString namestring=outfile+preliminaryString+".png";
  cpie->SaveAs(namestring);
  if (ALLPLOTS){
    namestring.ReplaceAll( ".png", ".pdf");
    cpie->SaveAs(namestring);
  }
  delete pie1; delete pie2; 
  delete cpie;
  
}

void PlotterClass::plotCR(const std::vector<TString> fname, const std::vector<TString> type, const TString fname_data, const TString iso, const TString cr, const TString imagefile, const TString xtitle)
{

  std::cout << "In plotCR, producing " << imagefile << " using " << fname.size() << " input samples" << std::endl;

  TString hname="hh_";
  if ( iso.Contains("tight_alt") ) hname+="t_alt_";
  else if ( iso.Contains("tight") ) hname+="t_";
  else if ( iso.Contains("all") ) hname+="a_";
  else hname+="l_";

  if ( fname.at(0).Contains("_mt") )   hname+="mt";
  if ( fname.at(0).Contains("_mvis") ) hname+="mvis";
  if ( fname.at(0).Contains("_pt") )   hname+="pt";
  if ( fname.at(0).Contains("_muiso") )   hname+="muiso";
  if ( fname.at(0).Contains("_lepPt") )   hname+="lepPt";

  TLegend* leg = new TLegend(0.6,0.15,0.88,0.9);
  std::vector<TH1D*> hist;
  std::vector<TFile*> f;
  THStack* hs = new THStack("w","");
  
  TString region = " ";
  if ( fname.at(0).Contains("AI")) region += "AI ";
  if ( fname.at(0).Contains("SS")) region += "SS ";
  leg->SetHeader(cr + region +"CR, " + iso + " isolation" );

  //sim
  //  TH1D* hsum= (TH1D*) hist.at(0)->Clone();
  TH1D* hsum=0;
  for (unsigned ih=0; ih<fname.size(); ih++){
    //if(fname.at(ih).Contains("QCD.root")) continue;
    f.push_back( new TFile( fname.at(ih) ) );
    hist.push_back( (TH1D*) f.at(ih)->Get(hname) );
    hs->Add( hist.back(),"hist");
    if (ih==0) hsum=(TH1D*) hist.at(ih)->Clone();
    else hsum->Add(hist.at(ih));

    for(int is=0; is<nSAMPLES; is++){
      if (type.at(ih)==vsuff[is]){
        hist.at(ih)->SetFillColor(vcolor[is]);
        leg->AddEntry(hist.at(ih),vlabel[is],"f");
        break;
      }
    }

  }
  hsum->SetXTitle(xtitle);

  //data
  TFile fd( fname_data );
  TH1D* hdata=(TH1D*) fd.Get(hname);
  leg->AddEntry(hdata, "data", "lep");

  this->makeRatioPlot(hdata, hsum, imagefile, "", "", leg, "data/MC", hs);

}

void PlotterClass::makeRatioPlot(TH1D *hdata, TH1D *hmc, TString imagefilename, TString ltext, TString xtitle, TLegend *leg, TString ytitle, THStack *hs, TH1D *hsignal){

  TString xLabel=hmc->GetXaxis()->GetTitle();

  hdata->SetLineWidth(3);
  hdata->SetMarkerStyle(8);
  hdata->SetMarkerSize(1.3);

  /*for(int i=0; i<hdata->GetNbinsX(); i++){
    if(imagefilename.Contains("mvis") && i>6 && i<=10) hdata->SetBinContent(i,-10);
    }*/

  hmc->SetFillColor(kBlack);
  hmc->SetFillStyle(3013);
  hmc->SetXTitle(xLabel);
  hmc->SetTitle("");

  double hmax=hmc->GetMaximum();
  if ( hmax < hdata->GetMaximum() ) hmax=hdata->GetMaximum();
  hmc->SetMaximum(hmax*1.3);

  TH1D* h_ratio=(TH1D*)hdata->Clone("hdata");
  TH1D* h_mc_err=(TH1D*)hmc->Clone("hmc");
  for (int i=0; i<=hmc->GetNbinsX(); i++){   //to avoid including MC errors here
    h_mc_err->SetBinContent( i , 1 );
    if ( fabs( hmc->GetBinContent(i) )<1e-8 ){ 
      h_ratio->SetBinContent(  i , 0 ); h_ratio->SetBinError( i , 0 ); 
      h_mc_err->SetBinError( i , 0 ); 
    }
    else{
      h_ratio->SetBinContent( i , h_ratio->GetBinContent( i  ) / hmc->GetBinContent( i ) );
      h_ratio->SetBinError( i , h_ratio->GetBinError( i  ) / hmc->GetBinContent( i ) );
      h_mc_err->SetBinError( i , h_mc_err->GetBinError( i  ) / hmc->GetBinContent( i ) );
    }
  }
  //  h_ratio->Divide( hmc );

  h_ratio->SetYTitle(ytitle);
  h_mc_err->SetYTitle(ytitle);

  TCanvas* c1 = new TCanvas("c1","Stacked Histograms of all Backgrounds vs Data",1200,800);

  //  TH1* frame = c1->DrawFrame(hist_min,yMin,hist_max,yMax,description);
  c1->Divide(1, 2, 0.0, 0.0);
  c1->GetPad(1)->SetPad(0.0, 0.32, 1., 1.0);
  c1->GetPad(2)->SetPad(0.0, 0.00, 1., 0.34);

  //Set pad margins 1
  c1->cd(1);
  gPad->SetTopMargin(0.08);
  gPad->SetLeftMargin(0.12);
  gPad->SetBottomMargin(0.046);
  gPad->SetRightMargin(0.1);

  //Set pad margins 2
  c1->cd(2);
  gPad->SetBottomMargin(0.35);
  gPad->SetLeftMargin(0.12);
  gPad->SetRightMargin(0.1);

  float pad2_xfac = c1->GetPad(1)->YtoPixel(0.) / c1->GetPad(2)->YtoPixel(0.);

  c1->cd(1);
  TString hd_name=hdata->GetName();
  if ( !hs ){ //non-stacked plot
    hmc->Draw("");
    hdata->Draw("COLZ same"); //CR dots
    hmc->GetYaxis()->SetTitleOffset(1.25);
    hmc->GetXaxis()->SetLabelSize(0);
    hmc->SetMinimum(0.);
    if (hd_name=="c_t") hmc->GetYaxis()->SetTitle("fake factor");
    else{
      float bw=hdata->GetBinWidth(1);
      TString m_ytitle="Events / "; m_ytitle+=(int)bw; m_ytitle+=" GeV";
      hmc->GetYaxis()->SetTitle(m_ytitle);
      hmc->GetYaxis()->SetTitleOffset(1.25);
      hmc->GetXaxis()->SetLabelSize(0);
    }
  } else{ //other plot
    hdata->Draw();
    hs->Draw("same");
    hs->SetMaximum(hmax*1.3);
    hs->SetTitle("");
    hmc->Draw("e2 same");
    hdata->GetXaxis()->SetTitle("");

    float bw=hdata->GetBinWidth(1);
    TString m_ytitle="Events / "; m_ytitle+=(int)bw; m_ytitle+=" GeV";
    hdata->GetYaxis()->SetTitle(m_ytitle);
    hdata->GetYaxis()->SetTitleSize( 0.8* hdata->GetXaxis()->GetTitleSize()   * pad2_xfac );
    hdata->GetYaxis()->SetLabelSize( 0.8* hdata->GetXaxis()->GetTitleSize()   * pad2_xfac );
    hdata->GetYaxis()->SetTitleOffset(0.91);
    hdata->GetXaxis()->SetLabelSize(0);
  }

  //  hs->Draw("hist");
  //  hmc->Draw("same");
  //  hmc->Draw("");
  //  hs->Draw("e2 same");

  if (leg){
    leg->SetFillColor(10);
    leg->SetShadowColor(10);
    leg->SetLineColor(10);
    leg->Draw();
  }

  TString caption=getCaption(ltext);
  TString description=getDescription(ltext);

  // stringstream used_lumi; used_lumi << luminosity; TString Tused_lumi = used_lumi.str();
  TLatex l;
  l.SetTextSize(0.06);
  l.SetNDC();
  //l.SetTextFont(102);
  // FIXME lumi is hardcoded !
  // l.DrawLatex(0.75,0.93,"41.5 fb^{-1} (13 TeV)");
  char lumi_text[100];
  sprintf(lumi_text,"%0.2f fb^{-1} (13 TeV)",luminosity);
  l.DrawLatex(0.75,0.93,lumi_text);

  TLatex c;
  cout << "Caption: " << caption << endl;
  if (caption != ""){
    c.SetTextSize(0.06);
    c.SetNDC();
    c.DrawLatex(0.18,0.93,caption);
  }

  TLatex pre;
  pre.SetTextSize(0.07);
  pre.SetNDC();
  pre.DrawLatex(0.2,0.85,"CMS");
  TLatex pre1;
  pre1.SetTextSize(0.04);
  pre1.SetTextFont(12);
  pre1.SetNDC();
  pre1.DrawLatex(0.2,0.81,"Preliminary");
  

  

  c1->cd(2);
  //h_mc_err->SetXTitle(xLabel);
  h_mc_err->GetYaxis()->SetRangeUser(0.500,1.500);
  double extra_fac=1.;
  if ( !hs ){
    h_mc_err->SetXTitle(xtitle);
    //    h_mc_err->SetYTitle("");
    h_mc_err->GetYaxis()->SetRangeUser(0.0,2.4);
    if (hd_name=="c_t") extra_fac=1.5;
  }
  // cout << "TITLE SIZE: " << 1.7*  h_mc_err->GetXaxis()->GetTitleSize()   * pad2_xfac << endl;
  // cout << "LABEL SIZE: " << 1.7* h_mc_err->GetXaxis()->GetLabelSize()   * pad2_xfac * extra_fac << endl;
  h_mc_err->GetXaxis()->SetTitleSize( 1.5*  h_mc_err->GetXaxis()->GetTitleSize()   * pad2_xfac );
  //  h_mc_err->GetXaxis()->SetTitleOffset( h_mc_err->GetXaxis()->GetTitleOffset() / pad2_xfac );
  h_mc_err->GetXaxis()->SetLabelSize(  1.5* h_mc_err->GetXaxis()->GetLabelSize()   * pad2_xfac * extra_fac );
  //  h_mc_err->GetXaxis()->SetLabelOffset( h_mc_err->GetXaxis()->GetLabelSize()   * pad2_xfac );

  h_mc_err->GetYaxis()->SetTitleSize( 1.5*  h_mc_err->GetYaxis()->GetTitleSize()   * pad2_xfac );
  h_mc_err->GetYaxis()->SetTitleOffset(  h_mc_err->GetYaxis()->GetTitleOffset() / pad2_xfac );
  h_mc_err->GetYaxis()->SetLabelSize( 1.5*  h_mc_err->GetYaxis()->GetLabelSize()   * pad2_xfac );
  //  h_mc_err->GetYaxis()->SetLabelOffset( h_mc_err->GetYaxis()->GetLabelSize()   * pad2_xfac );

  h_mc_err->GetYaxis()->SetNdivisions(306);
  h_mc_err->GetYaxis()->CenterTitle();

  h_mc_err->Draw("e2");
  h_ratio->Draw("same");

  gPad->SetGridy();

  // Write plots                                                                                                                
  if ( imagefilename != "" ){
    c1->SaveAs(imagefilename+".png");
    if (ALLPLOTS){
      c1->SaveAs(imagefilename+".pdf");
      c1->SaveAs(imagefilename+".eps");
      c1->SaveAs(imagefilename+".C");
    }
  }

  c1->cd(1);
  gPad->SetLogy();
  c1->SaveAs(imagefilename+"_log.png");
  //  c1->Print(pdfFile);                                                                                                     
  c1->Close();

  delete leg;delete c1;

}

Int_t PlotterClass::plotFF(const TString FF_file_CR,const TString FF_file_SR,const int mode,const TString plotfile, const TString n1, const TString n2, const TString tight_cat, const Double_t* xbins, const Int_t xbins_size, const TString xlabel)
{

  TFile f1(FF_file_CR);
  if(f1.IsZombie()){
    cout << "No file " << FF_file_CR << " available" << endl;
    return 0;
  }
  TFile f2(FF_file_SR);
  if(f2.IsZombie()){
    cout << "No file " << FF_file_SR << " available" << endl;
    return 0;
  }

  TH1D* FF_CR = (TH1D*) f1.Get("c_t"+tight_cat);
  TH1D* FF_SR = (TH1D*) f2.Get("c_t"+tight_cat);

  FF_CR->SetLineWidth(3);
  FF_SR->SetLineWidth(3);

  FF_CR->SetLineStyle(1);
  FF_SR->SetLineStyle(2);

  TString proc="";

  Int_t N_p=0, N_e=0, N_t=0, N_j=0;
  const Double_t *Pt_cuts=0; const Double_t *Eta_cuts=0; const Int_t *Decay_cuts=0; const Int_t *Njet_cuts=0;

  Int_t m_color=0;
  if (mode & _W_JETS){
    proc="W+jets";
    N_p=N_p_Wjets; N_e=N_e_Wjets; N_t=N_t_Wjets; N_j=N_j_Wjets;
    Pt_cuts=Pt_cuts_Wjets; Eta_cuts=Eta_cuts_Wjets; Decay_cuts=Decay_cuts_Wjets; Njet_cuts=Njet_cuts_Wjets;
    m_color=color_Wjets;
  }
  else if (mode & _DY ){
    proc="DY+jets";
    N_p=N_p_DY; N_e=N_e_DY; N_t=N_t_DY; N_j=N_j_Wjets;
    Pt_cuts=Pt_cuts_DY; Eta_cuts=Eta_cuts_DY; Decay_cuts=Decay_cuts_DY; Njet_cuts=Njet_cuts_Wjets;
    m_color=color_DY_J;
  }
  else if (mode & _TT && mode & SR){
    proc="ttbar";
    N_p=N_p_TT_SR; N_e=N_e_TT; N_t=N_t_TT; N_j=N_j_TT_SR;
    Pt_cuts=Pt_cuts_TT_SR; Eta_cuts=Eta_cuts_TT; Decay_cuts=Decay_cuts_TT; Njet_cuts=Njet_cuts_TT_SR;
    m_color=color_TT_J;
  }
  else if (mode & _TT ){
    proc="ttbar";
    N_p=N_p_TT_CR; N_e=N_e_TT; N_t=N_t_TT; N_j=N_j_TT_CR;
    Pt_cuts=Pt_cuts_TT_CR; Eta_cuts=Eta_cuts_TT; Decay_cuts=Decay_cuts_TT; Njet_cuts=Njet_cuts_TT_CR;
    m_color=color_TT_J;
  }
  else if (mode & _QCD && mode & _AI){
    proc="QCD AI";
    N_p=N_p_QCD_AI; N_e=N_e_QCD; N_t=N_t_QCD; N_j=N_j_Wjets;
    Pt_cuts=Pt_cuts_QCD_AI; Eta_cuts=Eta_cuts_QCD; Decay_cuts=Decay_cuts_QCD; Njet_cuts=Njet_cuts_Wjets;
    m_color=color_QCD;
  }
  else if (mode & _QCD ){
    proc="QCD";
    N_p=N_p_QCD; N_e=N_e_QCD; N_t=N_t_QCD; N_j=N_j_Wjets;
    Pt_cuts=Pt_cuts_QCD; Eta_cuts=Eta_cuts_QCD; Decay_cuts=Decay_cuts_QCD; Njet_cuts=Njet_cuts_Wjets;
    m_color=color_QCD;
  }
  FF_CR->SetMarkerColor(m_color);
  FF_SR->SetMarkerColor(m_color);
  FF_CR->SetLineColor(m_color);
  FF_SR->SetLineColor(m_color);

  if ( xbins_size==0 ){
    for (int ijet=0; ijet<N_j; ijet++){
      TString jlabel=""; jlabel="0jet"; if (ijet>0) jlabel="1jet";
      if(mode &_TT) jlabel="";
      cout << jlabel << endl;
      for (int t=0; t<N_t; t++){
        TString tlabel;
        if (N_t>1){ tlabel=" 1p"; if (t>0) tlabel=" 3p";} //not automatic but prettier
        for (int p=0; p<N_p; p++){
          TString plabel="";
          if (N_p>1){
            plabel=" pt";
            plabel+=Pt_cuts[p]; plabel+="-";
            if ( (p+1)==N_p ) plabel+="#infty"; else plabel+=Pt_cuts[p+1];
          }
          
          for (int e=0; e<N_e; e++){
            TString elabel="";
            if (N_e>1){
              elabel=" #eta";
              //	    if (e==0) elabel+=Eta_cuts[e]; else{ elabel+=(int)Eta_cuts[e]; elabel+="."; elabel+=(int) ( (Eta_cuts[e]-(int)Eta_cuts[e])*1000 );}
              elabel=this->FloatToString( Eta_cuts[e] , 3 );
              elabel+="-";
              if ( (e+1)==N_e ) elabel+="#infty"; else{ elabel=this->FloatToString( Eta_cuts[e+1] , 3 ); ;}
              //	    if ( (e+1)==N_e ) elabel+="#infty"; else{ elabel+=(int)Eta_cuts[e+1]; elabel+="."; elabel+=(int) ( (Eta_cuts[e+1]-(int)Eta_cuts[e+1])*1000 );}
            }
            
            //	FF_CR->GetXaxis()->SetBinLabel(p+e*N_p+t*(N_p*N_e)+1,tlabel+elabel+plabel);
	    //            cout << "YYY " << p+t*(N_p*N_e)+ijet*(N_t*N_p)+1 << " " << jlabel+tlabel+plabel+elabel << endl;
            if(p==0)FF_CR->GetXaxis()->SetBinLabel(p+t*(N_p*N_e)+ijet*(N_t*N_p)+1,jlabel+tlabel+", p_{T} binned");
            if(p==0)FF_SR->GetXaxis()->SetBinLabel(p+t*(N_p*N_e)+ijet*(N_t*N_p)+1,jlabel+tlabel+",p_{T} binned");
          }
          
        }
      }
    }
  } else{
    for (Int_t i=0; i<xbins_size-1; i++){
      TString tmp=this->FloatToString( xbins[i], 3 ); tmp+="-"; tmp+=this->FloatToString( xbins[i+1], 3 );
      FF_CR->GetXaxis()->SetBinLabel(i+1,tmp);
      FF_SR->GetXaxis()->SetBinLabel(i+1,tmp);
    }
  }

  // Determine the Maximum automatically
  Double_t maxY1=FF_CR->GetBinContent(FF_CR->GetMaximumBin());
  Double_t maxY2=FF_SR->GetBinContent(FF_SR->GetMaximumBin());
  Double_t maxY=max(maxY1,maxY2)*1.6;

  FF_CR->SetMaximum(maxY);

  TCanvas *c; c = new TCanvas("c","Fakefactors",1200,800);
  gStyle->SetOptStat(0);
  FF_CR->SetTitle("");
  //  FF_CR->SetXTitle("pt x ntracks");
  FF_CR->SetXTitle(xlabel);
  FF_CR->SetYTitle("fake factor"); 
  FF_CR->GetYaxis()->SetTitleSize(2.5);
  TLegend* leg;
  if ( xbins_size==0 ){
    leg = new TLegend(0.55,0.68,0.89,0.88);
    leg->AddEntry(FF_CR,n1,"l");
    if (n1 != n2) leg->AddEntry(FF_SR,n2,"l");
    gPad->SetLogy();
  } else{
    leg = new TLegend(0.55,0.68,0.89,0.88);
    //    leg = new TLegend(0.55,0.15,0.89,0.35);
    leg->AddEntry(FF_CR,n1,"lep");
    if (n1 != n2) leg->AddEntry(FF_SR,n2,"lep");
    FF_CR->SetMinimum(0.);
    FF_CR->GetYaxis()->SetTitleOffset(1.25);
  }
  leg->SetFillColor(10);
  leg->SetShadowColor(10);
  leg->SetLineColor(10);

  if (n1 != n2)
    this->makeRatioPlot(FF_CR, FF_SR, plotfile+tight_cat, "", xlabel, leg, "Ratio");
  else{
    FF_CR->Draw();
    FF_SR->Draw("same");
    leg->Draw();
    gPad->SaveAs(plotfile+tight_cat+".png");
    if (ALLPLOTS){
      gPad->SaveAs(plotfile+tight_cat+".pdf");
      gPad->SaveAs(plotfile+tight_cat+".eps");
      gPad->SaveAs(plotfile+tight_cat+".C");
    }
  }

  f1.Close();
  f2.Close();

  c->Close();

  return 1;

}

TString PlotterClass::FloatToString( double num, int prec ){

  TString ret="";
  int sgn=1;
  if ( num < 0 ){ sgn=-1; num*=-1; ret="-";}

  for (int m_prec=0; m_prec<=prec; m_prec++){
    int inum=(int)num;
    if ( (num - inum)>0.9999 ){
      ret+=(inum+1);
      return ret;
    } else{
      ret+=inum;
      if ( m_prec==0 ) ret+=".";
    }
    num-=inum; num*=10;
  }

  if ( ret.Contains(".") ){
    for (int i=ret.Length()-1; i>0; i--){
      if ( ret[i]=='.' ){ ret.Remove(i); break; }
      if ( ret[i]!='0' ) break;
      ret.Remove(i);
    }
  }

  return ret;

}


TString PlotterClass::getDescription(TString ltext)
{
  stringstream returnstring;
  returnstring << ltext;
  if(inclusive_selection) return returnstring.str();
  else return returnstring.str().substr(0,returnstring.str().find("FF")+2);

  return returnstring.str();
  
}

TString PlotterClass::getCaption(TString ltext)
{
  string returnstring="";
  if(CHAN==kMU) returnstring+="#mu#tau";
  if(CHAN==kEL) returnstring+="e#tau";
  if(CHAN==kTAU) returnstring+="#tau#tau";

  stringstream tmpstring;
  tmpstring << ltext;
  if(tmpstring.str().find("0jetLow")!=string::npos) returnstring+=" 0jet_low category";
  else if(tmpstring.str().find("0jetHigh")!=string::npos) returnstring+=" 0jet_high category";
  else if(tmpstring.str().find("1jetLow")!=string::npos) returnstring+=" 1jet_low category";
  else if(tmpstring.str().find("1jetHigh")!=string::npos) returnstring+=" 1jet_high category";
  else if(tmpstring.str().find("VBFLow")!=string::npos) returnstring+=" VBF_high category";
  else if(tmpstring.str().find("VBFHigh")!=string::npos) returnstring+=" VBF_high category";
  else if(tmpstring.str().find("2jet")!=string::npos) returnstring+=" 2jet category";
  else if(tmpstring.str().find("anyb")!=string::npos) returnstring+=" #geq1bjet";
  else returnstring+=" inclusive category";

  return returnstring;
}

