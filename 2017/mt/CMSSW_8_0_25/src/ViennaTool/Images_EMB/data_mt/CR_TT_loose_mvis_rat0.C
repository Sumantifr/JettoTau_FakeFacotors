void CR_TT_loose_mvis_rat0()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:44:27 2020) by ROOT version6.06/01
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
   Double_t xAxis274[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__325 = new TH1D("hh_l_mvis__325","",19, xAxis274);
   hh_l_mvis__325->SetStats(0);
   hh_l_mvis__325->SetLineWidth(3);
   hh_l_mvis__325->SetMarkerStyle(8);
   hh_l_mvis__325->SetMarkerSize(1.3);
   hh_l_mvis__325->GetXaxis()->SetLabelSize(0);
   hh_l_mvis__325->GetYaxis()->SetTitle("Events / 30 GeV");
   hh_l_mvis__325->GetYaxis()->SetLabelSize(0.064);
   hh_l_mvis__325->GetYaxis()->SetTitleSize(0.064);
   hh_l_mvis__325->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mvis__325->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis275[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1F *w_stack_28 = new TH1F("w_stack_28","",19, xAxis275);
   w_stack_28->SetMinimum(0);
   w_stack_28->SetMaximum(0);
   w_stack_28->SetDirectory(0);
   w_stack_28->SetStats(0);
   w->SetHistogram(w_stack_28);
   
   Double_t xAxis276[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__326 = new TH1D("hh_l_mvis__326","",19, xAxis276);
   hh_l_mvis__326->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mvis__326->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis277[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__327 = new TH1D("hh_l_mvis__327","",19, xAxis277);
   hh_l_mvis__327->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mvis__327->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis278[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__328 = new TH1D("hh_l_mvis__328","",19, xAxis278);
   hh_l_mvis__328->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mvis__328->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis279[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__329 = new TH1D("hh_l_mvis__329","",19, xAxis279);
   hh_l_mvis__329->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mvis__329->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis280[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__330 = new TH1D("hh_l_mvis__330","",19, xAxis280);
   hh_l_mvis__330->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mvis__330->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis281[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__331 = new TH1D("hh_l_mvis__331","",19, xAxis281);
   hh_l_mvis__331->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mvis__331->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis282[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__332 = new TH1D("hh_l_mvis__332","",19, xAxis282);
   hh_l_mvis__332->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mvis__332->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis283[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__333 = new TH1D("hh_l_mvis__333","",19, xAxis283);
   hh_l_mvis__333->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mvis__333->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   w->Draw("same");
   Double_t xAxis284[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__334 = new TH1D("hh_l_mvis__334","",19, xAxis284);
   hh_l_mvis__334->SetMaximum(0);
   hh_l_mvis__334->SetStats(0);
   hh_l_mvis__334->SetFillColor(1);
   hh_l_mvis__334->SetFillStyle(3013);
   hh_l_mvis__334->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hh_l_mvis__334->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","TT CR, loose isolation","h");
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
   Double_t xAxis285[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hmc__335 = new TH1D("hmc__335","",19, xAxis285);
   hmc__335->SetBinContent(0,1);
   hmc__335->SetBinContent(1,1);
   hmc__335->SetBinContent(2,1);
   hmc__335->SetBinContent(3,1);
   hmc__335->SetBinContent(4,1);
   hmc__335->SetBinContent(5,1);
   hmc__335->SetBinContent(6,1);
   hmc__335->SetBinContent(7,1);
   hmc__335->SetBinContent(8,1);
   hmc__335->SetBinContent(9,1);
   hmc__335->SetBinContent(10,1);
   hmc__335->SetBinContent(11,1);
   hmc__335->SetBinContent(12,1);
   hmc__335->SetBinContent(13,1);
   hmc__335->SetBinContent(14,1);
   hmc__335->SetBinContent(15,1);
   hmc__335->SetBinContent(16,1);
   hmc__335->SetBinContent(17,1);
   hmc__335->SetBinContent(18,1);
   hmc__335->SetBinContent(19,1);
   hmc__335->SetMinimum(0.5);
   hmc__335->SetMaximum(1.5);
   hmc__335->SetEntries(20);
   hmc__335->SetStats(0);
   hmc__335->SetFillColor(1);
   hmc__335->SetFillStyle(3013);
   hmc__335->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hmc__335->GetXaxis()->SetLabelSize(0.12);
   hmc__335->GetXaxis()->SetTitleSize(0.12);
   hmc__335->GetYaxis()->SetTitle("data/MC");
   hmc__335->GetYaxis()->CenterTitle(true);
   hmc__335->GetYaxis()->SetNdivisions(306);
   hmc__335->GetYaxis()->SetLabelSize(0.12);
   hmc__335->GetYaxis()->SetTitleSize(0.12);
   hmc__335->GetYaxis()->SetTitleOffset(0.5);
   hmc__335->Draw("e2");
   Double_t xAxis286[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hdata__336 = new TH1D("hdata__336","",19, xAxis286);
   hdata__336->SetEntries(20);
   hdata__336->SetStats(0);
   hdata__336->SetLineWidth(3);
   hdata__336->SetMarkerStyle(8);
   hdata__336->SetMarkerSize(1.3);
   hdata__336->GetYaxis()->SetTitle("data/MC");
   hdata__336->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
