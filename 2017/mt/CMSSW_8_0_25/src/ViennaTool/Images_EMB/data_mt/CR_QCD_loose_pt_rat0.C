void CR_QCD_loose_pt_rat0()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Tue Dec  1 20:44:31 2020) by ROOT version6.06/01
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
   c1_1->Range(-23.07692,-517.9436,335.8974,10741.7);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *hh_l_pt__505 = new TH1D("hh_l_pt__505","",30,20,300);
   hh_l_pt__505->SetBinContent(2,9276);
   hh_l_pt__505->SetBinContent(3,5834);
   hh_l_pt__505->SetBinContent(4,2826);
   hh_l_pt__505->SetBinContent(5,1604);
   hh_l_pt__505->SetBinContent(6,954);
   hh_l_pt__505->SetBinContent(7,546);
   hh_l_pt__505->SetBinContent(8,360);
   hh_l_pt__505->SetBinContent(9,218);
   hh_l_pt__505->SetBinContent(10,171);
   hh_l_pt__505->SetBinContent(11,120);
   hh_l_pt__505->SetBinContent(12,66);
   hh_l_pt__505->SetBinContent(13,57);
   hh_l_pt__505->SetBinContent(14,35);
   hh_l_pt__505->SetBinContent(15,17);
   hh_l_pt__505->SetBinContent(16,31);
   hh_l_pt__505->SetBinContent(17,21);
   hh_l_pt__505->SetBinContent(18,7);
   hh_l_pt__505->SetBinContent(19,7);
   hh_l_pt__505->SetBinContent(20,9);
   hh_l_pt__505->SetBinContent(21,5);
   hh_l_pt__505->SetBinContent(22,2);
   hh_l_pt__505->SetBinContent(23,6);
   hh_l_pt__505->SetBinContent(24,6);
   hh_l_pt__505->SetBinContent(25,4);
   hh_l_pt__505->SetBinContent(26,3);
   hh_l_pt__505->SetBinContent(27,4);
   hh_l_pt__505->SetBinContent(29,3);
   hh_l_pt__505->SetBinContent(30,1);
   hh_l_pt__505->SetBinContent(31,15);
   hh_l_pt__505->SetBinError(2,96.31199);
   hh_l_pt__505->SetBinError(3,76.38063);
   hh_l_pt__505->SetBinError(4,53.16014);
   hh_l_pt__505->SetBinError(5,40.04997);
   hh_l_pt__505->SetBinError(6,30.88689);
   hh_l_pt__505->SetBinError(7,23.36664);
   hh_l_pt__505->SetBinError(8,18.97367);
   hh_l_pt__505->SetBinError(9,14.76482);
   hh_l_pt__505->SetBinError(10,13.0767);
   hh_l_pt__505->SetBinError(11,10.95445);
   hh_l_pt__505->SetBinError(12,8.124038);
   hh_l_pt__505->SetBinError(13,7.549834);
   hh_l_pt__505->SetBinError(14,5.91608);
   hh_l_pt__505->SetBinError(15,4.123106);
   hh_l_pt__505->SetBinError(16,5.567764);
   hh_l_pt__505->SetBinError(17,4.582576);
   hh_l_pt__505->SetBinError(18,2.645751);
   hh_l_pt__505->SetBinError(19,2.645751);
   hh_l_pt__505->SetBinError(20,3);
   hh_l_pt__505->SetBinError(21,2.236068);
   hh_l_pt__505->SetBinError(22,1.414214);
   hh_l_pt__505->SetBinError(23,2.44949);
   hh_l_pt__505->SetBinError(24,2.44949);
   hh_l_pt__505->SetBinError(25,2);
   hh_l_pt__505->SetBinError(26,1.732051);
   hh_l_pt__505->SetBinError(27,2);
   hh_l_pt__505->SetBinError(29,1.732051);
   hh_l_pt__505->SetBinError(30,1);
   hh_l_pt__505->SetBinError(31,3.872983);
   hh_l_pt__505->SetEntries(22208);
   hh_l_pt__505->SetStats(0);
   hh_l_pt__505->SetLineWidth(3);
   hh_l_pt__505->SetMarkerStyle(8);
   hh_l_pt__505->SetMarkerSize(1.3);
   hh_l_pt__505->GetXaxis()->SetLabelSize(0);
   hh_l_pt__505->GetYaxis()->SetTitle("Events / 9 GeV");
   hh_l_pt__505->GetYaxis()->SetLabelSize(0.064);
   hh_l_pt__505->GetYaxis()->SetTitleSize(0.064);
   hh_l_pt__505->GetYaxis()->SetTitleOffset(0.91);
   hh_l_pt__505->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(12058.8);
   
   TH1F *w_stack_43 = new TH1F("w_stack_43","",30,20,300);
   w_stack_43->SetMinimum(0);
   w_stack_43->SetMaximum(12661.74);
   w_stack_43->SetDirectory(0);
   w_stack_43->SetStats(0);
   w->SetHistogram(w_stack_43);
   
   
   TH1D *hh_l_pt__506 = new TH1D("hh_l_pt__506","",30,20,300);
   hh_l_pt__506->SetBinContent(2,2103.353);
   hh_l_pt__506->SetBinContent(3,1154.419);
   hh_l_pt__506->SetBinContent(4,569.6155);
   hh_l_pt__506->SetBinContent(5,409.4902);
   hh_l_pt__506->SetBinContent(6,297.4342);
   hh_l_pt__506->SetBinContent(7,166.9369);
   hh_l_pt__506->SetBinContent(8,91.21133);
   hh_l_pt__506->SetBinContent(9,46.8985);
   hh_l_pt__506->SetBinContent(10,73.37725);
   hh_l_pt__506->SetBinContent(11,30.06552);
   hh_l_pt__506->SetBinContent(12,25.38496);
   hh_l_pt__506->SetBinContent(13,21.35742);
   hh_l_pt__506->SetBinContent(14,13.58985);
   hh_l_pt__506->SetBinContent(15,8.986771);
   hh_l_pt__506->SetBinContent(16,14.34533);
   hh_l_pt__506->SetBinContent(17,12.95118);
   hh_l_pt__506->SetBinContent(18,7.938062);
   hh_l_pt__506->SetBinContent(19,4.555375);
   hh_l_pt__506->SetBinContent(20,8.220611);
   hh_l_pt__506->SetBinContent(21,0.4887799);
   hh_l_pt__506->SetBinContent(23,6.006531);
   hh_l_pt__506->SetBinContent(24,0.2438331);
   hh_l_pt__506->SetBinContent(26,0.01120429);
   hh_l_pt__506->SetBinContent(27,0.2540254);
   hh_l_pt__506->SetBinContent(28,2.349593);
   hh_l_pt__506->SetBinContent(29,0.3445588);
   hh_l_pt__506->SetBinContent(31,9.931719);
   hh_l_pt__506->SetBinError(2,122.9983);
   hh_l_pt__506->SetBinError(3,72.00711);
   hh_l_pt__506->SetBinError(4,49.84834);
   hh_l_pt__506->SetBinError(5,60.06339);
   hh_l_pt__506->SetBinError(6,36.80809);
   hh_l_pt__506->SetBinError(7,27.00744);
   hh_l_pt__506->SetBinError(8,17.52109);
   hh_l_pt__506->SetBinError(9,11.82925);
   hh_l_pt__506->SetBinError(10,17.03961);
   hh_l_pt__506->SetBinError(11,9.549531);
   hh_l_pt__506->SetBinError(12,8.112274);
   hh_l_pt__506->SetBinError(13,8.047089);
   hh_l_pt__506->SetBinError(14,5.517846);
   hh_l_pt__506->SetBinError(15,5.41215);
   hh_l_pt__506->SetBinError(16,6.151055);
   hh_l_pt__506->SetBinError(17,5.768957);
   hh_l_pt__506->SetBinError(18,4.325978);
   hh_l_pt__506->SetBinError(19,3.235252);
   hh_l_pt__506->SetBinError(20,7.130164);
   hh_l_pt__506->SetBinError(21,0.3692048);
   hh_l_pt__506->SetBinError(23,4.02658);
   hh_l_pt__506->SetBinError(24,0.2438331);
   hh_l_pt__506->SetBinError(26,0.01120429);
   hh_l_pt__506->SetBinError(27,0.2540254);
   hh_l_pt__506->SetBinError(28,2.349593);
   hh_l_pt__506->SetBinError(29,0.3445588);
   hh_l_pt__506->SetBinError(31,4.685824);
   hh_l_pt__506->SetEntries(1779);
   hh_l_pt__506->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_pt__506->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__507 = new TH1D("hh_l_pt__507","",30,20,300);
   hh_l_pt__507->SetBinContent(2,305.7387);
   hh_l_pt__507->SetBinContent(3,204.7305);
   hh_l_pt__507->SetBinContent(4,121.7023);
   hh_l_pt__507->SetBinContent(5,85.23123);
   hh_l_pt__507->SetBinContent(6,59.64501);
   hh_l_pt__507->SetBinContent(7,40.42285);
   hh_l_pt__507->SetBinContent(8,35.54003);
   hh_l_pt__507->SetBinContent(9,27.23921);
   hh_l_pt__507->SetBinContent(10,18.54099);
   hh_l_pt__507->SetBinContent(11,14.17697);
   hh_l_pt__507->SetBinContent(12,12.27012);
   hh_l_pt__507->SetBinContent(13,5.414093);
   hh_l_pt__507->SetBinContent(14,7.812379);
   hh_l_pt__507->SetBinContent(15,6.007297);
   hh_l_pt__507->SetBinContent(16,3.515304);
   hh_l_pt__507->SetBinContent(17,1.078487);
   hh_l_pt__507->SetBinContent(18,1.343264);
   hh_l_pt__507->SetBinContent(19,2.4882);
   hh_l_pt__507->SetBinContent(20,0.9717815);
   hh_l_pt__507->SetBinContent(21,1.006013);
   hh_l_pt__507->SetBinContent(22,1.419777);
   hh_l_pt__507->SetBinContent(23,1.507324);
   hh_l_pt__507->SetBinContent(24,1.420729);
   hh_l_pt__507->SetBinContent(25,1.251829);
   hh_l_pt__507->SetBinContent(26,1.049429);
   hh_l_pt__507->SetBinContent(28,0.7716094);
   hh_l_pt__507->SetBinContent(29,0.7357683);
   hh_l_pt__507->SetBinContent(30,0.557697);
   hh_l_pt__507->SetBinContent(31,2.308739);
   hh_l_pt__507->SetBinError(2,10.69855);
   hh_l_pt__507->SetBinError(3,8.838171);
   hh_l_pt__507->SetBinError(4,6.833038);
   hh_l_pt__507->SetBinError(5,5.668803);
   hh_l_pt__507->SetBinError(6,4.72013);
   hh_l_pt__507->SetBinError(7,3.896541);
   hh_l_pt__507->SetBinError(8,3.677704);
   hh_l_pt__507->SetBinError(9,3.214812);
   hh_l_pt__507->SetBinError(10,2.58953);
   hh_l_pt__507->SetBinError(11,2.338318);
   hh_l_pt__507->SetBinError(12,2.105161);
   hh_l_pt__507->SetBinError(13,1.363203);
   hh_l_pt__507->SetBinError(14,1.670064);
   hh_l_pt__507->SetBinError(15,1.41683);
   hh_l_pt__507->SetBinError(16,1.165038);
   hh_l_pt__507->SetBinError(17,0.6141041);
   hh_l_pt__507->SetBinError(18,0.6581115);
   hh_l_pt__507->SetBinError(19,1.011794);
   hh_l_pt__507->SetBinError(20,0.5862238);
   hh_l_pt__507->SetBinError(21,0.605726);
   hh_l_pt__507->SetBinError(22,0.6486461);
   hh_l_pt__507->SetBinError(23,0.7643901);
   hh_l_pt__507->SetBinError(24,0.7256909);
   hh_l_pt__507->SetBinError(25,0.7116196);
   hh_l_pt__507->SetBinError(26,0.6155445);
   hh_l_pt__507->SetBinError(28,0.545651);
   hh_l_pt__507->SetBinError(29,0.5011571);
   hh_l_pt__507->SetBinError(30,0.39607);
   hh_l_pt__507->SetBinError(31,0.8786326);
   hh_l_pt__507->SetEntries(2944);
   hh_l_pt__507->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_pt__507->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__508 = new TH1D("hh_l_pt__508","",30,20,300);
   hh_l_pt__508->SetBinContent(2,2.758185);
   hh_l_pt__508->SetBinContent(3,2.384878);
   hh_l_pt__508->SetBinContent(4,1.332972);
   hh_l_pt__508->SetBinContent(5,2.339166);
   hh_l_pt__508->SetBinContent(6,0.3831465);
   hh_l_pt__508->SetBinContent(7,0.7311451);
   hh_l_pt__508->SetBinContent(8,0.6763769);
   hh_l_pt__508->SetBinContent(12,0.486552);
   hh_l_pt__508->SetBinContent(13,0.6399229);
   hh_l_pt__508->SetBinContent(16,0.4116318);
   hh_l_pt__508->SetBinError(2,1.138179);
   hh_l_pt__508->SetBinError(3,1.008939);
   hh_l_pt__508->SetBinError(4,0.6806494);
   hh_l_pt__508->SetBinError(5,0.9776025);
   hh_l_pt__508->SetBinError(6,0.3831465);
   hh_l_pt__508->SetBinError(7,0.5257146);
   hh_l_pt__508->SetBinError(8,0.4967049);
   hh_l_pt__508->SetBinError(12,0.486552);
   hh_l_pt__508->SetBinError(13,0.6399229);
   hh_l_pt__508->SetBinError(16,0.4116318);
   hh_l_pt__508->SetEntries(31);
   hh_l_pt__508->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_pt__508->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__509 = new TH1D("hh_l_pt__509","",30,20,300);
   hh_l_pt__509->SetBinContent(2,916.0573);
   hh_l_pt__509->SetBinContent(3,569.8253);
   hh_l_pt__509->SetBinContent(4,245.1336);
   hh_l_pt__509->SetBinContent(5,111.8394);
   hh_l_pt__509->SetBinContent(6,84.66325);
   hh_l_pt__509->SetBinContent(7,41.03773);
   hh_l_pt__509->SetBinContent(8,48.74598);
   hh_l_pt__509->SetBinContent(9,20.64435);
   hh_l_pt__509->SetBinContent(10,25.28293);
   hh_l_pt__509->SetBinContent(11,13.32658);
   hh_l_pt__509->SetBinContent(12,4.300719);
   hh_l_pt__509->SetBinContent(13,4.771638);
   hh_l_pt__509->SetBinContent(14,2.344011);
   hh_l_pt__509->SetBinContent(15,1.115858);
   hh_l_pt__509->SetBinContent(16,1.536534);
   hh_l_pt__509->SetBinContent(17,2.681397);
   hh_l_pt__509->SetBinContent(18,1.785819);
   hh_l_pt__509->SetBinContent(20,0.3669275);
   hh_l_pt__509->SetBinContent(21,0.631725);
   hh_l_pt__509->SetBinContent(27,1.002053);
   hh_l_pt__509->SetBinContent(31,0.7027288);
   hh_l_pt__509->SetBinError(2,116.693);
   hh_l_pt__509->SetBinError(3,95.61488);
   hh_l_pt__509->SetBinError(4,53.7836);
   hh_l_pt__509->SetBinError(5,35.98541);
   hh_l_pt__509->SetBinError(6,26.96134);
   hh_l_pt__509->SetBinError(7,6.128423);
   hh_l_pt__509->SetBinError(8,29.86289);
   hh_l_pt__509->SetBinError(9,4.358858);
   hh_l_pt__509->SetBinError(10,18.57203);
   hh_l_pt__509->SetBinError(11,3.596612);
   hh_l_pt__509->SetBinError(12,1.780032);
   hh_l_pt__509->SetBinError(13,2.456961);
   hh_l_pt__509->SetBinError(14,1.179079);
   hh_l_pt__509->SetBinError(15,0.6967463);
   hh_l_pt__509->SetBinError(16,1.089469);
   hh_l_pt__509->SetBinError(17,1.455475);
   hh_l_pt__509->SetBinError(18,1.189386);
   hh_l_pt__509->SetBinError(20,0.3242235);
   hh_l_pt__509->SetBinError(21,0.631725);
   hh_l_pt__509->SetBinError(27,1.002053);
   hh_l_pt__509->SetBinError(31,0.7027288);
   hh_l_pt__509->SetEntries(1463);
   hh_l_pt__509->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_pt__509->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__510 = new TH1D("hh_l_pt__510","",30,20,300);
   hh_l_pt__510->SetBinContent(2,3.734944);
   hh_l_pt__510->SetBinContent(3,7.07105);
   hh_l_pt__510->SetBinError(2,1.751986);
   hh_l_pt__510->SetBinError(3,4.215883);
   hh_l_pt__510->SetEntries(9);
   hh_l_pt__510->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_pt__510->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__511 = new TH1D("hh_l_pt__511","",30,20,300);
   hh_l_pt__511->SetBinContent(2,63.05081);
   hh_l_pt__511->SetBinContent(3,37.01055);
   hh_l_pt__511->SetBinContent(4,33.03709);
   hh_l_pt__511->SetBinContent(5,15.72205);
   hh_l_pt__511->SetBinContent(6,6.817224);
   hh_l_pt__511->SetBinContent(7,7.239125);
   hh_l_pt__511->SetBinContent(8,2.386089);
   hh_l_pt__511->SetBinContent(9,3.356752);
   hh_l_pt__511->SetBinContent(10,2.287274);
   hh_l_pt__511->SetBinContent(11,4.660238);
   hh_l_pt__511->SetBinContent(12,2.142169);
   hh_l_pt__511->SetBinContent(13,2.848198);
   hh_l_pt__511->SetBinContent(14,0.2406988);
   hh_l_pt__511->SetBinContent(15,0.8355476);
   hh_l_pt__511->SetBinContent(16,1.543801);
   hh_l_pt__511->SetBinContent(17,1.162877);
   hh_l_pt__511->SetBinContent(18,0.2281576);
   hh_l_pt__511->SetBinContent(19,0.2033553);
   hh_l_pt__511->SetBinContent(20,0.2953828);
   hh_l_pt__511->SetBinContent(22,0.2360112);
   hh_l_pt__511->SetBinContent(31,1.027577);
   hh_l_pt__511->SetBinError(2,5.979019);
   hh_l_pt__511->SetBinError(3,4.548065);
   hh_l_pt__511->SetBinError(4,4.628012);
   hh_l_pt__511->SetBinError(5,3.31639);
   hh_l_pt__511->SetBinError(6,1.616115);
   hh_l_pt__511->SetBinError(7,2.159241);
   hh_l_pt__511->SetBinError(8,0.9388805);
   hh_l_pt__511->SetBinError(9,1.630202);
   hh_l_pt__511->SetBinError(10,1.339596);
   hh_l_pt__511->SetBinError(11,1.563876);
   hh_l_pt__511->SetBinError(12,1.275566);
   hh_l_pt__511->SetBinError(13,1.478444);
   hh_l_pt__511->SetBinError(14,0.2406988);
   hh_l_pt__511->SetBinError(15,0.5017557);
   hh_l_pt__511->SetBinError(16,1.33963);
   hh_l_pt__511->SetBinError(17,0.9384276);
   hh_l_pt__511->SetBinError(18,0.2281576);
   hh_l_pt__511->SetBinError(19,0.2033553);
   hh_l_pt__511->SetBinError(20,0.2090324);
   hh_l_pt__511->SetBinError(22,0.2360112);
   hh_l_pt__511->SetBinError(31,1.027577);
   hh_l_pt__511->SetEntries(563);
   hh_l_pt__511->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_pt__511->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__512 = new TH1D("hh_l_pt__512","",30,20,300);
   hh_l_pt__512->SetBinContent(2,0.3910275);
   hh_l_pt__512->SetBinContent(3,1.097013);
   hh_l_pt__512->SetBinContent(4,0.4111914);
   hh_l_pt__512->SetBinContent(5,0.5253053);
   hh_l_pt__512->SetBinContent(8,0.01122361);
   hh_l_pt__512->SetBinContent(9,0.2318498);
   hh_l_pt__512->SetBinError(2,0.2813741);
   hh_l_pt__512->SetBinError(3,0.5801353);
   hh_l_pt__512->SetBinError(4,0.290764);
   hh_l_pt__512->SetBinError(5,0.3837393);
   hh_l_pt__512->SetBinError(8,0.01122361);
   hh_l_pt__512->SetBinError(9,0.2318498);
   hh_l_pt__512->SetEntries(12);
   hh_l_pt__512->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_pt__512->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   
   TH1D *hh_l_pt__513 = new TH1D("hh_l_pt__513","",30,20,300);
   hh_l_pt__513->SetBinContent(2,30.95246);
   hh_l_pt__513->SetBinContent(3,13.91085);
   hh_l_pt__513->SetBinContent(4,4.535985);
   hh_l_pt__513->SetBinContent(5,2.391388);
   hh_l_pt__513->SetBinContent(6,1.695978);
   hh_l_pt__513->SetBinContent(7,1.356214);
   hh_l_pt__513->SetBinContent(8,0.5043671);
   hh_l_pt__513->SetBinContent(9,0.6030315);
   hh_l_pt__513->SetBinContent(10,0.2068106);
   hh_l_pt__513->SetBinContent(11,0.2892682);
   hh_l_pt__513->SetBinContent(12,0.01297133);
   hh_l_pt__513->SetBinContent(13,0.5530706);
   hh_l_pt__513->SetBinContent(14,0.06375691);
   hh_l_pt__513->SetBinContent(15,0.04042811);
   hh_l_pt__513->SetBinContent(21,0.2214874);
   hh_l_pt__513->SetBinError(2,1.448052);
   hh_l_pt__513->SetBinError(3,0.9917705);
   hh_l_pt__513->SetBinError(4,0.6263827);
   hh_l_pt__513->SetBinError(5,0.4396063);
   hh_l_pt__513->SetBinError(6,0.4147935);
   hh_l_pt__513->SetBinError(7,0.4055468);
   hh_l_pt__513->SetBinError(8,0.2729598);
   hh_l_pt__513->SetBinError(9,0.2851678);
   hh_l_pt__513->SetBinError(10,0.1669376);
   hh_l_pt__513->SetBinError(11,0.2146087);
   hh_l_pt__513->SetBinError(12,0.01030087);
   hh_l_pt__513->SetBinError(13,0.3214028);
   hh_l_pt__513->SetBinError(14,0.06375691);
   hh_l_pt__513->SetBinError(15,0.04042811);
   hh_l_pt__513->SetBinError(21,0.2214874);
   hh_l_pt__513->SetEntries(907);
   hh_l_pt__513->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_pt__513->SetFillColor(ci);
   w->Add(hh_l_pt,"hist");
   w->Draw("same");
   
   TH1D *hh_l_pt__514 = new TH1D("hh_l_pt__514","",30,20,300);
   hh_l_pt__514->SetBinContent(2,3426.037);
   hh_l_pt__514->SetBinContent(3,1990.45);
   hh_l_pt__514->SetBinContent(4,975.7687);
   hh_l_pt__514->SetBinContent(5,627.5388);
   hh_l_pt__514->SetBinContent(6,450.6388);
   hh_l_pt__514->SetBinContent(7,257.7239);
   hh_l_pt__514->SetBinContent(8,179.0754);
   hh_l_pt__514->SetBinContent(9,98.97369);
   hh_l_pt__514->SetBinContent(10,119.6952);
   hh_l_pt__514->SetBinContent(11,62.51858);
   hh_l_pt__514->SetBinContent(12,44.5975);
   hh_l_pt__514->SetBinContent(13,35.58435);
   hh_l_pt__514->SetBinContent(14,24.05069);
   hh_l_pt__514->SetBinContent(15,16.9859);
   hh_l_pt__514->SetBinContent(16,21.3526);
   hh_l_pt__514->SetBinContent(17,17.87394);
   hh_l_pt__514->SetBinContent(18,11.2953);
   hh_l_pt__514->SetBinContent(19,7.24693);
   hh_l_pt__514->SetBinContent(20,9.854703);
   hh_l_pt__514->SetBinContent(21,2.348005);
   hh_l_pt__514->SetBinContent(22,1.655789);
   hh_l_pt__514->SetBinContent(23,7.513855);
   hh_l_pt__514->SetBinContent(24,1.664562);
   hh_l_pt__514->SetBinContent(25,1.251829);
   hh_l_pt__514->SetBinContent(26,1.060634);
   hh_l_pt__514->SetBinContent(27,1.256079);
   hh_l_pt__514->SetBinContent(28,3.121202);
   hh_l_pt__514->SetBinContent(29,1.080327);
   hh_l_pt__514->SetBinContent(30,0.557697);
   hh_l_pt__514->SetBinContent(31,13.97076);
   hh_l_pt__514->SetBinError(2,170.0076);
   hh_l_pt__514->SetBinError(3,120.1921);
   hh_l_pt__514->SetBinError(4,73.80096);
   hh_l_pt__514->SetBinError(5,70.33485);
   hh_l_pt__514->SetBinError(6,45.90163);
   hh_l_pt__514->SetBinError(7,28.05789);
   hh_l_pt__514->SetBinError(8,34.83546);
   hh_l_pt__514->SetBinError(9,13.1171);
   hh_l_pt__514->SetBinError(10,25.37315);
   hh_l_pt__514->SetBinError(11,10.58719);
   hh_l_pt__514->SetBinError(12,8.676008);
   hh_l_pt__514->SetBinError(13,8.680393);
   hh_l_pt__514->SetBinError(14,5.889649);
   hh_l_pt__514->SetBinError(15,5.660179);
   hh_l_pt__514->SetBinError(16,6.50721);
   hh_l_pt__514->SetBinError(17,6.054507);
   hh_l_pt__514->SetBinError(18,4.540252);
   hh_l_pt__514->SetBinError(19,3.39587);
   hh_l_pt__514->SetBinError(20,7.164615);
   hh_l_pt__514->SetBinError(21,0.9753714);
   hh_l_pt__514->SetBinError(22,0.6902485);
   hh_l_pt__514->SetBinError(23,4.098493);
   hh_l_pt__514->SetBinError(24,0.7655599);
   hh_l_pt__514->SetBinError(25,0.7116196);
   hh_l_pt__514->SetBinError(26,0.6156465);
   hh_l_pt__514->SetBinError(27,1.03375);
   hh_l_pt__514->SetBinError(28,2.412119);
   hh_l_pt__514->SetBinError(29,0.6081769);
   hh_l_pt__514->SetBinError(30,0.39607);
   hh_l_pt__514->SetBinError(31,4.92734);
   hh_l_pt__514->SetMaximum(12058.8);
   hh_l_pt__514->SetEntries(7708);
   hh_l_pt__514->SetStats(0);
   hh_l_pt__514->SetFillColor(1);
   hh_l_pt__514->SetFillStyle(3013);
   hh_l_pt__514->GetXaxis()->SetTitle("p_{T} (GeV)");
   hh_l_pt__514->Draw("e2 same");
   
   TLegend *leg = new TLegend(0.6,0.15,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","QCD CR, loose isolation","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hh_l_pt","W+jets","f");

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
   entry=leg->AddEntry("hh_l_pt","ttJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","ttL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","ZJ (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","ZL (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","VV (j#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","VV (l#rightarrow#tau)","f");

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
   entry=leg->AddEntry("hh_l_pt","EMB","f");

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
   entry=leg->AddEntry("hh_l_pt","data","lep");
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
   
   TH1D *hmc__515 = new TH1D("hmc__515","",30,20,300);
   hmc__515->SetBinContent(0,1);
   hmc__515->SetBinContent(1,1);
   hmc__515->SetBinContent(2,1);
   hmc__515->SetBinContent(3,1);
   hmc__515->SetBinContent(4,1);
   hmc__515->SetBinContent(5,1);
   hmc__515->SetBinContent(6,1);
   hmc__515->SetBinContent(7,1);
   hmc__515->SetBinContent(8,1);
   hmc__515->SetBinContent(9,1);
   hmc__515->SetBinContent(10,1);
   hmc__515->SetBinContent(11,1);
   hmc__515->SetBinContent(12,1);
   hmc__515->SetBinContent(13,1);
   hmc__515->SetBinContent(14,1);
   hmc__515->SetBinContent(15,1);
   hmc__515->SetBinContent(16,1);
   hmc__515->SetBinContent(17,1);
   hmc__515->SetBinContent(18,1);
   hmc__515->SetBinContent(19,1);
   hmc__515->SetBinContent(20,1);
   hmc__515->SetBinContent(21,1);
   hmc__515->SetBinContent(22,1);
   hmc__515->SetBinContent(23,1);
   hmc__515->SetBinContent(24,1);
   hmc__515->SetBinContent(25,1);
   hmc__515->SetBinContent(26,1);
   hmc__515->SetBinContent(27,1);
   hmc__515->SetBinContent(28,1);
   hmc__515->SetBinContent(29,1);
   hmc__515->SetBinContent(30,1);
   hmc__515->SetBinContent(31,13.97076);
   hmc__515->SetBinError(2,0.04962224);
   hmc__515->SetBinError(3,0.06038439);
   hmc__515->SetBinError(4,0.07563366);
   hmc__515->SetBinError(5,0.1120805);
   hmc__515->SetBinError(6,0.101859);
   hmc__515->SetBinError(7,0.108868);
   hmc__515->SetBinError(8,0.1945296);
   hmc__515->SetBinError(9,0.1325312);
   hmc__515->SetBinError(10,0.2119813);
   hmc__515->SetBinError(11,0.1693448);
   hmc__515->SetBinError(12,0.1945402);
   hmc__515->SetBinError(13,0.2439385);
   hmc__515->SetBinError(14,0.2448848);
   hmc__515->SetBinError(15,0.333228);
   hmc__515->SetBinError(16,0.3047502);
   hmc__515->SetBinError(17,0.3387338);
   hmc__515->SetBinError(18,0.4019593);
   hmc__515->SetBinError(19,0.4685943);
   hmc__515->SetBinError(20,0.727025);
   hmc__515->SetBinError(21,0.4154043);
   hmc__515->SetBinError(22,0.41687);
   hmc__515->SetBinError(23,0.5454581);
   hmc__515->SetBinError(24,0.4599167);
   hmc__515->SetBinError(25,0.5684639);
   hmc__515->SetBinError(26,0.5804516);
   hmc__515->SetBinError(27,0.8229981);
   hmc__515->SetBinError(28,0.7728175);
   hmc__515->SetBinError(29,0.5629563);
   hmc__515->SetBinError(30,0.7101886);
   hmc__515->SetBinError(31,4.92734);
   hmc__515->SetMinimum(0.5);
   hmc__515->SetMaximum(1.5);
   hmc__515->SetEntries(7739);
   hmc__515->SetStats(0);
   hmc__515->SetFillColor(1);
   hmc__515->SetFillStyle(3013);
   hmc__515->GetXaxis()->SetTitle("p_{T} (GeV)");
   hmc__515->GetXaxis()->SetLabelSize(0.12);
   hmc__515->GetXaxis()->SetTitleSize(0.12);
   hmc__515->GetYaxis()->SetTitle("data/MC");
   hmc__515->GetYaxis()->CenterTitle(true);
   hmc__515->GetYaxis()->SetNdivisions(306);
   hmc__515->GetYaxis()->SetLabelSize(0.12);
   hmc__515->GetYaxis()->SetTitleSize(0.12);
   hmc__515->GetYaxis()->SetTitleOffset(0.5);
   hmc__515->Draw("e2");
   
   TH1D *hdata__516 = new TH1D("hdata__516","",30,20,300);
   hdata__516->SetBinContent(2,2.707502);
   hdata__516->SetBinContent(3,2.930996);
   hdata__516->SetBinContent(4,2.896178);
   hdata__516->SetBinContent(5,2.556017);
   hdata__516->SetBinContent(6,2.116995);
   hdata__516->SetBinContent(7,2.118546);
   hdata__516->SetBinContent(8,2.010326);
   hdata__516->SetBinContent(9,2.202606);
   hdata__516->SetBinContent(10,1.428628);
   hdata__516->SetBinContent(11,1.91943);
   hdata__516->SetBinContent(12,1.479904);
   hdata__516->SetBinContent(13,1.601828);
   hdata__516->SetBinContent(14,1.45526);
   hdata__516->SetBinContent(15,1.00083);
   hdata__516->SetBinContent(16,1.451814);
   hdata__516->SetBinContent(17,1.174895);
   hdata__516->SetBinContent(18,0.6197266);
   hdata__516->SetBinContent(19,0.9659262);
   hdata__516->SetBinContent(20,0.9132696);
   hdata__516->SetBinContent(21,2.129467);
   hdata__516->SetBinContent(22,1.207884);
   hdata__516->SetBinContent(23,0.7985249);
   hdata__516->SetBinContent(24,3.604552);
   hdata__516->SetBinContent(25,3.195325);
   hdata__516->SetBinContent(26,2.828498);
   hdata__516->SetBinContent(27,3.184513);
   hdata__516->SetBinContent(29,2.776937);
   hdata__516->SetBinContent(30,1.793088);
   hdata__516->SetBinContent(31,15);
   hdata__516->SetBinError(2,0.02811178);
   hdata__516->SetBinError(3,0.03837355);
   hdata__516->SetBinError(4,0.05448027);
   hdata__516->SetBinError(5,0.06382071);
   hdata__516->SetBinError(6,0.06854024);
   hdata__516->SetBinError(7,0.0906654);
   hdata__516->SetBinError(8,0.1059535);
   hdata__516->SetBinError(9,0.1491793);
   hdata__516->SetBinError(10,0.1092499);
   hdata__516->SetBinError(11,0.1752191);
   hdata__516->SetBinError(12,0.1821635);
   hdata__516->SetBinError(13,0.2121673);
   hdata__516->SetBinError(14,0.2459838);
   hdata__516->SetBinError(15,0.2427369);
   hdata__516->SetBinError(16,0.2607534);
   hdata__516->SetBinError(17,0.2563831);
   hdata__516->SetBinError(18,0.2342347);
   hdata__516->SetBinError(19,0.3650858);
   hdata__516->SetBinError(20,0.3044232);
   hdata__516->SetBinError(21,0.9523266);
   hdata__516->SetBinError(22,0.8541027);
   hdata__516->SetBinError(23,0.3259964);
   hdata__516->SetBinError(24,1.471552);
   hdata__516->SetBinError(25,1.597662);
   hdata__516->SetBinError(26,1.633034);
   hdata__516->SetBinError(27,1.592257);
   hdata__516->SetBinError(29,1.603265);
   hdata__516->SetBinError(30,1.793088);
   hdata__516->SetBinError(31,3.872983);
   hdata__516->SetEntries(22239);
   hdata__516->SetStats(0);
   hdata__516->SetLineWidth(3);
   hdata__516->SetMarkerStyle(8);
   hdata__516->SetMarkerSize(1.3);
   hdata__516->GetYaxis()->SetTitle("data/MC");
   hdata__516->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
