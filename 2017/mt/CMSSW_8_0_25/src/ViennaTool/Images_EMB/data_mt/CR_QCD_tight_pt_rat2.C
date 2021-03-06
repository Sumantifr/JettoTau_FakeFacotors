void CR_QCD_tight_pt_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:35 2020) by ROOT version6.06/01
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
   c1_1->Range(-23.07692,-145.1627,335.8974,3010.549);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *hh_t_pt__517 = new TH1D("hh_t_pt__517","",30,20,300);
   hh_t_pt__517->SetBinContent(2,2576);
   hh_t_pt__517->SetBinContent(3,865);
   hh_t_pt__517->SetBinContent(4,251);
   hh_t_pt__517->SetBinContent(5,88);
   hh_t_pt__517->SetBinContent(6,40);
   hh_t_pt__517->SetBinContent(7,22);
   hh_t_pt__517->SetBinContent(8,8);
   hh_t_pt__517->SetBinContent(9,5);
   hh_t_pt__517->SetBinContent(11,2);
   hh_t_pt__517->SetBinContent(12,2);
   hh_t_pt__517->SetBinContent(13,2);
   hh_t_pt__517->SetBinError(2,50.75431);
   hh_t_pt__517->SetBinError(3,29.41088);
   hh_t_pt__517->SetBinError(4,15.84298);
   hh_t_pt__517->SetBinError(5,9.380832);
   hh_t_pt__517->SetBinError(6,6.324555);
   hh_t_pt__517->SetBinError(7,4.690416);
   hh_t_pt__517->SetBinError(8,2.828427);
   hh_t_pt__517->SetBinError(9,2.236068);
   hh_t_pt__517->SetBinError(11,1.414214);
   hh_t_pt__517->SetBinError(12,1.414214);
   hh_t_pt__517->SetBinError(13,1.414214);
   hh_t_pt__517->SetEntries(3861);
   hh_t_pt__517->SetStats(0);
   hh_t_pt__517->SetLineWidth(3);
   hh_t_pt__517->SetMarkerStyle(8);
   hh_t_pt__517->SetMarkerSize(1.3);
   hh_t_pt__517->GetXaxis()->SetLabelSize(0);
   hh_t_pt__517->GetYaxis()->SetTitle("Events / 9 GeV");
   hh_t_pt__517->GetYaxis()->SetLabelSize(0.064);
   hh_t_pt__517->GetYaxis()->SetTitleSize(0.064);
   hh_t_pt__517->GetYaxis()->SetTitleOffset(0.91);
   hh_t_pt__517->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(3348.8);
   
   TH1F *w_stack_44 = new TH1F("w_stack_44","",30,20,300);
   w_stack_44->SetMinimum(0);
   w_stack_44->SetMaximum(3516.24);
   w_stack_44->SetDirectory(0);
   w_stack_44->SetStats(0);
   w->SetHistogram(w_stack_44);
   
   
   TH1D *hh_t_pt__518 = new TH1D("hh_t_pt__518","",30,20,300);
   hh_t_pt__518->SetBinContent(2,177.8618);
   hh_t_pt__518->SetBinContent(3,76.81493);
   hh_t_pt__518->SetBinContent(4,19.49048);
   hh_t_pt__518->SetBinContent(5,6.022397);
   hh_t_pt__518->SetBinContent(6,10.50092);
   hh_t_pt__518->SetBinContent(19,0.2320817);
   hh_t_pt__518->SetBinError(2,29.88535);
   hh_t_pt__518->SetBinError(3,19.64387);
   hh_t_pt__518->SetBinError(4,10.89076);
   hh_t_pt__518->SetBinError(5,4.612535);
   hh_t_pt__518->SetBinError(6,5.175257);
   hh_t_pt__518->SetBinError(19,0.2320817);
   hh_t_pt__518->SetEntries(94);
   hh_t_pt__518->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_t_pt__518->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__519 = new TH1D("hh_t_pt__519","",30,20,300);
   hh_t_pt__519->SetBinContent(2,26.76125);
   hh_t_pt__519->SetBinContent(3,16.7292);
   hh_t_pt__519->SetBinContent(4,6.419776);
   hh_t_pt__519->SetBinContent(5,6.903109);
   hh_t_pt__519->SetBinContent(6,2.50288);
   hh_t_pt__519->SetBinContent(7,1.352901);
   hh_t_pt__519->SetBinContent(8,1.350728);
   hh_t_pt__519->SetBinContent(9,0.02246058);
   hh_t_pt__519->SetBinContent(10,0.6239282);
   hh_t_pt__519->SetBinError(2,3.161298);
   hh_t_pt__519->SetBinError(3,2.554555);
   hh_t_pt__519->SetBinError(4,1.501242);
   hh_t_pt__519->SetBinError(5,1.670202);
   hh_t_pt__519->SetBinError(6,0.9578822);
   hh_t_pt__519->SetBinError(7,0.6879763);
   hh_t_pt__519->SetBinError(8,0.7143609);
   hh_t_pt__519->SetBinError(9,0.02246058);
   hh_t_pt__519->SetBinError(10,0.4517115);
   hh_t_pt__519->SetEntries(189);
   hh_t_pt__519->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_t_pt__519->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__520 = new TH1D("hh_t_pt__520","",30,20,300);
   hh_t_pt__520->SetBinContent(2,1.834189);
   hh_t_pt__520->SetBinContent(3,0.7556923);
   hh_t_pt__520->SetBinContent(4,0.8260106);
   hh_t_pt__520->SetBinContent(5,0.4867028);
   hh_t_pt__520->SetBinContent(6,0.4762162);
   hh_t_pt__520->SetBinError(2,0.8340566);
   hh_t_pt__520->SetBinError(3,0.4746177);
   hh_t_pt__520->SetBinError(4,0.4856275);
   hh_t_pt__520->SetBinError(5,0.4637711);
   hh_t_pt__520->SetBinError(6,0.3537195);
   hh_t_pt__520->SetEntries(17);
   hh_t_pt__520->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_t_pt__520->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__521 = new TH1D("hh_t_pt__521","",30,20,300);
   hh_t_pt__521->SetBinContent(2,111.8453);
   hh_t_pt__521->SetBinContent(3,17.19748);
   hh_t_pt__521->SetBinContent(4,9.11776);
   hh_t_pt__521->SetBinContent(5,5.049511);
   hh_t_pt__521->SetBinContent(9,0.0114492);
   hh_t_pt__521->SetBinError(2,39.10733);
   hh_t_pt__521->SetBinError(3,3.847289);
   hh_t_pt__521->SetBinError(4,3.071019);
   hh_t_pt__521->SetBinError(5,1.886182);
   hh_t_pt__521->SetBinError(9,0.0114492);
   hh_t_pt__521->SetEntries(112);
   hh_t_pt__521->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_t_pt__521->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__522 = new TH1D("hh_t_pt__522","",30,20,300);
   hh_t_pt__522->SetBinContent(2,3.744688);
   hh_t_pt__522->SetBinContent(4,0.7873715);
   hh_t_pt__522->SetBinError(2,3.039408);
   hh_t_pt__522->SetBinError(4,0.7873715);
   hh_t_pt__522->SetEntries(4);
   hh_t_pt__522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_t_pt__522->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__523 = new TH1D("hh_t_pt__523","",30,20,300);
   hh_t_pt__523->SetBinContent(2,2.259579);
   hh_t_pt__523->SetBinContent(3,1.43025);
   hh_t_pt__523->SetBinContent(4,2.114893);
   hh_t_pt__523->SetBinContent(6,1.211041);
   hh_t_pt__523->SetBinContent(8,0.1984111);
   hh_t_pt__523->SetBinContent(15,0.7450619);
   hh_t_pt__523->SetBinError(2,0.7399);
   hh_t_pt__523->SetBinError(3,0.7856214);
   hh_t_pt__523->SetBinError(4,1.302427);
   hh_t_pt__523->SetBinError(6,1.028145);
   hh_t_pt__523->SetBinError(8,0.1984111);
   hh_t_pt__523->SetBinError(15,0.7450619);
   hh_t_pt__523->SetEntries(30);
   hh_t_pt__523->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_t_pt__523->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__524 = new TH1D("hh_t_pt__524","",30,20,300);
   hh_t_pt__524->SetBinContent(2,0.9024794);
   hh_t_pt__524->SetBinContent(6,0.5252158);
   hh_t_pt__524->SetBinError(2,0.4603416);
   hh_t_pt__524->SetBinError(6,0.379495);
   hh_t_pt__524->SetEntries(6);
   hh_t_pt__524->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_t_pt__524->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   
   TH1D *hh_t_pt__525 = new TH1D("hh_t_pt__525","",30,20,300);
   hh_t_pt__525->SetBinContent(2,27.30903);
   hh_t_pt__525->SetBinContent(3,6.507401);
   hh_t_pt__525->SetBinContent(4,1.38042);
   hh_t_pt__525->SetBinContent(5,0.4141509);
   hh_t_pt__525->SetBinContent(6,0.3970049);
   hh_t_pt__525->SetBinContent(7,0.2468163);
   hh_t_pt__525->SetBinContent(8,0.3814939);
   hh_t_pt__525->SetBinContent(10,0.09080579);
   hh_t_pt__525->SetBinContent(14,0.05684683);
   hh_t_pt__525->SetBinContent(15,0.1819401);
   hh_t_pt__525->SetBinContent(22,0.1782192);
   hh_t_pt__525->SetBinError(2,1.388148);
   hh_t_pt__525->SetBinError(3,0.7419839);
   hh_t_pt__525->SetBinError(4,0.3497574);
   hh_t_pt__525->SetBinError(5,0.2240121);
   hh_t_pt__525->SetBinError(6,0.2171334);
   hh_t_pt__525->SetBinError(7,0.1704039);
   hh_t_pt__525->SetBinError(8,0.2377158);
   hh_t_pt__525->SetBinError(10,0.09080579);
   hh_t_pt__525->SetBinError(14,0.05684683);
   hh_t_pt__525->SetBinError(15,0.1819401);
   hh_t_pt__525->SetBinError(22,0.1782192);
   hh_t_pt__525->SetEntries(575);
   hh_t_pt__525->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_t_pt__525->SetFillColor(ci);
   w->Add(hh_t_pt,"hist");
   w->Draw("same");
   
   TH1D *hh_t_pt__526 = new TH1D("hh_t_pt__526","",30,20,300);
   hh_t_pt__526->SetBinContent(2,352.5183);
   hh_t_pt__526->SetBinContent(3,119.435);
   hh_t_pt__526->SetBinContent(4,40.13671);
   hh_t_pt__526->SetBinContent(5,18.87587);
   hh_t_pt__526->SetBinContent(6,15.61328);
   hh_t_pt__526->SetBinContent(7,1.599717);
   hh_t_pt__526->SetBinContent(8,1.930633);
   hh_t_pt__526->SetBinContent(9,0.03390978);
   hh_t_pt__526->SetBinContent(10,0.714734);
   hh_t_pt__526->SetBinContent(14,0.05684683);
   hh_t_pt__526->SetBinContent(15,0.927002);
   hh_t_pt__526->SetBinContent(19,0.2320817);
   hh_t_pt__526->SetBinContent(22,0.1782192);
   hh_t_pt__526->SetBinError(2,49.44827);
   hh_t_pt__526->SetBinError(3,20.21391);
   hh_t_pt__526->SetBinError(4,11.53117);
   hh_t_pt__526->SetBinError(5,5.280909);
   hh_t_pt__526->SetBinError(6,5.392049);
   hh_t_pt__526->SetBinError(7,0.7087657);
   hh_t_pt__526->SetBinError(8,0.7785802);
   hh_t_pt__526->SetBinError(9,0.02521035);
   hh_t_pt__526->SetBinError(10,0.4607482);
   hh_t_pt__526->SetBinError(14,0.05684683);
   hh_t_pt__526->SetBinError(15,0.7669546);
   hh_t_pt__526->SetBinError(19,0.2320817);
   hh_t_pt__526->SetBinError(22,0.1782192);
   hh_t_pt__526->SetMaximum(3348.8);
   hh_t_pt__526->SetEntries(1027);
   hh_t_pt__526->SetStats(0);
   hh_t_pt__526->SetFillColor(1);
   hh_t_pt__526->SetFillStyle(3013);
   hh_t_pt__526->GetXaxis()->SetTitle("p_{T} (GeV)");
   hh_t_pt__526->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","QCD CR, tight isolation","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_t_pt","W+jets","f");

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
   entry=leg->AddEntry("hh_t_pt","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_t_pt","EMB","f");

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
   entry=leg->AddEntry("hh_t_pt","data","lep");
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
   c1_2->Range(-23.07692,-0.03846155,335.8974,1.5);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.12);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.35);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1D *hmc__527 = new TH1D("hmc__527","",30,20,300);
   hmc__527->SetBinContent(0,1);
   hmc__527->SetBinContent(1,1);
   hmc__527->SetBinContent(2,1);
   hmc__527->SetBinContent(3,1);
   hmc__527->SetBinContent(4,1);
   hmc__527->SetBinContent(5,1);
   hmc__527->SetBinContent(6,1);
   hmc__527->SetBinContent(7,1);
   hmc__527->SetBinContent(8,1);
   hmc__527->SetBinContent(9,1);
   hmc__527->SetBinContent(10,1);
   hmc__527->SetBinContent(11,1);
   hmc__527->SetBinContent(12,1);
   hmc__527->SetBinContent(13,1);
   hmc__527->SetBinContent(14,1);
   hmc__527->SetBinContent(15,1);
   hmc__527->SetBinContent(16,1);
   hmc__527->SetBinContent(17,1);
   hmc__527->SetBinContent(18,1);
   hmc__527->SetBinContent(19,1);
   hmc__527->SetBinContent(20,1);
   hmc__527->SetBinContent(21,1);
   hmc__527->SetBinContent(22,1);
   hmc__527->SetBinContent(23,1);
   hmc__527->SetBinContent(24,1);
   hmc__527->SetBinContent(25,1);
   hmc__527->SetBinContent(26,1);
   hmc__527->SetBinContent(27,1);
   hmc__527->SetBinContent(28,1);
   hmc__527->SetBinContent(29,1);
   hmc__527->SetBinContent(30,1);
   hmc__527->SetBinError(2,0.1402715);
   hmc__527->SetBinError(3,0.1692461);
   hmc__527->SetBinError(4,0.2872974);
   hmc__527->SetBinError(5,0.2797704);
   hmc__527->SetBinError(6,0.3453502);
   hmc__527->SetBinError(7,0.4430569);
   hmc__527->SetBinError(8,0.4032773);
   hmc__527->SetBinError(9,0.7434538);
   hmc__527->SetBinError(10,0.644643);
   hmc__527->SetBinError(14,1);
   hmc__527->SetBinError(15,0.8273495);
   hmc__527->SetBinError(19,1);
   hmc__527->SetBinError(22,1);
   hmc__527->SetMinimum(0.5);
   hmc__527->SetMaximum(1.5);
   hmc__527->SetEntries(1058);
   hmc__527->SetStats(0);
   hmc__527->SetFillColor(1);
   hmc__527->SetFillStyle(3013);
   hmc__527->GetXaxis()->SetTitle("p_{T} (GeV)");
   hmc__527->GetXaxis()->SetLabelSize(0.12);
   hmc__527->GetXaxis()->SetTitleSize(0.12);
   hmc__527->GetYaxis()->SetTitle("data/MC");
   hmc__527->GetYaxis()->CenterTitle(true);
   hmc__527->GetYaxis()->SetNdivisions(306);
   hmc__527->GetYaxis()->SetLabelSize(0.12);
   hmc__527->GetYaxis()->SetTitleSize(0.12);
   hmc__527->GetYaxis()->SetTitleOffset(0.5);
   hmc__527->Draw("e2");
   
   TH1D *hdata__528 = new TH1D("hdata__528","",30,20,300);
   hdata__528->SetBinContent(2,7.307421);
   hdata__528->SetBinContent(3,7.242436);
   hdata__528->SetBinContent(4,6.253626);
   hdata__528->SetBinContent(5,4.662037);
   hdata__528->SetBinContent(6,2.561922);
   hdata__528->SetBinContent(7,13.75243);
   hdata__528->SetBinContent(8,4.14372);
   hdata__528->SetBinContent(9,147.4501);
   hdata__528->SetBinError(2,0.1439764);
   hdata__528->SetBinError(3,0.2462502);
   hdata__528->SetBinError(4,0.3947254);
   hdata__528->SetBinError(5,0.4969748);
   hdata__528->SetBinError(6,0.4050755);
   hdata__528->SetBinError(7,2.932028);
   hdata__528->SetBinError(8,1.465026);
   hdata__528->SetBinError(9,65.94169);
   hdata__528->SetEntries(3892);
   hdata__528->SetStats(0);
   hdata__528->SetLineWidth(3);
   hdata__528->SetMarkerStyle(8);
   hdata__528->SetMarkerSize(1.3);
   hdata__528->GetYaxis()->SetTitle("data/MC");
   hdata__528->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
