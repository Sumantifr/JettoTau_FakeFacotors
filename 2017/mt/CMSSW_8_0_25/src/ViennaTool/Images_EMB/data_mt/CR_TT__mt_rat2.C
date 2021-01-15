void CR_TT__mt_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:32 2020) by ROOT version6.06/01
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
   c1_1->Range(-38.46154,-0.05526316,282.0513,1.14611);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis261[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__313 = new TH1D("hh_l_mt__313","",8, xAxis261);
   hh_l_mt__313->SetStats(0);
   hh_l_mt__313->SetLineWidth(3);
   hh_l_mt__313->SetMarkerStyle(8);
   hh_l_mt__313->SetMarkerSize(1.3);
   hh_l_mt__313->GetXaxis()->SetLabelSize(0);
   hh_l_mt__313->GetYaxis()->SetTitle("Events / 10 GeV");
   hh_l_mt__313->GetYaxis()->SetLabelSize(0.064);
   hh_l_mt__313->GetYaxis()->SetTitleSize(0.064);
   hh_l_mt__313->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mt__313->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis262[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1F *w_stack_27 = new TH1F("w_stack_27","",8, xAxis262);
   w_stack_27->SetMinimum(0);
   w_stack_27->SetMaximum(0);
   w_stack_27->SetDirectory(0);
   w_stack_27->SetStats(0);
   w->SetHistogram(w_stack_27);
   
   Double_t xAxis263[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__314 = new TH1D("hh_l_mt__314","",8, xAxis263);
   hh_l_mt__314->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mt__314->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis264[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__315 = new TH1D("hh_l_mt__315","",8, xAxis264);
   hh_l_mt__315->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mt__315->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis265[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__316 = new TH1D("hh_l_mt__316","",8, xAxis265);
   hh_l_mt__316->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mt__316->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis266[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__317 = new TH1D("hh_l_mt__317","",8, xAxis266);
   hh_l_mt__317->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mt__317->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis267[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__318 = new TH1D("hh_l_mt__318","",8, xAxis267);
   hh_l_mt__318->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mt__318->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis268[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__319 = new TH1D("hh_l_mt__319","",8, xAxis268);
   hh_l_mt__319->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mt__319->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis269[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__320 = new TH1D("hh_l_mt__320","",8, xAxis269);
   hh_l_mt__320->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mt__320->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis270[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__321 = new TH1D("hh_l_mt__321","",8, xAxis270);
   hh_l_mt__321->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mt__321->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   w->Draw("same");
   Double_t xAxis271[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__322 = new TH1D("hh_l_mt__322","",8, xAxis271);
   hh_l_mt__322->SetMaximum(0);
   hh_l_mt__322->SetStats(0);
   hh_l_mt__322->SetFillColor(1);
   hh_l_mt__322->SetFillStyle(3013);
   hh_l_mt__322->GetXaxis()->SetTitle("m_{T} (GeV)");
   hh_l_mt__322->Draw("e2 same");
   
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
   entry=leg->AddEntry("hh_l_mt","W+jets","f");

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
   entry=leg->AddEntry("hh_l_mt","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","EMB","f");

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
   entry=leg->AddEntry("hh_l_mt","data","lep");
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
   c1_2->Range(-38.46154,-0.03846155,282.0513,1.5);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.12);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.35);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   Double_t xAxis272[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hmc__323 = new TH1D("hmc__323","",8, xAxis272);
   hmc__323->SetBinContent(0,1);
   hmc__323->SetBinContent(1,1);
   hmc__323->SetBinContent(2,1);
   hmc__323->SetBinContent(3,1);
   hmc__323->SetBinContent(4,1);
   hmc__323->SetBinContent(5,1);
   hmc__323->SetBinContent(6,1);
   hmc__323->SetBinContent(7,1);
   hmc__323->SetBinContent(8,1);
   hmc__323->SetMinimum(0.5);
   hmc__323->SetMaximum(1.5);
   hmc__323->SetEntries(9);
   hmc__323->SetStats(0);
   hmc__323->SetFillColor(1);
   hmc__323->SetFillStyle(3013);
   hmc__323->GetXaxis()->SetTitle("m_{T} (GeV)");
   hmc__323->GetXaxis()->SetLabelSize(0.12);
   hmc__323->GetXaxis()->SetTitleSize(0.12);
   hmc__323->GetYaxis()->SetTitle("data/MC");
   hmc__323->GetYaxis()->CenterTitle(true);
   hmc__323->GetYaxis()->SetNdivisions(306);
   hmc__323->GetYaxis()->SetLabelSize(0.12);
   hmc__323->GetYaxis()->SetTitleSize(0.12);
   hmc__323->GetYaxis()->SetTitleOffset(0.5);
   hmc__323->Draw("e2");
   Double_t xAxis273[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hdata__324 = new TH1D("hdata__324","",8, xAxis273);
   hdata__324->SetEntries(9);
   hdata__324->SetStats(0);
   hdata__324->SetLineWidth(3);
   hdata__324->SetMarkerStyle(8);
   hdata__324->SetMarkerSize(1.3);
   hdata__324->GetYaxis()->SetTitle("data/MC");
   hdata__324->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
