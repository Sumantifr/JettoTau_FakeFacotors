void CR_DY__muiso_rat1()
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
   c1_1->Range(-0.1076923,-0.05526316,0.7897436,1.14611);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis222[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__277 = new TH1D("hh_l_muiso__277","",10, xAxis222);
   hh_l_muiso__277->SetStats(0);
   hh_l_muiso__277->SetLineWidth(3);
   hh_l_muiso__277->SetMarkerStyle(8);
   hh_l_muiso__277->SetMarkerSize(1.3);
   hh_l_muiso__277->GetXaxis()->SetLabelSize(0);
   hh_l_muiso__277->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_l_muiso__277->GetYaxis()->SetLabelSize(0.064);
   hh_l_muiso__277->GetYaxis()->SetTitleSize(0.064);
   hh_l_muiso__277->GetYaxis()->SetTitleOffset(0.91);
   hh_l_muiso__277->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis223[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_24 = new TH1F("w_stack_24","",10, xAxis223);
   w_stack_24->SetMinimum(0);
   w_stack_24->SetMaximum(0);
   w_stack_24->SetDirectory(0);
   w_stack_24->SetStats(0);
   w->SetHistogram(w_stack_24);
   
   Double_t xAxis224[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__278 = new TH1D("hh_l_muiso__278","",10, xAxis224);
   hh_l_muiso__278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__278->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis225[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__279 = new TH1D("hh_l_muiso__279","",10, xAxis225);
   hh_l_muiso__279->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__279->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis226[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__280 = new TH1D("hh_l_muiso__280","",10, xAxis226);
   hh_l_muiso__280->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__280->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis227[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__281 = new TH1D("hh_l_muiso__281","",10, xAxis227);
   hh_l_muiso__281->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__281->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis228[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__282 = new TH1D("hh_l_muiso__282","",10, xAxis228);
   hh_l_muiso__282->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__282->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis229[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__283 = new TH1D("hh_l_muiso__283","",10, xAxis229);
   hh_l_muiso__283->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__283->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis230[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__284 = new TH1D("hh_l_muiso__284","",10, xAxis230);
   hh_l_muiso__284->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__284->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis231[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__285 = new TH1D("hh_l_muiso__285","",10, xAxis231);
   hh_l_muiso__285->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__285->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis232[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__286 = new TH1D("hh_l_muiso__286","",10, xAxis232);
   hh_l_muiso__286->SetMaximum(0);
   hh_l_muiso__286->SetStats(0);
   hh_l_muiso__286->SetFillColor(1);
   hh_l_muiso__286->SetFillStyle(3013);
   hh_l_muiso__286->GetXaxis()->SetTitle("#mu_{iso}");
   hh_l_muiso__286->Draw("e2 same");
   
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
   Double_t xAxis233[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__287 = new TH1D("hmc__287","",10, xAxis233);
   hmc__287->SetBinContent(0,1);
   hmc__287->SetBinContent(1,1);
   hmc__287->SetBinContent(2,1);
   hmc__287->SetBinContent(3,1);
   hmc__287->SetBinContent(4,1);
   hmc__287->SetBinContent(5,1);
   hmc__287->SetBinContent(6,1);
   hmc__287->SetBinContent(7,1);
   hmc__287->SetBinContent(8,1);
   hmc__287->SetBinContent(9,1);
   hmc__287->SetBinContent(10,1);
   hmc__287->SetMinimum(0.5);
   hmc__287->SetMaximum(1.5);
   hmc__287->SetEntries(11);
   hmc__287->SetStats(0);
   hmc__287->SetFillColor(1);
   hmc__287->SetFillStyle(3013);
   hmc__287->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__287->GetXaxis()->SetLabelSize(0.12);
   hmc__287->GetXaxis()->SetTitleSize(0.12);
   hmc__287->GetYaxis()->SetTitle("data/MC");
   hmc__287->GetYaxis()->CenterTitle(true);
   hmc__287->GetYaxis()->SetNdivisions(306);
   hmc__287->GetYaxis()->SetLabelSize(0.12);
   hmc__287->GetYaxis()->SetTitleSize(0.12);
   hmc__287->GetYaxis()->SetTitleOffset(0.5);
   hmc__287->Draw("e2");
   Double_t xAxis234[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__288 = new TH1D("hdata__288","",10, xAxis234);
   hdata__288->SetEntries(11);
   hdata__288->SetStats(0);
   hdata__288->SetLineWidth(3);
   hdata__288->SetMarkerStyle(8);
   hdata__288->SetMarkerSize(1.3);
   hdata__288->GetYaxis()->SetTitle("data/MC");
   hdata__288->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
