void CR_DY_tight_mvis_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:31 2020) by ROOT version6.06/01
   TCanvas *c1 = new TCanvas("c1", "Stacked Histograms of all Backgrounds vs Data",0,0,1200,800);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTopMargin(0.04761905);
   c1->SetBottomMargin(0.05);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "Stacked Histograms of all Backgrounds vs Data_1",0,0.32,1,1);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-69.23077,-0.05526316,507.6923,1.14611);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis170[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__193 = new TH1D("hh_t_mvis__193","",19, xAxis170);
   hh_t_mvis__193->SetStats(0);
   hh_t_mvis__193->SetLineWidth(3);
   hh_t_mvis__193->SetMarkerStyle(8);
   hh_t_mvis__193->SetMarkerSize(1.3);
   hh_t_mvis__193->GetXaxis()->SetLabelSize(0);
   hh_t_mvis__193->GetYaxis()->SetTitle("Events / 30 GeV");
   hh_t_mvis__193->GetYaxis()->SetLabelSize(0.064);
   hh_t_mvis__193->GetYaxis()->SetTitleSize(0.064);
   hh_t_mvis__193->GetYaxis()->SetTitleOffset(0.91);
   hh_t_mvis__193->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis171[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1F *w_stack_17 = new TH1F("w_stack_17","",19, xAxis171);
   w_stack_17->SetMinimum(0);
   w_stack_17->SetMaximum(0);
   w_stack_17->SetDirectory(0);
   w_stack_17->SetStats(0);
   w->SetHistogram(w_stack_17);
   
   Double_t xAxis172[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__194 = new TH1D("hh_t_mvis__194","",19, xAxis172);
   hh_t_mvis__194->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_mvis__194->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis173[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__195 = new TH1D("hh_t_mvis__195","",19, xAxis173);
   hh_t_mvis__195->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_mvis__195->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis174[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__196 = new TH1D("hh_t_mvis__196","",19, xAxis174);
   hh_t_mvis__196->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_mvis__196->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis175[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__197 = new TH1D("hh_t_mvis__197","",19, xAxis175);
   hh_t_mvis__197->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_mvis__197->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis176[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__198 = new TH1D("hh_t_mvis__198","",19, xAxis176);
   hh_t_mvis__198->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_mvis__198->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis177[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__199 = new TH1D("hh_t_mvis__199","",19, xAxis177);
   hh_t_mvis__199->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_mvis__199->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis178[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__200 = new TH1D("hh_t_mvis__200","",19, xAxis178);
   hh_t_mvis__200->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_mvis__200->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis179[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__201 = new TH1D("hh_t_mvis__201","",19, xAxis179);
   hh_t_mvis__201->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_mvis__201->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   w->Draw("same");
   Double_t xAxis180[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__202 = new TH1D("hh_t_mvis__202","",19, xAxis180);
   hh_t_mvis__202->SetMaximum(0);
   hh_t_mvis__202->SetStats(0);
   hh_t_mvis__202->SetFillColor(1);
   hh_t_mvis__202->SetFillStyle(3013);
   hh_t_mvis__202->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hh_t_mvis__202->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","DY CR, tight isolation","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","W+jets","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","ttJ (j#rightarrow#tau)","f");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","ttL (l#rightarrow#tau)","f");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","ZJ (j#rightarrow#tau)","f");

   ci = TColor::GetColor("#336633");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","ZL (l#rightarrow#tau)","f");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","VV (j#rightarrow#tau)","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","VV (l#rightarrow#tau)","f");

   ci = TColor::GetColor("#cc00ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","EMB","f");

   ci = TColor::GetColor("#999966");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_mvis","data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.75,0.93,"41.50 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.93,"#mu#tau inclusive category");
tex->SetNDC();
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.85,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.81,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(12);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "Stacked Histograms of all Backgrounds vs Data_2",0,0,1,0.34);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-69.23077,-0.03846155,507.6923,1.5);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.12);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.35);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   Double_t xAxis181[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hmc__203 = new TH1D("hmc__203","",19, xAxis181);
   hmc__203->SetBinContent(0,1);
   hmc__203->SetBinContent(1,1);
   hmc__203->SetBinContent(2,1);
   hmc__203->SetBinContent(3,1);
   hmc__203->SetBinContent(4,1);
   hmc__203->SetBinContent(5,1);
   hmc__203->SetBinContent(6,1);
   hmc__203->SetBinContent(7,1);
   hmc__203->SetBinContent(8,1);
   hmc__203->SetBinContent(9,1);
   hmc__203->SetBinContent(10,1);
   hmc__203->SetBinContent(11,1);
   hmc__203->SetBinContent(12,1);
   hmc__203->SetBinContent(13,1);
   hmc__203->SetBinContent(14,1);
   hmc__203->SetBinContent(15,1);
   hmc__203->SetBinContent(16,1);
   hmc__203->SetBinContent(17,1);
   hmc__203->SetBinContent(18,1);
   hmc__203->SetBinContent(19,1);
   hmc__203->SetMinimum(0.5);
   hmc__203->SetMaximum(1.5);
   hmc__203->SetEntries(20);
   hmc__203->SetStats(0);
   hmc__203->SetFillColor(1);
   hmc__203->SetFillStyle(3013);
   hmc__203->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hmc__203->GetXaxis()->SetLabelSize(0.12);
   hmc__203->GetXaxis()->SetTitleSize(0.12);
   hmc__203->GetYaxis()->SetTitle("data/MC");
   hmc__203->GetYaxis()->CenterTitle(true);
   hmc__203->GetYaxis()->SetNdivisions(306);
   hmc__203->GetYaxis()->SetLabelSize(0.12);
   hmc__203->GetYaxis()->SetTitleSize(0.12);
   hmc__203->GetYaxis()->SetTitleOffset(0.5);
   hmc__203->Draw("e2");
   Double_t xAxis182[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hdata__204 = new TH1D("hdata__204","",19, xAxis182);
   hdata__204->SetEntries(20);
   hdata__204->SetStats(0);
   hdata__204->SetLineWidth(3);
   hdata__204->SetMarkerStyle(8);
   hdata__204->SetMarkerSize(1.3);
   hdata__204->GetYaxis()->SetTitle("data/MC");
   hdata__204->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
