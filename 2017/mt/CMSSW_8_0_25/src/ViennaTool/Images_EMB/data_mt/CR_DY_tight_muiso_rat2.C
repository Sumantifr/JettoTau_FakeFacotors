void CR_DY_tight_muiso_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:32 2020) by ROOT version6.06/01
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
   c1_1->Range(-0.1076923,-0.05526316,0.7897436,1.14611);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis209[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__265 = new TH1D("hh_t_muiso__265","",10, xAxis209);
   hh_t_muiso__265->SetStats(0);
   hh_t_muiso__265->SetLineWidth(3);
   hh_t_muiso__265->SetMarkerStyle(8);
   hh_t_muiso__265->SetMarkerSize(1.3);
   hh_t_muiso__265->GetXaxis()->SetLabelSize(0);
   hh_t_muiso__265->GetYaxis()->SetTitle("Events / 0 GeV");
   hh_t_muiso__265->GetYaxis()->SetLabelSize(0.064);
   hh_t_muiso__265->GetYaxis()->SetTitleSize(0.064);
   hh_t_muiso__265->GetYaxis()->SetTitleOffset(0.91);
   hh_t_muiso__265->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(0);
   Double_t xAxis210[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_23 = new TH1F("w_stack_23","",10, xAxis210);
   w_stack_23->SetMinimum(0);
   w_stack_23->SetMaximum(0);
   w_stack_23->SetDirectory(0);
   w_stack_23->SetStats(0);
   w->SetHistogram(w_stack_23);
   
   Double_t xAxis211[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__266 = new TH1D("hh_t_muiso__266","",10, xAxis211);
   hh_t_muiso__266->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_muiso__266->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis212[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__267 = new TH1D("hh_t_muiso__267","",10, xAxis212);
   hh_t_muiso__267->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_muiso__267->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis213[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__268 = new TH1D("hh_t_muiso__268","",10, xAxis213);
   hh_t_muiso__268->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_muiso__268->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis214[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__269 = new TH1D("hh_t_muiso__269","",10, xAxis214);
   hh_t_muiso__269->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_muiso__269->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis215[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__270 = new TH1D("hh_t_muiso__270","",10, xAxis215);
   hh_t_muiso__270->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_muiso__270->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis216[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__271 = new TH1D("hh_t_muiso__271","",10, xAxis216);
   hh_t_muiso__271->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_muiso__271->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis217[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__272 = new TH1D("hh_t_muiso__272","",10, xAxis217);
   hh_t_muiso__272->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_muiso__272->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   Double_t xAxis218[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__273 = new TH1D("hh_t_muiso__273","",10, xAxis218);
   hh_t_muiso__273->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_muiso__273->SetFillColor(ci);
   w->Add(hh_t_muiso,"hist");
   w->Draw("same");
   Double_t xAxis219[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_t_muiso__274 = new TH1D("hh_t_muiso__274","",10, xAxis219);
   hh_t_muiso__274->SetMaximum(0);
   hh_t_muiso__274->SetStats(0);
   hh_t_muiso__274->SetFillColor(1);
   hh_t_muiso__274->SetFillStyle(3013);
   hh_t_muiso__274->GetXaxis()->SetTitle("#mu_{iso}");
   hh_t_muiso__274->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","DY CR, tight isolation","h");
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
   Double_t xAxis220[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hmc__275 = new TH1D("hmc__275","",10, xAxis220);
   hmc__275->SetBinContent(0,1);
   hmc__275->SetBinContent(1,1);
   hmc__275->SetBinContent(2,1);
   hmc__275->SetBinContent(3,1);
   hmc__275->SetBinContent(4,1);
   hmc__275->SetBinContent(5,1);
   hmc__275->SetBinContent(6,1);
   hmc__275->SetBinContent(7,1);
   hmc__275->SetBinContent(8,1);
   hmc__275->SetBinContent(9,1);
   hmc__275->SetBinContent(10,1);
   hmc__275->SetMinimum(0.5);
   hmc__275->SetMaximum(1.5);
   hmc__275->SetEntries(11);
   hmc__275->SetStats(0);
   hmc__275->SetFillColor(1);
   hmc__275->SetFillStyle(3013);
   hmc__275->GetXaxis()->SetTitle("#mu_{iso}");
   hmc__275->GetXaxis()->SetLabelSize(0.12);
   hmc__275->GetXaxis()->SetTitleSize(0.12);
   hmc__275->GetYaxis()->SetTitle("data/MC");
   hmc__275->GetYaxis()->CenterTitle(true);
   hmc__275->GetYaxis()->SetNdivisions(306);
   hmc__275->GetYaxis()->SetLabelSize(0.12);
   hmc__275->GetYaxis()->SetTitleSize(0.12);
   hmc__275->GetYaxis()->SetTitleOffset(0.5);
   hmc__275->Draw("e2");
   Double_t xAxis221[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hdata__276 = new TH1D("hdata__276","",10, xAxis221);
   hdata__276->SetEntries(11);
   hdata__276->SetStats(0);
   hdata__276->SetLineWidth(3);
   hdata__276->SetMarkerStyle(8);
   hdata__276->SetMarkerSize(1.3);
   hdata__276->GetYaxis()->SetTitle("data/MC");
   hdata__276->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
