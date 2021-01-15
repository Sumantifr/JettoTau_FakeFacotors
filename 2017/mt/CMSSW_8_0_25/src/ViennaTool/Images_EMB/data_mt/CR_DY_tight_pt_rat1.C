void CR_DY_tight_pt_rat1()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:46:23 2020) by ROOT version6.06/01
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
   
   TH1D *hh_t_pt__229 = new TH1D("hh_t_pt__229","",30,20,300);
   hh_t_pt__229->SetStats(0);
   hh_t_pt__229->SetLineWidth(3);
   hh_t_pt__229->SetMarkerStyle(8);
   hh_t_pt__229->SetMarkerSize(1.3);
   hh_t_pt__229->GetXaxis()->SetLabelSize(0);
   hh_t_pt__229->GetYaxis()->SetTitle("Events / 9 GeV");
   hh_t_pt__229->GetYaxis()->SetLabelSize(0.064);
   hh_t_pt__229->GetYaxis()->SetTitleSize(0.064);
   hh_t_pt__229->GetYaxis()->SetTitleOffset(0.91);
   hh_t_pt__229->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   
   TH1F *w_stack_20 = new TH1F("w_stack_20","",30,20,300);
   w_stack_20->SetMinimum(0);
   w_stack_20->SetMaximum(0);
   w_stack_20->SetDirectory(0);
   w_stack_20->SetStats(0);
   w->SetHistogram(w_stack_20);
   
   
   TH1D *hh_t_pt__230 = new TH1D("hh_t_pt__230","",30,20,300);
   hh_t_pt__230->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_pt__230->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__231 = new TH1D("hh_t_pt__231","",30,20,300);
   hh_t_pt__231->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_pt__231->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__232 = new TH1D("hh_t_pt__232","",30,20,300);
   hh_t_pt__232->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_pt__232->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__233 = new TH1D("hh_t_pt__233","",30,20,300);
   hh_t_pt__233->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_pt__233->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__234 = new TH1D("hh_t_pt__234","",30,20,300);
   hh_t_pt__234->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_pt__234->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__235 = new TH1D("hh_t_pt__235","",30,20,300);
   hh_t_pt__235->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_pt__235->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__236 = new TH1D("hh_t_pt__236","",30,20,300);
   hh_t_pt__236->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_pt__236->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__237 = new TH1D("hh_t_pt__237","",30,20,300);
   hh_t_pt__237->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_pt__237->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   w->Draw("same");
   
   TH1D *hh_t_pt__238 = new TH1D("hh_t_pt__238","",30,20,300);
   hh_t_pt__238->SetMaximum(0);
   hh_t_pt__238->SetStats(0);
   hh_t_pt__238->SetFillColor(1);
   hh_t_pt__238->SetFillStyle(3013);
   hh_t_pt__238->GetXaxis()->SetTitle("p_{T} (GeV)");
   hh_t_pt__238->Draw("e2 same");
   
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
   
   TH1D *hmc__239 = new TH1D("hmc__239","",30,20,300);
   hmc__239->SetBinContent(0,1);
   hmc__239->SetBinContent(1,1);
   hmc__239->SetBinContent(2,1);
   hmc__239->SetBinContent(3,1);
   hmc__239->SetBinContent(4,1);
   hmc__239->SetBinContent(5,1);
   hmc__239->SetBinContent(6,1);
   hmc__239->SetBinContent(7,1);
   hmc__239->SetBinContent(8,1);
   hmc__239->SetBinContent(9,1);
   hmc__239->SetBinContent(10,1);
   hmc__239->SetBinContent(11,1);
   hmc__239->SetBinContent(12,1);
   hmc__239->SetBinContent(13,1);
   hmc__239->SetBinContent(14,1);
   hmc__239->SetBinContent(15,1);
   hmc__239->SetBinContent(16,1);
   hmc__239->SetBinContent(17,1);
   hmc__239->SetBinContent(18,1);
   hmc__239->SetBinContent(19,1);
   hmc__239->SetBinContent(20,1);
   hmc__239->SetBinContent(21,1);
   hmc__239->SetBinContent(22,1);
   hmc__239->SetBinContent(23,1);
   hmc__239->SetBinContent(24,1);
   hmc__239->SetBinContent(25,1);
   hmc__239->SetBinContent(26,1);
   hmc__239->SetBinContent(27,1);
   hmc__239->SetBinContent(28,1);
   hmc__239->SetBinContent(29,1);
   hmc__239->SetBinContent(30,1);
   hmc__239->SetMinimum(0.5);
   hmc__239->SetMaximum(1.5);
   hmc__239->SetEntries(31);
   hmc__239->SetStats(0);
   hmc__239->SetFillColor(1);
   hmc__239->SetFillStyle(3013);
   hmc__239->GetXaxis()->SetTitle("p_{T} (GeV)");
   hmc__239->GetXaxis()->SetLabelSize(0.12);
   hmc__239->GetXaxis()->SetTitleSize(0.12);
   hmc__239->GetYaxis()->SetTitle("data/MC");
   hmc__239->GetYaxis()->CenterTitle(true);
   hmc__239->GetYaxis()->SetNdivisions(306);
   hmc__239->GetYaxis()->SetLabelSize(0.12);
   hmc__239->GetYaxis()->SetTitleSize(0.12);
   hmc__239->GetYaxis()->SetTitleOffset(0.5);
   hmc__239->Draw("e2");
   
   TH1D *hdata__240 = new TH1D("hdata__240","",30,20,300);
   hdata__240->SetEntries(31);
   hdata__240->SetStats(0);
   hdata__240->SetLineWidth(3);
   hdata__240->SetMarkerStyle(8);
   hdata__240->SetMarkerSize(1.3);
   hdata__240->GetYaxis()->SetTitle("data/MC");
   hdata__240->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
