void CR_Wjets_tight_muiso_rat1()
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
   c1_1->Range(-0.1076923,-1337.039,0.7897436,27729.03);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis92[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__121 = new TH1D("hh_t_muiso__121","",10, xAxis92);
   hh_t_muiso__121->SetBinContent(1,24039);
   hh_t_muiso__121->SetBinContent(2,7470);
   hh_t_muiso__121->SetBinContent(3,4510);
   hh_t_muiso__121->SetBinContent(4,1496);
   hh_t_muiso__121->SetBinError(1,155.0452);
   hh_t_muiso__121->SetBinError(2,86.42916);
   hh_t_muiso__121->SetBinError(3,67.15653);
   hh_t_muiso__121->SetBinError(4,38.67816);
   hh_t_muiso__121->SetEntries(37515);
   hh_t_muiso__121->SetStats(0);
   hh_t_muiso__121->SetLineWidth(3);
   hh_t_muiso__121->SetMarkerStyle(8);
   hh_t_muiso__121->SetMarkerSize(1.3);
   hh_t_muiso__121->GetXaxis()->SetLabelSize(0);
   hh_t_muiso__121->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_t_muiso__121->GetYaxis()->SetLabelSize(0.064);
   hh_t_muiso__121->GetYaxis()->SetTitleSize(0.064);
   hh_t_muiso__121->GetYaxis()->SetTitleOffset(0.91);
   hh_t_muiso__121->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(31250.7);
   Double_t xAxis93[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_11 = new TH1F("w_stack_11","",10, xAxis93);
   w_stack_11->SetMinimum(0);
   w_stack_11->SetMaximum(32813.24);
   w_stack_11->SetDirectory(0);
   w_stack_11->SetStats(0);
   w->SetHistogram(w_stack_11);
   
   Double_t xAxis94[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__122 = new TH1D("hh_t_muiso__122","",10, xAxis94);
   hh_t_muiso__122->SetBinContent(1,16597.59);
   hh_t_muiso__122->SetBinContent(2,5609.549);
   hh_t_muiso__122->SetBinContent(3,3057.931);
   hh_t_muiso__122->SetBinContent(4,1018.159);
   hh_t_muiso__122->SetBinError(1,301.5493);
   hh_t_muiso__122->SetBinError(2,164.0248);
   hh_t_muiso__122->SetBinError(3,128.4589);
   hh_t_muiso__122->SetBinError(4,69.28204);
   hh_t_muiso__122->SetEntries(8055);
   hh_t_muiso__122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_muiso__122->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis95[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__123 = new TH1D("hh_t_muiso__123","",10, xAxis95);
   hh_t_muiso__123->SetBinContent(1,248.2237);
   hh_t_muiso__123->SetBinContent(2,83.27881);
   hh_t_muiso__123->SetBinContent(3,54.42126);
   hh_t_muiso__123->SetBinContent(4,12.88544);
   hh_t_muiso__123->SetBinError(1,9.784898);
   hh_t_muiso__123->SetBinError(2,5.690315);
   hh_t_muiso__123->SetBinError(3,4.571517);
   hh_t_muiso__123->SetBinError(4,2.22224);
   hh_t_muiso__123->SetEntries(1201);
   hh_t_muiso__123->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_muiso__123->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis96[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__124 = new TH1D("hh_t_muiso__124","",10, xAxis96);
   hh_t_muiso__124->SetBinContent(1,684.2745);
   hh_t_muiso__124->SetBinContent(2,257.2445);
   hh_t_muiso__124->SetBinContent(3,140.1242);
   hh_t_muiso__124->SetBinContent(4,44.62188);
   hh_t_muiso__124->SetBinError(1,16.38294);
   hh_t_muiso__124->SetBinError(2,10.11718);
   hh_t_muiso__124->SetBinError(3,7.425112);
   hh_t_muiso__124->SetBinError(4,4.110037);
   hh_t_muiso__124->SetEntries(3265);
   hh_t_muiso__124->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_muiso__124->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis97[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__125 = new TH1D("hh_t_muiso__125","",10, xAxis97);
   hh_t_muiso__125->SetBinContent(1,301.3771);
   hh_t_muiso__125->SetBinContent(2,88.55644);
   hh_t_muiso__125->SetBinContent(3,67.38088);
   hh_t_muiso__125->SetBinContent(4,10.9524);
   hh_t_muiso__125->SetBinError(1,24.77115);
   hh_t_muiso__125->SetBinError(2,9.675921);
   hh_t_muiso__125->SetBinError(3,24.2071);
   hh_t_muiso__125->SetBinError(4,2.964052);
   hh_t_muiso__125->SetEntries(637);
   hh_t_muiso__125->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_muiso__125->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis98[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__126 = new TH1D("hh_t_muiso__126","",10, xAxis98);
   hh_t_muiso__126->SetBinContent(1,57.93983);
   hh_t_muiso__126->SetBinContent(2,5.471707);
   hh_t_muiso__126->SetBinContent(3,7.208132);
   hh_t_muiso__126->SetBinContent(4,0.4952766);
   hh_t_muiso__126->SetBinError(1,11.2463);
   hh_t_muiso__126->SetBinError(2,3.065306);
   hh_t_muiso__126->SetBinError(3,3.457896);
   hh_t_muiso__126->SetBinError(4,0.4446949);
   hh_t_muiso__126->SetEntries(83);
   hh_t_muiso__126->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_muiso__126->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis99[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__127 = new TH1D("hh_t_muiso__127","",10, xAxis99);
   hh_t_muiso__127->SetBinContent(1,269.5656);
   hh_t_muiso__127->SetBinContent(2,99.03002);
   hh_t_muiso__127->SetBinContent(3,56.11326);
   hh_t_muiso__127->SetBinContent(4,16.38335);
   hh_t_muiso__127->SetBinError(1,13.37732);
   hh_t_muiso__127->SetBinError(2,7.961926);
   hh_t_muiso__127->SetBinError(3,5.96826);
   hh_t_muiso__127->SetBinError(4,3.192295);
   hh_t_muiso__127->SetEntries(1017);
   hh_t_muiso__127->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_muiso__127->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis100[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__128 = new TH1D("hh_t_muiso__128","",10, xAxis100);
   hh_t_muiso__128->SetBinContent(1,674.5627);
   hh_t_muiso__128->SetBinContent(2,210.401);
   hh_t_muiso__128->SetBinContent(3,92.68003);
   hh_t_muiso__128->SetBinContent(4,27.18159);
   hh_t_muiso__128->SetBinError(1,18.57322);
   hh_t_muiso__128->SetBinError(2,10.32325);
   hh_t_muiso__128->SetBinError(3,6.610779);
   hh_t_muiso__128->SetBinError(4,3.570435);
   hh_t_muiso__128->SetEntries(2908);
   hh_t_muiso__128->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_muiso__128->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis101[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__129 = new TH1D("hh_t_muiso__129","",10, xAxis101);
   hh_t_muiso__129->SetBinContent(1,949.3378);
   hh_t_muiso__129->SetBinContent(2,333.3692);
   hh_t_muiso__129->SetBinContent(3,233.4619);
   hh_t_muiso__129->SetBinContent(4,103.9857);
   hh_t_muiso__129->SetBinError(1,10.49245);
   hh_t_muiso__129->SetBinError(2,6.06383);
   hh_t_muiso__129->SetBinError(3,4.895549);
   hh_t_muiso__129->SetBinError(4,3.193578);
   hh_t_muiso__129->SetEntries(17382);
   hh_t_muiso__129->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_muiso__129->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   w->Draw("same");
   Double_t xAxis102[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__130 = new TH1D("hh_t_muiso__130","",10, xAxis102);
   hh_t_muiso__130->SetBinContent(1,19782.87);
   hh_t_muiso__130->SetBinContent(2,6686.9);
   hh_t_muiso__130->SetBinContent(3,3709.321);
   hh_t_muiso__130->SetBinContent(4,1234.665);
   hh_t_muiso__130->SetBinError(1,304.4179);
   hh_t_muiso__130->SetBinError(2,165.3742);
   hh_t_muiso__130->SetBinError(3,131.4494);
   hh_t_muiso__130->SetBinError(4,69.74204);
   hh_t_muiso__130->SetMaximum(31250.7);
   hh_t_muiso__130->SetEntries(34548);
   hh_t_muiso__130->SetStats(0);
   hh_t_muiso__130->SetFillColor(1);
   hh_t_muiso__130->SetFillStyle(3013);
   hh_t_muiso__130->GetXaxis()->SetTitle("#mu_{iso}");
   hh_t_muiso__130->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Wjets CR, tight isolation","h");
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
   Double_t xAxis103[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__131 = new TH1D("hmc__131","",10, xAxis103);
   hmc__131->SetBinContent(0,1);
   hmc__131->SetBinContent(1,1);
   hmc__131->SetBinContent(2,1);
   hmc__131->SetBinContent(3,1);
   hmc__131->SetBinContent(4,1);
   hmc__131->SetBinContent(5,1);
   hmc__131->SetBinContent(6,1);
   hmc__131->SetBinContent(7,1);
   hmc__131->SetBinContent(8,1);
   hmc__131->SetBinContent(9,1);
   hmc__131->SetBinContent(10,1);
   hmc__131->SetBinError(1,0.01538796);
   hmc__131->SetBinError(2,0.02473107);
   hmc__131->SetBinError(3,0.0354376);
   hmc__131->SetBinError(4,0.05648663);
   hmc__131->SetMinimum(0.5);
   hmc__131->SetMaximum(1.5);
   hmc__131->SetEntries(34559);
   hmc__131->SetStats(0);
   hmc__131->SetFillColor(1);
   hmc__131->SetFillStyle(3013);
   hmc__131->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__131->GetXaxis()->SetLabelSize(0.12);
   hmc__131->GetXaxis()->SetTitleSize(0.12);
   hmc__131->GetYaxis()->SetTitle("data/MC");
   hmc__131->GetYaxis()->CenterTitle(true);
   hmc__131->GetYaxis()->SetNdivisions(306);
   hmc__131->GetYaxis()->SetLabelSize(0.12);
   hmc__131->GetYaxis()->SetTitleSize(0.12);
   hmc__131->GetYaxis()->SetTitleOffset(0.5);
   hmc__131->Draw("e2");
   Double_t xAxis104[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__132 = new TH1D("hdata__132","",10, xAxis104);
   hdata__132->SetBinContent(1,1.215142);
   hdata__132->SetBinContent(2,1.11711);
   hdata__132->SetBinContent(3,1.215856);
   hdata__132->SetBinContent(4,1.211665);
   hdata__132->SetBinError(1,0.007837345);
   hdata__132->SetBinError(2,0.01292515);
   hdata__132->SetBinError(3,0.0181048);
   hdata__132->SetBinError(4,0.03132686);
   hdata__132->SetEntries(37526);
   hdata__132->SetStats(0);
   hdata__132->SetLineWidth(3);
   hdata__132->SetMarkerStyle(8);
   hdata__132->SetMarkerSize(1.3);
   hdata__132->GetYaxis()->SetTitle("data/MC");
   hdata__132->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
