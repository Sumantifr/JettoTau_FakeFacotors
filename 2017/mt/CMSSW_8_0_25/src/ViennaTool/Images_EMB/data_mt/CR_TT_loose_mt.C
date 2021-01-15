void CR_TT_loose_mt()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Thu Dec  3 17:52:30 2020) by ROOT version6.06/01
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
   Double_t xAxis235[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__289 = new TH1D("hh_l_mt__289","",8, xAxis235);
   hh_l_mt__289->SetStats(0);
   hh_l_mt__289->SetLineWidth(3);
   hh_l_mt__289->SetMarkerStyle(8);
   hh_l_mt__289->SetMarkerSize(1.3);
   hh_l_mt__289->GetXaxis()->SetLabelSize(0);
   hh_l_mt__289->GetYaxis()->SetTitle("Events / 10 GeV");
   hh_l_mt__289->GetYaxis()->SetLabelSize(0.064);
   hh_l_mt__289->GetYaxis()->SetTitleSize(0.064);
   hh_l_mt__289->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mt__289->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis236[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1F *w_stack_25 = new TH1F("w_stack_25","",8, xAxis236);
   w_stack_25->SetMinimum(0);
   w_stack_25->SetMaximum(0);
   w_stack_25->SetDirectory(0);
   w_stack_25->SetStats(0);
   w->SetHistogram(w_stack_25);
   
   Double_t xAxis237[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__290 = new TH1D("hh_l_mt__290","",8, xAxis237);
   hh_l_mt__290->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mt__290->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis238[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__291 = new TH1D("hh_l_mt__291","",8, xAxis238);
   hh_l_mt__291->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mt__291->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis239[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__292 = new TH1D("hh_l_mt__292","",8, xAxis239);
   hh_l_mt__292->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mt__292->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis240[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__293 = new TH1D("hh_l_mt__293","",8, xAxis240);
   hh_l_mt__293->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mt__293->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis241[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__294 = new TH1D("hh_l_mt__294","",8, xAxis241);
   hh_l_mt__294->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mt__294->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis242[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__295 = new TH1D("hh_l_mt__295","",8, xAxis242);
   hh_l_mt__295->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mt__295->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis243[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__296 = new TH1D("hh_l_mt__296","",8, xAxis243);
   hh_l_mt__296->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mt__296->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis244[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__297 = new TH1D("hh_l_mt__297","",8, xAxis244);
   hh_l_mt__297->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mt__297->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   w->Draw("same");
   Double_t xAxis245[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__298 = new TH1D("hh_l_mt__298","",8, xAxis245);
   hh_l_mt__298->SetMaximum(0);
   hh_l_mt__298->SetStats(0);
   hh_l_mt__298->SetFillColor(1);
   hh_l_mt__298->SetFillStyle(3013);
   hh_l_mt__298->GetXaxis()->SetTitle("m_{T} (GeV)");
   hh_l_mt__298->Draw("e2 same");
   
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
   Double_t xAxis246[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hmc__299 = new TH1D("hmc__299","",8, xAxis246);
   hmc__299->SetBinContent(0,1);
   hmc__299->SetBinContent(1,1);
   hmc__299->SetBinContent(2,1);
   hmc__299->SetBinContent(3,1);
   hmc__299->SetBinContent(4,1);
   hmc__299->SetBinContent(5,1);
   hmc__299->SetBinContent(6,1);
   hmc__299->SetBinContent(7,1);
   hmc__299->SetBinContent(8,1);
   hmc__299->SetMinimum(0.5);
   hmc__299->SetMaximum(1.5);
   hmc__299->SetEntries(9);
   hmc__299->SetStats(0);
   hmc__299->SetFillColor(1);
   hmc__299->SetFillStyle(3013);
   hmc__299->GetXaxis()->SetTitle("m_{T} (GeV)");
   hmc__299->GetXaxis()->SetLabelSize(0.12);
   hmc__299->GetXaxis()->SetTitleSize(0.12);
   hmc__299->GetYaxis()->SetTitle("data/MC");
   hmc__299->GetYaxis()->CenterTitle(true);
   hmc__299->GetYaxis()->SetNdivisions(306);
   hmc__299->GetYaxis()->SetLabelSize(0.12);
   hmc__299->GetYaxis()->SetTitleSize(0.12);
   hmc__299->GetYaxis()->SetTitleOffset(0.5);
   hmc__299->Draw("e2");
   Double_t xAxis247[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hdata__300 = new TH1D("hdata__300","",8, xAxis247);
   hdata__300->SetEntries(9);
   hdata__300->SetStats(0);
   hdata__300->SetLineWidth(3);
   hdata__300->SetMarkerStyle(8);
   hdata__300->SetMarkerSize(1.3);
   hdata__300->GetYaxis()->SetTitle("data/MC");
   hdata__300->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
