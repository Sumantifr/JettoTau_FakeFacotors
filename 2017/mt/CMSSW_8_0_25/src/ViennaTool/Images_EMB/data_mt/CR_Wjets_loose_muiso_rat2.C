void CR_Wjets_loose_muiso_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:30 2020) by ROOT version6.06/01
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
   c1_1->Range(-0.1076923,-8941.731,0.7897436,185443.7);
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
   hh_l_muiso__109->SetBinContent(1,161401);
   hh_l_muiso__109->SetBinContent(2,50551);
   hh_l_muiso__109->SetBinContent(3,29863);
   hh_l_muiso__109->SetBinContent(4,10440);
   hh_l_muiso__109->SetBinError(1,401.7474);
   hh_l_muiso__109->SetBinError(2,224.8355);
   hh_l_muiso__109->SetBinError(3,172.8091);
   hh_l_muiso__109->SetBinError(4,102.1763);
   hh_l_muiso__109->SetEntries(252255);
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
   w->SetMaximum(209821.3);
   Double_t xAxis80[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_10 = new TH1F("w_stack_10","",10, xAxis80);
   w_stack_10->SetMinimum(0);
   w_stack_10->SetMaximum(220312.4);
   w_stack_10->SetDirectory(0);
   w_stack_10->SetStats(0);
   w->SetHistogram(w_stack_10);
   
   Double_t xAxis81[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__110 = new TH1D("hh_l_muiso__110","",10, xAxis81);
   hh_l_muiso__110->SetBinContent(1,107027.2);
   hh_l_muiso__110->SetBinContent(2,37611.86);
   hh_l_muiso__110->SetBinContent(3,21444.88);
   hh_l_muiso__110->SetBinContent(4,6363.64);
   hh_l_muiso__110->SetBinError(1,727.9176);
   hh_l_muiso__110->SetBinError(2,443.7006);
   hh_l_muiso__110->SetBinError(3,334.7363);
   hh_l_muiso__110->SetBinError(4,175.3342);
   hh_l_muiso__110->SetEntries(59043);
   hh_l_muiso__110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__110->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis82[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__111 = new TH1D("hh_l_muiso__111","",10, xAxis82);
   hh_l_muiso__111->SetBinContent(1,3299.638);
   hh_l_muiso__111->SetBinContent(2,1347.922);
   hh_l_muiso__111->SetBinContent(3,805.107);
   hh_l_muiso__111->SetBinContent(4,279.9563);
   hh_l_muiso__111->SetBinError(1,35.53634);
   hh_l_muiso__111->SetBinError(2,22.7173);
   hh_l_muiso__111->SetBinError(3,17.56895);
   hh_l_muiso__111->SetBinError(4,10.31014);
   hh_l_muiso__111->SetEntries(17729);
   hh_l_muiso__111->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__111->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis83[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__112 = new TH1D("hh_l_muiso__112","",10, xAxis83);
   hh_l_muiso__112->SetBinContent(1,244.2415);
   hh_l_muiso__112->SetBinContent(2,94.13966);
   hh_l_muiso__112->SetBinContent(3,53.79795);
   hh_l_muiso__112->SetBinContent(4,18.02811);
   hh_l_muiso__112->SetBinError(1,9.984281);
   hh_l_muiso__112->SetBinError(2,6.328079);
   hh_l_muiso__112->SetBinError(3,4.689985);
   hh_l_muiso__112->SetBinError(4,2.737443);
   hh_l_muiso__112->SetEntries(1215);
   hh_l_muiso__112->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__112->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis84[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__113 = new TH1D("hh_l_muiso__113","",10, xAxis84);
   hh_l_muiso__113->SetBinContent(1,3242.518);
   hh_l_muiso__113->SetBinContent(2,1007.635);
   hh_l_muiso__113->SetBinContent(3,528.4477);
   hh_l_muiso__113->SetBinContent(4,131.8055);
   hh_l_muiso__113->SetBinError(1,131.5841);
   hh_l_muiso__113->SetBinError(2,64.53566);
   hh_l_muiso__113->SetBinError(3,63.09889);
   hh_l_muiso__113->SetBinError(4,29.13015);
   hh_l_muiso__113->SetEntries(6237);
   hh_l_muiso__113->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__113->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis85[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__114 = new TH1D("hh_l_muiso__114","",10, xAxis85);
   hh_l_muiso__114->SetBinContent(1,14.44034);
   hh_l_muiso__114->SetBinContent(2,4.415449);
   hh_l_muiso__114->SetBinContent(3,23.50768);
   hh_l_muiso__114->SetBinContent(4,0.03470756);
   hh_l_muiso__114->SetBinError(1,4.634399);
   hh_l_muiso__114->SetBinError(2,1.840342);
   hh_l_muiso__114->SetBinError(3,11.60651);
   hh_l_muiso__114->SetBinError(4,0.03470756);
   hh_l_muiso__114->SetEntries(45);
   hh_l_muiso__114->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__114->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis86[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__115 = new TH1D("hh_l_muiso__115","",10, xAxis86);
   hh_l_muiso__115->SetBinContent(1,2336.749);
   hh_l_muiso__115->SetBinContent(2,795.4843);
   hh_l_muiso__115->SetBinContent(3,455.0298);
   hh_l_muiso__115->SetBinContent(4,163.0378);
   hh_l_muiso__115->SetBinError(1,39.22057);
   hh_l_muiso__115->SetBinError(2,22.9406);
   hh_l_muiso__115->SetBinError(3,17.29511);
   hh_l_muiso__115->SetBinError(4,10.38311);
   hh_l_muiso__115->SetEntries(9406);
   hh_l_muiso__115->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__115->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis87[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__116 = new TH1D("hh_l_muiso__116","",10, xAxis87);
   hh_l_muiso__116->SetBinContent(1,146.9305);
   hh_l_muiso__116->SetBinContent(2,50.03187);
   hh_l_muiso__116->SetBinContent(3,23.04798);
   hh_l_muiso__116->SetBinContent(4,7.099438);
   hh_l_muiso__116->SetBinError(1,8.573173);
   hh_l_muiso__116->SetBinError(2,5.110347);
   hh_l_muiso__116->SetBinError(3,3.183048);
   hh_l_muiso__116->SetBinError(4,1.848466);
   hh_l_muiso__116->SetEntries(729);
   hh_l_muiso__116->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__116->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis88[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__117 = new TH1D("hh_l_muiso__117","",10, xAxis88);
   hh_l_muiso__117->SetBinContent(1,207.0132);
   hh_l_muiso__117->SetBinContent(2,84.5155);
   hh_l_muiso__117->SetBinContent(3,61.5399);
   hh_l_muiso__117->SetBinContent(4,26.91353);
   hh_l_muiso__117->SetBinError(1,4.779189);
   hh_l_muiso__117->SetBinError(2,2.953631);
   hh_l_muiso__117->SetBinError(3,2.507951);
   hh_l_muiso__117->SetBinError(4,1.589754);
   hh_l_muiso__117->SetEntries(4289);
   hh_l_muiso__117->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__117->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis89[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__118 = new TH1D("hh_l_muiso__118","",10, xAxis89);
   hh_l_muiso__118->SetBinContent(1,116518.7);
   hh_l_muiso__118->SetBinContent(2,40996.01);
   hh_l_muiso__118->SetBinContent(3,23395.36);
   hh_l_muiso__118->SetBinContent(4,6990.516);
   hh_l_muiso__118->SetBinError(1,741.7527);
   hh_l_muiso__118->SetBinError(2,449.6173);
   hh_l_muiso__118->SetBinError(3,341.7759);
   hh_l_muiso__118->SetBinError(4,178.3766);
   hh_l_muiso__118->SetMaximum(209821.3);
   hh_l_muiso__118->SetEntries(98693);
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
   hmc__119->SetBinError(1,0.006365951);
   hmc__119->SetBinError(2,0.01096734);
   hmc__119->SetBinError(3,0.01460871);
   hmc__119->SetBinError(4,0.02551694);
   hmc__119->SetMinimum(0.5);
   hmc__119->SetMaximum(1.5);
   hmc__119->SetEntries(98704);
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
   hdata__120->SetBinContent(1,1.385193);
   hdata__120->SetBinContent(2,1.233071);
   hdata__120->SetBinContent(3,1.27645);
   hdata__120->SetBinContent(4,1.493452);
   hdata__120->SetBinError(1,0.003447921);
   hdata__120->SetBinError(2,0.005484326);
   hdata__120->SetBinError(3,0.007386471);
   hdata__120->SetBinError(4,0.01461642);
   hdata__120->SetEntries(252266);
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
