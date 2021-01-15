void CR_TT_tight_pt_rat0()
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
   
   TH1D *hh_t_pt__373 = new TH1D("hh_t_pt__373","",30,20,300);
   hh_t_pt__373->SetStats(0);
   hh_t_pt__373->SetLineWidth(3);
   hh_t_pt__373->SetMarkerStyle(8);
   hh_t_pt__373->SetMarkerSize(1.3);
   hh_t_pt__373->GetXaxis()->SetLabelSize(0);
   hh_t_pt__373->GetYaxis()->SetTitle("Events / 9 GeV");
   hh_t_pt__373->GetYaxis()->SetLabelSize(0.064);
   hh_t_pt__373->GetYaxis()->SetTitleSize(0.064);
   hh_t_pt__373->GetYaxis()->SetTitleOffset(0.91);
   hh_t_pt__373->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   
   TH1F *w_stack_32 = new TH1F("w_stack_32","",30,20,300);
   w_stack_32->SetMinimum(0);
   w_stack_32->SetMaximum(0);
   w_stack_32->SetDirectory(0);
   w_stack_32->SetStats(0);
   w->SetHistogram(w_stack_32);
   
   
   TH1D *hh_t_pt__374 = new TH1D("hh_t_pt__374","",30,20,300);
   hh_t_pt__374->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_pt__374->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__375 = new TH1D("hh_t_pt__375","",30,20,300);
   hh_t_pt__375->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_pt__375->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__376 = new TH1D("hh_t_pt__376","",30,20,300);
   hh_t_pt__376->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_pt__376->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__377 = new TH1D("hh_t_pt__377","",30,20,300);
   hh_t_pt__377->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_pt__377->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__378 = new TH1D("hh_t_pt__378","",30,20,300);
   hh_t_pt__378->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_pt__378->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__379 = new TH1D("hh_t_pt__379","",30,20,300);
   hh_t_pt__379->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_pt__379->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__380 = new TH1D("hh_t_pt__380","",30,20,300);
   hh_t_pt__380->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_pt__380->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__381 = new TH1D("hh_t_pt__381","",30,20,300);
   hh_t_pt__381->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_pt__381->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   w->Draw("same");
   
   TH1D *hh_t_pt__382 = new TH1D("hh_t_pt__382","",30,20,300);
   hh_t_pt__382->SetMaximum(0);
   hh_t_pt__382->SetStats(0);
   hh_t_pt__382->SetFillColor(1);
   hh_t_pt__382->SetFillStyle(3013);
   hh_t_pt__382->GetXaxis()->SetTitle("p_{T} (GeV)");
   hh_t_pt__382->Draw("e2 same");
   
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
   entry=leg->AddEntry("hh_t_pt","W+jets","f");

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
   entry=leg->AddEntry("hh_t_pt","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","EMB","f");

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
   entry=leg->AddEntry("hh_t_pt","data","lep");
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
   
   TH1D *hmc__383 = new TH1D("hmc__383","",30,20,300);
   hmc__383->SetBinContent(0,1);
   hmc__383->SetBinContent(1,1);
   hmc__383->SetBinContent(2,1);
   hmc__383->SetBinContent(3,1);
   hmc__383->SetBinContent(4,1);
   hmc__383->SetBinContent(5,1);
   hmc__383->SetBinContent(6,1);
   hmc__383->SetBinContent(7,1);
   hmc__383->SetBinContent(8,1);
   hmc__383->SetBinContent(9,1);
   hmc__383->SetBinContent(10,1);
   hmc__383->SetBinContent(11,1);
   hmc__383->SetBinContent(12,1);
   hmc__383->SetBinContent(13,1);
   hmc__383->SetBinContent(14,1);
   hmc__383->SetBinContent(15,1);
   hmc__383->SetBinContent(16,1);
   hmc__383->SetBinContent(17,1);
   hmc__383->SetBinContent(18,1);
   hmc__383->SetBinContent(19,1);
   hmc__383->SetBinContent(20,1);
   hmc__383->SetBinContent(21,1);
   hmc__383->SetBinContent(22,1);
   hmc__383->SetBinContent(23,1);
   hmc__383->SetBinContent(24,1);
   hmc__383->SetBinContent(25,1);
   hmc__383->SetBinContent(26,1);
   hmc__383->SetBinContent(27,1);
   hmc__383->SetBinContent(28,1);
   hmc__383->SetBinContent(29,1);
   hmc__383->SetBinContent(30,1);
   hmc__383->SetMinimum(0.5);
   hmc__383->SetMaximum(1.5);
   hmc__383->SetEntries(31);
   hmc__383->SetStats(0);
   hmc__383->SetFillColor(1);
   hmc__383->SetFillStyle(3013);
   hmc__383->GetXaxis()->SetTitle("p_{T} (GeV)");
   hmc__383->GetXaxis()->SetLabelSize(0.12);
   hmc__383->GetXaxis()->SetTitleSize(0.12);
   hmc__383->GetYaxis()->SetTitle("data/MC");
   hmc__383->GetYaxis()->CenterTitle(true);
   hmc__383->GetYaxis()->SetNdivisions(306);
   hmc__383->GetYaxis()->SetLabelSize(0.12);
   hmc__383->GetYaxis()->SetTitleSize(0.12);
   hmc__383->GetYaxis()->SetTitleOffset(0.5);
   hmc__383->Draw("e2");
   
   TH1D *hdata__384 = new TH1D("hdata__384","",30,20,300);
   hdata__384->SetEntries(31);
   hdata__384->SetStats(0);
   hdata__384->SetLineWidth(3);
   hdata__384->SetMarkerStyle(8);
   hdata__384->SetMarkerSize(1.3);
   hdata__384->GetYaxis()->SetTitle("data/MC");
   hdata__384->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
