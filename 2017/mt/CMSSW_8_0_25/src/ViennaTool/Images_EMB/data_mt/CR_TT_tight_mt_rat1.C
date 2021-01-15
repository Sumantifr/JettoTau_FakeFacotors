void CR_TT_tight_mt_rat1()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:46:24 2020) by ROOT version6.06/01
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
   Double_t xAxis248[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__301 = new TH1D("hh_t_mt__301","",8, xAxis248);
   hh_t_mt__301->SetStats(0);
   hh_t_mt__301->SetLineWidth(3);
   hh_t_mt__301->SetMarkerStyle(8);
   hh_t_mt__301->SetMarkerSize(1.3);
   hh_t_mt__301->GetXaxis()->SetLabelSize(0);
   hh_t_mt__301->GetYaxis()->SetTitle("Events / 10 GeV");
   hh_t_mt__301->GetYaxis()->SetLabelSize(0.064);
   hh_t_mt__301->GetYaxis()->SetTitleSize(0.064);
   hh_t_mt__301->GetYaxis()->SetTitleOffset(0.91);
   hh_t_mt__301->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis249[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1F *w_stack_26 = new TH1F("w_stack_26","",8, xAxis249);
   w_stack_26->SetMinimum(0);
   w_stack_26->SetMaximum(0);
   w_stack_26->SetDirectory(0);
   w_stack_26->SetStats(0);
   w->SetHistogram(w_stack_26);
   
   Double_t xAxis250[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__302 = new TH1D("hh_t_mt__302","",8, xAxis250);
   hh_t_mt__302->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_mt__302->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis251[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__303 = new TH1D("hh_t_mt__303","",8, xAxis251);
   hh_t_mt__303->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_mt__303->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis252[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__304 = new TH1D("hh_t_mt__304","",8, xAxis252);
   hh_t_mt__304->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_mt__304->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis253[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__305 = new TH1D("hh_t_mt__305","",8, xAxis253);
   hh_t_mt__305->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_mt__305->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis254[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__306 = new TH1D("hh_t_mt__306","",8, xAxis254);
   hh_t_mt__306->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_mt__306->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis255[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__307 = new TH1D("hh_t_mt__307","",8, xAxis255);
   hh_t_mt__307->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_mt__307->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis256[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__308 = new TH1D("hh_t_mt__308","",8, xAxis256);
   hh_t_mt__308->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_mt__308->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   Double_t xAxis257[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__309 = new TH1D("hh_t_mt__309","",8, xAxis257);
   hh_t_mt__309->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_mt__309->SetFillColor(ci);
   w->Add(hh_t_mt,"hist");
   w->Draw("same");
   Double_t xAxis258[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_t_mt__310 = new TH1D("hh_t_mt__310","",8, xAxis258);
   hh_t_mt__310->SetMaximum(0);
   hh_t_mt__310->SetStats(0);
   hh_t_mt__310->SetFillColor(1);
   hh_t_mt__310->SetFillStyle(3013);
   hh_t_mt__310->GetXaxis()->SetTitle("m_{T} (GeV)");
   hh_t_mt__310->Draw("e2 same");
   
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
   Double_t xAxis259[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hmc__311 = new TH1D("hmc__311","",8, xAxis259);
   hmc__311->SetBinContent(0,1);
   hmc__311->SetBinContent(1,1);
   hmc__311->SetBinContent(2,1);
   hmc__311->SetBinContent(3,1);
   hmc__311->SetBinContent(4,1);
   hmc__311->SetBinContent(5,1);
   hmc__311->SetBinContent(6,1);
   hmc__311->SetBinContent(7,1);
   hmc__311->SetBinContent(8,1);
   hmc__311->SetMinimum(0.5);
   hmc__311->SetMaximum(1.5);
   hmc__311->SetEntries(9);
   hmc__311->SetStats(0);
   hmc__311->SetFillColor(1);
   hmc__311->SetFillStyle(3013);
   hmc__311->GetXaxis()->SetTitle("m_{T} (GeV)");
   hmc__311->GetXaxis()->SetLabelSize(0.12);
   hmc__311->GetXaxis()->SetTitleSize(0.12);
   hmc__311->GetYaxis()->SetTitle("data/MC");
   hmc__311->GetYaxis()->CenterTitle(true);
   hmc__311->GetYaxis()->SetNdivisions(306);
   hmc__311->GetYaxis()->SetLabelSize(0.12);
   hmc__311->GetYaxis()->SetTitleSize(0.12);
   hmc__311->GetYaxis()->SetTitleOffset(0.5);
   hmc__311->Draw("e2");
   Double_t xAxis260[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hdata__312 = new TH1D("hdata__312","",8, xAxis260);
   hdata__312->SetEntries(9);
   hdata__312->SetStats(0);
   hdata__312->SetLineWidth(3);
   hdata__312->SetMarkerStyle(8);
   hdata__312->SetMarkerSize(1.3);
   hdata__312->GetYaxis()->SetTitle("data/MC");
   hdata__312->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
