void CR_DY_tight_mt()
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
   Double_t xAxis131[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__157 = new TH1D("hh_t_mt__157","",8, xAxis131);
   hh_t_mt__157->SetStats(0);
   hh_t_mt__157->SetLineWidth(3);
   hh_t_mt__157->SetMarkerStyle(8);
   hh_t_mt__157->SetMarkerSize(1.3);
   hh_t_mt__157->GetXaxis()->SetLabelSize(0);
   hh_t_mt__157->GetYaxis()->SetTitle("Events / 10 GeV");
   hh_t_mt__157->GetYaxis()->SetLabelSize(0.064);
   hh_t_mt__157->GetYaxis()->SetTitleSize(0.064);
   hh_t_mt__157->GetYaxis()->SetTitleOffset(0.91);
   hh_t_mt__157->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis132[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1F *w_stack_14 = new TH1F("w_stack_14","",8, xAxis132);
   w_stack_14->SetMinimum(0);
   w_stack_14->SetMaximum(0);
   w_stack_14->SetDirectory(0);
   w_stack_14->SetStats(0);
   w->SetHistogram(w_stack_14);
   
   Double_t xAxis133[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__158 = new TH1D("hh_t_mt__158","",8, xAxis133);
   hh_t_mt__158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_mt__158->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis134[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__159 = new TH1D("hh_t_mt__159","",8, xAxis134);
   hh_t_mt__159->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_mt__159->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis135[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__160 = new TH1D("hh_t_mt__160","",8, xAxis135);
   hh_t_mt__160->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_mt__160->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis136[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__161 = new TH1D("hh_t_mt__161","",8, xAxis136);
   hh_t_mt__161->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_mt__161->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis137[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__162 = new TH1D("hh_t_mt__162","",8, xAxis137);
   hh_t_mt__162->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_mt__162->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis138[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__163 = new TH1D("hh_t_mt__163","",8, xAxis138);
   hh_t_mt__163->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_mt__163->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis139[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__164 = new TH1D("hh_t_mt__164","",8, xAxis139);
   hh_t_mt__164->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_mt__164->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis140[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__165 = new TH1D("hh_t_mt__165","",8, xAxis140);
   hh_t_mt__165->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_mt__165->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   w->Draw("same");
   Double_t xAxis141[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__166 = new TH1D("hh_t_mt__166","",8, xAxis141);
   hh_t_mt__166->SetMaximum(0);
   hh_t_mt__166->SetStats(0);
   hh_t_mt__166->SetFillColor(1);
   hh_t_mt__166->SetFillStyle(3013);
   hh_t_mt__166->GetXaxis()->SetTitle("m_{T} (GeV)");
   hh_t_mt__166->Draw("e2 same");
   
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
   entry=leg->AddEntry("hh_t_mt","W+jets","f");

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
   entry=leg->AddEntry("hh_t_mt","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_mt","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_mt","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_mt","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_mt","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_mt","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_mt","EMB","f");

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
   entry=leg->AddEntry("hh_t_mt","data","lep");
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
   Double_t xAxis142[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hmc__167 = new TH1D("hmc__167","",8, xAxis142);
   hmc__167->SetBinContent(0,1);
   hmc__167->SetBinContent(1,1);
   hmc__167->SetBinContent(2,1);
   hmc__167->SetBinContent(3,1);
   hmc__167->SetBinContent(4,1);
   hmc__167->SetBinContent(5,1);
   hmc__167->SetBinContent(6,1);
   hmc__167->SetBinContent(7,1);
   hmc__167->SetBinContent(8,1);
   hmc__167->SetMinimum(0.5);
   hmc__167->SetMaximum(1.5);
   hmc__167->SetEntries(9);
   hmc__167->SetStats(0);
   hmc__167->SetFillColor(1);
   hmc__167->SetFillStyle(3013);
   hmc__167->GetXaxis()->SetTitle("m_{T} (GeV)");
   hmc__167->GetXaxis()->SetLabelSize(0.12);
   hmc__167->GetXaxis()->SetTitleSize(0.12);
   hmc__167->GetYaxis()->SetTitle("data/MC");
   hmc__167->GetYaxis()->CenterTitle(true);
   hmc__167->GetYaxis()->SetNdivisions(306);
   hmc__167->GetYaxis()->SetLabelSize(0.12);
   hmc__167->GetYaxis()->SetTitleSize(0.12);
   hmc__167->GetYaxis()->SetTitleOffset(0.5);
   hmc__167->Draw("e2");
   Double_t xAxis143[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hdata__168 = new TH1D("hdata__168","",8, xAxis143);
   hdata__168->SetEntries(9);
   hdata__168->SetStats(0);
   hdata__168->SetLineWidth(3);
   hdata__168->SetMarkerStyle(8);
   hdata__168->SetMarkerSize(1.3);
   hdata__168->GetYaxis()->SetTitle("data/MC");
   hdata__168->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
