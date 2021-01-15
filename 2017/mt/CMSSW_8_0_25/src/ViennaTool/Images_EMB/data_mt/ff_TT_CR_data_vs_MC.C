void ff_TT_CR_data_vs_MC()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Thu Dec  3 17:55:33 2020) by ROOT version6.06/01
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
   c1_1->Range(-0.9615385,-0.05263158,2.884615,1.091533);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *c_t__1 = new TH1D("c_t__1","",3,-0.5,2.5);
   c_t__1->SetMinimum(0);
   c_t__1->SetMaximum(0);
   c_t__1->SetStats(0);
   c_t__1->SetFillColor(1);
   c_t__1->SetFillStyle(3013);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   c_t__1->SetLineColor(ci);
   c_t__1->SetLineStyle(2);
   c_t__1->SetLineWidth(3);

   ci = TColor::GetColor("#00ff00");
   c_t__1->SetMarkerColor(ci);
   c_t__1->GetXaxis()->SetBinLabel(1,",p_{T} binned");
   c_t__1->GetXaxis()->SetLabelSize(0);
   c_t__1->GetYaxis()->SetTitle("fake factor");
   c_t__1->GetYaxis()->SetTitleOffset(1.25);
   c_t__1->Draw("");
   
   TH1D *c_t = new TH1D("c_t","",3,-0.5,2.5);
   c_t->SetMaximum(0);
   c_t->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   c_t->SetLineColor(ci);
   c_t->SetLineWidth(3);

   ci = TColor::GetColor("#00ff00");
   c_t->SetMarkerColor(ci);
   c_t->SetMarkerStyle(8);
   c_t->SetMarkerSize(1.3);
   c_t->GetXaxis()->SetBinLabel(1,", p_{T} binned");
   c_t->GetYaxis()->SetTitle("fake factor");
   c_t->GetYaxis()->SetTitleSize(2.5);
   c_t->Draw("COLZ same");
   
   TLegend *leg = new TLegend(0.55,0.68,0.89,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("c_t","FF in TT CR(data #mu#tau)","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("c_t","FF in TT CR(sim #mu#tau)","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
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
   c1_2->Range(-0.9615385,-1.292308,2.884615,2.4);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.12);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.35);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1D *hmc__2 = new TH1D("hmc__2","",3,-0.5,2.5);
   hmc__2->SetBinContent(0,1);
   hmc__2->SetBinContent(1,1);
   hmc__2->SetBinContent(2,1);
   hmc__2->SetBinContent(3,1);
   hmc__2->SetMinimum(0);
   hmc__2->SetMaximum(2.4);
   hmc__2->SetEntries(4);
   hmc__2->SetStats(0);
   hmc__2->SetFillColor(1);
   hmc__2->SetFillStyle(3013);

   ci = TColor::GetColor("#00ff00");
   hmc__2->SetLineColor(ci);
   hmc__2->SetLineStyle(2);
   hmc__2->SetLineWidth(3);

   ci = TColor::GetColor("#00ff00");
   hmc__2->SetMarkerColor(ci);
   hmc__2->GetXaxis()->SetBinLabel(1,",p_{T} binned");
   hmc__2->GetXaxis()->SetLabelSize(0.18);
   hmc__2->GetXaxis()->SetTitleSize(0.12);
   hmc__2->GetYaxis()->SetTitle("Ratio");
   hmc__2->GetYaxis()->CenterTitle(true);
   hmc__2->GetYaxis()->SetNdivisions(306);
   hmc__2->GetYaxis()->SetLabelSize(0.12);
   hmc__2->GetYaxis()->SetTitleSize(0.12);
   hmc__2->GetYaxis()->SetTitleOffset(0.5);
   hmc__2->Draw("e2");
   
   TH1D *hdata__3 = new TH1D("hdata__3","",3,-0.5,2.5);
   hdata__3->SetMaximum(0);
   hdata__3->SetEntries(4);
   hdata__3->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hdata__3->SetLineColor(ci);
   hdata__3->SetLineWidth(3);

   ci = TColor::GetColor("#00ff00");
   hdata__3->SetMarkerColor(ci);
   hdata__3->SetMarkerStyle(8);
   hdata__3->SetMarkerSize(1.3);
   hdata__3->GetXaxis()->SetBinLabel(1,", p_{T} binned");
   hdata__3->GetYaxis()->SetTitle("Ratio");
   hdata__3->GetYaxis()->SetTitleSize(2.5);
   hdata__3->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
