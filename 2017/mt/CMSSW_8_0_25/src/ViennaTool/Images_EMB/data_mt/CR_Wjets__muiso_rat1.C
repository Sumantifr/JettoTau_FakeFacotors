void CR_Wjets__muiso_rat1()
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
   Double_t xAxis105[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__133 = new TH1D("hh_l_muiso__133","",10, xAxis105);
   hh_l_muiso__133->SetBinContent(1,167550);
   hh_l_muiso__133->SetBinContent(2,54498);
   hh_l_muiso__133->SetBinContent(3,32336);
   hh_l_muiso__133->SetBinContent(4,11053);
   hh_l_muiso__133->SetBinError(1,409.3287);
   hh_l_muiso__133->SetBinError(2,233.4481);
   hh_l_muiso__133->SetBinError(3,179.8221);
   hh_l_muiso__133->SetBinError(4,105.1332);
   hh_l_muiso__133->SetEntries(265437);
   hh_l_muiso__133->SetStats(0);
   hh_l_muiso__133->SetLineWidth(3);
   hh_l_muiso__133->SetMarkerStyle(8);
   hh_l_muiso__133->SetMarkerSize(1.3);
   hh_l_muiso__133->GetXaxis()->SetLabelSize(0);
   hh_l_muiso__133->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_l_muiso__133->GetYaxis()->SetLabelSize(0.064);
   hh_l_muiso__133->GetYaxis()->SetTitleSize(0.064);
   hh_l_muiso__133->GetYaxis()->SetTitleOffset(0.91);
   hh_l_muiso__133->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(217815);
   Double_t xAxis106[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_12 = new TH1F("w_stack_12","",10, xAxis106);
   w_stack_12->SetMinimum(0);
   w_stack_12->SetMaximum(228705.8);
   w_stack_12->SetDirectory(0);
   w_stack_12->SetStats(0);
   w->SetHistogram(w_stack_12);
   
   Double_t xAxis107[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__134 = new TH1D("hh_l_muiso__134","",10, xAxis107);
   hh_l_muiso__134->SetBinContent(1,130252.4);
   hh_l_muiso__134->SetBinContent(2,46502.9);
   hh_l_muiso__134->SetBinContent(3,26346.81);
   hh_l_muiso__134->SetBinContent(4,8276.866);
   hh_l_muiso__134->SetBinError(1,822.5354);
   hh_l_muiso__134->SetBinError(2,493.8248);
   hh_l_muiso__134->SetBinError(3,371.4772);
   hh_l_muiso__134->SetBinError(4,208.1728);
   hh_l_muiso__134->SetEntries(66632);
   hh_l_muiso__134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__134->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis108[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__135 = new TH1D("hh_l_muiso__135","",10, xAxis108);
   hh_l_muiso__135->SetBinContent(1,2659.802);
   hh_l_muiso__135->SetBinContent(2,1041.452);
   hh_l_muiso__135->SetBinContent(3,609.4942);
   hh_l_muiso__135->SetBinContent(4,230.1803);
   hh_l_muiso__135->SetBinError(1,31.89189);
   hh_l_muiso__135->SetBinError(2,20.02039);
   hh_l_muiso__135->SetBinError(3,15.27099);
   hh_l_muiso__135->SetBinError(4,9.332039);
   hh_l_muiso__135->SetEntries(13527);
   hh_l_muiso__135->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__135->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis109[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__136 = new TH1D("hh_l_muiso__136","",10, xAxis109);
   hh_l_muiso__136->SetBinContent(1,301.438);
   hh_l_muiso__136->SetBinContent(2,121.3164);
   hh_l_muiso__136->SetBinContent(3,70.23353);
   hh_l_muiso__136->SetBinContent(4,26.26407);
   hh_l_muiso__136->SetBinError(1,11.00209);
   hh_l_muiso__136->SetBinError(2,7.03178);
   hh_l_muiso__136->SetBinError(3,5.354111);
   hh_l_muiso__136->SetBinError(4,3.246769);
   hh_l_muiso__136->SetEntries(1472);
   hh_l_muiso__136->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__136->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis110[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__137 = new TH1D("hh_l_muiso__137","",10, xAxis110);
   hh_l_muiso__137->SetBinContent(1,3492.055);
   hh_l_muiso__137->SetBinContent(2,1063.096);
   hh_l_muiso__137->SetBinContent(3,666.7863);
   hh_l_muiso__137->SetBinContent(4,195.1615);
   hh_l_muiso__137->SetBinError(1,147.7449);
   hh_l_muiso__137->SetBinError(2,75.59091);
   hh_l_muiso__137->SetBinError(3,72.85921);
   hh_l_muiso__137->SetBinError(4,37.72037);
   hh_l_muiso__137->SetEntries(6206);
   hh_l_muiso__137->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__137->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis111[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__138 = new TH1D("hh_l_muiso__138","",10, xAxis111);
   hh_l_muiso__138->SetBinContent(1,29.06126);
   hh_l_muiso__138->SetBinContent(2,11.44503);
   hh_l_muiso__138->SetBinContent(3,8.247247);
   hh_l_muiso__138->SetBinContent(4,9.554206);
   hh_l_muiso__138->SetBinError(1,7.786135);
   hh_l_muiso__138->SetBinError(2,4.17258);
   hh_l_muiso__138->SetBinError(3,3.782014);
   hh_l_muiso__138->SetBinError(4,5.993535);
   hh_l_muiso__138->SetEntries(58);
   hh_l_muiso__138->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__138->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis112[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__139 = new TH1D("hh_l_muiso__139","",10, xAxis112);
   hh_l_muiso__139->SetBinContent(1,2343.743);
   hh_l_muiso__139->SetBinContent(2,787.0849);
   hh_l_muiso__139->SetBinContent(3,502.4449);
   hh_l_muiso__139->SetBinContent(4,154.6691);
   hh_l_muiso__139->SetBinError(1,38.77154);
   hh_l_muiso__139->SetBinError(2,22.41077);
   hh_l_muiso__139->SetBinError(3,18.10989);
   hh_l_muiso__139->SetBinError(4,10.1126);
   hh_l_muiso__139->SetEntries(8983);
   hh_l_muiso__139->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__139->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis113[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__140 = new TH1D("hh_l_muiso__140","",10, xAxis113);
   hh_l_muiso__140->SetBinContent(1,239.6837);
   hh_l_muiso__140->SetBinContent(2,67.62431);
   hh_l_muiso__140->SetBinContent(3,48.06567);
   hh_l_muiso__140->SetBinContent(4,10.90146);
   hh_l_muiso__140->SetBinError(1,11.08758);
   hh_l_muiso__140->SetBinError(2,5.638868);
   hh_l_muiso__140->SetBinError(3,5.746771);
   hh_l_muiso__140->SetBinError(4,2.281875);
   hh_l_muiso__140->SetEntries(1052);
   hh_l_muiso__140->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__140->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis114[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__141 = new TH1D("hh_l_muiso__141","",10, xAxis114);
   hh_l_muiso__141->SetBinContent(1,283.7501);
   hh_l_muiso__141->SetBinContent(2,113.5506);
   hh_l_muiso__141->SetBinContent(3,86.41153);
   hh_l_muiso__141->SetBinContent(4,37.89246);
   hh_l_muiso__141->SetBinError(1,5.553158);
   hh_l_muiso__141->SetBinError(2,3.426921);
   hh_l_muiso__141->SetBinError(3,2.947666);
   hh_l_muiso__141->SetBinError(4,1.851899);
   hh_l_muiso__141->SetEntries(5949);
   hh_l_muiso__141->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__141->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis115[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__142 = new TH1D("hh_l_muiso__142","",10, xAxis115);
   hh_l_muiso__142->SetBinContent(1,139602);
   hh_l_muiso__142->SetBinContent(2,49708.47);
   hh_l_muiso__142->SetBinContent(3,28338.5);
   hh_l_muiso__142->SetBinContent(4,8941.489);
   hh_l_muiso__142->SetBinError(1,837.406);
   hh_l_muiso__142->SetBinError(2,500.59);
   hh_l_muiso__142->SetBinError(3,379.4069);
   hh_l_muiso__142->SetBinError(4,212.1396);
   hh_l_muiso__142->SetMaximum(217815);
   hh_l_muiso__142->SetEntries(103879);
   hh_l_muiso__142->SetStats(0);
   hh_l_muiso__142->SetFillColor(1);
   hh_l_muiso__142->SetFillStyle(3013);
   hh_l_muiso__142->GetXaxis()->SetTitle("#mu_{iso}");
   hh_l_muiso__142->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Wjets CR,  isolation","h");
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
   Double_t xAxis116[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__143 = new TH1D("hmc__143","",10, xAxis116);
   hmc__143->SetBinContent(0,1);
   hmc__143->SetBinContent(1,1);
   hmc__143->SetBinContent(2,1);
   hmc__143->SetBinContent(3,1);
   hmc__143->SetBinContent(4,1);
   hmc__143->SetBinContent(5,1);
   hmc__143->SetBinContent(6,1);
   hmc__143->SetBinContent(7,1);
   hmc__143->SetBinContent(8,1);
   hmc__143->SetBinContent(9,1);
   hmc__143->SetBinContent(10,1);
   hmc__143->SetBinError(1,0.005998526);
   hmc__143->SetBinError(2,0.01007052);
   hmc__143->SetBinError(3,0.01338839);
   hmc__143->SetBinError(4,0.02372531);
   hmc__143->SetMinimum(0.5);
   hmc__143->SetMaximum(1.5);
   hmc__143->SetEntries(103890);
   hmc__143->SetStats(0);
   hmc__143->SetFillColor(1);
   hmc__143->SetFillStyle(3013);
   hmc__143->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__143->GetXaxis()->SetLabelSize(0.12);
   hmc__143->GetXaxis()->SetTitleSize(0.12);
   hmc__143->GetYaxis()->SetTitle("data/MC");
   hmc__143->GetYaxis()->CenterTitle(true);
   hmc__143->GetYaxis()->SetNdivisions(306);
   hmc__143->GetYaxis()->SetLabelSize(0.12);
   hmc__143->GetYaxis()->SetTitleSize(0.12);
   hmc__143->GetYaxis()->SetTitleOffset(0.5);
   hmc__143->Draw("e2");
   Double_t xAxis117[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__144 = new TH1D("hdata__144","",10, xAxis117);
   hdata__144->SetBinContent(1,1.200198);
   hdata__144->SetBinContent(2,1.096352);
   hdata__144->SetBinContent(3,1.141063);
   hdata__144->SetBinContent(4,1.236148);
   hdata__144->SetBinError(1,0.002932113);
   hdata__144->SetBinError(2,0.004696344);
   hdata__144->SetBinError(3,0.006345508);
   hdata__144->SetBinError(4,0.01175791);
   hdata__144->SetEntries(265448);
   hdata__144->SetStats(0);
   hdata__144->SetLineWidth(3);
   hdata__144->SetMarkerStyle(8);
   hdata__144->SetMarkerSize(1.3);
   hdata__144->GetYaxis()->SetTitle("data/MC");
   hdata__144->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
