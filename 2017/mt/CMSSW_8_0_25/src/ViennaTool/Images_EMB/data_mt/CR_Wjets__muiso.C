void CR_Wjets__muiso()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Thu Dec  3 17:52:27 2020) by ROOT version6.06/01
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
   c1_1->Range(-0.1076923,-21759.65,0.7897436,451276.2);
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
   hh_l_muiso__133->SetBinContent(1,393119);
   hh_l_muiso__133->SetBinContent(2,124910);
   hh_l_muiso__133->SetBinContent(3,74184);
   hh_l_muiso__133->SetBinContent(4,25769);
   hh_l_muiso__133->SetBinError(1,626.992);
   hh_l_muiso__133->SetBinError(2,353.4261);
   hh_l_muiso__133->SetBinError(3,272.3674);
   hh_l_muiso__133->SetBinError(4,160.5273);
   hh_l_muiso__133->SetEntries(617982);
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
   w->SetMaximum(511054.7);
   Double_t xAxis106[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_12 = new TH1F("w_stack_12","",10, xAxis106);
   w_stack_12->SetMinimum(0);
   w_stack_12->SetMaximum(536607.4);
   w_stack_12->SetDirectory(0);
   w_stack_12->SetStats(0);
   w->SetHistogram(w_stack_12);
   
   Double_t xAxis107[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__134 = new TH1D("hh_l_muiso__134","",10, xAxis107);
   hh_l_muiso__134->SetBinContent(1,322944.8);
   hh_l_muiso__134->SetBinContent(2,114775.7);
   hh_l_muiso__134->SetBinContent(3,64403.99);
   hh_l_muiso__134->SetBinContent(4,19749.35);
   hh_l_muiso__134->SetBinError(1,1288.624);
   hh_l_muiso__134->SetBinError(2,784.1599);
   hh_l_muiso__134->SetBinError(3,588.7273);
   hh_l_muiso__134->SetBinError(4,327.743);
   hh_l_muiso__134->SetEntries(170728);
   hh_l_muiso__134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__134->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis108[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__135 = new TH1D("hh_l_muiso__135","",10, xAxis108);
   hh_l_muiso__135->SetBinContent(1,7513.269);
   hh_l_muiso__135->SetBinContent(2,2979.864);
   hh_l_muiso__135->SetBinContent(3,1770.69);
   hh_l_muiso__135->SetBinContent(4,634.2028);
   hh_l_muiso__135->SetBinError(1,53.55506);
   hh_l_muiso__135->SetBinError(2,33.77803);
   hh_l_muiso__135->SetBinError(3,26.02682);
   hh_l_muiso__135->SetBinError(4,15.49539);
   hh_l_muiso__135->SetEntries(39805);
   hh_l_muiso__135->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__135->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis109[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__136 = new TH1D("hh_l_muiso__136","",10, xAxis109);
   hh_l_muiso__136->SetBinContent(1,848.6932);
   hh_l_muiso__136->SetBinContent(2,346.739);
   hh_l_muiso__136->SetBinContent(3,201.7641);
   hh_l_muiso__136->SetBinContent(4,75.22418);
   hh_l_muiso__136->SetBinError(1,18.55294);
   hh_l_muiso__136->SetBinError(2,11.94347);
   hh_l_muiso__136->SetBinError(3,9.089419);
   hh_l_muiso__136->SetBinError(4,5.525625);
   hh_l_muiso__136->SetEntries(4260);
   hh_l_muiso__136->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__136->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis110[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__137 = new TH1D("hh_l_muiso__137","",10, xAxis110);
   hh_l_muiso__137->SetBinContent(1,9082.646);
   hh_l_muiso__137->SetBinContent(2,2810.196);
   hh_l_muiso__137->SetBinContent(3,1589.379);
   hh_l_muiso__137->SetBinContent(4,406.3176);
   hh_l_muiso__137->SetBinError(1,230.5331);
   hh_l_muiso__137->SetBinError(2,122.4205);
   hh_l_muiso__137->SetBinError(3,109.4303);
   hh_l_muiso__137->SetBinError(4,48.59606);
   hh_l_muiso__137->SetEntries(16845);
   hh_l_muiso__137->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__137->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis111[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__138 = new TH1D("hh_l_muiso__138","",10, xAxis111);
   hh_l_muiso__138->SetBinContent(1,98.19486);
   hh_l_muiso__138->SetBinContent(2,26.30828);
   hh_l_muiso__138->SetBinContent(3,49.39882);
   hh_l_muiso__138->SetBinContent(4,12.97525);
   hh_l_muiso__138->SetBinError(1,13.46189);
   hh_l_muiso__138->SetBinError(2,5.504746);
   hh_l_muiso__138->SetBinError(3,13.84594);
   hh_l_muiso__138->SetBinError(4,6.653152);
   hh_l_muiso__138->SetEntries(204);
   hh_l_muiso__138->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__138->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis112[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__139 = new TH1D("hh_l_muiso__139","",10, xAxis112);
   hh_l_muiso__139->SetBinContent(1,6106.57);
   hh_l_muiso__139->SetBinContent(2,2056.313);
   hh_l_muiso__139->SetBinContent(3,1237.886);
   hh_l_muiso__139->SetBinContent(4,399.6082);
   hh_l_muiso__139->SetBinError(1,62.68494);
   hh_l_muiso__139->SetBinError(2,36.45871);
   hh_l_muiso__139->SetBinError(3,28.39959);
   hh_l_muiso__139->SetBinError(4,16.12406);
   hh_l_muiso__139->SetEntries(24212);
   hh_l_muiso__139->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__139->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis113[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__140 = new TH1D("hh_l_muiso__140","",10, xAxis113);
   hh_l_muiso__140->SetBinContent(1,655.7724);
   hh_l_muiso__140->SetBinContent(2,190.9735);
   hh_l_muiso__140->SetBinContent(3,119.0139);
   hh_l_muiso__140->SetBinContent(4,34.63691);
   hh_l_muiso__140->SetBinError(1,18.15994);
   hh_l_muiso__140->SetBinError(2,9.720676);
   hh_l_muiso__140->SetBinError(3,8.283128);
   hh_l_muiso__140->SetBinError(4,4.187402);
   hh_l_muiso__140->SetEntries(3032);
   hh_l_muiso__140->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__140->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis114[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__141 = new TH1D("hh_l_muiso__141","",10, xAxis114);
   hh_l_muiso__141->SetBinContent(1,685.5566);
   hh_l_muiso__141->SetBinContent(2,271.3371);
   hh_l_muiso__141->SetBinContent(3,202.0644);
   hh_l_muiso__141->SetBinContent(4,91.44164);
   hh_l_muiso__141->SetBinError(1,8.659839);
   hh_l_muiso__141->SetBinError(2,5.310626);
   hh_l_muiso__141->SetBinError(3,4.485714);
   hh_l_muiso__141->SetBinError(4,2.909945);
   hh_l_muiso__141->SetEntries(14250);
   hh_l_muiso__141->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__141->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis115[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__142 = new TH1D("hh_l_muiso__142","",10, xAxis115);
   hh_l_muiso__142->SetBinContent(1,347935.5);
   hh_l_muiso__142->SetBinContent(2,123457.4);
   hh_l_muiso__142->SetBinContent(3,69574.18);
   hh_l_muiso__142->SetBinContent(4,21403.76);
   hh_l_muiso__142->SetBinError(1,1312.031);
   hh_l_muiso__142->SetBinError(2,795.3989);
   hh_l_muiso__142->SetBinError(3,600.3514);
   hh_l_muiso__142->SetBinError(4,332.2318);
   hh_l_muiso__142->SetMaximum(511054.7);
   hh_l_muiso__142->SetEntries(273336);
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
   hmc__143->SetBinError(1,0.003770903);
   hmc__143->SetBinError(2,0.006442697);
   hmc__143->SetBinError(3,0.008628939);
   hmc__143->SetBinError(4,0.01552212);
   hmc__143->SetMinimum(0.5);
   hmc__143->SetMaximum(1.5);
   hmc__143->SetEntries(273347);
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
   hdata__144->SetBinContent(1,1.129862);
   hdata__144->SetBinContent(2,1.011766);
   hdata__144->SetBinContent(3,1.066258);
   hdata__144->SetBinContent(4,1.203947);
   hdata__144->SetBinError(1,0.001802035);
   hdata__144->SetBinError(2,0.002862736);
   hdata__144->SetBinError(3,0.003914777);
   hdata__144->SetBinError(4,0.007499957);
   hdata__144->SetEntries(617993);
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
