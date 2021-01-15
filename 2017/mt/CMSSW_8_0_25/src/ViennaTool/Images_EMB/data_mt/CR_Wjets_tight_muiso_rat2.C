void CR_Wjets_tight_muiso_rat2()
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
   c1_1->Range(-0.1076923,-528.8311,0.7897436,10967.5);
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
   hh_t_muiso__121->SetBinContent(1,9472);
   hh_t_muiso__121->SetBinContent(2,2948);
   hh_t_muiso__121->SetBinContent(3,1621);
   hh_t_muiso__121->SetBinContent(4,624);
   hh_t_muiso__121->SetBinError(1,97.3242);
   hh_t_muiso__121->SetBinError(2,54.29549);
   hh_t_muiso__121->SetBinError(3,40.26164);
   hh_t_muiso__121->SetBinError(4,24.97999);
   hh_t_muiso__121->SetEntries(14665);
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
   w->SetMaximum(12313.6);
   Double_t xAxis93[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_11 = new TH1F("w_stack_11","",10, xAxis93);
   w_stack_11->SetMinimum(0);
   w_stack_11->SetMaximum(12929.28);
   w_stack_11->SetDirectory(0);
   w_stack_11->SetStats(0);
   w->SetHistogram(w_stack_11);
   
   Double_t xAxis94[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__122 = new TH1D("hh_t_muiso__122","",10, xAxis94);
   hh_t_muiso__122->SetBinContent(1,6812.484);
   hh_t_muiso__122->SetBinContent(2,2083.518);
   hh_t_muiso__122->SetBinContent(3,1136.116);
   hh_t_muiso__122->SetBinContent(4,404.6605);
   hh_t_muiso__122->SetBinError(1,190.9162);
   hh_t_muiso__122->SetBinError(2,114.5641);
   hh_t_muiso__122->SetBinError(3,72.3448);
   hh_t_muiso__122->SetBinError(4,42.1605);
   hh_t_muiso__122->SetEntries(3535);
   hh_t_muiso__122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_muiso__122->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis95[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__123 = new TH1D("hh_t_muiso__123","",10, xAxis95);
   hh_t_muiso__123->SetBinContent(1,127.0443);
   hh_t_muiso__123->SetBinContent(2,41.14817);
   hh_t_muiso__123->SetBinContent(3,25.27239);
   hh_t_muiso__123->SetBinContent(4,10.50268);
   hh_t_muiso__123->SetBinError(1,6.898739);
   hh_t_muiso__123->SetBinError(2,3.94448);
   hh_t_muiso__123->SetBinError(3,2.999902);
   hh_t_muiso__123->SetBinError(4,2.01482);
   hh_t_muiso__123->SetEntries(690);
   hh_t_muiso__123->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_muiso__123->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis96[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__124 = new TH1D("hh_t_muiso__124","",10, xAxis96);
   hh_t_muiso__124->SetBinContent(1,225.7476);
   hh_t_muiso__124->SetBinContent(2,80.22373);
   hh_t_muiso__124->SetBinContent(3,45.41608);
   hh_t_muiso__124->SetBinContent(4,13.15152);
   hh_t_muiso__124->SetBinError(1,9.349086);
   hh_t_muiso__124->SetBinError(2,5.51515);
   hh_t_muiso__124->SetBinError(3,4.13801);
   hh_t_muiso__124->SetBinError(4,2.238136);
   hh_t_muiso__124->SetEntries(1200);
   hh_t_muiso__124->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_muiso__124->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis97[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__125 = new TH1D("hh_t_muiso__125","",10, xAxis97);
   hh_t_muiso__125->SetBinContent(1,245.398);
   hh_t_muiso__125->SetBinContent(2,38.01479);
   hh_t_muiso__125->SetBinContent(3,17.81653);
   hh_t_muiso__125->SetBinContent(4,6.284999);
   hh_t_muiso__125->SetBinError(1,53.1731);
   hh_t_muiso__125->SetBinError(2,5.549112);
   hh_t_muiso__125->SetBinError(3,3.513151);
   hh_t_muiso__125->SetBinError(4,2.795324);
   hh_t_muiso__125->SetEntries(344);
   hh_t_muiso__125->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_muiso__125->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis98[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__126 = new TH1D("hh_t_muiso__126","",10, xAxis98);
   hh_t_muiso__126->SetBinContent(1,14.9484);
   hh_t_muiso__126->SetBinContent(2,0.5477737);
   hh_t_muiso__126->SetBinContent(3,0.8085194);
   hh_t_muiso__126->SetBinContent(4,2.424768);
   hh_t_muiso__126->SetBinError(1,4.736738);
   hh_t_muiso__126->SetBinError(2,0.5417705);
   hh_t_muiso__126->SetBinError(3,0.458727);
   hh_t_muiso__126->SetBinError(4,2.386113);
   hh_t_muiso__126->SetEntries(38);
   hh_t_muiso__126->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_muiso__126->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis99[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__127 = new TH1D("hh_t_muiso__127","",10, xAxis99);
   hh_t_muiso__127->SetBinContent(1,117.3098);
   hh_t_muiso__127->SetBinContent(2,37.23214);
   hh_t_muiso__127->SetBinContent(3,30.19587);
   hh_t_muiso__127->SetBinContent(4,5.40968);
   hh_t_muiso__127->SetBinError(1,8.539441);
   hh_t_muiso__127->SetBinError(2,4.783621);
   hh_t_muiso__127->SetBinError(3,4.478304);
   hh_t_muiso__127->SetBinError(4,1.885381);
   hh_t_muiso__127->SetEntries(491);
   hh_t_muiso__127->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_muiso__127->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis100[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__128 = new TH1D("hh_t_muiso__128","",10, xAxis100);
   hh_t_muiso__128->SetBinContent(1,200.3248);
   hh_t_muiso__128->SetBinContent(2,62.93311);
   hh_t_muiso__128->SetBinContent(3,37.14606);
   hh_t_muiso__128->SetBinContent(4,11.35798);
   hh_t_muiso__128->SetBinError(1,10.15526);
   hh_t_muiso__128->SetBinError(2,5.726802);
   hh_t_muiso__128->SetBinError(3,4.358134);
   hh_t_muiso__128->SetBinError(4,2.348288);
   hh_t_muiso__128->SetEntries(974);
   hh_t_muiso__128->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_muiso__128->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis101[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__129 = new TH1D("hh_t_muiso__129","",10, xAxis101);
   hh_t_muiso__129->SetBinContent(1,301.7925);
   hh_t_muiso__129->SetBinContent(2,97.99806);
   hh_t_muiso__129->SetBinContent(3,69.20437);
   hh_t_muiso__129->SetBinContent(4,28.99033);
   hh_t_muiso__129->SetBinError(1,5.833847);
   hh_t_muiso__129->SetBinError(2,3.27531);
   hh_t_muiso__129->SetBinError(3,2.64089);
   hh_t_muiso__129->SetBinError(4,1.662744);
   hh_t_muiso__129->SetEntries(5486);
   hh_t_muiso__129->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_muiso__129->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   w->Draw("same");
   Double_t xAxis102[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__130 = new TH1D("hh_t_muiso__130","",10, xAxis102);
   hh_t_muiso__130->SetBinContent(1,8045.049);
   hh_t_muiso__130->SetBinContent(2,2441.615);
   hh_t_muiso__130->SetBinContent(3,1361.976);
   hh_t_muiso__130->SetBinContent(4,482.7825);
   hh_t_muiso__130->SetBinError(1,199.1077);
   hh_t_muiso__130->SetBinError(2,115.1885);
   hh_t_muiso__130->SetBinError(3,72.92783);
   hh_t_muiso__130->SetBinError(4,42.56663);
   hh_t_muiso__130->SetMaximum(12313.6);
   hh_t_muiso__130->SetEntries(12758);
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
   hmc__131->SetBinError(1,0.0247491);
   hmc__131->SetBinError(2,0.04717717);
   hmc__131->SetBinError(3,0.05354559);
   hmc__131->SetBinError(4,0.08816937);
   hmc__131->SetMinimum(0.5);
   hmc__131->SetMaximum(1.5);
   hmc__131->SetEntries(12769);
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
   hdata__132->SetBinContent(1,1.17737);
   hdata__132->SetBinContent(2,1.207397);
   hdata__132->SetBinContent(3,1.190182);
   hdata__132->SetBinContent(4,1.292508);
   hdata__132->SetBinError(1,0.0120974);
   hdata__132->SetBinError(2,0.02223753);
   hdata__132->SetBinError(3,0.02956119);
   hdata__132->SetBinError(4,0.05174171);
   hdata__132->SetEntries(14676);
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
