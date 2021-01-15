void CR_DY__mvis()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Thu Dec  3 17:52:28 2020) by ROOT version6.06/01
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
   Double_t xAxis183[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__205 = new TH1D("hh_l_mvis__205","",19, xAxis183);
   hh_l_mvis__205->SetStats(0);
   hh_l_mvis__205->SetLineWidth(3);
   hh_l_mvis__205->SetMarkerStyle(8);
   hh_l_mvis__205->SetMarkerSize(1.3);
   hh_l_mvis__205->GetXaxis()->SetLabelSize(0);
   hh_l_mvis__205->GetYaxis()->SetTitle("Events / 30 GeV");
   hh_l_mvis__205->GetYaxis()->SetLabelSize(0.064);
   hh_l_mvis__205->GetYaxis()->SetTitleSize(0.064);
   hh_l_mvis__205->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mvis__205->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis184[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1F *w_stack_18 = new TH1F("w_stack_18","",19, xAxis184);
   w_stack_18->SetMinimum(0);
   w_stack_18->SetMaximum(0);
   w_stack_18->SetDirectory(0);
   w_stack_18->SetStats(0);
   w->SetHistogram(w_stack_18);
   
   Double_t xAxis185[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__206 = new TH1D("hh_l_mvis__206","",19, xAxis185);
   hh_l_mvis__206->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mvis__206->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis186[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__207 = new TH1D("hh_l_mvis__207","",19, xAxis186);
   hh_l_mvis__207->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mvis__207->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis187[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__208 = new TH1D("hh_l_mvis__208","",19, xAxis187);
   hh_l_mvis__208->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mvis__208->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis188[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__209 = new TH1D("hh_l_mvis__209","",19, xAxis188);
   hh_l_mvis__209->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mvis__209->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis189[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__210 = new TH1D("hh_l_mvis__210","",19, xAxis189);
   hh_l_mvis__210->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mvis__210->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis190[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__211 = new TH1D("hh_l_mvis__211","",19, xAxis190);
   hh_l_mvis__211->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mvis__211->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis191[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__212 = new TH1D("hh_l_mvis__212","",19, xAxis191);
   hh_l_mvis__212->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mvis__212->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis192[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__213 = new TH1D("hh_l_mvis__213","",19, xAxis192);
   hh_l_mvis__213->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mvis__213->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   w->Draw("same");
   Double_t xAxis193[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__214 = new TH1D("hh_l_mvis__214","",19, xAxis193);
   hh_l_mvis__214->SetMaximum(0);
   hh_l_mvis__214->SetStats(0);
   hh_l_mvis__214->SetFillColor(1);
   hh_l_mvis__214->SetFillStyle(3013);
   hh_l_mvis__214->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hh_l_mvis__214->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","DY CR,  isolation","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_l_mvis","W+jets","f");

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
   entry=leg->AddEntry("hh_l_mvis","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","EMB","f");

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
   entry=leg->AddEntry("hh_l_mvis","data","lep");
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
   Double_t xAxis194[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hmc__215 = new TH1D("hmc__215","",19, xAxis194);
   hmc__215->SetBinContent(0,1);
   hmc__215->SetBinContent(1,1);
   hmc__215->SetBinContent(2,1);
   hmc__215->SetBinContent(3,1);
   hmc__215->SetBinContent(4,1);
   hmc__215->SetBinContent(5,1);
   hmc__215->SetBinContent(6,1);
   hmc__215->SetBinContent(7,1);
   hmc__215->SetBinContent(8,1);
   hmc__215->SetBinContent(9,1);
   hmc__215->SetBinContent(10,1);
   hmc__215->SetBinContent(11,1);
   hmc__215->SetBinContent(12,1);
   hmc__215->SetBinContent(13,1);
   hmc__215->SetBinContent(14,1);
   hmc__215->SetBinContent(15,1);
   hmc__215->SetBinContent(16,1);
   hmc__215->SetBinContent(17,1);
   hmc__215->SetBinContent(18,1);
   hmc__215->SetBinContent(19,1);
   hmc__215->SetMinimum(0.5);
   hmc__215->SetMaximum(1.5);
   hmc__215->SetEntries(20);
   hmc__215->SetStats(0);
   hmc__215->SetFillColor(1);
   hmc__215->SetFillStyle(3013);
   hmc__215->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hmc__215->GetXaxis()->SetLabelSize(0.12);
   hmc__215->GetXaxis()->SetTitleSize(0.12);
   hmc__215->GetYaxis()->SetTitle("data/MC");
   hmc__215->GetYaxis()->CenterTitle(true);
   hmc__215->GetYaxis()->SetNdivisions(306);
   hmc__215->GetYaxis()->SetLabelSize(0.12);
   hmc__215->GetYaxis()->SetTitleSize(0.12);
   hmc__215->GetYaxis()->SetTitleOffset(0.5);
   hmc__215->Draw("e2");
   Double_t xAxis195[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hdata__216 = new TH1D("hdata__216","",19, xAxis195);
   hdata__216->SetEntries(20);
   hdata__216->SetStats(0);
   hdata__216->SetLineWidth(3);
   hdata__216->SetMarkerStyle(8);
   hdata__216->SetMarkerSize(1.3);
   hdata__216->GetYaxis()->SetTitle("data/MC");
   hdata__216->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
