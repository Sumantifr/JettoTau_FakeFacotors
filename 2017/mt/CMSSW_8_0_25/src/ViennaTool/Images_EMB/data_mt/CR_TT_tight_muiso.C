void CR_TT_tight_muiso()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Thu Dec  3 17:52:32 2020) by ROOT version6.06/01
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
   Double_t xAxis326[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__409 = new TH1D("hh_t_muiso__409","",10, xAxis326);
   hh_t_muiso__409->SetStats(0);
   hh_t_muiso__409->SetLineWidth(3);
   hh_t_muiso__409->SetMarkerStyle(8);
   hh_t_muiso__409->SetMarkerSize(1.3);
   hh_t_muiso__409->GetXaxis()->SetLabelSize(0);
   hh_t_muiso__409->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_t_muiso__409->GetYaxis()->SetLabelSize(0.064);
   hh_t_muiso__409->GetYaxis()->SetTitleSize(0.064);
   hh_t_muiso__409->GetYaxis()->SetTitleOffset(0.91);
   hh_t_muiso__409->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis327[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_35 = new TH1F("w_stack_35","",10, xAxis327);
   w_stack_35->SetMinimum(0);
   w_stack_35->SetMaximum(0);
   w_stack_35->SetDirectory(0);
   w_stack_35->SetStats(0);
   w->SetHistogram(w_stack_35);
   
   Double_t xAxis328[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__410 = new TH1D("hh_t_muiso__410","",10, xAxis328);
   hh_t_muiso__410->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_muiso__410->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis329[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__411 = new TH1D("hh_t_muiso__411","",10, xAxis329);
   hh_t_muiso__411->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_muiso__411->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis330[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__412 = new TH1D("hh_t_muiso__412","",10, xAxis330);
   hh_t_muiso__412->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_muiso__412->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis331[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__413 = new TH1D("hh_t_muiso__413","",10, xAxis331);
   hh_t_muiso__413->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_muiso__413->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis332[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__414 = new TH1D("hh_t_muiso__414","",10, xAxis332);
   hh_t_muiso__414->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_muiso__414->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis333[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__415 = new TH1D("hh_t_muiso__415","",10, xAxis333);
   hh_t_muiso__415->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_muiso__415->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis334[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__416 = new TH1D("hh_t_muiso__416","",10, xAxis334);
   hh_t_muiso__416->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_muiso__416->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis335[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__417 = new TH1D("hh_t_muiso__417","",10, xAxis335);
   hh_t_muiso__417->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_muiso__417->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   w->Draw("same");
   Double_t xAxis336[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__418 = new TH1D("hh_t_muiso__418","",10, xAxis336);
   hh_t_muiso__418->SetMaximum(0);
   hh_t_muiso__418->SetStats(0);
   hh_t_muiso__418->SetFillColor(1);
   hh_t_muiso__418->SetFillStyle(3013);
   hh_t_muiso__418->GetXaxis()->SetTitle("#mu_{iso}");
   hh_t_muiso__418->Draw("e2 same");
   
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
   entry=leg->AddEntry("hh_t_muiso","W+jets","f");

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
   entry=leg->AddEntry("hh_t_muiso","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_muiso","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_muiso","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_muiso","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_muiso","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_muiso","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_muiso","EMB","f");

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
   entry=leg->AddEntry("hh_t_muiso","data","lep");
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
   Double_t xAxis337[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__419 = new TH1D("hmc__419","",10, xAxis337);
   hmc__419->SetBinContent(0,1);
   hmc__419->SetBinContent(1,1);
   hmc__419->SetBinContent(2,1);
   hmc__419->SetBinContent(3,1);
   hmc__419->SetBinContent(4,1);
   hmc__419->SetBinContent(5,1);
   hmc__419->SetBinContent(6,1);
   hmc__419->SetBinContent(7,1);
   hmc__419->SetBinContent(8,1);
   hmc__419->SetBinContent(9,1);
   hmc__419->SetBinContent(10,1);
   hmc__419->SetMinimum(0.5);
   hmc__419->SetMaximum(1.5);
   hmc__419->SetEntries(11);
   hmc__419->SetStats(0);
   hmc__419->SetFillColor(1);
   hmc__419->SetFillStyle(3013);
   hmc__419->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__419->GetXaxis()->SetLabelSize(0.12);
   hmc__419->GetXaxis()->SetTitleSize(0.12);
   hmc__419->GetYaxis()->SetTitle("data/MC");
   hmc__419->GetYaxis()->CenterTitle(true);
   hmc__419->GetYaxis()->SetNdivisions(306);
   hmc__419->GetYaxis()->SetLabelSize(0.12);
   hmc__419->GetYaxis()->SetTitleSize(0.12);
   hmc__419->GetYaxis()->SetTitleOffset(0.5);
   hmc__419->Draw("e2");
   Double_t xAxis338[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__420 = new TH1D("hdata__420","",10, xAxis338);
   hdata__420->SetEntries(11);
   hdata__420->SetStats(0);
   hdata__420->SetLineWidth(3);
   hdata__420->SetMarkerStyle(8);
   hdata__420->SetMarkerSize(1.3);
   hdata__420->GetYaxis()->SetTitle("data/MC");
   hdata__420->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
