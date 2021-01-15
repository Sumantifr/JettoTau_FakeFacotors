void CR_Wjets_loose_muiso_rat0()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:44:23 2020) by ROOT version6.06/01
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
   c1_1->Range(-0.1076923,-3560.125,0.7897436,73833.9);
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
   hh_l_muiso__109->SetBinContent(1,64168);
   hh_l_muiso__109->SetBinContent(2,19861);
   hh_l_muiso__109->SetBinContent(3,11985);
   hh_l_muiso__109->SetBinContent(4,4276);
   hh_l_muiso__109->SetBinError(1,253.314);
   hh_l_muiso__109->SetBinError(2,140.9291);
   hh_l_muiso__109->SetBinError(3,109.476);
   hh_l_muiso__109->SetBinError(4,65.39113);
   hh_l_muiso__109->SetEntries(100290);
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
   w->SetMaximum(119359.2);
   Double_t xAxis80[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_10 = new TH1F("w_stack_10","",10, xAxis80);
   w_stack_10->SetMinimum(0);
   w_stack_10->SetMaximum(125327.2);
   w_stack_10->SetDirectory(0);
   w_stack_10->SetStats(0);
   w->SetHistogram(w_stack_10);
   
   Double_t xAxis81[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__110 = new TH1D("hh_l_muiso__110","",10, xAxis81);
   hh_l_muiso__110->SetBinContent(1,85665.15);
   hh_l_muiso__110->SetBinContent(2,30660.95);
   hh_l_muiso__110->SetBinContent(3,16612.3);
   hh_l_muiso__110->SetBinContent(4,5108.845);
   hh_l_muiso__110->SetBinError(1,673.8871);
   hh_l_muiso__110->SetBinError(2,417.3411);
   hh_l_muiso__110->SetBinError(3,310.7348);
   hh_l_muiso__110->SetBinError(4,182.5856);
   hh_l_muiso__110->SetEntries(45053);
   hh_l_muiso__110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__110->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis82[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__111 = new TH1D("hh_l_muiso__111","",10, xAxis82);
   hh_l_muiso__111->SetBinContent(1,1553.829);
   hh_l_muiso__111->SetBinContent(2,590.49);
   hh_l_muiso__111->SetBinContent(3,356.0885);
   hh_l_muiso__111->SetBinContent(4,124.0661);
   hh_l_muiso__111->SetBinError(1,24.25325);
   hh_l_muiso__111->SetBinError(2,14.96874);
   hh_l_muiso__111->SetBinError(3,11.64149);
   hh_l_muiso__111->SetBinError(4,6.835272);
   hh_l_muiso__111->SetEntries(8549);
   hh_l_muiso__111->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__111->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis83[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__112 = new TH1D("hh_l_muiso__112","",10, xAxis83);
   hh_l_muiso__112->SetBinContent(1,303.0137);
   hh_l_muiso__112->SetBinContent(2,131.283);
   hh_l_muiso__112->SetBinContent(3,77.73261);
   hh_l_muiso__112->SetBinContent(4,30.93201);
   hh_l_muiso__112->SetBinError(1,11.11214);
   hh_l_muiso__112->SetBinError(2,7.290811);
   hh_l_muiso__112->SetBinError(3,5.652882);
   hh_l_muiso__112->SetBinError(4,3.535171);
   hh_l_muiso__112->SetEntries(1573);
   hh_l_muiso__112->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__112->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis84[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__113 = new TH1D("hh_l_muiso__113","",10, xAxis84);
   hh_l_muiso__113->SetBinContent(1,2348.073);
   hh_l_muiso__113->SetBinContent(2,739.4651);
   hh_l_muiso__113->SetBinContent(3,394.1452);
   hh_l_muiso__113->SetBinContent(4,79.35068);
   hh_l_muiso__113->SetBinError(1,118.3324);
   hh_l_muiso__113->SetBinError(2,71.46994);
   hh_l_muiso__113->SetBinError(3,51.81755);
   hh_l_muiso__113->SetBinError(4,9.496564);
   hh_l_muiso__113->SetEntries(4402);
   hh_l_muiso__113->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__113->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis85[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__114 = new TH1D("hh_l_muiso__114","",10, xAxis85);
   hh_l_muiso__114->SetBinContent(1,54.69326);
   hh_l_muiso__114->SetBinContent(2,10.4478);
   hh_l_muiso__114->SetBinContent(3,17.64389);
   hh_l_muiso__114->SetBinContent(4,3.386341);
   hh_l_muiso__114->SetBinError(1,9.955946);
   hh_l_muiso__114->SetBinError(2,3.083009);
   hh_l_muiso__114->SetBinError(3,6.534158);
   hh_l_muiso__114->SetBinError(4,2.888038);
   hh_l_muiso__114->SetEntries(101);
   hh_l_muiso__114->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__114->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis86[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__115 = new TH1D("hh_l_muiso__115","",10, xAxis86);
   hh_l_muiso__115->SetBinContent(1,1426.078);
   hh_l_muiso__115->SetBinContent(2,473.7439);
   hh_l_muiso__115->SetBinContent(3,280.4113);
   hh_l_muiso__115->SetBinContent(4,81.90118);
   hh_l_muiso__115->SetBinError(1,29.79793);
   hh_l_muiso__115->SetBinError(2,17.34141);
   hh_l_muiso__115->SetBinError(3,13.39582);
   hh_l_muiso__115->SetBinError(4,7.064798);
   hh_l_muiso__115->SetEntries(5823);
   hh_l_muiso__115->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__115->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis87[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__116 = new TH1D("hh_l_muiso__116","",10, xAxis87);
   hh_l_muiso__116->SetBinContent(1,269.1583);
   hh_l_muiso__116->SetBinContent(2,73.31729);
   hh_l_muiso__116->SetBinContent(3,47.90031);
   hh_l_muiso__116->SetBinContent(4,16.63601);
   hh_l_muiso__116->SetBinError(1,11.54771);
   hh_l_muiso__116->SetBinError(2,6.048064);
   hh_l_muiso__116->SetBinError(3,5.045102);
   hh_l_muiso__116->SetBinError(4,2.985055);
   hh_l_muiso__116->SetEntries(1251);
   hh_l_muiso__116->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__116->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis88[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__117 = new TH1D("hh_l_muiso__117","",10, xAxis88);
   hh_l_muiso__117->SetBinContent(1,194.7932);
   hh_l_muiso__117->SetBinContent(2,73.27102);
   hh_l_muiso__117->SetBinContent(3,54.113);
   hh_l_muiso__117->SetBinContent(4,26.63565);
   hh_l_muiso__117->SetBinError(1,4.616774);
   hh_l_muiso__117->SetBinError(2,2.781191);
   hh_l_muiso__117->SetBinError(3,2.267835);
   hh_l_muiso__117->SetBinError(4,1.584592);
   hh_l_muiso__117->SetEntries(4012);
   hh_l_muiso__117->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__117->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis89[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__118 = new TH1D("hh_l_muiso__118","",10, xAxis89);
   hh_l_muiso__118->SetBinContent(1,91814.79);
   hh_l_muiso__118->SetBinContent(2,32752.97);
   hh_l_muiso__118->SetBinContent(3,17840.33);
   hh_l_muiso__118->SetBinContent(4,5471.753);
   hh_l_muiso__118->SetBinError(1,685.5507);
   hh_l_muiso__118->SetBinError(2,424.1619);
   hh_l_muiso__118->SetBinError(3,315.692);
   hh_l_muiso__118->SetBinError(4,183.1845);
   hh_l_muiso__118->SetMaximum(119359.2);
   hh_l_muiso__118->SetEntries(70764);
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
   hmc__119->SetBinError(1,0.00746667);
   hmc__119->SetBinError(2,0.01295034);
   hmc__119->SetBinError(3,0.01769541);
   hmc__119->SetBinError(4,0.03347821);
   hmc__119->SetMinimum(0.5);
   hmc__119->SetMaximum(1.5);
   hmc__119->SetEntries(70775);
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
   hdata__120->SetBinContent(1,0.6988852);
   hdata__120->SetBinContent(2,0.6063878);
   hdata__120->SetBinContent(3,0.6717924);
   hdata__120->SetBinContent(4,0.781468);
   hdata__120->SetBinError(1,0.002758968);
   hdata__120->SetBinError(2,0.004302788);
   hdata__120->SetBinError(3,0.006136434);
   hdata__120->SetBinError(4,0.01195067);
   hdata__120->SetEntries(100301);
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
