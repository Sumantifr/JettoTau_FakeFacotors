void CR_Wjets_tight_muiso()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Thu Dec  3 17:52:26 2020) by ROOT version6.06/01
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
   c1_1->Range(-0.1076923,-2976.561,0.7897436,61731.29);
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
   hh_t_muiso__121->SetBinContent(1,53630);
   hh_t_muiso__121->SetBinContent(2,16491);
   hh_t_muiso__121->SetBinContent(3,9720);
   hh_t_muiso__121->SetBinContent(4,3340);
   hh_t_muiso__121->SetBinError(1,231.5815);
   hh_t_muiso__121->SetBinError(2,128.4173);
   hh_t_muiso__121->SetBinError(3,98.59006);
   hh_t_muiso__121->SetBinError(4,57.79273);
   hh_t_muiso__121->SetEntries(83181);
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
   w->SetMaximum(69719);
   Double_t xAxis93[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_11 = new TH1F("w_stack_11","",10, xAxis93);
   w_stack_11->SetMinimum(0);
   w_stack_11->SetMaximum(73204.95);
   w_stack_11->SetDirectory(0);
   w_stack_11->SetStats(0);
   w->SetHistogram(w_stack_11);
   
   Double_t xAxis94[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__122 = new TH1D("hh_t_muiso__122","",10, xAxis94);
   hh_t_muiso__122->SetBinContent(1,43966.47);
   hh_t_muiso__122->SetBinContent(2,14377.98);
   hh_t_muiso__122->SetBinContent(3,8069.447);
   hh_t_muiso__122->SetBinContent(4,2699.289);
   hh_t_muiso__122->SetBinError(1,484.0519);
   hh_t_muiso__122->SetBinError(2,273.479);
   hh_t_muiso__122->SetBinError(3,206.3116);
   hh_t_muiso__122->SetBinError(4,111.8093);
   hh_t_muiso__122->SetEntries(21627);
   hh_t_muiso__122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_muiso__122->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis95[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__123 = new TH1D("hh_t_muiso__123","",10, xAxis95);
   hh_t_muiso__123->SetBinContent(1,642.7269);
   hh_t_muiso__123->SetBinContent(2,214.8141);
   hh_t_muiso__123->SetBinContent(3,140.2257);
   hh_t_muiso__123->SetBinContent(4,43.72479);
   hh_t_muiso__123->SetBinError(1,15.65873);
   hh_t_muiso__123->SetBinError(2,9.056273);
   hh_t_muiso__123->SetBinError(3,7.245051);
   hh_t_muiso__123->SetBinError(4,4.107718);
   hh_t_muiso__123->SetEntries(3277);
   hh_t_muiso__123->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_muiso__123->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis96[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__124 = new TH1D("hh_t_muiso__124","",10, xAxis96);
   hh_t_muiso__124->SetBinContent(1,2336.305);
   hh_t_muiso__124->SetBinContent(2,832.164);
   hh_t_muiso__124->SetBinContent(3,484.5379);
   hh_t_muiso__124->SetBinContent(4,170.0421);
   hh_t_muiso__124->SetBinError(1,30.26867);
   hh_t_muiso__124->SetBinError(2,18.08675);
   hh_t_muiso__124->SetBinError(3,13.77478);
   hh_t_muiso__124->SetBinError(4,8.108696);
   hh_t_muiso__124->SetEntries(11313);
   hh_t_muiso__124->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_muiso__124->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis97[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__125 = new TH1D("hh_t_muiso__125","",10, xAxis97);
   hh_t_muiso__125->SetBinContent(1,995.618);
   hh_t_muiso__125->SetBinContent(2,282.612);
   hh_t_muiso__125->SetBinContent(3,204.2405);
   hh_t_muiso__125->SetBinContent(4,46.97407);
   hh_t_muiso__125->SetBinError(1,74.76199);
   hh_t_muiso__125->SetBinError(2,29.64929);
   hh_t_muiso__125->SetBinError(3,42.60637);
   hh_t_muiso__125->SetBinError(4,18.91576);
   hh_t_muiso__125->SetEntries(1821);
   hh_t_muiso__125->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_muiso__125->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis98[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__126 = new TH1D("hh_t_muiso__126","",10, xAxis98);
   hh_t_muiso__126->SetBinContent(1,245.7604);
   hh_t_muiso__126->SetBinContent(2,57.44605);
   hh_t_muiso__126->SetBinContent(3,44.5147);
   hh_t_muiso__126->SetBinContent(4,10.29586);
   hh_t_muiso__126->SetBinError(1,23.38796);
   hh_t_muiso__126->SetBinError(2,12.17777);
   hh_t_muiso__126->SetBinError(3,10.0528);
   hh_t_muiso__126->SetBinError(4,3.968063);
   hh_t_muiso__126->SetEntries(387);
   hh_t_muiso__126->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_muiso__126->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis99[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__127 = new TH1D("hh_t_muiso__127","",10, xAxis99);
   hh_t_muiso__127->SetBinContent(1,700.2881);
   hh_t_muiso__127->SetBinContent(2,230.5967);
   hh_t_muiso__127->SetBinContent(3,143.5);
   hh_t_muiso__127->SetBinContent(4,38.5973);
   hh_t_muiso__127->SetBinError(1,21.23325);
   hh_t_muiso__127->SetBinError(2,11.97692);
   hh_t_muiso__127->SetBinError(3,9.709777);
   hh_t_muiso__127->SetBinError(4,4.894679);
   hh_t_muiso__127->SetEntries(2677);
   hh_t_muiso__127->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_muiso__127->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis100[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__128 = new TH1D("hh_t_muiso__128","",10, xAxis100);
   hh_t_muiso__128->SetBinContent(1,2251.083);
   hh_t_muiso__128->SetBinContent(2,695.2116);
   hh_t_muiso__128->SetBinContent(3,325.2641);
   hh_t_muiso__128->SetBinContent(4,93.77931);
   hh_t_muiso__128->SetBinError(1,33.92007);
   hh_t_muiso__128->SetBinError(2,18.86204);
   hh_t_muiso__128->SetBinError(3,12.60393);
   hh_t_muiso__128->SetBinError(4,6.55995);
   hh_t_muiso__128->SetEntries(9851);
   hh_t_muiso__128->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_muiso__128->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis101[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__129 = new TH1D("hh_t_muiso__129","",10, xAxis101);
   hh_t_muiso__129->SetBinContent(1,2351.429);
   hh_t_muiso__129->SetBinContent(2,818.5404);
   hh_t_muiso__129->SetBinContent(3,566.9896);
   hh_t_muiso__129->SetBinContent(4,246.4124);
   hh_t_muiso__129->SetBinError(1,16.63203);
   hh_t_muiso__129->SetBinError(2,9.597271);
   hh_t_muiso__129->SetBinError(3,7.658706);
   hh_t_muiso__129->SetBinError(4,4.91986);
   hh_t_muiso__129->SetEntries(42436);
   hh_t_muiso__129->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_muiso__129->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   w->Draw("same");
   Double_t xAxis102[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__130 = new TH1D("hh_t_muiso__130","",10, xAxis102);
   hh_t_muiso__130->SetBinContent(1,53489.68);
   hh_t_muiso__130->SetBinContent(2,17509.37);
   hh_t_muiso__130->SetBinContent(3,9978.719);
   hh_t_muiso__130->SetBinContent(4,3349.115);
   hh_t_muiso__130->SetBinError(1,493.4389);
   hh_t_muiso__130->SetBinError(2,277.1617);
   hh_t_muiso__130->SetBinError(3,212.2142);
   hh_t_muiso__130->SetBinError(4,114.2309);
   hh_t_muiso__130->SetMaximum(69719);
   hh_t_muiso__130->SetEntries(93389);
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
   hmc__131->SetBinError(1,0.009224937);
   hmc__131->SetBinError(2,0.01582934);
   hmc__131->SetBinError(3,0.02126668);
   hmc__131->SetBinError(4,0.03410778);
   hmc__131->SetMinimum(0.5);
   hmc__131->SetMaximum(1.5);
   hmc__131->SetEntries(93400);
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
   hdata__132->SetBinContent(1,1.002623);
   hdata__132->SetBinContent(2,0.9418387);
   hdata__132->SetBinContent(3,0.9740729);
   hdata__132->SetBinContent(4,0.9972785);
   hdata__132->SetBinError(1,0.004329462);
   hdata__132->SetBinError(2,0.007334205);
   hdata__132->SetBinError(3,0.009880031);
   hdata__132->SetBinError(4,0.01725612);
   hdata__132->SetEntries(83192);
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
