void CR_DY_loose_mt()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Thu Dec  3 17:52:27 2020) by ROOT version6.06/01
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
   Double_t xAxis118[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__145 = new TH1D("hh_l_mt__145","",8, xAxis118);
   hh_l_mt__145->SetStats(0);
   hh_l_mt__145->SetLineWidth(3);
   hh_l_mt__145->SetMarkerStyle(8);
   hh_l_mt__145->SetMarkerSize(1.3);
   hh_l_mt__145->GetXaxis()->SetLabelSize(0);
   hh_l_mt__145->GetYaxis()->SetTitle("Events / 10 GeV");
   hh_l_mt__145->GetYaxis()->SetLabelSize(0.064);
   hh_l_mt__145->GetYaxis()->SetTitleSize(0.064);
   hh_l_mt__145->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mt__145->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis119[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1F *w_stack_13 = new TH1F("w_stack_13","",8, xAxis119);
   w_stack_13->SetMinimum(0);
   w_stack_13->SetMaximum(0);
   w_stack_13->SetDirectory(0);
   w_stack_13->SetStats(0);
   w->SetHistogram(w_stack_13);
   
   Double_t xAxis120[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__146 = new TH1D("hh_l_mt__146","",8, xAxis120);
   hh_l_mt__146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mt__146->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis121[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__147 = new TH1D("hh_l_mt__147","",8, xAxis121);
   hh_l_mt__147->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mt__147->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis122[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__148 = new TH1D("hh_l_mt__148","",8, xAxis122);
   hh_l_mt__148->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mt__148->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis123[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__149 = new TH1D("hh_l_mt__149","",8, xAxis123);
   hh_l_mt__149->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mt__149->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis124[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__150 = new TH1D("hh_l_mt__150","",8, xAxis124);
   hh_l_mt__150->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mt__150->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis125[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__151 = new TH1D("hh_l_mt__151","",8, xAxis125);
   hh_l_mt__151->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mt__151->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis126[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__152 = new TH1D("hh_l_mt__152","",8, xAxis126);
   hh_l_mt__152->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mt__152->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis127[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__153 = new TH1D("hh_l_mt__153","",8, xAxis127);
   hh_l_mt__153->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mt__153->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   w->Draw("same");
   Double_t xAxis128[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__154 = new TH1D("hh_l_mt__154","",8, xAxis128);
   hh_l_mt__154->SetMaximum(0);
   hh_l_mt__154->SetStats(0);
   hh_l_mt__154->SetFillColor(1);
   hh_l_mt__154->SetFillStyle(3013);
   hh_l_mt__154->GetXaxis()->SetTitle("m_{T} (GeV)");
   hh_l_mt__154->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","DY CR, loose isolation","h");
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
   Double_t xAxis129[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hmc__155 = new TH1D("hmc__155","",8, xAxis129);
   hmc__155->SetBinContent(0,1);
   hmc__155->SetBinContent(1,1);
   hmc__155->SetBinContent(2,1);
   hmc__155->SetBinContent(3,1);
   hmc__155->SetBinContent(4,1);
   hmc__155->SetBinContent(5,1);
   hmc__155->SetBinContent(6,1);
   hmc__155->SetBinContent(7,1);
   hmc__155->SetBinContent(8,1);
   hmc__155->SetMinimum(0.5);
   hmc__155->SetMaximum(1.5);
   hmc__155->SetEntries(9);
   hmc__155->SetStats(0);
   hmc__155->SetFillColor(1);
   hmc__155->SetFillStyle(3013);
   hmc__155->GetXaxis()->SetTitle("m_{T} (GeV)");
   hmc__155->GetXaxis()->SetLabelSize(0.12);
   hmc__155->GetXaxis()->SetTitleSize(0.12);
   hmc__155->GetYaxis()->SetTitle("data/MC");
   hmc__155->GetYaxis()->CenterTitle(true);
   hmc__155->GetYaxis()->SetNdivisions(306);
   hmc__155->GetYaxis()->SetLabelSize(0.12);
   hmc__155->GetYaxis()->SetTitleSize(0.12);
   hmc__155->GetYaxis()->SetTitleOffset(0.5);
   hmc__155->Draw("e2");
   Double_t xAxis130[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hdata__156 = new TH1D("hdata__156","",8, xAxis130);
   hdata__156->SetEntries(9);
   hdata__156->SetStats(0);
   hdata__156->SetLineWidth(3);
   hdata__156->SetMarkerStyle(8);
   hdata__156->SetMarkerSize(1.3);
   hdata__156->GetYaxis()->SetTitle("data/MC");
   hdata__156->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
