void CR_Wjets_loose_muiso_rat1()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:46:21 2020) by ROOT version6.06/01
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
   c1_1->Range(-0.1076923,-9281.963,0.7897436,192499.8);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis79[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__109 = new TH1D("hh_l_muiso__109","",10, xAxis79);
   hh_l_muiso__109->SetBinContent(1,167550);
   hh_l_muiso__109->SetBinContent(2,54498);
   hh_l_muiso__109->SetBinContent(3,32336);
   hh_l_muiso__109->SetBinContent(4,11053);
   hh_l_muiso__109->SetBinError(1,409.3287);
   hh_l_muiso__109->SetBinError(2,233.4481);
   hh_l_muiso__109->SetBinError(3,179.8221);
   hh_l_muiso__109->SetBinError(4,105.1332);
   hh_l_muiso__109->SetEntries(265437);
   hh_l_muiso__109->SetStats(0);
   hh_l_muiso__109->SetLineWidth(3);
   hh_l_muiso__109->SetMarkerStyle(8);
   hh_l_muiso__109->SetMarkerSize(1.3);
   hh_l_muiso__109->GetXaxis()->SetLabelSize(0);
   hh_l_muiso__109->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_l_muiso__109->GetYaxis()->SetLabelSize(0.064);
   hh_l_muiso__109->GetYaxis()->SetTitleSize(0.064);
   hh_l_muiso__109->GetYaxis()->SetTitleOffset(0.91);
   hh_l_muiso__109->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(217815);
   Double_t xAxis80[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_10 = new TH1F("w_stack_10","",10, xAxis80);
   w_stack_10->SetMinimum(0);
   w_stack_10->SetMaximum(228705.8);
   w_stack_10->SetDirectory(0);
   w_stack_10->SetStats(0);
   w->SetHistogram(w_stack_10);
   
   Double_t xAxis81[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__110 = new TH1D("hh_l_muiso__110","",10, xAxis81);
   hh_l_muiso__110->SetBinContent(1,130252.4);
   hh_l_muiso__110->SetBinContent(2,46502.9);
   hh_l_muiso__110->SetBinContent(3,26346.81);
   hh_l_muiso__110->SetBinContent(4,8276.866);
   hh_l_muiso__110->SetBinError(1,822.5354);
   hh_l_muiso__110->SetBinError(2,493.8248);
   hh_l_muiso__110->SetBinError(3,371.4772);
   hh_l_muiso__110->SetBinError(4,208.1728);
   hh_l_muiso__110->SetEntries(66632);
   hh_l_muiso__110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__110->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis82[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__111 = new TH1D("hh_l_muiso__111","",10, xAxis82);
   hh_l_muiso__111->SetBinContent(1,2659.802);
   hh_l_muiso__111->SetBinContent(2,1041.452);
   hh_l_muiso__111->SetBinContent(3,609.4942);
   hh_l_muiso__111->SetBinContent(4,230.1803);
   hh_l_muiso__111->SetBinError(1,31.89189);
   hh_l_muiso__111->SetBinError(2,20.02039);
   hh_l_muiso__111->SetBinError(3,15.27099);
   hh_l_muiso__111->SetBinError(4,9.332039);
   hh_l_muiso__111->SetEntries(13527);
   hh_l_muiso__111->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__111->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis83[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__112 = new TH1D("hh_l_muiso__112","",10, xAxis83);
   hh_l_muiso__112->SetBinContent(1,301.438);
   hh_l_muiso__112->SetBinContent(2,121.3164);
   hh_l_muiso__112->SetBinContent(3,70.23353);
   hh_l_muiso__112->SetBinContent(4,26.26407);
   hh_l_muiso__112->SetBinError(1,11.00209);
   hh_l_muiso__112->SetBinError(2,7.03178);
   hh_l_muiso__112->SetBinError(3,5.354111);
   hh_l_muiso__112->SetBinError(4,3.246769);
   hh_l_muiso__112->SetEntries(1472);
   hh_l_muiso__112->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__112->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis84[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__113 = new TH1D("hh_l_muiso__113","",10, xAxis84);
   hh_l_muiso__113->SetBinContent(1,3492.055);
   hh_l_muiso__113->SetBinContent(2,1063.096);
   hh_l_muiso__113->SetBinContent(3,666.7863);
   hh_l_muiso__113->SetBinContent(4,195.1615);
   hh_l_muiso__113->SetBinError(1,147.7449);
   hh_l_muiso__113->SetBinError(2,75.59091);
   hh_l_muiso__113->SetBinError(3,72.85921);
   hh_l_muiso__113->SetBinError(4,37.72037);
   hh_l_muiso__113->SetEntries(6206);
   hh_l_muiso__113->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__113->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis85[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__114 = new TH1D("hh_l_muiso__114","",10, xAxis85);
   hh_l_muiso__114->SetBinContent(1,29.06126);
   hh_l_muiso__114->SetBinContent(2,11.44503);
   hh_l_muiso__114->SetBinContent(3,8.247247);
   hh_l_muiso__114->SetBinContent(4,9.554206);
   hh_l_muiso__114->SetBinError(1,7.786135);
   hh_l_muiso__114->SetBinError(2,4.17258);
   hh_l_muiso__114->SetBinError(3,3.782014);
   hh_l_muiso__114->SetBinError(4,5.993535);
   hh_l_muiso__114->SetEntries(58);
   hh_l_muiso__114->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__114->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis86[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__115 = new TH1D("hh_l_muiso__115","",10, xAxis86);
   hh_l_muiso__115->SetBinContent(1,2343.743);
   hh_l_muiso__115->SetBinContent(2,787.0849);
   hh_l_muiso__115->SetBinContent(3,502.4449);
   hh_l_muiso__115->SetBinContent(4,154.6691);
   hh_l_muiso__115->SetBinError(1,38.77154);
   hh_l_muiso__115->SetBinError(2,22.41077);
   hh_l_muiso__115->SetBinError(3,18.10989);
   hh_l_muiso__115->SetBinError(4,10.1126);
   hh_l_muiso__115->SetEntries(8983);
   hh_l_muiso__115->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__115->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis87[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__116 = new TH1D("hh_l_muiso__116","",10, xAxis87);
   hh_l_muiso__116->SetBinContent(1,239.6837);
   hh_l_muiso__116->SetBinContent(2,67.62431);
   hh_l_muiso__116->SetBinContent(3,48.06567);
   hh_l_muiso__116->SetBinContent(4,10.90146);
   hh_l_muiso__116->SetBinError(1,11.08758);
   hh_l_muiso__116->SetBinError(2,5.638868);
   hh_l_muiso__116->SetBinError(3,5.746771);
   hh_l_muiso__116->SetBinError(4,2.281875);
   hh_l_muiso__116->SetEntries(1052);
   hh_l_muiso__116->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__116->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis88[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__117 = new TH1D("hh_l_muiso__117","",10, xAxis88);
   hh_l_muiso__117->SetBinContent(1,283.7501);
   hh_l_muiso__117->SetBinContent(2,113.5506);
   hh_l_muiso__117->SetBinContent(3,86.41153);
   hh_l_muiso__117->SetBinContent(4,37.89246);
   hh_l_muiso__117->SetBinError(1,5.553158);
   hh_l_muiso__117->SetBinError(2,3.426921);
   hh_l_muiso__117->SetBinError(3,2.947666);
   hh_l_muiso__117->SetBinError(4,1.851899);
   hh_l_muiso__117->SetEntries(5949);
   hh_l_muiso__117->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__117->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis89[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__118 = new TH1D("hh_l_muiso__118","",10, xAxis89);
   hh_l_muiso__118->SetBinContent(1,139602);
   hh_l_muiso__118->SetBinContent(2,49708.47);
   hh_l_muiso__118->SetBinContent(3,28338.5);
   hh_l_muiso__118->SetBinContent(4,8941.489);
   hh_l_muiso__118->SetBinError(1,837.406);
   hh_l_muiso__118->SetBinError(2,500.59);
   hh_l_muiso__118->SetBinError(3,379.4069);
   hh_l_muiso__118->SetBinError(4,212.1396);
   hh_l_muiso__118->SetMaximum(217815);
   hh_l_muiso__118->SetEntries(103879);
   hh_l_muiso__118->SetStats(0);
   hh_l_muiso__118->SetFillColor(1);
   hh_l_muiso__118->SetFillStyle(3013);
   hh_l_muiso__118->GetXaxis()->SetTitle("#mu_{iso}");
   hh_l_muiso__118->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Wjets CR, loose isolation","h");
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
   Double_t xAxis90[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__119 = new TH1D("hmc__119","",10, xAxis90);
   hmc__119->SetBinContent(0,1);
   hmc__119->SetBinContent(1,1);
   hmc__119->SetBinContent(2,1);
   hmc__119->SetBinContent(3,1);
   hmc__119->SetBinContent(4,1);
   hmc__119->SetBinContent(5,1);
   hmc__119->SetBinContent(6,1);
   hmc__119->SetBinContent(7,1);
   hmc__119->SetBinContent(8,1);
   hmc__119->SetBinContent(9,1);
   hmc__119->SetBinContent(10,1);
   hmc__119->SetBinError(1,0.005998526);
   hmc__119->SetBinError(2,0.01007052);
   hmc__119->SetBinError(3,0.01338839);
   hmc__119->SetBinError(4,0.02372531);
   hmc__119->SetMinimum(0.5);
   hmc__119->SetMaximum(1.5);
   hmc__119->SetEntries(103890);
   hmc__119->SetStats(0);
   hmc__119->SetFillColor(1);
   hmc__119->SetFillStyle(3013);
   hmc__119->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__119->GetXaxis()->SetLabelSize(0.12);
   hmc__119->GetXaxis()->SetTitleSize(0.12);
   hmc__119->GetYaxis()->SetTitle("data/MC");
   hmc__119->GetYaxis()->CenterTitle(true);
   hmc__119->GetYaxis()->SetNdivisions(306);
   hmc__119->GetYaxis()->SetLabelSize(0.12);
   hmc__119->GetYaxis()->SetTitleSize(0.12);
   hmc__119->GetYaxis()->SetTitleOffset(0.5);
   hmc__119->Draw("e2");
   Double_t xAxis91[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__120 = new TH1D("hdata__120","",10, xAxis91);
   hdata__120->SetBinContent(1,1.200198);
   hdata__120->SetBinContent(2,1.096352);
   hdata__120->SetBinContent(3,1.141063);
   hdata__120->SetBinContent(4,1.236148);
   hdata__120->SetBinError(1,0.002932113);
   hdata__120->SetBinError(2,0.004696344);
   hdata__120->SetBinError(3,0.006345508);
   hdata__120->SetBinError(4,0.01175791);
   hdata__120->SetEntries(265448);
   hdata__120->SetStats(0);
   hdata__120->SetLineWidth(3);
   hdata__120->SetMarkerStyle(8);
   hdata__120->SetMarkerSize(1.3);
   hdata__120->GetYaxis()->SetTitle("data/MC");
   hdata__120->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
