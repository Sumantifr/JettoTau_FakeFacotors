void CR_TT_tight_mvis_rat1()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:46:25 2020) by ROOT version6.06/01
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
   Double_t xAxis287[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__337 = new TH1D("hh_t_mvis__337","",19, xAxis287);
   hh_t_mvis__337->SetStats(0);
   hh_t_mvis__337->SetLineWidth(3);
   hh_t_mvis__337->SetMarkerStyle(8);
   hh_t_mvis__337->SetMarkerSize(1.3);
   hh_t_mvis__337->GetXaxis()->SetLabelSize(0);
   hh_t_mvis__337->GetYaxis()->SetTitle("Events / 30 GeV");
   hh_t_mvis__337->GetYaxis()->SetLabelSize(0.064);
   hh_t_mvis__337->GetYaxis()->SetTitleSize(0.064);
   hh_t_mvis__337->GetYaxis()->SetTitleOffset(0.91);
   hh_t_mvis__337->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis288[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1F *w_stack_29 = new TH1F("w_stack_29","",19, xAxis288);
   w_stack_29->SetMinimum(0);
   w_stack_29->SetMaximum(0);
   w_stack_29->SetDirectory(0);
   w_stack_29->SetStats(0);
   w->SetHistogram(w_stack_29);
   
   Double_t xAxis289[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__338 = new TH1D("hh_t_mvis__338","",19, xAxis289);
   hh_t_mvis__338->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_mvis__338->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis290[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__339 = new TH1D("hh_t_mvis__339","",19, xAxis290);
   hh_t_mvis__339->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_mvis__339->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis291[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__340 = new TH1D("hh_t_mvis__340","",19, xAxis291);
   hh_t_mvis__340->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_mvis__340->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis292[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__341 = new TH1D("hh_t_mvis__341","",19, xAxis292);
   hh_t_mvis__341->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_mvis__341->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis293[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__342 = new TH1D("hh_t_mvis__342","",19, xAxis293);
   hh_t_mvis__342->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_mvis__342->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis294[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__343 = new TH1D("hh_t_mvis__343","",19, xAxis294);
   hh_t_mvis__343->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_mvis__343->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis295[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__344 = new TH1D("hh_t_mvis__344","",19, xAxis295);
   hh_t_mvis__344->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_mvis__344->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   Double_t xAxis296[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__345 = new TH1D("hh_t_mvis__345","",19, xAxis296);
   hh_t_mvis__345->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_mvis__345->SetFillColor(ci);
   w->Add(hh_t_mvis,"hist");
   w->Draw("same");
   Double_t xAxis297[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_t_mvis__346 = new TH1D("hh_t_mvis__346","",19, xAxis297);
   hh_t_mvis__346->SetMaximum(0);
   hh_t_mvis__346->SetStats(0);
   hh_t_mvis__346->SetFillColor(1);
   hh_t_mvis__346->SetFillStyle(3013);
   hh_t_mvis__346->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hh_t_mvis__346->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","TT CR, tight isolation","h");
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
   Double_t xAxis298[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hmc__347 = new TH1D("hmc__347","",19, xAxis298);
   hmc__347->SetBinContent(0,1);
   hmc__347->SetBinContent(1,1);
   hmc__347->SetBinContent(2,1);
   hmc__347->SetBinContent(3,1);
   hmc__347->SetBinContent(4,1);
   hmc__347->SetBinContent(5,1);
   hmc__347->SetBinContent(6,1);
   hmc__347->SetBinContent(7,1);
   hmc__347->SetBinContent(8,1);
   hmc__347->SetBinContent(9,1);
   hmc__347->SetBinContent(10,1);
   hmc__347->SetBinContent(11,1);
   hmc__347->SetBinContent(12,1);
   hmc__347->SetBinContent(13,1);
   hmc__347->SetBinContent(14,1);
   hmc__347->SetBinContent(15,1);
   hmc__347->SetBinContent(16,1);
   hmc__347->SetBinContent(17,1);
   hmc__347->SetBinContent(18,1);
   hmc__347->SetBinContent(19,1);
   hmc__347->SetMinimum(0.5);
   hmc__347->SetMaximum(1.5);
   hmc__347->SetEntries(20);
   hmc__347->SetStats(0);
   hmc__347->SetFillColor(1);
   hmc__347->SetFillStyle(3013);
   hmc__347->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hmc__347->GetXaxis()->SetLabelSize(0.12);
   hmc__347->GetXaxis()->SetTitleSize(0.12);
   hmc__347->GetYaxis()->SetTitle("data/MC");
   hmc__347->GetYaxis()->CenterTitle(true);
   hmc__347->GetYaxis()->SetNdivisions(306);
   hmc__347->GetYaxis()->SetLabelSize(0.12);
   hmc__347->GetYaxis()->SetTitleSize(0.12);
   hmc__347->GetYaxis()->SetTitleOffset(0.5);
   hmc__347->Draw("e2");
   Double_t xAxis299[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hdata__348 = new TH1D("hdata__348","",19, xAxis299);
   hdata__348->SetEntries(20);
   hdata__348->SetStats(0);
   hdata__348->SetLineWidth(3);
   hdata__348->SetMarkerStyle(8);
   hdata__348->SetMarkerSize(1.3);
   hdata__348->GetYaxis()->SetTitle("data/MC");
   hdata__348->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
