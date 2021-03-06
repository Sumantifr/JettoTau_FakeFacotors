void CR_Wjets_loose_mvis_rat2()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Wed Dec  2 15:57:28 2020) by ROOT version6.06/01
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
   c1_1->Range(-69.23077,2457.159,507.6923,27927.79);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetTopMargin(0.08);
   c1_1->SetBottomMargin(0.046);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   Double_t xAxis40[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__37 = new TH1D("hh_l_mvis__37","",19, xAxis40);
   hh_l_mvis__37->SetBinContent(1,6697);
   hh_l_mvis__37->SetBinContent(2,9347);
   hh_l_mvis__37->SetBinContent(3,12947);
   hh_l_mvis__37->SetBinContent(4,16429);
   hh_l_mvis__37->SetBinContent(5,19643);
   hh_l_mvis__37->SetBinContent(6,21860);
   hh_l_mvis__37->SetBinContent(7,24189);
   hh_l_mvis__37->SetBinContent(8,24673);
   hh_l_mvis__37->SetBinContent(9,22605);
   hh_l_mvis__37->SetBinContent(10,18291);
   hh_l_mvis__37->SetBinContent(11,14642);
   hh_l_mvis__37->SetBinContent(12,11376);
   hh_l_mvis__37->SetBinContent(13,9165);
   hh_l_mvis__37->SetBinContent(14,7097);
   hh_l_mvis__37->SetBinContent(15,5782);
   hh_l_mvis__37->SetBinContent(16,4707);
   hh_l_mvis__37->SetBinContent(17,6883);
   hh_l_mvis__37->SetBinContent(18,9148);
   hh_l_mvis__37->SetBinContent(19,6362);
   hh_l_mvis__37->SetBinContent(20,412);
   hh_l_mvis__37->SetBinError(1,81.8352);
   hh_l_mvis__37->SetBinError(2,96.67988);
   hh_l_mvis__37->SetBinError(3,113.7849);
   hh_l_mvis__37->SetBinError(4,128.1757);
   hh_l_mvis__37->SetBinError(5,140.1535);
   hh_l_mvis__37->SetBinError(6,147.8513);
   hh_l_mvis__37->SetBinError(7,155.5281);
   hh_l_mvis__37->SetBinError(8,157.0764);
   hh_l_mvis__37->SetBinError(9,150.3496);
   hh_l_mvis__37->SetBinError(10,135.2442);
   hh_l_mvis__37->SetBinError(11,121.0041);
   hh_l_mvis__37->SetBinError(12,106.6583);
   hh_l_mvis__37->SetBinError(13,95.73401);
   hh_l_mvis__37->SetBinError(14,84.24369);
   hh_l_mvis__37->SetBinError(15,76.03946);
   hh_l_mvis__37->SetBinError(16,68.60758);
   hh_l_mvis__37->SetBinError(17,82.96385);
   hh_l_mvis__37->SetBinError(18,95.64518);
   hh_l_mvis__37->SetBinError(19,79.76215);
   hh_l_mvis__37->SetBinError(20,20.29778);
   hh_l_mvis__37->SetEntries(252255);
   hh_l_mvis__37->SetStats(0);
   hh_l_mvis__37->SetLineWidth(3);
   hh_l_mvis__37->SetMarkerStyle(8);
   hh_l_mvis__37->SetMarkerSize(1.3);
   hh_l_mvis__37->GetXaxis()->SetLabelSize(0);
   hh_l_mvis__37->GetYaxis()->SetTitle("Events / 30 GeV");
   hh_l_mvis__37->GetYaxis()->SetLabelSize(0.064);
   hh_l_mvis__37->GetYaxis()->SetTitleSize(0.064);
   hh_l_mvis__37->GetYaxis()->SetTitleOffset(0.91);
   hh_l_mvis__37->Draw("");
   
   THStack *w = new THStack();
   w->SetName("w");
   w->SetTitle("");
   w->SetMaximum(32074.9);
   Double_t xAxis41[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1F *w_stack_4 = new TH1F("w_stack_4","",19, xAxis41);
   w_stack_4->SetMinimum(0);
   w_stack_4->SetMaximum(33678.65);
   w_stack_4->SetDirectory(0);
   w_stack_4->SetStats(0);
   w->SetHistogram(w_stack_4);
   
   Double_t xAxis42[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__38 = new TH1D("hh_l_mvis__38","",19, xAxis42);
   hh_l_mvis__38->SetBinContent(1,5161.743);
   hh_l_mvis__38->SetBinContent(2,6874.297);
   hh_l_mvis__38->SetBinContent(3,9392.162);
   hh_l_mvis__38->SetBinContent(4,11719.86);
   hh_l_mvis__38->SetBinContent(5,13975.67);
   hh_l_mvis__38->SetBinContent(6,15635.2);
   hh_l_mvis__38->SetBinContent(7,16361.66);
   hh_l_mvis__38->SetBinContent(8,17307.63);
   hh_l_mvis__38->SetBinContent(9,15411.92);
   hh_l_mvis__38->SetBinContent(10,12386.86);
   hh_l_mvis__38->SetBinContent(11,9623.031);
   hh_l_mvis__38->SetBinContent(12,7790.975);
   hh_l_mvis__38->SetBinContent(13,6124.566);
   hh_l_mvis__38->SetBinContent(14,4931.947);
   hh_l_mvis__38->SetBinContent(15,3695.747);
   hh_l_mvis__38->SetBinContent(16,2865.779);
   hh_l_mvis__38->SetBinContent(17,3955.503);
   hh_l_mvis__38->SetBinContent(18,5408.432);
   hh_l_mvis__38->SetBinContent(19,3497.364);
   hh_l_mvis__38->SetBinContent(20,327.2555);
   hh_l_mvis__38->SetBinError(1,164.2319);
   hh_l_mvis__38->SetBinError(2,183.7467);
   hh_l_mvis__38->SetBinError(3,210.7416);
   hh_l_mvis__38->SetBinError(4,255.5064);
   hh_l_mvis__38->SetBinError(5,270.6774);
   hh_l_mvis__38->SetBinError(6,284.2909);
   hh_l_mvis__38->SetBinError(7,282.1178);
   hh_l_mvis__38->SetBinError(8,308.4406);
   hh_l_mvis__38->SetBinError(9,275.5099);
   hh_l_mvis__38->SetBinError(10,246.6442);
   hh_l_mvis__38->SetBinError(11,211.5257);
   hh_l_mvis__38->SetBinError(12,196.9687);
   hh_l_mvis__38->SetBinError(13,178.0738);
   hh_l_mvis__38->SetBinError(14,167.6989);
   hh_l_mvis__38->SetBinError(15,143.278);
   hh_l_mvis__38->SetBinError(16,112.8906);
   hh_l_mvis__38->SetBinError(17,131.8772);
   hh_l_mvis__38->SetBinError(18,156.5046);
   hh_l_mvis__38->SetBinError(19,118.3761);
   hh_l_mvis__38->SetBinError(20,31.58307);
   hh_l_mvis__38->SetEntries(59043);
   hh_l_mvis__38->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mvis__38->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis43[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__39 = new TH1D("hh_l_mvis__39","",19, xAxis43);
   hh_l_mvis__39->SetBinContent(1,148.6039);
   hh_l_mvis__39->SetBinContent(2,215.5796);
   hh_l_mvis__39->SetBinContent(3,301.1087);
   hh_l_mvis__39->SetBinContent(4,418.8079);
   hh_l_mvis__39->SetBinContent(5,547.6046);
   hh_l_mvis__39->SetBinContent(6,619.8913);
   hh_l_mvis__39->SetBinContent(7,657.554);
   hh_l_mvis__39->SetBinContent(8,560.0625);
   hh_l_mvis__39->SetBinContent(9,466.1496);
   hh_l_mvis__39->SetBinContent(10,348.8154);
   hh_l_mvis__39->SetBinContent(11,240.1329);
   hh_l_mvis__39->SetBinContent(12,197.9887);
   hh_l_mvis__39->SetBinContent(13,164.4154);
   hh_l_mvis__39->SetBinContent(14,135.955);
   hh_l_mvis__39->SetBinContent(15,117.3094);
   hh_l_mvis__39->SetBinContent(16,102.6178);
   hh_l_mvis__39->SetBinContent(17,133.7017);
   hh_l_mvis__39->SetBinContent(18,204.8508);
   hh_l_mvis__39->SetBinContent(19,139.0821);
   hh_l_mvis__39->SetBinContent(20,12.39228);
   hh_l_mvis__39->SetBinError(1,7.594018);
   hh_l_mvis__39->SetBinError(2,9.106001);
   hh_l_mvis__39->SetBinError(3,10.80855);
   hh_l_mvis__39->SetBinError(4,12.70234);
   hh_l_mvis__39->SetBinError(5,14.48645);
   hh_l_mvis__39->SetBinError(6,15.38718);
   hh_l_mvis__39->SetBinError(7,15.91597);
   hh_l_mvis__39->SetBinError(8,14.66662);
   hh_l_mvis__39->SetBinError(9,13.41265);
   hh_l_mvis__39->SetBinError(10,11.57831);
   hh_l_mvis__39->SetBinError(11,9.608926);
   hh_l_mvis__39->SetBinError(12,8.657471);
   hh_l_mvis__39->SetBinError(13,7.910412);
   hh_l_mvis__39->SetBinError(14,7.15127);
   hh_l_mvis__39->SetBinError(15,6.71348);
   hh_l_mvis__39->SetBinError(16,6.193992);
   hh_l_mvis__39->SetBinError(17,7.080728);
   hh_l_mvis__39->SetBinError(18,8.779849);
   hh_l_mvis__39->SetBinError(19,7.073954);
   hh_l_mvis__39->SetBinError(20,2.099212);
   hh_l_mvis__39->SetEntries(17729);
   hh_l_mvis__39->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mvis__39->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis44[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__40 = new TH1D("hh_l_mvis__40","",19, xAxis44);
   hh_l_mvis__40->SetBinContent(1,5.22275);
   hh_l_mvis__40->SetBinContent(2,9.955279);
   hh_l_mvis__40->SetBinContent(3,14.45868);
   hh_l_mvis__40->SetBinContent(4,20.16429);
   hh_l_mvis__40->SetBinContent(5,26.55939);
   hh_l_mvis__40->SetBinContent(6,27.93096);
   hh_l_mvis__40->SetBinContent(7,28.83639);
   hh_l_mvis__40->SetBinContent(8,34.52506);
   hh_l_mvis__40->SetBinContent(9,39.33637);
   hh_l_mvis__40->SetBinContent(10,32.32379);
   hh_l_mvis__40->SetBinContent(11,28.91248);
   hh_l_mvis__40->SetBinContent(12,22.62973);
   hh_l_mvis__40->SetBinContent(13,17.60922);
   hh_l_mvis__40->SetBinContent(14,15.17743);
   hh_l_mvis__40->SetBinContent(15,16.45438);
   hh_l_mvis__40->SetBinContent(16,8.515816);
   hh_l_mvis__40->SetBinContent(17,15.68529);
   hh_l_mvis__40->SetBinContent(18,25.69857);
   hh_l_mvis__40->SetBinContent(19,17.7978);
   hh_l_mvis__40->SetBinContent(20,2.413502);
   hh_l_mvis__40->SetBinError(1,1.478702);
   hh_l_mvis__40->SetBinError(2,2.038074);
   hh_l_mvis__40->SetBinError(3,2.439618);
   hh_l_mvis__40->SetBinError(4,2.937675);
   hh_l_mvis__40->SetBinError(5,3.282798);
   hh_l_mvis__40->SetBinError(6,3.414955);
   hh_l_mvis__40->SetBinError(7,3.443964);
   hh_l_mvis__40->SetBinError(8,3.749651);
   hh_l_mvis__40->SetBinError(9,4.032647);
   hh_l_mvis__40->SetBinError(10,3.648608);
   hh_l_mvis__40->SetBinError(11,3.470305);
   hh_l_mvis__40->SetBinError(12,3.304273);
   hh_l_mvis__40->SetBinError(13,2.687998);
   hh_l_mvis__40->SetBinError(14,2.39337);
   hh_l_mvis__40->SetBinError(15,2.640612);
   hh_l_mvis__40->SetBinError(16,1.810038);
   hh_l_mvis__40->SetBinError(17,2.466186);
   hh_l_mvis__40->SetBinError(18,3.195497);
   hh_l_mvis__40->SetBinError(19,2.629621);
   hh_l_mvis__40->SetBinError(20,0.9959761);
   hh_l_mvis__40->SetEntries(1215);
   hh_l_mvis__40->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mvis__40->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis45[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__41 = new TH1D("hh_l_mvis__41","",19, xAxis45);
   hh_l_mvis__41->SetBinContent(1,116.9122);
   hh_l_mvis__41->SetBinContent(2,197.082);
   hh_l_mvis__41->SetBinContent(3,220.5738);
   hh_l_mvis__41->SetBinContent(4,248.4453);
   hh_l_mvis__41->SetBinContent(5,338.5343);
   hh_l_mvis__41->SetBinContent(6,389.7123);
   hh_l_mvis__41->SetBinContent(7,456.3411);
   hh_l_mvis__41->SetBinContent(8,473.2895);
   hh_l_mvis__41->SetBinContent(9,435.563);
   hh_l_mvis__41->SetBinContent(10,489.8189);
   hh_l_mvis__41->SetBinContent(11,326.3323);
   hh_l_mvis__41->SetBinContent(12,197.9228);
   hh_l_mvis__41->SetBinContent(13,150.5485);
   hh_l_mvis__41->SetBinContent(14,150.1419);
   hh_l_mvis__41->SetBinContent(15,104.7143);
   hh_l_mvis__41->SetBinContent(16,88.81522);
   hh_l_mvis__41->SetBinContent(17,145.9261);
   hh_l_mvis__41->SetBinContent(18,202.1088);
   hh_l_mvis__41->SetBinContent(19,164.1344);
   hh_l_mvis__41->SetBinContent(20,13.48981);
   hh_l_mvis__41->SetBinError(1,14.09331);
   hh_l_mvis__41->SetBinError(2,36.56091);
   hh_l_mvis__41->SetBinError(3,22.10445);
   hh_l_mvis__41->SetBinError(4,30.63752);
   hh_l_mvis__41->SetBinError(5,48.4854);
   hh_l_mvis__41->SetBinError(6,53.2654);
   hh_l_mvis__41->SetBinError(7,54.99749);
   hh_l_mvis__41->SetBinError(8,55.80876);
   hh_l_mvis__41->SetBinError(9,42.38906);
   hh_l_mvis__41->SetBinError(10,67.87661);
   hh_l_mvis__41->SetBinError(11,51.50313);
   hh_l_mvis__41->SetBinError(12,13.12329);
   hh_l_mvis__41->SetBinError(13,11.54177);
   hh_l_mvis__41->SetBinError(14,28.55606);
   hh_l_mvis__41->SetBinError(15,11.46661);
   hh_l_mvis__41->SetBinError(16,8.723444);
   hh_l_mvis__41->SetBinError(17,28.29975);
   hh_l_mvis__41->SetBinError(18,26.15029);
   hh_l_mvis__41->SetBinError(19,11.86596);
   hh_l_mvis__41->SetBinError(20,2.9474);
   hh_l_mvis__41->SetEntries(6237);
   hh_l_mvis__41->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mvis__41->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis46[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__42 = new TH1D("hh_l_mvis__42","",19, xAxis46);
   hh_l_mvis__42->SetBinContent(4,0.3855558);
   hh_l_mvis__42->SetBinContent(5,1.466659);
   hh_l_mvis__42->SetBinContent(6,0.01455108);
   hh_l_mvis__42->SetBinContent(7,20.15985);
   hh_l_mvis__42->SetBinContent(8,16.70761);
   hh_l_mvis__42->SetBinContent(9,3.295324);
   hh_l_mvis__42->SetBinContent(11,0.03470756);
   hh_l_mvis__42->SetBinContent(12,0.3339271);
   hh_l_mvis__42->SetBinError(4,0.3855558);
   hh_l_mvis__42->SetBinError(5,1.06494);
   hh_l_mvis__42->SetBinError(6,0.01455108);
   hh_l_mvis__42->SetBinError(7,10.94805);
   hh_l_mvis__42->SetBinError(8,5.602673);
   hh_l_mvis__42->SetBinError(9,2.634282);
   hh_l_mvis__42->SetBinError(11,0.03470756);
   hh_l_mvis__42->SetBinError(12,0.3217716);
   hh_l_mvis__42->SetEntries(45);
   hh_l_mvis__42->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mvis__42->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis47[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__43 = new TH1D("hh_l_mvis__43","",19, xAxis47);
   hh_l_mvis__43->SetBinContent(1,88.15676);
   hh_l_mvis__43->SetBinContent(2,141.8659);
   hh_l_mvis__43->SetBinContent(3,196.5998);
   hh_l_mvis__43->SetBinContent(4,257.6514);
   hh_l_mvis__43->SetBinContent(5,341.2063);
   hh_l_mvis__43->SetBinContent(6,431.6572);
   hh_l_mvis__43->SetBinContent(7,420.435);
   hh_l_mvis__43->SetBinContent(8,360.5591);
   hh_l_mvis__43->SetBinContent(9,306.7563);
   hh_l_mvis__43->SetBinContent(10,210.1861);
   hh_l_mvis__43->SetBinContent(11,187.1387);
   hh_l_mvis__43->SetBinContent(12,132.0335);
   hh_l_mvis__43->SetBinContent(13,113.0229);
   hh_l_mvis__43->SetBinContent(14,84.05864);
   hh_l_mvis__43->SetBinContent(15,70.19594);
   hh_l_mvis__43->SetBinContent(16,65.18219);
   hh_l_mvis__43->SetBinContent(17,94.61777);
   hh_l_mvis__43->SetBinContent(18,128.8732);
   hh_l_mvis__43->SetBinContent(19,109.0067);
   hh_l_mvis__43->SetBinContent(20,11.09776);
   hh_l_mvis__43->SetBinError(1,7.357716);
   hh_l_mvis__43->SetBinError(2,9.506144);
   hh_l_mvis__43->SetBinError(3,11.44024);
   hh_l_mvis__43->SetBinError(4,13.16764);
   hh_l_mvis__43->SetBinError(5,15.39131);
   hh_l_mvis__43->SetBinError(6,17.35604);
   hh_l_mvis__43->SetBinError(7,17.38579);
   hh_l_mvis__43->SetBinError(8,15.66735);
   hh_l_mvis__43->SetBinError(9,14.34622);
   hh_l_mvis__43->SetBinError(10,11.63748);
   hh_l_mvis__43->SetBinError(11,10.65242);
   hh_l_mvis__43->SetBinError(12,8.864587);
   hh_l_mvis__43->SetBinError(13,8.307733);
   hh_l_mvis__43->SetBinError(14,6.848636);
   hh_l_mvis__43->SetBinError(15,6.309102);
   hh_l_mvis__43->SetBinError(16,6.488598);
   hh_l_mvis__43->SetBinError(17,7.37508);
   hh_l_mvis__43->SetBinError(18,8.736695);
   hh_l_mvis__43->SetBinError(19,8.238059);
   hh_l_mvis__43->SetBinError(20,2.667002);
   hh_l_mvis__43->SetEntries(9406);
   hh_l_mvis__43->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mvis__43->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis48[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__44 = new TH1D("hh_l_mvis__44","",19, xAxis48);
   hh_l_mvis__44->SetBinContent(1,2.561919);
   hh_l_mvis__44->SetBinContent(2,6.324481);
   hh_l_mvis__44->SetBinContent(3,6.176719);
   hh_l_mvis__44->SetBinContent(4,11.2365);
   hh_l_mvis__44->SetBinContent(5,12.65917);
   hh_l_mvis__44->SetBinContent(6,14.11282);
   hh_l_mvis__44->SetBinContent(7,14.24547);
   hh_l_mvis__44->SetBinContent(8,19.46349);
   hh_l_mvis__44->SetBinContent(9,21.45154);
   hh_l_mvis__44->SetBinContent(10,15.10883);
   hh_l_mvis__44->SetBinContent(11,20.81558);
   hh_l_mvis__44->SetBinContent(12,11.39176);
   hh_l_mvis__44->SetBinContent(13,11.6139);
   hh_l_mvis__44->SetBinContent(14,7.479747);
   hh_l_mvis__44->SetBinContent(15,8.294699);
   hh_l_mvis__44->SetBinContent(16,6.178795);
   hh_l_mvis__44->SetBinContent(17,7.622185);
   hh_l_mvis__44->SetBinContent(18,15.36802);
   hh_l_mvis__44->SetBinContent(19,13.50218);
   hh_l_mvis__44->SetBinContent(20,1.501957);
   hh_l_mvis__44->SetBinError(1,0.9177794);
   hh_l_mvis__44->SetBinError(2,1.91322);
   hh_l_mvis__44->SetBinError(3,1.704759);
   hh_l_mvis__44->SetBinError(4,2.398677);
   hh_l_mvis__44->SetBinError(5,2.47101);
   hh_l_mvis__44->SetBinError(6,2.648687);
   hh_l_mvis__44->SetBinError(7,2.623109);
   hh_l_mvis__44->SetBinError(8,3.137994);
   hh_l_mvis__44->SetBinError(9,3.238874);
   hh_l_mvis__44->SetBinError(10,2.656239);
   hh_l_mvis__44->SetBinError(11,3.278522);
   hh_l_mvis__44->SetBinError(12,2.355752);
   hh_l_mvis__44->SetBinError(13,2.530285);
   hh_l_mvis__44->SetBinError(14,1.864399);
   hh_l_mvis__44->SetBinError(15,1.949315);
   hh_l_mvis__44->SetBinError(16,1.77972);
   hh_l_mvis__44->SetBinError(17,1.99687);
   hh_l_mvis__44->SetBinError(18,2.741822);
   hh_l_mvis__44->SetBinError(19,2.677407);
   hh_l_mvis__44->SetBinError(20,0.8879773);
   hh_l_mvis__44->SetEntries(729);
   hh_l_mvis__44->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mvis__44->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis49[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__45 = new TH1D("hh_l_mvis__45","",19, xAxis49);
   hh_l_mvis__45->SetBinContent(1,2.253455);
   hh_l_mvis__45->SetBinContent(2,5.931573);
   hh_l_mvis__45->SetBinContent(3,15.03286);
   hh_l_mvis__45->SetBinContent(4,42.71537);
   hh_l_mvis__45->SetBinContent(5,100.0614);
   hh_l_mvis__45->SetBinContent(6,100.6481);
   hh_l_mvis__45->SetBinContent(7,38.8775);
   hh_l_mvis__45->SetBinContent(8,15.16618);
   hh_l_mvis__45->SetBinContent(9,11.53272);
   hh_l_mvis__45->SetBinContent(10,11.53848);
   hh_l_mvis__45->SetBinContent(11,7.930578);
   hh_l_mvis__45->SetBinContent(12,6.893928);
   hh_l_mvis__45->SetBinContent(13,2.783021);
   hh_l_mvis__45->SetBinContent(14,3.809254);
   hh_l_mvis__45->SetBinContent(15,3.406463);
   hh_l_mvis__45->SetBinContent(16,2.705488);
   hh_l_mvis__45->SetBinContent(17,2.971068);
   hh_l_mvis__45->SetBinContent(18,2.905897);
   hh_l_mvis__45->SetBinContent(19,2.818803);
   hh_l_mvis__45->SetBinError(1,0.4407384);
   hh_l_mvis__45->SetBinError(2,0.8159984);
   hh_l_mvis__45->SetBinError(3,1.364685);
   hh_l_mvis__45->SetBinError(4,2.092557);
   hh_l_mvis__45->SetBinError(5,3.055962);
   hh_l_mvis__45->SetBinError(6,2.965284);
   hh_l_mvis__45->SetBinError(7,1.933852);
   hh_l_mvis__45->SetBinError(8,1.394286);
   hh_l_mvis__45->SetBinError(9,1.266653);
   hh_l_mvis__45->SetBinError(10,1.324776);
   hh_l_mvis__45->SetBinError(11,1.091887);
   hh_l_mvis__45->SetBinError(12,1.063224);
   hh_l_mvis__45->SetBinError(13,0.6696046);
   hh_l_mvis__45->SetBinError(14,0.8268887);
   hh_l_mvis__45->SetBinError(15,0.7839906);
   hh_l_mvis__45->SetBinError(16,0.6978611);
   hh_l_mvis__45->SetBinError(17,0.7247647);
   hh_l_mvis__45->SetBinError(18,0.7129191);
   hh_l_mvis__45->SetBinError(19,0.7179257);
   hh_l_mvis__45->SetEntries(4289);
   hh_l_mvis__45->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mvis__45->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   w->Draw("same");
   Double_t xAxis50[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__46 = new TH1D("hh_l_mvis__46","",19, xAxis50);
   hh_l_mvis__46->SetBinContent(1,5525.454);
   hh_l_mvis__46->SetBinContent(2,7451.036);
   hh_l_mvis__46->SetBinContent(3,10146.11);
   hh_l_mvis__46->SetBinContent(4,12719.27);
   hh_l_mvis__46->SetBinContent(5,15343.76);
   hh_l_mvis__46->SetBinContent(6,17219.17);
   hh_l_mvis__46->SetBinContent(7,17998.11);
   hh_l_mvis__46->SetBinContent(8,18787.4);
   hh_l_mvis__46->SetBinContent(9,16696);
   hh_l_mvis__46->SetBinContent(10,13494.65);
   hh_l_mvis__46->SetBinContent(11,10434.33);
   hh_l_mvis__46->SetBinContent(12,8360.169);
   hh_l_mvis__46->SetBinContent(13,6584.559);
   hh_l_mvis__46->SetBinContent(14,5328.569);
   hh_l_mvis__46->SetBinContent(15,4016.122);
   hh_l_mvis__46->SetBinContent(16,3139.794);
   hh_l_mvis__46->SetBinContent(17,4356.027);
   hh_l_mvis__46->SetBinContent(18,5988.237);
   hh_l_mvis__46->SetBinContent(19,3943.706);
   hh_l_mvis__46->SetBinContent(20,368.1508);
   hh_l_mvis__46->SetBinError(1,165.184);
   hh_l_mvis__46->SetBinError(2,187.8332);
   hh_l_mvis__46->SetBinError(3,212.5066);
   hh_l_mvis__46->SetBinError(4,258.023);
   hh_l_mvis__46->SetBinError(5,275.8464);
   hh_l_mvis__46->SetBinError(6,290.2137);
   hh_l_mvis__46->SetBinError(7,288.6401);
   hh_l_mvis__46->SetBinError(8,314.2738);
   hh_l_mvis__46->SetBinError(9,279.5059);
   hh_l_mvis__46->SetBinError(10,256.383);
   hh_l_mvis__46->SetBinError(11,218.2327);
   hh_l_mvis__46->SetBinError(12,197.8386);
   hh_l_mvis__46->SetBinError(13,178.8551);
   hh_l_mvis__46->SetBinError(14,170.4297);
   hh_l_mvis__46->SetBinError(15,144.0706);
   hh_l_mvis__46->SetBinError(16,113.6124);
   hh_l_mvis__46->SetBinError(17,135.3056);
   hh_l_mvis__46->SetBinError(18,159.2142);
   hh_l_mvis__46->SetBinError(19,119.5249);
   hh_l_mvis__46->SetBinError(20,31.92926);
   hh_l_mvis__46->SetMaximum(32074.9);
   hh_l_mvis__46->SetEntries(98693);
   hh_l_mvis__46->SetStats(0);
   hh_l_mvis__46->SetFillColor(1);
   hh_l_mvis__46->SetFillStyle(3013);
   hh_l_mvis__46->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hh_l_mvis__46->Draw("e2 same");
   
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
   Double_t xAxis51[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hmc__47 = new TH1D("hmc__47","",19, xAxis51);
   hmc__47->SetBinContent(0,1);
   hmc__47->SetBinContent(1,1);
   hmc__47->SetBinContent(2,1);
   hmc__47->SetBinContent(3,1);
   hmc__47->SetBinContent(4,1);
   hmc__47->SetBinContent(5,1);
   hmc__47->SetBinContent(6,1);
   hmc__47->SetBinContent(7,1);
   hmc__47->SetBinContent(8,1);
   hmc__47->SetBinContent(9,1);
   hmc__47->SetBinContent(10,1);
   hmc__47->SetBinContent(11,1);
   hmc__47->SetBinContent(12,1);
   hmc__47->SetBinContent(13,1);
   hmc__47->SetBinContent(14,1);
   hmc__47->SetBinContent(15,1);
   hmc__47->SetBinContent(16,1);
   hmc__47->SetBinContent(17,1);
   hmc__47->SetBinContent(18,1);
   hmc__47->SetBinContent(19,1);
   hmc__47->SetBinContent(20,368.1508);
   hmc__47->SetBinError(1,0.0298951);
   hmc__47->SetBinError(2,0.02520901);
   hmc__47->SetBinError(3,0.02094463);
   hmc__47->SetBinError(4,0.02028599);
   hmc__47->SetBinError(5,0.01797776);
   hmc__47->SetBinError(6,0.01685411);
   hmc__47->SetBinError(7,0.01603724);
   hmc__47->SetBinError(8,0.0167279);
   hmc__47->SetBinError(9,0.01674089);
   hmc__47->SetBinError(10,0.01899885);
   hmc__47->SetBinError(11,0.02091487);
   hmc__47->SetBinError(12,0.02366442);
   hmc__47->SetBinError(13,0.02716281);
   hmc__47->SetBinError(14,0.03198415);
   hmc__47->SetBinError(15,0.03587306);
   hmc__47->SetBinError(16,0.03618466);
   hmc__47->SetBinError(17,0.03106169);
   hmc__47->SetBinError(18,0.02658783);
   hmc__47->SetBinError(19,0.03030777);
   hmc__47->SetBinError(20,31.92926);
   hmc__47->SetMinimum(0.5);
   hmc__47->SetMaximum(1.5);
   hmc__47->SetEntries(98713);
   hmc__47->SetStats(0);
   hmc__47->SetFillColor(1);
   hmc__47->SetFillStyle(3013);
   hmc__47->GetXaxis()->SetTitle("m_{vis} (GeV)");
   hmc__47->GetXaxis()->SetLabelSize(0.12);
   hmc__47->GetXaxis()->SetTitleSize(0.12);
   hmc__47->GetYaxis()->SetTitle("data/MC");
   hmc__47->GetYaxis()->CenterTitle(true);
   hmc__47->GetYaxis()->SetNdivisions(306);
   hmc__47->GetYaxis()->SetLabelSize(0.12);
   hmc__47->GetYaxis()->SetTitleSize(0.12);
   hmc__47->GetYaxis()->SetTitleOffset(0.5);
   hmc__47->Draw("e2");
   Double_t xAxis52[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hdata__48 = new TH1D("hdata__48","",19, xAxis52);
   hdata__48->SetBinContent(1,1.212027);
   hdata__48->SetBinContent(2,1.254456);
   hdata__48->SetBinContent(3,1.276055);
   hdata__48->SetBinContent(4,1.291662);
   hdata__48->SetBinContent(5,1.280195);
   hdata__48->SetBinContent(6,1.269515);
   hdata__48->SetBinContent(7,1.343975);
   hdata__48->SetBinContent(8,1.313274);
   hdata__48->SetBinContent(9,1.353917);
   hdata__48->SetBinContent(10,1.355426);
   hdata__48->SetBinContent(11,1.403253);
   hdata__48->SetBinContent(12,1.360738);
   hdata__48->SetBinContent(13,1.391893);
   hdata__48->SetBinContent(14,1.331877);
   hdata__48->SetBinContent(15,1.439697);
   hdata__48->SetBinContent(16,1.499143);
   hdata__48->SetBinContent(17,1.58011);
   hdata__48->SetBinContent(18,1.527662);
   hdata__48->SetBinContent(19,1.613203);
   hdata__48->SetBinContent(20,412);
   hdata__48->SetBinError(1,0.01481058);
   hdata__48->SetBinError(2,0.01297536);
   hdata__48->SetBinError(3,0.01121463);
   hdata__48->SetBinError(4,0.01007728);
   hdata__48->SetBinError(5,0.009134235);
   hdata__48->SetBinError(6,0.008586435);
   hdata__48->SetBinError(7,0.00864136);
   hdata__48->SetBinError(8,0.008360732);
   hdata__48->SetBinError(9,0.009005125);
   hdata__48->SetBinError(10,0.01002206);
   hdata__48->SetBinError(11,0.01159673);
   hdata__48->SetBinError(12,0.01275792);
   hdata__48->SetBinError(13,0.01453917);
   hdata__48->SetBinError(14,0.01580982);
   hdata__48->SetBinError(15,0.01893356);
   hdata__48->SetBinError(16,0.02185098);
   hdata__48->SetBinError(17,0.01904576);
   hdata__48->SetBinError(18,0.01597218);
   hdata__48->SetBinError(19,0.02022517);
   hdata__48->SetBinError(20,20.29778);
   hdata__48->SetEntries(252275);
   hdata__48->SetStats(0);
   hdata__48->SetLineWidth(3);
   hdata__48->SetMarkerStyle(8);
   hdata__48->SetMarkerSize(1.3);
   hdata__48->GetYaxis()->SetTitle("data/MC");
   hdata__48->Draw("same");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
