void CR_DY_loose_mvis_rat1()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:46:22 2020) by ROOT version6.06/01
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
   c1_1->Range(-69.23077,-0.05526316,507.6923,1.14611);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis157[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__181 = new TH1D("hh_l_mvis__181","",19, xAxis157);
   hh_l_mvis__181->SetStats(0);
   hh_l_mvis__181->SetLineWidth(3);
   hh_l_mvis__181->SetMarkerStyle(8);
   hh_l_mvis__181->SetMarkerSize(1.3);
   hh_l_mvis__181->GetXaxis()->SetLabelSize(0);
   hh_l_mvis__181->GetYaxis()->SetTitle("Events / 30 GeV");
   hh_l_mvis__181->GetYaxis()->SetLabelSize(0.064);
   hh_l_mvis__181->GetYaxis()->SetTitleSize(0.064);
   hh_l_mvis__181->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mvis__181->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis158[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1F *w_stack_16 = new TH1F("w_stack_16","",19, xAxis158);
   w_stack_16->SetMinimum(0);
   w_stack_16->SetMaximum(0);
   w_stack_16->SetDirectory(0);
   w_stack_16->SetStats(0);
   w->SetHistogram(w_stack_16);
   
   Double_t xAxis159[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__182 = new TH1D("hh_l_mvis__182","",19, xAxis159);
   hh_l_mvis__182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mvis__182->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis160[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__183 = new TH1D("hh_l_mvis__183","",19, xAxis160);
   hh_l_mvis__183->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mvis__183->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis161[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__184 = new TH1D("hh_l_mvis__184","",19, xAxis161);
   hh_l_mvis__184->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mvis__184->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis162[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__185 = new TH1D("hh_l_mvis__185","",19, xAxis162);
   hh_l_mvis__185->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mvis__185->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis163[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__186 = new TH1D("hh_l_mvis__186","",19, xAxis163);
   hh_l_mvis__186->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mvis__186->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis164[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__187 = new TH1D("hh_l_mvis__187","",19, xAxis164);
   hh_l_mvis__187->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mvis__187->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis165[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__188 = new TH1D("hh_l_mvis__188","",19, xAxis165);
   hh_l_mvis__188->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mvis__188->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis166[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__189 = new TH1D("hh_l_mvis__189","",19, xAxis166);
   hh_l_mvis__189->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mvis__189->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   w->Draw("same");
   Double_t xAxis167[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__190 = new TH1D("hh_l_mvis__190","",19, xAxis167);
   hh_l_mvis__190->SetMaximum(0);
   hh_l_mvis__190->SetStats(0);
   hh_l_mvis__190->SetFillColor(1);
   hh_l_mvis__190->SetFillStyle(3013);
   hh_l_mvis__190->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hh_l_mvis__190->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","DY CR, loose isolation","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_l_mvis","W+jets","f");

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
   entry=leg->AddEntry("hh_l_mvis","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mvis","EMB","f");

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
   entry=leg->AddEntry("hh_l_mvis","data","lep");
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
   c1_2->Range(-69.23077,-0.03846155,507.6923,1.5);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.12);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.35);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   Double_t xAxis168[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hmc__191 = new TH1D("hmc__191","",19, xAxis168);
   hmc__191->SetBinContent(0,1);
   hmc__191->SetBinContent(1,1);
   hmc__191->SetBinContent(2,1);
   hmc__191->SetBinContent(3,1);
   hmc__191->SetBinContent(4,1);
   hmc__191->SetBinContent(5,1);
   hmc__191->SetBinContent(6,1);
   hmc__191->SetBinContent(7,1);
   hmc__191->SetBinContent(8,1);
   hmc__191->SetBinContent(9,1);
   hmc__191->SetBinContent(10,1);
   hmc__191->SetBinContent(11,1);
   hmc__191->SetBinContent(12,1);
   hmc__191->SetBinContent(13,1);
   hmc__191->SetBinContent(14,1);
   hmc__191->SetBinContent(15,1);
   hmc__191->SetBinContent(16,1);
   hmc__191->SetBinContent(17,1);
   hmc__191->SetBinContent(18,1);
   hmc__191->SetBinContent(19,1);
   hmc__191->SetMinimum(0.5);
   hmc__191->SetMaximum(1.5);
   hmc__191->SetEntries(20);
   hmc__191->SetStats(0);
   hmc__191->SetFillColor(1);
   hmc__191->SetFillStyle(3013);
   hmc__191->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hmc__191->GetXaxis()->SetLabelSize(0.12);
   hmc__191->GetXaxis()->SetTitleSize(0.12);
   hmc__191->GetYaxis()->SetTitle("data/MC");
   hmc__191->GetYaxis()->CenterTitle(true);
   hmc__191->GetYaxis()->SetNdivisions(306);
   hmc__191->GetYaxis()->SetLabelSize(0.12);
   hmc__191->GetYaxis()->SetTitleSize(0.12);
   hmc__191->GetYaxis()->SetTitleOffset(0.5);
   hmc__191->Draw("e2");
   Double_t xAxis169[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hdata__192 = new TH1D("hdata__192","",19, xAxis169);
   hdata__192->SetEntries(20);
   hdata__192->SetStats(0);
   hdata__192->SetLineWidth(3);
   hdata__192->SetMarkerStyle(8);
   hdata__192->SetMarkerSize(1.3);
   hdata__192->GetYaxis()->SetTitle("data/MC");
   hdata__192->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
