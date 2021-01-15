void CR_DY__pt_rat1()
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
   
   TH1D *hh_l_pt__241 = new TH1D("hh_l_pt__241","",30,20,300);
   hh_l_pt__241->SetStats(0);
   hh_l_pt__241->SetLineWidth(3);
   hh_l_pt__241->SetMarkerStyle(8);
   hh_l_pt__241->SetMarkerSize(1.3);
   hh_l_pt__241->GetXaxis()->SetLabelSize(0);
   hh_l_pt__241->GetYaxis()->SetTitle("Events / 9 GeV");
   hh_l_pt__241->GetYaxis()->SetLabelSize(0.064);
   hh_l_pt__241->GetYaxis()->SetTitleSize(0.064);
   hh_l_pt__241->GetYaxis()->SetTitleOffset(0.91);
   hh_l_pt__241->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   
   TH1F *w_stack_21 = new TH1F("w_stack_21","",30,20,300);
   w_stack_21->SetMinimum(0);
   w_stack_21->SetMaximum(0);
   w_stack_21->SetDirectory(0);
   w_stack_21->SetStats(0);
   w->SetHistogram(w_stack_21);
   
   
   TH1D *hh_l_pt__242 = new TH1D("hh_l_pt__242","",30,20,300);
   hh_l_pt__242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_pt__242->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__243 = new TH1D("hh_l_pt__243","",30,20,300);
   hh_l_pt__243->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_pt__243->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__244 = new TH1D("hh_l_pt__244","",30,20,300);
   hh_l_pt__244->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_pt__244->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__245 = new TH1D("hh_l_pt__245","",30,20,300);
   hh_l_pt__245->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_pt__245->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__246 = new TH1D("hh_l_pt__246","",30,20,300);
   hh_l_pt__246->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_pt__246->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__247 = new TH1D("hh_l_pt__247","",30,20,300);
   hh_l_pt__247->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_pt__247->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__248 = new TH1D("hh_l_pt__248","",30,20,300);
   hh_l_pt__248->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_pt__248->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__249 = new TH1D("hh_l_pt__249","",30,20,300);
   hh_l_pt__249->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_pt__249->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   w->Draw("same");
   
   TH1D *hh_l_pt__250 = new TH1D("hh_l_pt__250","",30,20,300);
   hh_l_pt__250->SetMaximum(0);
   hh_l_pt__250->SetStats(0);
   hh_l_pt__250->SetFillColor(1);
   hh_l_pt__250->SetFillStyle(3013);
   hh_l_pt__250->GetXaxis()->SetTitle("p_{T} (GeV)");
   hh_l_pt__250->Draw("e2 same");
   
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
   
   TH1D *hmc__251 = new TH1D("hmc__251","",30,20,300);
   hmc__251->SetBinContent(0,1);
   hmc__251->SetBinContent(1,1);
   hmc__251->SetBinContent(2,1);
   hmc__251->SetBinContent(3,1);
   hmc__251->SetBinContent(4,1);
   hmc__251->SetBinContent(5,1);
   hmc__251->SetBinContent(6,1);
   hmc__251->SetBinContent(7,1);
   hmc__251->SetBinContent(8,1);
   hmc__251->SetBinContent(9,1);
   hmc__251->SetBinContent(10,1);
   hmc__251->SetBinContent(11,1);
   hmc__251->SetBinContent(12,1);
   hmc__251->SetBinContent(13,1);
   hmc__251->SetBinContent(14,1);
   hmc__251->SetBinContent(15,1);
   hmc__251->SetBinContent(16,1);
   hmc__251->SetBinContent(17,1);
   hmc__251->SetBinContent(18,1);
   hmc__251->SetBinContent(19,1);
   hmc__251->SetBinContent(20,1);
   hmc__251->SetBinContent(21,1);
   hmc__251->SetBinContent(22,1);
   hmc__251->SetBinContent(23,1);
   hmc__251->SetBinContent(24,1);
   hmc__251->SetBinContent(25,1);
   hmc__251->SetBinContent(26,1);
   hmc__251->SetBinContent(27,1);
   hmc__251->SetBinContent(28,1);
   hmc__251->SetBinContent(29,1);
   hmc__251->SetBinContent(30,1);
   hmc__251->SetMinimum(0.5);
   hmc__251->SetMaximum(1.5);
   hmc__251->SetEntries(31);
   hmc__251->SetStats(0);
   hmc__251->SetFillColor(1);
   hmc__251->SetFillStyle(3013);
   hmc__251->GetXaxis()->SetTitle("p_{T} (GeV)");
   hmc__251->GetXaxis()->SetLabelSize(0.12);
   hmc__251->GetXaxis()->SetTitleSize(0.12);
   hmc__251->GetYaxis()->SetTitle("data/MC");
   hmc__251->GetYaxis()->CenterTitle(true);
   hmc__251->GetYaxis()->SetNdivisions(306);
   hmc__251->GetYaxis()->SetLabelSize(0.12);
   hmc__251->GetYaxis()->SetTitleSize(0.12);
   hmc__251->GetYaxis()->SetTitleOffset(0.5);
   hmc__251->Draw("e2");
   
   TH1D *hdata__252 = new TH1D("hdata__252","",30,20,300);
   hdata__252->SetEntries(31);
   hdata__252->SetStats(0);
   hdata__252->SetLineWidth(3);
   hdata__252->SetMarkerStyle(8);
   hdata__252->SetMarkerSize(1.3);
   hdata__252->GetYaxis()->SetTitle("data/MC");
   hdata__252->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
