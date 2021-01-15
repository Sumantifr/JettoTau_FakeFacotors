void CR_DY_loose_muiso_rat0()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:44:26 2020) by ROOT version6.06/01
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
   c1_1->Range(-0.1076923,-0.05526316,0.7897436,1.14611);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis196[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__253 = new TH1D("hh_l_muiso__253","",10, xAxis196);
   hh_l_muiso__253->SetStats(0);
   hh_l_muiso__253->SetLineWidth(3);
   hh_l_muiso__253->SetMarkerStyle(8);
   hh_l_muiso__253->SetMarkerSize(1.3);
   hh_l_muiso__253->GetXaxis()->SetLabelSize(0);
   hh_l_muiso__253->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_l_muiso__253->GetYaxis()->SetLabelSize(0.064);
   hh_l_muiso__253->GetYaxis()->SetTitleSize(0.064);
   hh_l_muiso__253->GetYaxis()->SetTitleOffset(0.91);
   hh_l_muiso__253->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis197[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_22 = new TH1F("w_stack_22","",10, xAxis197);
   w_stack_22->SetMinimum(0);
   w_stack_22->SetMaximum(0);
   w_stack_22->SetDirectory(0);
   w_stack_22->SetStats(0);
   w->SetHistogram(w_stack_22);
   
   Double_t xAxis198[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__254 = new TH1D("hh_l_muiso__254","",10, xAxis198);
   hh_l_muiso__254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__254->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis199[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__255 = new TH1D("hh_l_muiso__255","",10, xAxis199);
   hh_l_muiso__255->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__255->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis200[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__256 = new TH1D("hh_l_muiso__256","",10, xAxis200);
   hh_l_muiso__256->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__256->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis201[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__257 = new TH1D("hh_l_muiso__257","",10, xAxis201);
   hh_l_muiso__257->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__257->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis202[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__258 = new TH1D("hh_l_muiso__258","",10, xAxis202);
   hh_l_muiso__258->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__258->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis203[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__259 = new TH1D("hh_l_muiso__259","",10, xAxis203);
   hh_l_muiso__259->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__259->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis204[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__260 = new TH1D("hh_l_muiso__260","",10, xAxis204);
   hh_l_muiso__260->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__260->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis205[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__261 = new TH1D("hh_l_muiso__261","",10, xAxis205);
   hh_l_muiso__261->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__261->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis206[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__262 = new TH1D("hh_l_muiso__262","",10, xAxis206);
   hh_l_muiso__262->SetMaximum(0);
   hh_l_muiso__262->SetStats(0);
   hh_l_muiso__262->SetFillColor(1);
   hh_l_muiso__262->SetFillStyle(3013);
   hh_l_muiso__262->GetXaxis()->SetTitle("#mu_{iso}");
   hh_l_muiso__262->Draw("e2 same");
   
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
   entry=leg->AddEntry("hh_l_muiso","W+jets","f");

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
   entry=leg->AddEntry("hh_l_muiso","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_muiso","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_muiso","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_muiso","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_muiso","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_muiso","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_muiso","EMB","f");

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
   entry=leg->AddEntry("hh_l_muiso","data","lep");
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
   c1_2->Range(-0.1076923,-0.03846155,0.7897436,1.5);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.12);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.35);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   Double_t xAxis207[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__263 = new TH1D("hmc__263","",10, xAxis207);
   hmc__263->SetBinContent(0,1);
   hmc__263->SetBinContent(1,1);
   hmc__263->SetBinContent(2,1);
   hmc__263->SetBinContent(3,1);
   hmc__263->SetBinContent(4,1);
   hmc__263->SetBinContent(5,1);
   hmc__263->SetBinContent(6,1);
   hmc__263->SetBinContent(7,1);
   hmc__263->SetBinContent(8,1);
   hmc__263->SetBinContent(9,1);
   hmc__263->SetBinContent(10,1);
   hmc__263->SetMinimum(0.5);
   hmc__263->SetMaximum(1.5);
   hmc__263->SetEntries(11);
   hmc__263->SetStats(0);
   hmc__263->SetFillColor(1);
   hmc__263->SetFillStyle(3013);
   hmc__263->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__263->GetXaxis()->SetLabelSize(0.12);
   hmc__263->GetXaxis()->SetTitleSize(0.12);
   hmc__263->GetYaxis()->SetTitle("data/MC");
   hmc__263->GetYaxis()->CenterTitle(true);
   hmc__263->GetYaxis()->SetNdivisions(306);
   hmc__263->GetYaxis()->SetLabelSize(0.12);
   hmc__263->GetYaxis()->SetTitleSize(0.12);
   hmc__263->GetYaxis()->SetTitleOffset(0.5);
   hmc__263->Draw("e2");
   Double_t xAxis208[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__264 = new TH1D("hdata__264","",10, xAxis208);
   hdata__264->SetEntries(11);
   hdata__264->SetStats(0);
   hdata__264->SetLineWidth(3);
   hdata__264->SetMarkerStyle(8);
   hdata__264->SetMarkerSize(1.3);
   hdata__264->GetYaxis()->SetTitle("data/MC");
   hdata__264->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
