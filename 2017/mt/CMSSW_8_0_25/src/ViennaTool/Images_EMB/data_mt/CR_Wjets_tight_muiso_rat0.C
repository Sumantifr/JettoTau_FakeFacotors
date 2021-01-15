void CR_Wjets_tight_muiso_rat0()
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
   c1_1->Range(-0.1076923,-1119.678,0.7897436,23221.15);
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
   hh_t_muiso__121->SetBinContent(1,20119);
   hh_t_muiso__121->SetBinContent(2,6073);
   hh_t_muiso__121->SetBinContent(3,3589);
   hh_t_muiso__121->SetBinContent(4,1220);
   hh_t_muiso__121->SetBinError(1,141.8415);
   hh_t_muiso__121->SetBinError(2,77.92946);
   hh_t_muiso__121->SetBinError(3,59.90826);
   hh_t_muiso__121->SetBinError(4,34.9285);
   hh_t_muiso__121->SetEntries(31001);
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
   w->SetMaximum(33360.29);
   Double_t xAxis93[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_11 = new TH1F("w_stack_11","",10, xAxis93);
   w_stack_11->SetMinimum(0);
   w_stack_11->SetMaximum(35028.31);
   w_stack_11->SetDirectory(0);
   w_stack_11->SetStats(0);
   w->SetHistogram(w_stack_11);
   
   Double_t xAxis94[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__122 = new TH1D("hh_t_muiso__122","",10, xAxis94);
   hh_t_muiso__122->SetBinContent(1,20556.4);
   hh_t_muiso__122->SetBinContent(2,6684.916);
   hh_t_muiso__122->SetBinContent(3,3875.399);
   hh_t_muiso__122->SetBinContent(4,1276.469);
   hh_t_muiso__122->SetBinError(1,326.9942);
   hh_t_muiso__122->SetBinError(2,186.4449);
   hh_t_muiso__122->SetBinError(3,144.3226);
   hh_t_muiso__122->SetBinError(4,76.9663);
   hh_t_muiso__122->SetEntries(10037);
   hh_t_muiso__122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_muiso__122->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis95[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__123 = new TH1D("hh_t_muiso__123","",10, xAxis95);
   hh_t_muiso__123->SetBinContent(1,267.4588);
   hh_t_muiso__123->SetBinContent(2,90.38711);
   hh_t_muiso__123->SetBinContent(3,60.53202);
   hh_t_muiso__123->SetBinContent(4,20.33667);
   hh_t_muiso__123->SetBinError(1,10.09252);
   hh_t_muiso__123->SetBinError(2,5.837591);
   hh_t_muiso__123->SetBinError(3,4.753166);
   hh_t_muiso__123->SetBinError(4,2.806331);
   hh_t_muiso__123->SetEntries(1386);
   hh_t_muiso__123->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_muiso__123->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis96[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__124 = new TH1D("hh_t_muiso__124","",10, xAxis96);
   hh_t_muiso__124->SetBinContent(1,1426.283);
   hh_t_muiso__124->SetBinContent(2,494.6958);
   hh_t_muiso__124->SetBinContent(3,298.9977);
   hh_t_muiso__124->SetBinContent(4,112.2687);
   hh_t_muiso__124->SetBinError(1,23.67248);
   hh_t_muiso__124->SetBinError(2,13.94117);
   hh_t_muiso__124->SetBinError(3,10.83924);
   hh_t_muiso__124->SetBinError(4,6.62188);
   hh_t_muiso__124->SetEntries(6848);
   hh_t_muiso__124->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_muiso__124->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis97[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__125 = new TH1D("hh_t_muiso__125","",10, xAxis97);
   hh_t_muiso__125->SetBinContent(1,448.8429);
   hh_t_muiso__125->SetBinContent(2,156.0408);
   hh_t_muiso__125->SetBinContent(3,119.0431);
   hh_t_muiso__125->SetBinContent(4,29.73668);
   hh_t_muiso__125->SetBinError(1,46.35048);
   hh_t_muiso__125->SetBinError(2,27.47115);
   hh_t_muiso__125->SetBinError(3,34.8852);
   hh_t_muiso__125->SetBinError(4,18.47178);
   hh_t_muiso__125->SetEntries(840);
   hh_t_muiso__125->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_muiso__125->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis98[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__126 = new TH1D("hh_t_muiso__126","",10, xAxis98);
   hh_t_muiso__126->SetBinContent(1,172.8721);
   hh_t_muiso__126->SetBinContent(2,51.42657);
   hh_t_muiso__126->SetBinContent(3,36.49805);
   hh_t_muiso__126->SetBinContent(4,7.375818);
   hh_t_muiso__126->SetBinError(1,19.95196);
   hh_t_muiso__126->SetBinError(2,11.77321);
   hh_t_muiso__126->SetBinError(3,9.428215);
   hh_t_muiso__126->SetBinError(4,3.139145);
   hh_t_muiso__126->SetEntries(266);
   hh_t_muiso__126->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_muiso__126->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis99[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__127 = new TH1D("hh_t_muiso__127","",10, xAxis99);
   hh_t_muiso__127->SetBinContent(1,313.4127);
   hh_t_muiso__127->SetBinContent(2,94.33454);
   hh_t_muiso__127->SetBinContent(3,57.19086);
   hh_t_muiso__127->SetBinContent(4,16.80428);
   hh_t_muiso__127->SetBinError(1,14.10589);
   hh_t_muiso__127->SetBinError(2,7.561172);
   hh_t_muiso__127->SetBinError(3,6.213247);
   hh_t_muiso__127->SetBinError(4,3.195696);
   hh_t_muiso__127->SetEntries(1169);
   hh_t_muiso__127->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_muiso__127->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis100[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__128 = new TH1D("hh_t_muiso__128","",10, xAxis100);
   hh_t_muiso__128->SetBinContent(1,1376.195);
   hh_t_muiso__128->SetBinContent(2,421.8775);
   hh_t_muiso__128->SetBinContent(3,195.438);
   hh_t_muiso__128->SetBinContent(4,55.23975);
   hh_t_muiso__128->SetBinError(1,26.50429);
   hh_t_muiso__128->SetBinError(2,14.71091);
   hh_t_muiso__128->SetBinError(3,9.806293);
   hh_t_muiso__128->SetBinError(4,4.976996);
   hh_t_muiso__128->SetEntries(5969);
   hh_t_muiso__128->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_muiso__128->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis101[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__129 = new TH1D("hh_t_muiso__129","",10, xAxis101);
   hh_t_muiso__129->SetBinContent(1,1100.299);
   hh_t_muiso__129->SetBinContent(2,387.1732);
   hh_t_muiso__129->SetBinContent(3,264.4168);
   hh_t_muiso__129->SetBinContent(4,113.4363);
   hh_t_muiso__129->SetBinError(1,11.51082);
   hh_t_muiso__129->SetBinError(2,6.679066);
   hh_t_muiso__129->SetBinError(3,5.265342);
   hh_t_muiso__129->SetBinError(4,3.352815);
   hh_t_muiso__129->SetEntries(19569);
   hh_t_muiso__129->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_muiso__129->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   w->Draw("same");
   Double_t xAxis102[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__130 = new TH1D("hh_t_muiso__130","",10, xAxis102);
   hh_t_muiso__130->SetBinContent(1,25661.76);
   hh_t_muiso__130->SetBinContent(2,8380.851);
   hh_t_muiso__130->SetBinContent(3,4907.515);
   hh_t_muiso__130->SetBinContent(4,1631.668);
   hh_t_muiso__130->SetBinError(1,333.4184);
   hh_t_muiso__130->SetBinError(2,190.2672);
   hh_t_muiso__130->SetBinError(3,149.7914);
   hh_t_muiso__130->SetBinError(4,79.82995);
   hh_t_muiso__130->SetMaximum(33360.29);
   hh_t_muiso__130->SetEntries(46084);
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
   hmc__131->SetBinError(1,0.01299281);
   hmc__131->SetBinError(2,0.02270261);
   hmc__131->SetBinError(3,0.03052285);
   hmc__131->SetBinError(4,0.04892537);
   hmc__131->SetMinimum(0.5);
   hmc__131->SetMaximum(1.5);
   hmc__131->SetEntries(46095);
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
   hdata__132->SetBinContent(1,0.7840069);
   hdata__132->SetBinContent(2,0.7246281);
   hdata__132->SetBinContent(3,0.7313273);
   hdata__132->SetBinContent(4,0.7477012);
   hdata__132->SetBinError(1,0.005527347);
   hdata__132->SetBinError(2,0.009298513);
   hdata__132->SetBinError(3,0.01220745);
   hdata__132->SetBinError(4,0.02140662);
   hdata__132->SetEntries(31012);
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
