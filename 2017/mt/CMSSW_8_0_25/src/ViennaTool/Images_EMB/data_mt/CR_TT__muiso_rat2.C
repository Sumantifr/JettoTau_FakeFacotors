void CR_TT__muiso_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:34 2020) by ROOT version6.06/01
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
   Double_t xAxis339[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__421 = new TH1D("hh_l_muiso__421","",10, xAxis339);
   hh_l_muiso__421->SetStats(0);
   hh_l_muiso__421->SetLineWidth(3);
   hh_l_muiso__421->SetMarkerStyle(8);
   hh_l_muiso__421->SetMarkerSize(1.3);
   hh_l_muiso__421->GetXaxis()->SetLabelSize(0);
   hh_l_muiso__421->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_l_muiso__421->GetYaxis()->SetLabelSize(0.064);
   hh_l_muiso__421->GetYaxis()->SetTitleSize(0.064);
   hh_l_muiso__421->GetYaxis()->SetTitleOffset(0.91);
   hh_l_muiso__421->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis340[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_36 = new TH1F("w_stack_36","",10, xAxis340);
   w_stack_36->SetMinimum(0);
   w_stack_36->SetMaximum(0);
   w_stack_36->SetDirectory(0);
   w_stack_36->SetStats(0);
   w->SetHistogram(w_stack_36);
   
   Double_t xAxis341[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__422 = new TH1D("hh_l_muiso__422","",10, xAxis341);
   hh_l_muiso__422->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__422->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis342[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__423 = new TH1D("hh_l_muiso__423","",10, xAxis342);
   hh_l_muiso__423->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__423->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis343[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__424 = new TH1D("hh_l_muiso__424","",10, xAxis343);
   hh_l_muiso__424->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__424->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis344[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__425 = new TH1D("hh_l_muiso__425","",10, xAxis344);
   hh_l_muiso__425->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__425->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis345[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__426 = new TH1D("hh_l_muiso__426","",10, xAxis345);
   hh_l_muiso__426->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__426->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis346[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__427 = new TH1D("hh_l_muiso__427","",10, xAxis346);
   hh_l_muiso__427->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__427->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis347[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__428 = new TH1D("hh_l_muiso__428","",10, xAxis347);
   hh_l_muiso__428->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__428->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis348[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__429 = new TH1D("hh_l_muiso__429","",10, xAxis348);
   hh_l_muiso__429->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__429->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis349[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__430 = new TH1D("hh_l_muiso__430","",10, xAxis349);
   hh_l_muiso__430->SetMaximum(0);
   hh_l_muiso__430->SetStats(0);
   hh_l_muiso__430->SetFillColor(1);
   hh_l_muiso__430->SetFillStyle(3013);
   hh_l_muiso__430->GetXaxis()->SetTitle("#mu_{iso}");
   hh_l_muiso__430->Draw("e2 same");
   
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
   Double_t xAxis350[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__431 = new TH1D("hmc__431","",10, xAxis350);
   hmc__431->SetBinContent(0,1);
   hmc__431->SetBinContent(1,1);
   hmc__431->SetBinContent(2,1);
   hmc__431->SetBinContent(3,1);
   hmc__431->SetBinContent(4,1);
   hmc__431->SetBinContent(5,1);
   hmc__431->SetBinContent(6,1);
   hmc__431->SetBinContent(7,1);
   hmc__431->SetBinContent(8,1);
   hmc__431->SetBinContent(9,1);
   hmc__431->SetBinContent(10,1);
   hmc__431->SetMinimum(0.5);
   hmc__431->SetMaximum(1.5);
   hmc__431->SetEntries(11);
   hmc__431->SetStats(0);
   hmc__431->SetFillColor(1);
   hmc__431->SetFillStyle(3013);
   hmc__431->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__431->GetXaxis()->SetLabelSize(0.12);
   hmc__431->GetXaxis()->SetTitleSize(0.12);
   hmc__431->GetYaxis()->SetTitle("data/MC");
   hmc__431->GetYaxis()->CenterTitle(true);
   hmc__431->GetYaxis()->SetNdivisions(306);
   hmc__431->GetYaxis()->SetLabelSize(0.12);
   hmc__431->GetYaxis()->SetTitleSize(0.12);
   hmc__431->GetYaxis()->SetTitleOffset(0.5);
   hmc__431->Draw("e2");
   Double_t xAxis351[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__432 = new TH1D("hdata__432","",10, xAxis351);
   hdata__432->SetEntries(11);
   hdata__432->SetStats(0);
   hdata__432->SetLineWidth(3);
   hdata__432->SetMarkerStyle(8);
   hdata__432->SetMarkerSize(1.3);
   hdata__432->GetYaxis()->SetTitle("data/MC");
   hdata__432->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
