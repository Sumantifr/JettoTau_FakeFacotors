void CR_TT_loose_muiso_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:33 2020) by ROOT version6.06/01
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
   Double_t xAxis313[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__397 = new TH1D("hh_l_muiso__397","",10, xAxis313);
   hh_l_muiso__397->SetStats(0);
   hh_l_muiso__397->SetLineWidth(3);
   hh_l_muiso__397->SetMarkerStyle(8);
   hh_l_muiso__397->SetMarkerSize(1.3);
   hh_l_muiso__397->GetXaxis()->SetLabelSize(0);
   hh_l_muiso__397->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_l_muiso__397->GetYaxis()->SetLabelSize(0.064);
   hh_l_muiso__397->GetYaxis()->SetTitleSize(0.064);
   hh_l_muiso__397->GetYaxis()->SetTitleOffset(0.91);
   hh_l_muiso__397->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis314[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_34 = new TH1F("w_stack_34","",10, xAxis314);
   w_stack_34->SetMinimum(0);
   w_stack_34->SetMaximum(0);
   w_stack_34->SetDirectory(0);
   w_stack_34->SetStats(0);
   w->SetHistogram(w_stack_34);
   
   Double_t xAxis315[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__398 = new TH1D("hh_l_muiso__398","",10, xAxis315);
   hh_l_muiso__398->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__398->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis316[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__399 = new TH1D("hh_l_muiso__399","",10, xAxis316);
   hh_l_muiso__399->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__399->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis317[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__400 = new TH1D("hh_l_muiso__400","",10, xAxis317);
   hh_l_muiso__400->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__400->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis318[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__401 = new TH1D("hh_l_muiso__401","",10, xAxis318);
   hh_l_muiso__401->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__401->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis319[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__402 = new TH1D("hh_l_muiso__402","",10, xAxis319);
   hh_l_muiso__402->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__402->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis320[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__403 = new TH1D("hh_l_muiso__403","",10, xAxis320);
   hh_l_muiso__403->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__403->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis321[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__404 = new TH1D("hh_l_muiso__404","",10, xAxis321);
   hh_l_muiso__404->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__404->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis322[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__405 = new TH1D("hh_l_muiso__405","",10, xAxis322);
   hh_l_muiso__405->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__405->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis323[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__406 = new TH1D("hh_l_muiso__406","",10, xAxis323);
   hh_l_muiso__406->SetMaximum(0);
   hh_l_muiso__406->SetStats(0);
   hh_l_muiso__406->SetFillColor(1);
   hh_l_muiso__406->SetFillStyle(3013);
   hh_l_muiso__406->GetXaxis()->SetTitle("#mu_{iso}");
   hh_l_muiso__406->Draw("e2 same");
   
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
   Double_t xAxis324[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__407 = new TH1D("hmc__407","",10, xAxis324);
   hmc__407->SetBinContent(0,1);
   hmc__407->SetBinContent(1,1);
   hmc__407->SetBinContent(2,1);
   hmc__407->SetBinContent(3,1);
   hmc__407->SetBinContent(4,1);
   hmc__407->SetBinContent(5,1);
   hmc__407->SetBinContent(6,1);
   hmc__407->SetBinContent(7,1);
   hmc__407->SetBinContent(8,1);
   hmc__407->SetBinContent(9,1);
   hmc__407->SetBinContent(10,1);
   hmc__407->SetMinimum(0.5);
   hmc__407->SetMaximum(1.5);
   hmc__407->SetEntries(11);
   hmc__407->SetStats(0);
   hmc__407->SetFillColor(1);
   hmc__407->SetFillStyle(3013);
   hmc__407->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__407->GetXaxis()->SetLabelSize(0.12);
   hmc__407->GetXaxis()->SetTitleSize(0.12);
   hmc__407->GetYaxis()->SetTitle("data/MC");
   hmc__407->GetYaxis()->CenterTitle(true);
   hmc__407->GetYaxis()->SetNdivisions(306);
   hmc__407->GetYaxis()->SetLabelSize(0.12);
   hmc__407->GetYaxis()->SetTitleSize(0.12);
   hmc__407->GetYaxis()->SetTitleOffset(0.5);
   hmc__407->Draw("e2");
   Double_t xAxis325[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__408 = new TH1D("hdata__408","",10, xAxis325);
   hdata__408->SetEntries(11);
   hdata__408->SetStats(0);
   hdata__408->SetLineWidth(3);
   hdata__408->SetMarkerStyle(8);
   hdata__408->SetMarkerSize(1.3);
   hdata__408->GetYaxis()->SetTitle("data/MC");
   hdata__408->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
