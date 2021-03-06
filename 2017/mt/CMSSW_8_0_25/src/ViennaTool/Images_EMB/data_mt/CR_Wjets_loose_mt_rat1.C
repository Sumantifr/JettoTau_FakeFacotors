void CR_Wjets_loose_mt_rat1()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:46:19 2020) by ROOT version6.06/01
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
   c1_1->Range(-38.46154,36217.01,282.0513,297452.1);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis1[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__1 = new TH1D("hh_l_mt__1","",8, xAxis1);
   hh_l_mt__1->SetBinContent(1,80371);
   hh_l_mt__1->SetBinContent(2,67774);
   hh_l_mt__1->SetBinContent(3,59909);
   hh_l_mt__1->SetBinContent(4,58831);
   hh_l_mt__1->SetBinContent(5,62746);
   hh_l_mt__1->SetBinContent(6,71683);
   hh_l_mt__1->SetBinContent(7,82886);
   hh_l_mt__1->SetBinContent(8,265166);
   hh_l_mt__1->SetBinContent(9,271);
   hh_l_mt__1->SetBinError(1,283.4978);
   hh_l_mt__1->SetBinError(2,260.3344);
   hh_l_mt__1->SetBinError(3,244.7632);
   hh_l_mt__1->SetBinError(4,242.551);
   hh_l_mt__1->SetBinError(5,250.4915);
   hh_l_mt__1->SetBinError(6,267.7368);
   hh_l_mt__1->SetBinError(7,287.8993);
   hh_l_mt__1->SetBinError(8,514.9427);
   hh_l_mt__1->SetBinError(9,16.46208);
   hh_l_mt__1->SetEntries(749637);
   hh_l_mt__1->SetStats(0);
   hh_l_mt__1->SetLineWidth(3);
   hh_l_mt__1->SetMarkerStyle(8);
   hh_l_mt__1->SetMarkerSize(1.3);
   hh_l_mt__1->GetXaxis()->SetLabelSize(0);
   hh_l_mt__1->GetYaxis()->SetTitle("Events / 10 GeV");
   hh_l_mt__1->GetYaxis()->SetLabelSize(0.064);
   hh_l_mt__1->GetYaxis()->SetTitleSize(0.064);
   hh_l_mt__1->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mt__1->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(344715.8);
   Double_t xAxis2[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1F *w_stack_1 = new TH1F("w_stack_1","",8, xAxis2);
   w_stack_1->SetMinimum(0);
   w_stack_1->SetMaximum(361951.6);
   w_stack_1->SetDirectory(0);
   w_stack_1->SetStats(0);
   w->SetHistogram(w_stack_1);
   
   Double_t xAxis3[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__2 = new TH1D("hh_l_mt__2","",8, xAxis3);
   hh_l_mt__2->SetBinContent(1,22144.62);
   hh_l_mt__2->SetBinContent(2,22880.5);
   hh_l_mt__2->SetBinContent(3,27515.84);
   hh_l_mt__2->SetBinContent(4,34191.32);
   hh_l_mt__2->SetBinContent(5,41836.52);
   hh_l_mt__2->SetBinContent(6,53429.53);
   hh_l_mt__2->SetBinContent(7,63680.84);
   hh_l_mt__2->SetBinContent(8,211204.3);
   hh_l_mt__2->SetBinContent(9,174.7014);
   hh_l_mt__2->SetBinError(1,336.1654);
   hh_l_mt__2->SetBinError(2,331.0796);
   hh_l_mt__2->SetBinError(3,366.9318);
   hh_l_mt__2->SetBinError(4,420.6149);
   hh_l_mt__2->SetBinError(5,464.4575);
   hh_l_mt__2->SetBinError(6,545.0022);
   hh_l_mt__2->SetBinError(7,590.2215);
   hh_l_mt__2->SetBinError(8,1049.37);
   hh_l_mt__2->SetBinError(9,24.11454);
   hh_l_mt__2->SetEntries(147479);
   hh_l_mt__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mt__2->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis4[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__3 = new TH1D("hh_l_mt__3","",8, xAxis4);
   hh_l_mt__3->SetBinContent(1,552.0514);
   hh_l_mt__3->SetBinContent(2,595.5915);
   hh_l_mt__3->SetBinContent(3,658.3139);
   hh_l_mt__3->SetBinContent(4,712.0659);
   hh_l_mt__3->SetBinContent(5,812.5334);
   hh_l_mt__3->SetBinContent(6,916.5196);
   hh_l_mt__3->SetBinContent(7,1027.984);
   hh_l_mt__3->SetBinContent(8,4521.892);
   hh_l_mt__3->SetBinContent(9,19.03713);
   hh_l_mt__3->SetBinError(1,14.4213);
   hh_l_mt__3->SetBinError(2,15.00309);
   hh_l_mt__3->SetBinError(3,15.80015);
   hh_l_mt__3->SetBinError(4,16.37882);
   hh_l_mt__3->SetBinError(5,17.53199);
   hh_l_mt__3->SetBinError(6,18.60248);
   hh_l_mt__3->SetBinError(7,19.7293);
   hh_l_mt__3->SetBinError(8,41.60629);
   hh_l_mt__3->SetBinError(9,2.667478);
   hh_l_mt__3->SetEntries(29185);
   hh_l_mt__3->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mt__3->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis5[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__4 = new TH1D("hh_l_mt__4","",8, xAxis5);
   hh_l_mt__4->SetBinContent(1,31.1365);
   hh_l_mt__4->SetBinContent(2,38.47911);
   hh_l_mt__4->SetBinContent(3,45.01165);
   hh_l_mt__4->SetBinContent(4,44.14022);
   hh_l_mt__4->SetBinContent(5,57.69066);
   hh_l_mt__4->SetBinContent(6,68.6342);
   hh_l_mt__4->SetBinContent(7,75.10952);
   hh_l_mt__4->SetBinContent(8,493.7078);
   hh_l_mt__4->SetBinContent(9,25.54424);
   hh_l_mt__4->SetBinError(1,3.591916);
   hh_l_mt__4->SetBinError(2,3.988441);
   hh_l_mt__4->SetBinError(3,4.326624);
   hh_l_mt__4->SetBinError(4,4.234405);
   hh_l_mt__4->SetBinError(5,4.84017);
   hh_l_mt__4->SetBinError(6,5.3257);
   hh_l_mt__4->SetBinError(7,5.629144);
   hh_l_mt__4->SetBinError(8,14.1471);
   hh_l_mt__4->SetBinError(9,3.091838);
   hh_l_mt__4->SetEntries(2453);
   hh_l_mt__4->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mt__4->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis6[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__5 = new TH1D("hh_l_mt__5","",8, xAxis6);
   hh_l_mt__5->SetBinContent(1,4603.189);
   hh_l_mt__5->SetBinContent(2,4245.276);
   hh_l_mt__5->SetBinContent(3,3815.116);
   hh_l_mt__5->SetBinContent(4,3638.058);
   hh_l_mt__5->SetBinContent(5,3224.256);
   hh_l_mt__5->SetBinContent(6,2693.244);
   hh_l_mt__5->SetBinContent(7,2451.901);
   hh_l_mt__5->SetBinContent(8,5408.799);
   hh_l_mt__5->SetBinContent(9,8.299348);
   hh_l_mt__5->SetBinError(1,253.4844);
   hh_l_mt__5->SetBinError(2,249.5207);
   hh_l_mt__5->SetBinError(3,232.259);
   hh_l_mt__5->SetBinError(4,217.304);
   hh_l_mt__5->SetBinError(5,195.3078);
   hh_l_mt__5->SetBinError(6,165.9017);
   hh_l_mt__5->SetBinError(7,163.5367);
   hh_l_mt__5->SetBinError(8,185.1162);
   hh_l_mt__5->SetBinError(9,2.417796);
   hh_l_mt__5->SetEntries(25082);
   hh_l_mt__5->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mt__5->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis7[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__6 = new TH1D("hh_l_mt__6","",8, xAxis7);
   hh_l_mt__6->SetBinContent(1,274.6921);
   hh_l_mt__6->SetBinContent(2,201.8023);
   hh_l_mt__6->SetBinContent(3,175.1789);
   hh_l_mt__6->SetBinContent(4,188.5322);
   hh_l_mt__6->SetBinContent(5,128.2948);
   hh_l_mt__6->SetBinContent(6,98.32217);
   hh_l_mt__6->SetBinContent(7,38.76725);
   hh_l_mt__6->SetBinContent(8,58.30775);
   hh_l_mt__6->SetBinError(1,37.40858);
   hh_l_mt__6->SetBinError(2,35.31016);
   hh_l_mt__6->SetBinError(3,27.78597);
   hh_l_mt__6->SetBinError(4,32.57116);
   hh_l_mt__6->SetBinError(5,26.75091);
   hh_l_mt__6->SetBinError(6,22.48168);
   hh_l_mt__6->SetBinError(7,9.037722);
   hh_l_mt__6->SetBinError(8,11.32521);
   hh_l_mt__6->SetEntries(711);
   hh_l_mt__6->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mt__6->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis8[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__7 = new TH1D("hh_l_mt__7","",8, xAxis8);
   hh_l_mt__7->SetBinContent(1,408.9235);
   hh_l_mt__7->SetBinContent(2,437.704);
   hh_l_mt__7->SetBinContent(3,482.9013);
   hh_l_mt__7->SetBinContent(4,584.9295);
   hh_l_mt__7->SetBinContent(5,681.4478);
   hh_l_mt__7->SetBinContent(6,873.146);
   hh_l_mt__7->SetBinContent(7,1056.328);
   hh_l_mt__7->SetBinContent(8,3765.968);
   hh_l_mt__7->SetBinContent(9,21.97384);
   hh_l_mt__7->SetBinError(1,15.79903);
   hh_l_mt__7->SetBinError(2,16.58222);
   hh_l_mt__7->SetBinError(3,17.32124);
   hh_l_mt__7->SetBinError(4,19.28976);
   hh_l_mt__7->SetBinError(5,20.77379);
   hh_l_mt__7->SetBinError(6,23.87558);
   hh_l_mt__7->SetBinError(7,26.27762);
   hh_l_mt__7->SetBinError(8,49.21304);
   hh_l_mt__7->SetBinError(9,3.712646);
   hh_l_mt__7->SetEntries(19658);
   hh_l_mt__7->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mt__7->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis9[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__8 = new TH1D("hh_l_mt__8","",8, xAxis9);
   hh_l_mt__8->SetBinContent(1,36.4346);
   hh_l_mt__8->SetBinContent(2,35.01373);
   hh_l_mt__8->SetBinContent(3,40.09774);
   hh_l_mt__8->SetBinContent(4,50.28691);
   hh_l_mt__8->SetBinContent(5,59.18503);
   hh_l_mt__8->SetBinContent(6,58.78549);
   hh_l_mt__8->SetBinContent(7,54.88925);
   hh_l_mt__8->SetBinContent(8,351.7626);
   hh_l_mt__8->SetBinContent(9,14.51254);
   hh_l_mt__8->SetBinError(1,4.531742);
   hh_l_mt__8->SetBinError(2,4.149391);
   hh_l_mt__8->SetBinError(3,4.651222);
   hh_l_mt__8->SetBinError(4,5.336941);
   hh_l_mt__8->SetBinError(5,5.729886);
   hh_l_mt__8->SetBinError(6,5.603697);
   hh_l_mt__8->SetBinError(7,5.298985);
   hh_l_mt__8->SetBinError(8,13.67437);
   hh_l_mt__8->SetBinError(9,2.44441);
   hh_l_mt__8->SetEntries(1940);
   hh_l_mt__8->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mt__8->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   Double_t xAxis10[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__9 = new TH1D("hh_l_mt__9","",8, xAxis10);
   hh_l_mt__9->SetBinContent(1,10743.42);
   hh_l_mt__9->SetBinContent(2,7062.467);
   hh_l_mt__9->SetBinContent(3,4306.594);
   hh_l_mt__9->SetBinContent(4,2626.167);
   hh_l_mt__9->SetBinContent(5,1570.419);
   hh_l_mt__9->SetBinContent(6,895.5904);
   hh_l_mt__9->SetBinContent(7,481.5149);
   hh_l_mt__9->SetBinContent(8,520.1151);
   hh_l_mt__9->SetBinContent(9,1.489564);
   hh_l_mt__9->SetBinError(1,28.02639);
   hh_l_mt__9->SetBinError(2,22.88545);
   hh_l_mt__9->SetBinError(3,18.07721);
   hh_l_mt__9->SetBinError(4,14.22614);
   hh_l_mt__9->SetBinError(5,11.17324);
   hh_l_mt__9->SetBinError(6,8.601817);
   hh_l_mt__9->SetBinError(7,6.44619);
   hh_l_mt__9->SetBinError(8,7.374139);
   hh_l_mt__9->SetBinError(9,0.5671755);
   hh_l_mt__9->SetEntries(428094);
   hh_l_mt__9->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mt__9->SetFillColor(ci);
   w->Add(hh_l_mt,"hist");
   w->Draw("same");
   Double_t xAxis11[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hh_l_mt__10 = new TH1D("hh_l_mt__10","",8, xAxis11);
   hh_l_mt__10->SetBinContent(1,38794.46);
   hh_l_mt__10->SetBinContent(2,35496.84);
   hh_l_mt__10->SetBinContent(3,37039.06);
   hh_l_mt__10->SetBinContent(4,42035.5);
   hh_l_mt__10->SetBinContent(5,48370.35);
   hh_l_mt__10->SetBinContent(6,59033.77);
   hh_l_mt__10->SetBinContent(7,68867.34);
   hh_l_mt__10->SetBinContent(8,226324.9);
   hh_l_mt__10->SetBinContent(9,265.558);
   hh_l_mt__10->SetBinError(1,424.1903);
   hh_l_mt__10->SetBinError(2,417.3464);
   hh_l_mt__10->SetBinError(3,436.2019);
   hh_l_mt__10->SetBinError(4,475.4871);
   hh_l_mt__10->SetBinError(5,505.4716);
   hh_l_mt__10->SetBinError(6,571.057);
   hh_l_mt__10->SetBinError(7,613.4887);
   hh_l_mt__10->SetBinError(8,1067.786);
   hh_l_mt__10->SetBinError(9,24.98224);
   hh_l_mt__10->SetMaximum(344715.8);
   hh_l_mt__10->SetEntries(654602);
   hh_l_mt__10->SetStats(0);
   hh_l_mt__10->SetFillColor(1);
   hh_l_mt__10->SetFillStyle(3013);
   hh_l_mt__10->GetXaxis()->SetTitle("m_{T} (GeV)");
   hh_l_mt__10->Draw("e2 same");
   
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
   entry=leg->AddEntry("hh_l_mt","W+jets","f");

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
   entry=leg->AddEntry("hh_l_mt","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_mt","EMB","f");

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
   entry=leg->AddEntry("hh_l_mt","data","lep");
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
   c1_2->Range(-38.46154,-0.03846155,282.0513,1.5);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.12);
   c1_2->SetTopMargin(0);
   c1_2->SetBottomMargin(0.35);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   Double_t xAxis12[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hmc__11 = new TH1D("hmc__11","",8, xAxis12);
   hmc__11->SetBinContent(0,1);
   hmc__11->SetBinContent(1,1);
   hmc__11->SetBinContent(2,1);
   hmc__11->SetBinContent(3,1);
   hmc__11->SetBinContent(4,1);
   hmc__11->SetBinContent(5,1);
   hmc__11->SetBinContent(6,1);
   hmc__11->SetBinContent(7,1);
   hmc__11->SetBinContent(8,1);
   hmc__11->SetBinContent(9,265.558);
   hmc__11->SetBinError(1,0.0109343);
   hmc__11->SetBinError(2,0.01175728);
   hmc__11->SetBinError(3,0.01177681);
   hmc__11->SetBinError(4,0.01131156);
   hmc__11->SetBinError(5,0.01045003);
   hmc__11->SetBinError(6,0.009673395);
   hmc__11->SetBinError(7,0.008908269);
   hmc__11->SetBinError(8,0.004717937);
   hmc__11->SetBinError(9,24.98224);
   hmc__11->SetMinimum(0.5);
   hmc__11->SetMaximum(1.5);
   hmc__11->SetEntries(654611);
   hmc__11->SetStats(0);
   hmc__11->SetFillColor(1);
   hmc__11->SetFillStyle(3013);
   hmc__11->GetXaxis()->SetTitle("m_{T} (GeV)");
   hmc__11->GetXaxis()->SetLabelSize(0.12);
   hmc__11->GetXaxis()->SetTitleSize(0.12);
   hmc__11->GetYaxis()->SetTitle("data/MC");
   hmc__11->GetYaxis()->CenterTitle(true);
   hmc__11->GetYaxis()->SetNdivisions(306);
   hmc__11->GetYaxis()->SetLabelSize(0.12);
   hmc__11->GetYaxis()->SetTitleSize(0.12);
   hmc__11->GetYaxis()->SetTitleOffset(0.5);
   hmc__11->Draw("e2");
   Double_t xAxis13[9] = {0, 10, 20, 30, 40, 50, 60, 70, 250}; 
   
   TH1D *hdata__12 = new TH1D("hdata__12","",8, xAxis13);
   hdata__12->SetBinContent(1,2.071713);
   hdata__12->SetBinContent(2,1.909297);
   hdata__12->SetBinContent(3,1.617455);
   hdata__12->SetBinContent(4,1.399555);
   hdata__12->SetBinContent(5,1.2972);
   hdata__12->SetBinContent(6,1.214271);
   hdata__12->SetBinContent(7,1.20356);
   hdata__12->SetBinContent(8,1.171617);
   hdata__12->SetBinContent(9,271);
   hdata__12->SetBinError(1,0.007307687);
   hdata__12->SetBinError(2,0.007334017);
   hdata__12->SetBinError(3,0.006608245);
   hdata__12->SetBinError(4,0.005770148);
   hdata__12->SetBinError(5,0.005178617);
   hdata__12->SetBinError(6,0.004535316);
   hdata__12->SetBinError(7,0.004180491);
   hdata__12->SetBinError(8,0.002275237);
   hdata__12->SetBinError(9,16.46208);
   hdata__12->SetEntries(749646);
   hdata__12->SetStats(0);
   hdata__12->SetLineWidth(3);
   hdata__12->SetMarkerStyle(8);
   hdata__12->SetMarkerSize(1.3);
   hdata__12->GetYaxis()->SetTitle("data/MC");
   hdata__12->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
