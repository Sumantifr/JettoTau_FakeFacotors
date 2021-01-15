void CR_TT_loose_pt_rat0()
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
   c1_1->Range(-23.07692,-0.05526316,335.8974,1.14611);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *hh_l_pt__361 = new TH1D("hh_l_pt__361","",30,20,300);
   hh_l_pt__361->SetStats(0);
   hh_l_pt__361->SetLineWidth(3);
   hh_l_pt__361->SetMarkerStyle(8);
   hh_l_pt__361->SetMarkerSize(1.3);
   hh_l_pt__361->GetXaxis()->SetLabelSize(0);
   hh_l_pt__361->GetYaxis()->SetTitle("Events / 9 GeV");
   hh_l_pt__361->GetYaxis()->SetLabelSize(0.064);
   hh_l_pt__361->GetYaxis()->SetTitleSize(0.064);
   hh_l_pt__361->GetYaxis()->SetTitleOffset(0.91);
   hh_l_pt__361->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   
   TH1F *w_stack_31 = new TH1F("w_stack_31","",30,20,300);
   w_stack_31->SetMinimum(0);
   w_stack_31->SetMaximum(0);
   w_stack_31->SetDirectory(0);
   w_stack_31->SetStats(0);
   w->SetHistogram(w_stack_31);
   
   
   TH1D *hh_l_pt__362 = new TH1D("hh_l_pt__362","",30,20,300);
   hh_l_pt__362->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_pt__362->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__363 = new TH1D("hh_l_pt__363","",30,20,300);
   hh_l_pt__363->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_pt__363->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__364 = new TH1D("hh_l_pt__364","",30,20,300);
   hh_l_pt__364->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_pt__364->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__365 = new TH1D("hh_l_pt__365","",30,20,300);
   hh_l_pt__365->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_pt__365->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__366 = new TH1D("hh_l_pt__366","",30,20,300);
   hh_l_pt__366->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_pt__366->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__367 = new TH1D("hh_l_pt__367","",30,20,300);
   hh_l_pt__367->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_pt__367->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__368 = new TH1D("hh_l_pt__368","",30,20,300);
   hh_l_pt__368->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_pt__368->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__369 = new TH1D("hh_l_pt__369","",30,20,300);
   hh_l_pt__369->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_pt__369->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   w->Draw("same");
   
   TH1D *hh_l_pt__370 = new TH1D("hh_l_pt__370","",30,20,300);
   hh_l_pt__370->SetMaximum(0);
   hh_l_pt__370->SetStats(0);
   hh_l_pt__370->SetFillColor(1);
   hh_l_pt__370->SetFillStyle(3013);
   hh_l_pt__370->GetXaxis()->SetTitle("p_{T} (GeV)");
   hh_l_pt__370->Draw("e2 same");
   
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
   entry=leg->AddEntry("hh_l_pt","W+jets","f");

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
   entry=leg->AddEntry("hh_l_pt","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","EMB","f");

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
   entry=leg->AddEntry("hh_l_pt","data","lep");
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
   c1_2->Range(-23.07692,-0.03846155,335.8974,1.5);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.12);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.35);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1D *hmc__371 = new TH1D("hmc__371","",30,20,300);
   hmc__371->SetBinContent(0,1);
   hmc__371->SetBinContent(1,1);
   hmc__371->SetBinContent(2,1);
   hmc__371->SetBinContent(3,1);
   hmc__371->SetBinContent(4,1);
   hmc__371->SetBinContent(5,1);
   hmc__371->SetBinContent(6,1);
   hmc__371->SetBinContent(7,1);
   hmc__371->SetBinContent(8,1);
   hmc__371->SetBinContent(9,1);
   hmc__371->SetBinContent(10,1);
   hmc__371->SetBinContent(11,1);
   hmc__371->SetBinContent(12,1);
   hmc__371->SetBinContent(13,1);
   hmc__371->SetBinContent(14,1);
   hmc__371->SetBinContent(15,1);
   hmc__371->SetBinContent(16,1);
   hmc__371->SetBinContent(17,1);
   hmc__371->SetBinContent(18,1);
   hmc__371->SetBinContent(19,1);
   hmc__371->SetBinContent(20,1);
   hmc__371->SetBinContent(21,1);
   hmc__371->SetBinContent(22,1);
   hmc__371->SetBinContent(23,1);
   hmc__371->SetBinContent(24,1);
   hmc__371->SetBinContent(25,1);
   hmc__371->SetBinContent(26,1);
   hmc__371->SetBinContent(27,1);
   hmc__371->SetBinContent(28,1);
   hmc__371->SetBinContent(29,1);
   hmc__371->SetBinContent(30,1);
   hmc__371->SetMinimum(0.5);
   hmc__371->SetMaximum(1.5);
   hmc__371->SetEntries(31);
   hmc__371->SetStats(0);
   hmc__371->SetFillColor(1);
   hmc__371->SetFillStyle(3013);
   hmc__371->GetXaxis()->SetTitle("p_{T} (GeV)");
   hmc__371->GetXaxis()->SetLabelSize(0.12);
   hmc__371->GetXaxis()->SetTitleSize(0.12);
   hmc__371->GetYaxis()->SetTitle("data/MC");
   hmc__371->GetYaxis()->CenterTitle(true);
   hmc__371->GetYaxis()->SetNdivisions(306);
   hmc__371->GetYaxis()->SetLabelSize(0.12);
   hmc__371->GetYaxis()->SetTitleSize(0.12);
   hmc__371->GetYaxis()->SetTitleOffset(0.5);
   hmc__371->Draw("e2");
   
   TH1D *hdata__372 = new TH1D("hdata__372","",30,20,300);
   hdata__372->SetEntries(31);
   hdata__372->SetStats(0);
   hdata__372->SetLineWidth(3);
   hdata__372->SetMarkerStyle(8);
   hdata__372->SetMarkerSize(1.3);
   hdata__372->GetYaxis()->SetTitle("data/MC");
   hdata__372->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
