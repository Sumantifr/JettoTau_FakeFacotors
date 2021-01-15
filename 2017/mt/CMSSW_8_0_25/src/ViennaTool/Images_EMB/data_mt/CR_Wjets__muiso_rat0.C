void CR_Wjets__muiso_rat0()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:44:24 2020) by ROOT version6.06/01
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
   Double_t xAxis105[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__133 = new TH1D("hh_l_muiso__133","",10, xAxis105);
   hh_l_muiso__133->SetBinContent(1,64168);
   hh_l_muiso__133->SetBinContent(2,19861);
   hh_l_muiso__133->SetBinContent(3,11985);
   hh_l_muiso__133->SetBinContent(4,4276);
   hh_l_muiso__133->SetBinError(1,253.314);
   hh_l_muiso__133->SetBinError(2,140.9291);
   hh_l_muiso__133->SetBinError(3,109.476);
   hh_l_muiso__133->SetBinError(4,65.39113);
   hh_l_muiso__133->SetEntries(100290);
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
   w->SetMaximum(119359.2);
   Double_t xAxis106[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1F *w_stack_12 = new TH1F("w_stack_12","",10, xAxis106);
   w_stack_12->SetMinimum(0);
   w_stack_12->SetMaximum(125327.2);
   w_stack_12->SetDirectory(0);
   w_stack_12->SetStats(0);
   w->SetHistogram(w_stack_12);
   
   Double_t xAxis107[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__134 = new TH1D("hh_l_muiso__134","",10, xAxis107);
   hh_l_muiso__134->SetBinContent(1,85665.15);
   hh_l_muiso__134->SetBinContent(2,30660.95);
   hh_l_muiso__134->SetBinContent(3,16612.3);
   hh_l_muiso__134->SetBinContent(4,5108.845);
   hh_l_muiso__134->SetBinError(1,673.8871);
   hh_l_muiso__134->SetBinError(2,417.3411);
   hh_l_muiso__134->SetBinError(3,310.7348);
   hh_l_muiso__134->SetBinError(4,182.5856);
   hh_l_muiso__134->SetEntries(45053);
   hh_l_muiso__134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_muiso__134->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis108[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__135 = new TH1D("hh_l_muiso__135","",10, xAxis108);
   hh_l_muiso__135->SetBinContent(1,1553.829);
   hh_l_muiso__135->SetBinContent(2,590.49);
   hh_l_muiso__135->SetBinContent(3,356.0885);
   hh_l_muiso__135->SetBinContent(4,124.0661);
   hh_l_muiso__135->SetBinError(1,24.25325);
   hh_l_muiso__135->SetBinError(2,14.96874);
   hh_l_muiso__135->SetBinError(3,11.64149);
   hh_l_muiso__135->SetBinError(4,6.835272);
   hh_l_muiso__135->SetEntries(8549);
   hh_l_muiso__135->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_muiso__135->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis109[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__136 = new TH1D("hh_l_muiso__136","",10, xAxis109);
   hh_l_muiso__136->SetBinContent(1,303.0137);
   hh_l_muiso__136->SetBinContent(2,131.283);
   hh_l_muiso__136->SetBinContent(3,77.73261);
   hh_l_muiso__136->SetBinContent(4,30.93201);
   hh_l_muiso__136->SetBinError(1,11.11214);
   hh_l_muiso__136->SetBinError(2,7.290811);
   hh_l_muiso__136->SetBinError(3,5.652882);
   hh_l_muiso__136->SetBinError(4,3.535171);
   hh_l_muiso__136->SetEntries(1573);
   hh_l_muiso__136->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_muiso__136->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis110[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__137 = new TH1D("hh_l_muiso__137","",10, xAxis110);
   hh_l_muiso__137->SetBinContent(1,2348.073);
   hh_l_muiso__137->SetBinContent(2,739.4651);
   hh_l_muiso__137->SetBinContent(3,394.1452);
   hh_l_muiso__137->SetBinContent(4,79.35068);
   hh_l_muiso__137->SetBinError(1,118.3324);
   hh_l_muiso__137->SetBinError(2,71.46994);
   hh_l_muiso__137->SetBinError(3,51.81755);
   hh_l_muiso__137->SetBinError(4,9.496564);
   hh_l_muiso__137->SetEntries(4402);
   hh_l_muiso__137->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_muiso__137->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis111[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__138 = new TH1D("hh_l_muiso__138","",10, xAxis111);
   hh_l_muiso__138->SetBinContent(1,54.69326);
   hh_l_muiso__138->SetBinContent(2,10.4478);
   hh_l_muiso__138->SetBinContent(3,17.64389);
   hh_l_muiso__138->SetBinContent(4,3.386341);
   hh_l_muiso__138->SetBinError(1,9.955946);
   hh_l_muiso__138->SetBinError(2,3.083009);
   hh_l_muiso__138->SetBinError(3,6.534158);
   hh_l_muiso__138->SetBinError(4,2.888038);
   hh_l_muiso__138->SetEntries(101);
   hh_l_muiso__138->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_muiso__138->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis112[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__139 = new TH1D("hh_l_muiso__139","",10, xAxis112);
   hh_l_muiso__139->SetBinContent(1,1426.078);
   hh_l_muiso__139->SetBinContent(2,473.7439);
   hh_l_muiso__139->SetBinContent(3,280.4113);
   hh_l_muiso__139->SetBinContent(4,81.90118);
   hh_l_muiso__139->SetBinError(1,29.79793);
   hh_l_muiso__139->SetBinError(2,17.34141);
   hh_l_muiso__139->SetBinError(3,13.39582);
   hh_l_muiso__139->SetBinError(4,7.064798);
   hh_l_muiso__139->SetEntries(5823);
   hh_l_muiso__139->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_muiso__139->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis113[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__140 = new TH1D("hh_l_muiso__140","",10, xAxis113);
   hh_l_muiso__140->SetBinContent(1,269.1583);
   hh_l_muiso__140->SetBinContent(2,73.31729);
   hh_l_muiso__140->SetBinContent(3,47.90031);
   hh_l_muiso__140->SetBinContent(4,16.63601);
   hh_l_muiso__140->SetBinError(1,11.54771);
   hh_l_muiso__140->SetBinError(2,6.048064);
   hh_l_muiso__140->SetBinError(3,5.045102);
   hh_l_muiso__140->SetBinError(4,2.985055);
   hh_l_muiso__140->SetEntries(1251);
   hh_l_muiso__140->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_muiso__140->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   Double_t xAxis114[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__141 = new TH1D("hh_l_muiso__141","",10, xAxis114);
   hh_l_muiso__141->SetBinContent(1,194.7932);
   hh_l_muiso__141->SetBinContent(2,73.27102);
   hh_l_muiso__141->SetBinContent(3,54.113);
   hh_l_muiso__141->SetBinContent(4,26.63565);
   hh_l_muiso__141->SetBinError(1,4.616774);
   hh_l_muiso__141->SetBinError(2,2.781191);
   hh_l_muiso__141->SetBinError(3,2.267835);
   hh_l_muiso__141->SetBinError(4,1.584592);
   hh_l_muiso__141->SetEntries(4012);
   hh_l_muiso__141->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_muiso__141->SetFillColor(ci);
   w->Add(hh_l_muiso,"hist");
   w->Draw("same");
   Double_t xAxis115[11] = {0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.7}; 
   
   TH1D *hh_l_muiso__142 = new TH1D("hh_l_muiso__142","",10, xAxis115);
   hh_l_muiso__142->SetBinContent(1,91814.79);
   hh_l_muiso__142->SetBinContent(2,32752.97);
   hh_l_muiso__142->SetBinContent(3,17840.33);
   hh_l_muiso__142->SetBinContent(4,5471.753);
   hh_l_muiso__142->SetBinError(1,685.5507);
   hh_l_muiso__142->SetBinError(2,424.1619);
   hh_l_muiso__142->SetBinError(3,315.692);
   hh_l_muiso__142->SetBinError(4,183.1845);
   hh_l_muiso__142->SetMaximum(119359.2);
   hh_l_muiso__142->SetEntries(70764);
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
   hmc__143->SetBinError(1,0.00746667);
   hmc__143->SetBinError(2,0.01295034);
   hmc__143->SetBinError(3,0.01769541);
   hmc__143->SetBinError(4,0.03347821);
   hmc__143->SetMinimum(0.5);
   hmc__143->SetMaximum(1.5);
   hmc__143->SetEntries(70775);
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
   hdata__144->SetBinContent(1,0.6988852);
   hdata__144->SetBinContent(2,0.6063878);
   hdata__144->SetBinContent(3,0.6717924);
   hdata__144->SetBinContent(4,0.781468);
   hdata__144->SetBinError(1,0.002758968);
   hdata__144->SetBinError(2,0.004302788);
   hdata__144->SetBinError(3,0.006136434);
   hdata__144->SetBinError(4,0.01195067);
   hdata__144->SetEntries(100301);
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
