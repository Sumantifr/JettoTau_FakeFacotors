void CR_Wjets__muiso_rat2()
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
   Double_t xAxis105[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__133 = new TH1D("hh_l_muiso__133","",10, xAxis105);
   hh_l_muiso__133->SetBinContent(1,161401);
   hh_l_muiso__133->SetBinContent(2,50551);
   hh_l_muiso__133->SetBinContent(3,29863);
   hh_l_muiso__133->SetBinContent(4,10440);
   hh_l_muiso__133->SetBinError(1,401.7474);
   hh_l_muiso__133->SetBinError(2,224.8355);
   hh_l_muiso__133->SetBinError(3,172.8091);
   hh_l_muiso__133->SetBinError(4,102.1763);
   hh_l_muiso__133->SetEntries(252255);
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
   w->SetMaximum(209821.3);
   Double_t xAxis106[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_12 = new TH1F("w_stack_12","",10, xAxis106);
   w_stack_12->SetMinimum(0);
   w_stack_12->SetMaximum(220312.4);
   w_stack_12->SetDirectory(0);
   w_stack_12->SetStats(0);
   w->SetHistogram(w_stack_12);
   
   Double_t xAxis107[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__134 = new TH1D("hh_l_muiso__134","",10, xAxis107);
   hh_l_muiso__134->SetBinContent(1,107027.2);
   hh_l_muiso__134->SetBinContent(2,37611.86);
   hh_l_muiso__134->SetBinContent(3,21444.88);
   hh_l_muiso__134->SetBinContent(4,6363.64);
   hh_l_muiso__134->SetBinError(1,727.9176);
   hh_l_muiso__134->SetBinError(2,443.7006);
   hh_l_muiso__134->SetBinError(3,334.7363);
   hh_l_muiso__134->SetBinError(4,175.3342);
   hh_l_muiso__134->SetEntries(59043);
   hh_l_muiso__134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__134->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis108[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__135 = new TH1D("hh_l_muiso__135","",10, xAxis108);
   hh_l_muiso__135->SetBinContent(1,3299.638);
   hh_l_muiso__135->SetBinContent(2,1347.922);
   hh_l_muiso__135->SetBinContent(3,805.107);
   hh_l_muiso__135->SetBinContent(4,279.9563);
   hh_l_muiso__135->SetBinError(1,35.53634);
   hh_l_muiso__135->SetBinError(2,22.7173);
   hh_l_muiso__135->SetBinError(3,17.56895);
   hh_l_muiso__135->SetBinError(4,10.31014);
   hh_l_muiso__135->SetEntries(17729);
   hh_l_muiso__135->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__135->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis109[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__136 = new TH1D("hh_l_muiso__136","",10, xAxis109);
   hh_l_muiso__136->SetBinContent(1,244.2415);
   hh_l_muiso__136->SetBinContent(2,94.13966);
   hh_l_muiso__136->SetBinContent(3,53.79795);
   hh_l_muiso__136->SetBinContent(4,18.02811);
   hh_l_muiso__136->SetBinError(1,9.984281);
   hh_l_muiso__136->SetBinError(2,6.328079);
   hh_l_muiso__136->SetBinError(3,4.689985);
   hh_l_muiso__136->SetBinError(4,2.737443);
   hh_l_muiso__136->SetEntries(1215);
   hh_l_muiso__136->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__136->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis110[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__137 = new TH1D("hh_l_muiso__137","",10, xAxis110);
   hh_l_muiso__137->SetBinContent(1,3242.518);
   hh_l_muiso__137->SetBinContent(2,1007.635);
   hh_l_muiso__137->SetBinContent(3,528.4477);
   hh_l_muiso__137->SetBinContent(4,131.8055);
   hh_l_muiso__137->SetBinError(1,131.5841);
   hh_l_muiso__137->SetBinError(2,64.53566);
   hh_l_muiso__137->SetBinError(3,63.09889);
   hh_l_muiso__137->SetBinError(4,29.13015);
   hh_l_muiso__137->SetEntries(6237);
   hh_l_muiso__137->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__137->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis111[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__138 = new TH1D("hh_l_muiso__138","",10, xAxis111);
   hh_l_muiso__138->SetBinContent(1,14.44034);
   hh_l_muiso__138->SetBinContent(2,4.415449);
   hh_l_muiso__138->SetBinContent(3,23.50768);
   hh_l_muiso__138->SetBinContent(4,0.03470756);
   hh_l_muiso__138->SetBinError(1,4.634399);
   hh_l_muiso__138->SetBinError(2,1.840342);
   hh_l_muiso__138->SetBinError(3,11.60651);
   hh_l_muiso__138->SetBinError(4,0.03470756);
   hh_l_muiso__138->SetEntries(45);
   hh_l_muiso__138->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__138->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis112[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__139 = new TH1D("hh_l_muiso__139","",10, xAxis112);
   hh_l_muiso__139->SetBinContent(1,2336.749);
   hh_l_muiso__139->SetBinContent(2,795.4843);
   hh_l_muiso__139->SetBinContent(3,455.0298);
   hh_l_muiso__139->SetBinContent(4,163.0378);
   hh_l_muiso__139->SetBinError(1,39.22057);
   hh_l_muiso__139->SetBinError(2,22.9406);
   hh_l_muiso__139->SetBinError(3,17.29511);
   hh_l_muiso__139->SetBinError(4,10.38311);
   hh_l_muiso__139->SetEntries(9406);
   hh_l_muiso__139->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__139->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis113[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__140 = new TH1D("hh_l_muiso__140","",10, xAxis113);
   hh_l_muiso__140->SetBinContent(1,146.9305);
   hh_l_muiso__140->SetBinContent(2,50.03187);
   hh_l_muiso__140->SetBinContent(3,23.04798);
   hh_l_muiso__140->SetBinContent(4,7.099438);
   hh_l_muiso__140->SetBinError(1,8.573173);
   hh_l_muiso__140->SetBinError(2,5.110347);
   hh_l_muiso__140->SetBinError(3,3.183048);
   hh_l_muiso__140->SetBinError(4,1.848466);
   hh_l_muiso__140->SetEntries(729);
   hh_l_muiso__140->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__140->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis114[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__141 = new TH1D("hh_l_muiso__141","",10, xAxis114);
   hh_l_muiso__141->SetBinContent(1,207.0132);
   hh_l_muiso__141->SetBinContent(2,84.5155);
   hh_l_muiso__141->SetBinContent(3,61.5399);
   hh_l_muiso__141->SetBinContent(4,26.91353);
   hh_l_muiso__141->SetBinError(1,4.779189);
   hh_l_muiso__141->SetBinError(2,2.953631);
   hh_l_muiso__141->SetBinError(3,2.507951);
   hh_l_muiso__141->SetBinError(4,1.589754);
   hh_l_muiso__141->SetEntries(4289);
   hh_l_muiso__141->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__141->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis115[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__142 = new TH1D("hh_l_muiso__142","",10, xAxis115);
   hh_l_muiso__142->SetBinContent(1,116518.7);
   hh_l_muiso__142->SetBinContent(2,40996.01);
   hh_l_muiso__142->SetBinContent(3,23395.36);
   hh_l_muiso__142->SetBinContent(4,6990.516);
   hh_l_muiso__142->SetBinError(1,741.7527);
   hh_l_muiso__142->SetBinError(2,449.6173);
   hh_l_muiso__142->SetBinError(3,341.7759);
   hh_l_muiso__142->SetBinError(4,178.3766);
   hh_l_muiso__142->SetMaximum(209821.3);
   hh_l_muiso__142->SetEntries(98693);
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
   hmc__143->SetBinError(1,0.006365951);
   hmc__143->SetBinError(2,0.01096734);
   hmc__143->SetBinError(3,0.01460871);
   hmc__143->SetBinError(4,0.02551694);
   hmc__143->SetMinimum(0.5);
   hmc__143->SetMaximum(1.5);
   hmc__143->SetEntries(98704);
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
   hdata__144->SetBinContent(1,1.385193);
   hdata__144->SetBinContent(2,1.233071);
   hdata__144->SetBinContent(3,1.27645);
   hdata__144->SetBinContent(4,1.493452);
   hdata__144->SetBinError(1,0.003447921);
   hdata__144->SetBinError(2,0.005484326);
   hdata__144->SetBinError(3,0.007386471);
   hdata__144->SetBinError(4,0.01461642);
   hdata__144->SetEntries(252266);
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
