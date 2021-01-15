void CR_TT__mvis_rat0()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:44:28 2020) by ROOT version6.06/01
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
   Double_t xAxis300[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__349 = new TH1D("hh_l_mvis__349","",19, xAxis300);
   hh_l_mvis__349->SetStats(0);
   hh_l_mvis__349->SetLineWidth(3);
   hh_l_mvis__349->SetMarkerStyle(8);
   hh_l_mvis__349->SetMarkerSize(1.3);
   hh_l_mvis__349->GetXaxis()->SetLabelSize(0);
   hh_l_mvis__349->GetYaxis()->SetTitle("Events / 30 GeV");
   hh_l_mvis__349->GetYaxis()->SetLabelSize(0.064);
   hh_l_mvis__349->GetYaxis()->SetTitleSize(0.064);
   hh_l_mvis__349->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mvis__349->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis301[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1F *w_stack_30 = new TH1F("w_stack_30","",19, xAxis301);
   w_stack_30->SetMinimum(0);
   w_stack_30->SetMaximum(0);
   w_stack_30->SetDirectory(0);
   w_stack_30->SetStats(0);
   w->SetHistogram(w_stack_30);
   
   Double_t xAxis302[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__350 = new TH1D("hh_l_mvis__350","",19, xAxis302);
   hh_l_mvis__350->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mvis__350->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis303[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__351 = new TH1D("hh_l_mvis__351","",19, xAxis303);
   hh_l_mvis__351->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mvis__351->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis304[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__352 = new TH1D("hh_l_mvis__352","",19, xAxis304);
   hh_l_mvis__352->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mvis__352->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis305[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__353 = new TH1D("hh_l_mvis__353","",19, xAxis305);
   hh_l_mvis__353->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mvis__353->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis306[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__354 = new TH1D("hh_l_mvis__354","",19, xAxis306);
   hh_l_mvis__354->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mvis__354->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis307[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__355 = new TH1D("hh_l_mvis__355","",19, xAxis307);
   hh_l_mvis__355->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mvis__355->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis308[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__356 = new TH1D("hh_l_mvis__356","",19, xAxis308);
   hh_l_mvis__356->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mvis__356->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis309[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__357 = new TH1D("hh_l_mvis__357","",19, xAxis309);
   hh_l_mvis__357->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mvis__357->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   w->Draw("same");
   Double_t xAxis310[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__358 = new TH1D("hh_l_mvis__358","",19, xAxis310);
   hh_l_mvis__358->SetMaximum(0);
   hh_l_mvis__358->SetStats(0);
   hh_l_mvis__358->SetFillColor(1);
   hh_l_mvis__358->SetFillStyle(3013);
   hh_l_mvis__358->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hh_l_mvis__358->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","TT CR,  isolation","h");
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
   Double_t xAxis311[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hmc__359 = new TH1D("hmc__359","",19, xAxis311);
   hmc__359->SetBinContent(0,1);
   hmc__359->SetBinContent(1,1);
   hmc__359->SetBinContent(2,1);
   hmc__359->SetBinContent(3,1);
   hmc__359->SetBinContent(4,1);
   hmc__359->SetBinContent(5,1);
   hmc__359->SetBinContent(6,1);
   hmc__359->SetBinContent(7,1);
   hmc__359->SetBinContent(8,1);
   hmc__359->SetBinContent(9,1);
   hmc__359->SetBinContent(10,1);
   hmc__359->SetBinContent(11,1);
   hmc__359->SetBinContent(12,1);
   hmc__359->SetBinContent(13,1);
   hmc__359->SetBinContent(14,1);
   hmc__359->SetBinContent(15,1);
   hmc__359->SetBinContent(16,1);
   hmc__359->SetBinContent(17,1);
   hmc__359->SetBinContent(18,1);
   hmc__359->SetBinContent(19,1);
   hmc__359->SetMinimum(0.5);
   hmc__359->SetMaximum(1.5);
   hmc__359->SetEntries(20);
   hmc__359->SetStats(0);
   hmc__359->SetFillColor(1);
   hmc__359->SetFillStyle(3013);
   hmc__359->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hmc__359->GetXaxis()->SetLabelSize(0.12);
   hmc__359->GetXaxis()->SetTitleSize(0.12);
   hmc__359->GetYaxis()->SetTitle("data/MC");
   hmc__359->GetYaxis()->CenterTitle(true);
   hmc__359->GetYaxis()->SetNdivisions(306);
   hmc__359->GetYaxis()->SetLabelSize(0.12);
   hmc__359->GetYaxis()->SetTitleSize(0.12);
   hmc__359->GetYaxis()->SetTitleOffset(0.5);
   hmc__359->Draw("e2");
   Double_t xAxis312[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hdata__360 = new TH1D("hdata__360","",19, xAxis312);
   hdata__360->SetEntries(20);
   hdata__360->SetStats(0);
   hdata__360->SetLineWidth(3);
   hdata__360->SetMarkerStyle(8);
   hdata__360->SetMarkerSize(1.3);
   hdata__360->GetYaxis()->SetTitle("data/MC");
   hdata__360->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
