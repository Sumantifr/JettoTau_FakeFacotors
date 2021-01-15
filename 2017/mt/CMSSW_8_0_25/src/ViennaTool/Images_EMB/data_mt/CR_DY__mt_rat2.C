void CR_DY__mt_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:30 2020) by ROOT version6.06/01
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
   Double_t xAxis144[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__169 = new TH1D("hh_l_mt__169","",8, xAxis144);
   hh_l_mt__169->SetStats(0);
   hh_l_mt__169->SetLineWidth(3);
   hh_l_mt__169->SetMarkerStyle(8);
   hh_l_mt__169->SetMarkerSize(1.3);
   hh_l_mt__169->GetXaxis()->SetLabelSize(0);
   hh_l_mt__169->GetYaxis()->SetTitle("Events / 10 GeV");
   hh_l_mt__169->GetYaxis()->SetLabelSize(0.064);
   hh_l_mt__169->GetYaxis()->SetTitleSize(0.064);
   hh_l_mt__169->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mt__169->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis145[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1F *w_stack_15 = new TH1F("w_stack_15","",8, xAxis145);
   w_stack_15->SetMinimum(0);
   w_stack_15->SetMaximum(0);
   w_stack_15->SetDirectory(0);
   w_stack_15->SetStats(0);
   w->SetHistogram(w_stack_15);
   
   Double_t xAxis146[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__170 = new TH1D("hh_l_mt__170","",8, xAxis146);
   hh_l_mt__170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mt__170->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis147[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__171 = new TH1D("hh_l_mt__171","",8, xAxis147);
   hh_l_mt__171->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mt__171->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis148[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__172 = new TH1D("hh_l_mt__172","",8, xAxis148);
   hh_l_mt__172->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mt__172->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis149[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__173 = new TH1D("hh_l_mt__173","",8, xAxis149);
   hh_l_mt__173->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mt__173->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis150[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__174 = new TH1D("hh_l_mt__174","",8, xAxis150);
   hh_l_mt__174->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mt__174->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis151[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__175 = new TH1D("hh_l_mt__175","",8, xAxis151);
   hh_l_mt__175->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mt__175->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis152[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__176 = new TH1D("hh_l_mt__176","",8, xAxis152);
   hh_l_mt__176->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mt__176->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis153[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__177 = new TH1D("hh_l_mt__177","",8, xAxis153);
   hh_l_mt__177->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mt__177->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   w->Draw("same");
   Double_t xAxis154[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__178 = new TH1D("hh_l_mt__178","",8, xAxis154);
   hh_l_mt__178->SetMaximum(0);
   hh_l_mt__178->SetStats(0);
   hh_l_mt__178->SetFillColor(1);
   hh_l_mt__178->SetFillStyle(3013);
   hh_l_mt__178->GetXaxis()->SetTitle("m_{T} (GeV)");
   hh_l_mt__178->Draw("e2 same");
   
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
   Double_t xAxis155[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hmc__179 = new TH1D("hmc__179","",8, xAxis155);
   hmc__179->SetBinContent(0,1);
   hmc__179->SetBinContent(1,1);
   hmc__179->SetBinContent(2,1);
   hmc__179->SetBinContent(3,1);
   hmc__179->SetBinContent(4,1);
   hmc__179->SetBinContent(5,1);
   hmc__179->SetBinContent(6,1);
   hmc__179->SetBinContent(7,1);
   hmc__179->SetBinContent(8,1);
   hmc__179->SetMinimum(0.5);
   hmc__179->SetMaximum(1.5);
   hmc__179->SetEntries(9);
   hmc__179->SetStats(0);
   hmc__179->SetFillColor(1);
   hmc__179->SetFillStyle(3013);
   hmc__179->GetXaxis()->SetTitle("m_{T} (GeV)");
   hmc__179->GetXaxis()->SetLabelSize(0.12);
   hmc__179->GetXaxis()->SetTitleSize(0.12);
   hmc__179->GetYaxis()->SetTitle("data/MC");
   hmc__179->GetYaxis()->CenterTitle(true);
   hmc__179->GetYaxis()->SetNdivisions(306);
   hmc__179->GetYaxis()->SetLabelSize(0.12);
   hmc__179->GetYaxis()->SetTitleSize(0.12);
   hmc__179->GetYaxis()->SetTitleOffset(0.5);
   hmc__179->Draw("e2");
   Double_t xAxis156[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hdata__180 = new TH1D("hdata__180","",8, xAxis156);
   hdata__180->SetEntries(9);
   hdata__180->SetStats(0);
   hdata__180->SetLineWidth(3);
   hdata__180->SetMarkerStyle(8);
   hdata__180->SetMarkerSize(1.3);
   hdata__180->GetYaxis()->SetTitle("data/MC");
   hdata__180->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
