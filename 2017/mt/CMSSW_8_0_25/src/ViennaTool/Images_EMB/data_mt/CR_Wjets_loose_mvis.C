void CR_Wjets_loose_mvis()
{
//=========Macro generated from canvas: c1/Stacked Histograms of all Backgrounds vs Data
//=========  (Thu Dec  3 17:52:24 2020) by ROOT version6.06/01
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
   c1_1->Range(-69.23077,6353.823,507.6923,68042.01);
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
   hh_l_mvis__37->SetBinContent(1,17141);
   hh_l_mvis__37->SetBinContent(2,22760);
   hh_l_mvis__37->SetBinContent(3,31225);
   hh_l_mvis__37->SetBinContent(4,39216);
   hh_l_mvis__37->SetBinContent(5,47481);
   hh_l_mvis__37->SetBinContent(6,53458);
   hh_l_mvis__37->SetBinContent(7,59694);
   hh_l_mvis__37->SetBinContent(8,60294);
   hh_l_mvis__37->SetBinContent(9,54515);
   hh_l_mvis__37->SetBinContent(10,44705);
   hh_l_mvis__37->SetBinContent(11,35729);
   hh_l_mvis__37->SetBinContent(12,28177);
   hh_l_mvis__37->SetBinContent(13,22606);
   hh_l_mvis__37->SetBinContent(14,17867);
   hh_l_mvis__37->SetBinContent(15,14416);
   hh_l_mvis__37->SetBinContent(16,11745);
   hh_l_mvis__37->SetBinContent(17,17001);
   hh_l_mvis__37->SetBinContent(18,22441);
   hh_l_mvis__37->SetBinContent(19,16161);
   hh_l_mvis__37->SetBinContent(20,1350);
   hh_l_mvis__37->SetBinError(1,130.9236);
   hh_l_mvis__37->SetBinError(2,150.8642);
   hh_l_mvis__37->SetBinError(3,176.706);
   hh_l_mvis__37->SetBinError(4,198.0303);
   hh_l_mvis__37->SetBinError(5,217.9014);
   hh_l_mvis__37->SetBinError(6,231.2099);
   hh_l_mvis__37->SetBinError(7,244.3236);
   hh_l_mvis__37->SetBinError(8,245.5484);
   hh_l_mvis__37->SetBinError(9,233.4845);
   hh_l_mvis__37->SetBinError(10,211.4356);
   hh_l_mvis__37->SetBinError(11,189.0212);
   hh_l_mvis__37->SetBinError(12,167.8601);
   hh_l_mvis__37->SetBinError(13,150.3529);
   hh_l_mvis__37->SetBinError(14,133.6675);
   hh_l_mvis__37->SetBinError(15,120.0666);
   hh_l_mvis__37->SetBinError(16,108.3744);
   hh_l_mvis__37->SetBinError(17,130.3879);
   hh_l_mvis__37->SetBinError(18,149.8032);
   hh_l_mvis__37->SetBinError(19,127.1259);
   hh_l_mvis__37->SetBinError(20,36.74235);
   hh_l_mvis__37->SetEntries(617982);
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
   w->SetMaximum(78382.2);
   Double_t xAxis41[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1F *w_stack_4 = new TH1F("w_stack_4","",19, xAxis41);
   w_stack_4->SetMinimum(0);
   w_stack_4->SetMaximum(82301.31);
   w_stack_4->SetDirectory(0);
   w_stack_4->SetStats(0);
   w->SetHistogram(w_stack_4);
   
   Double_t xAxis42[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__38 = new TH1D("hh_l_mvis__38","",19, xAxis42);
   hh_l_mvis__38->SetBinContent(1,16349.86);
   hh_l_mvis__38->SetBinContent(2,21113.75);
   hh_l_mvis__38->SetBinContent(3,28569.47);
   hh_l_mvis__38->SetBinContent(4,34567.79);
   hh_l_mvis__38->SetBinContent(5,40833.31);
   hh_l_mvis__38->SetBinContent(6,45765.88);
   hh_l_mvis__38->SetBinContent(7,50859.7);
   hh_l_mvis__38->SetBinContent(8,52217.49);
   hh_l_mvis__38->SetBinContent(9,45758.12);
   hh_l_mvis__38->SetBinContent(10,36871.2);
   hh_l_mvis__38->SetBinContent(11,28938.74);
   hh_l_mvis__38->SetBinContent(12,23222.3);
   hh_l_mvis__38->SetBinContent(13,18227.06);
   hh_l_mvis__38->SetBinContent(14,14427.51);
   hh_l_mvis__38->SetBinContent(15,11152.32);
   hh_l_mvis__38->SetBinContent(16,8879.035);
   hh_l_mvis__38->SetBinContent(17,12888.57);
   hh_l_mvis__38->SetBinContent(18,17773.37);
   hh_l_mvis__38->SetBinContent(19,12335.64);
   hh_l_mvis__38->SetBinContent(20,1122.737);
   hh_l_mvis__38->SetBinError(1,297.3271);
   hh_l_mvis__38->SetBinError(2,329.7111);
   hh_l_mvis__38->SetBinError(3,397.5488);
   hh_l_mvis__38->SetBinError(4,446.8306);
   hh_l_mvis__38->SetBinError(5,469.3066);
   hh_l_mvis__38->SetBinError(6,501.3728);
   hh_l_mvis__38->SetBinError(7,523.495);
   hh_l_mvis__38->SetBinError(8,529.3351);
   hh_l_mvis__38->SetBinError(9,482.8238);
   hh_l_mvis__38->SetBinError(10,438.5066);
   hh_l_mvis__38->SetBinError(11,376.0488);
   hh_l_mvis__38->SetBinError(12,338.3871);
   hh_l_mvis__38->SetBinError(13,305.3509);
   hh_l_mvis__38->SetBinError(14,281.2442);
   hh_l_mvis__38->SetBinError(15,237.2164);
   hh_l_mvis__38->SetBinError(16,201.5292);
   hh_l_mvis__38->SetBinError(17,245.2357);
   hh_l_mvis__38->SetBinError(18,281.4953);
   hh_l_mvis__38->SetBinError(19,235.2339);
   hh_l_mvis__38->SetBinError(20,59.40811);
   hh_l_mvis__38->SetEntries(170728);
   hh_l_mvis__38->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hh_l_mvis__38->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis43[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__39 = new TH1D("hh_l_mvis__39","",19, xAxis43);
   hh_l_mvis__39->SetBinContent(1,295.8218);
   hh_l_mvis__39->SetBinContent(2,452.3719);
   hh_l_mvis__39->SetBinContent(3,611.0208);
   hh_l_mvis__39->SetBinContent(4,816.0673);
   hh_l_mvis__39->SetBinContent(5,1103.162);
   hh_l_mvis__39->SetBinContent(6,1257.903);
   hh_l_mvis__39->SetBinContent(7,1365.108);
   hh_l_mvis__39->SetBinContent(8,1265.882);
   hh_l_mvis__39->SetBinContent(9,1086.349);
   hh_l_mvis__39->SetBinContent(10,852.6142);
   hh_l_mvis__39->SetBinContent(11,618.2817);
   hh_l_mvis__39->SetBinContent(12,500.0582);
   hh_l_mvis__39->SetBinContent(13,407.785);
   hh_l_mvis__39->SetBinContent(14,346.2321);
   hh_l_mvis__39->SetBinContent(15,306.824);
   hh_l_mvis__39->SetBinContent(16,253.1216);
   hh_l_mvis__39->SetBinContent(17,377.544);
   hh_l_mvis__39->SetBinContent(18,530.5756);
   hh_l_mvis__39->SetBinContent(19,417.2883);
   hh_l_mvis__39->SetBinContent(20,34.01538);
   hh_l_mvis__39->SetBinError(1,10.65044);
   hh_l_mvis__39->SetBinError(2,13.19018);
   hh_l_mvis__39->SetBinError(3,15.3547);
   hh_l_mvis__39->SetBinError(4,17.72796);
   hh_l_mvis__39->SetBinError(5,20.5519);
   hh_l_mvis__39->SetBinError(6,21.9292);
   hh_l_mvis__39->SetBinError(7,22.9732);
   hh_l_mvis__39->SetBinError(8,22.08175);
   hh_l_mvis__39->SetBinError(9,20.45385);
   hh_l_mvis__39->SetBinError(10,18.02191);
   hh_l_mvis__39->SetBinError(11,15.36129);
   hh_l_mvis__39->SetBinError(12,13.7886);
   hh_l_mvis__39->SetBinError(13,12.47037);
   hh_l_mvis__39->SetBinError(14,11.38467);
   hh_l_mvis__39->SetBinError(15,10.77308);
   hh_l_mvis__39->SetBinError(16,9.713212);
   hh_l_mvis__39->SetBinError(17,11.89197);
   hh_l_mvis__39->SetBinError(18,14.10976);
   hh_l_mvis__39->SetBinError(19,12.37526);
   hh_l_mvis__39->SetBinError(20,3.475235);
   hh_l_mvis__39->SetEntries(39805);
   hh_l_mvis__39->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hh_l_mvis__39->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis44[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__40 = new TH1D("hh_l_mvis__40","",19, xAxis44);
   hh_l_mvis__40->SetBinContent(1,18.98829);
   hh_l_mvis__40->SetBinContent(2,38.19185);
   hh_l_mvis__40->SetBinContent(3,47.78594);
   hh_l_mvis__40->SetBinContent(4,62.5709);
   hh_l_mvis__40->SetBinContent(5,75.54053);
   hh_l_mvis__40->SetBinContent(6,92.87601);
   hh_l_mvis__40->SetBinContent(7,101.1302);
   hh_l_mvis__40->SetBinContent(8,105.3074);
   hh_l_mvis__40->SetBinContent(9,121.7129);
   hh_l_mvis__40->SetBinContent(10,98.00926);
   hh_l_mvis__40->SetBinContent(11,96.77594);
   hh_l_mvis__40->SetBinContent(12,82.57647);
   hh_l_mvis__40->SetBinContent(13,76.84329);
   hh_l_mvis__40->SetBinContent(14,61.8944);
   hh_l_mvis__40->SetBinContent(15,58.98111);
   hh_l_mvis__40->SetBinContent(16,46.02008);
   hh_l_mvis__40->SetBinContent(17,75.40978);
   hh_l_mvis__40->SetBinContent(18,111.1898);
   hh_l_mvis__40->SetBinContent(19,90.09084);
   hh_l_mvis__40->SetBinContent(20,10.5255);
   hh_l_mvis__40->SetBinError(1,2.812429);
   hh_l_mvis__40->SetBinError(2,4.003703);
   hh_l_mvis__40->SetBinError(3,4.467374);
   hh_l_mvis__40->SetBinError(4,5.102797);
   hh_l_mvis__40->SetBinError(5,5.529919);
   hh_l_mvis__40->SetBinError(6,6.186042);
   hh_l_mvis__40->SetBinError(7,6.431377);
   hh_l_mvis__40->SetBinError(8,6.504642);
   hh_l_mvis__40->SetBinError(9,7.072728);
   hh_l_mvis__40->SetBinError(10,6.351955);
   hh_l_mvis__40->SetBinError(11,6.319161);
   hh_l_mvis__40->SetBinError(12,5.878906);
   hh_l_mvis__40->SetBinError(13,5.61825);
   hh_l_mvis__40->SetBinError(14,4.919616);
   hh_l_mvis__40->SetBinError(15,4.870588);
   hh_l_mvis__40->SetBinError(16,4.292334);
   hh_l_mvis__40->SetBinError(17,5.480174);
   hh_l_mvis__40->SetBinError(18,6.770926);
   hh_l_mvis__40->SetBinError(19,5.898185);
   hh_l_mvis__40->SetBinError(20,2.026791);
   hh_l_mvis__40->SetEntries(4260);
   hh_l_mvis__40->SetStats(0);

   ci = TColor::GetColor("#009900");
   hh_l_mvis__40->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis45[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__41 = new TH1D("hh_l_mvis__41","",19, xAxis45);
   hh_l_mvis__41->SetBinContent(1,295.0203);
   hh_l_mvis__41->SetBinContent(2,571.5144);
   hh_l_mvis__41->SetBinContent(3,556.3833);
   hh_l_mvis__41->SetBinContent(4,718.7322);
   hh_l_mvis__41->SetBinContent(5,843.8138);
   hh_l_mvis__41->SetBinContent(6,1260.702);
   hh_l_mvis__41->SetBinContent(7,1333.677);
   hh_l_mvis__41->SetBinContent(8,1312.064);
   hh_l_mvis__41->SetBinContent(9,1138.76);
   hh_l_mvis__41->SetBinContent(10,1074.294);
   hh_l_mvis__41->SetBinContent(11,846.8347);
   hh_l_mvis__41->SetBinContent(12,655.6434);
   hh_l_mvis__41->SetBinContent(13,562.0395);
   hh_l_mvis__41->SetBinContent(14,431.9083);
   hh_l_mvis__41->SetBinContent(15,318.8035);
   hh_l_mvis__41->SetBinContent(16,250.9066);
   hh_l_mvis__41->SetBinContent(17,451.7943);
   hh_l_mvis__41->SetBinContent(18,619.2703);
   hh_l_mvis__41->SetBinContent(19,553.8617);
   hh_l_mvis__41->SetBinContent(20,92.5157);
   hh_l_mvis__41->SetBinError(1,19.4414);
   hh_l_mvis__41->SetBinError(2,75.12749);
   hh_l_mvis__41->SetBinError(3,44.14081);
   hh_l_mvis__41->SetBinError(4,58.00293);
   hh_l_mvis__41->SetBinError(5,62.71411);
   hh_l_mvis__41->SetBinError(6,108.8467);
   hh_l_mvis__41->SetBinError(7,104.7983);
   hh_l_mvis__41->SetBinError(8,94.5346);
   hh_l_mvis__41->SetBinError(9,73.78785);
   hh_l_mvis__41->SetBinError(10,88.58269);
   hh_l_mvis__41->SetBinError(11,75.67033);
   hh_l_mvis__41->SetBinError(12,63.74458);
   hh_l_mvis__41->SetBinError(13,57.64325);
   hh_l_mvis__41->SetBinError(14,39.9091);
   hh_l_mvis__41->SetBinError(15,18.12019);
   hh_l_mvis__41->SetBinError(16,15.08098);
   hh_l_mvis__41->SetBinError(17,48.4784);
   hh_l_mvis__41->SetBinError(18,46.89795);
   hh_l_mvis__41->SetBinError(19,39.1395);
   hh_l_mvis__41->SetBinError(20,28.28846);
   hh_l_mvis__41->SetEntries(16845);
   hh_l_mvis__41->SetStats(0);

   ci = TColor::GetColor("#336633");
   hh_l_mvis__41->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis46[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__42 = new TH1D("hh_l_mvis__42","",19, xAxis46);
   hh_l_mvis__42->SetBinContent(4,1.201818);
   hh_l_mvis__42->SetBinContent(5,2.687326);
   hh_l_mvis__42->SetBinContent(6,6.338515);
   hh_l_mvis__42->SetBinContent(7,44.63817);
   hh_l_mvis__42->SetBinContent(8,106.0175);
   hh_l_mvis__42->SetBinContent(9,15.47977);
   hh_l_mvis__42->SetBinContent(10,3.481532);
   hh_l_mvis__42->SetBinContent(11,2.182067);
   hh_l_mvis__42->SetBinContent(12,0.3339271);
   hh_l_mvis__42->SetBinContent(13,0.5350694);
   hh_l_mvis__42->SetBinContent(14,0.6817974);
   hh_l_mvis__42->SetBinContent(15,1.651279);
   hh_l_mvis__42->SetBinContent(16,0.5705451);
   hh_l_mvis__42->SetBinContent(18,1.077949);
   hh_l_mvis__42->SetBinError(4,0.9027387);
   hh_l_mvis__42->SetBinError(5,1.387146);
   hh_l_mvis__42->SetBinError(6,3.876341);
   hh_l_mvis__42->SetBinError(7,12.45614);
   hh_l_mvis__42->SetBinError(8,15.08052);
   hh_l_mvis__42->SetBinError(9,5.264348);
   hh_l_mvis__42->SetBinError(10,3.167481);
   hh_l_mvis__42->SetBinError(11,2.14764);
   hh_l_mvis__42->SetBinError(12,0.3217716);
   hh_l_mvis__42->SetBinError(13,0.5033202);
   hh_l_mvis__42->SetBinError(14,0.4761574);
   hh_l_mvis__42->SetBinError(15,1.651279);
   hh_l_mvis__42->SetBinError(16,0.5705451);
   hh_l_mvis__42->SetBinError(18,1.077949);
   hh_l_mvis__42->SetEntries(204);
   hh_l_mvis__42->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hh_l_mvis__42->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis47[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__43 = new TH1D("hh_l_mvis__43","",19, xAxis47);
   hh_l_mvis__43->SetBinContent(1,233.4564);
   hh_l_mvis__43->SetBinContent(2,369.7258);
   hh_l_mvis__43->SetBinContent(3,454.0368);
   hh_l_mvis__43->SetBinContent(4,639.9325);
   hh_l_mvis__43->SetBinContent(5,818.4919);
   hh_l_mvis__43->SetBinContent(6,982.7906);
   hh_l_mvis__43->SetBinContent(7,979.3333);
   hh_l_mvis__43->SetBinContent(8,957.8309);
   hh_l_mvis__43->SetBinContent(9,863.5597);
   hh_l_mvis__43->SetBinContent(10,652.0964);
   hh_l_mvis__43->SetBinContent(11,503.3355);
   hh_l_mvis__43->SetBinContent(12,369.3944);
   hh_l_mvis__43->SetBinContent(13,337.5759);
   hh_l_mvis__43->SetBinContent(14,253.3004);
   hh_l_mvis__43->SetBinContent(15,196.2741);
   hh_l_mvis__43->SetBinContent(16,178.6429);
   hh_l_mvis__43->SetBinContent(17,268.0195);
   hh_l_mvis__43->SetBinContent(18,383.7735);
   hh_l_mvis__43->SetBinContent(19,325.3252);
   hh_l_mvis__43->SetBinContent(20,33.48181);
   hh_l_mvis__43->SetBinError(1,12.03177);
   hh_l_mvis__43->SetBinError(2,15.47304);
   hh_l_mvis__43->SetBinError(3,17.00658);
   hh_l_mvis__43->SetBinError(4,20.62931);
   hh_l_mvis__43->SetBinError(5,23.21955);
   hh_l_mvis__43->SetBinError(6,25.77082);
   hh_l_mvis__43->SetBinError(7,25.82238);
   hh_l_mvis__43->SetBinError(8,25.47441);
   hh_l_mvis__43->SetBinError(9,24.10364);
   hh_l_mvis__43->SetBinError(10,20.62436);
   hh_l_mvis__43->SetBinError(11,17.64856);
   hh_l_mvis__43->SetBinError(12,14.72069);
   hh_l_mvis__43->SetBinError(13,14.40426);
   hh_l_mvis__43->SetBinError(14,12.09835);
   hh_l_mvis__43->SetBinError(15,10.7666);
   hh_l_mvis__43->SetBinError(16,10.21665);
   hh_l_mvis__43->SetBinError(17,12.57817);
   hh_l_mvis__43->SetBinError(18,15.06108);
   hh_l_mvis__43->SetBinError(19,13.93523);
   hh_l_mvis__43->SetBinError(20,4.388377);
   hh_l_mvis__43->SetEntries(24212);
   hh_l_mvis__43->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   hh_l_mvis__43->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis48[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__44 = new TH1D("hh_l_mvis__44","",19, xAxis48);
   hh_l_mvis__44->SetBinContent(1,11.93004);
   hh_l_mvis__44->SetBinContent(2,21.34033);
   hh_l_mvis__44->SetBinContent(3,27.30246);
   hh_l_mvis__44->SetBinContent(4,45.13725);
   hh_l_mvis__44->SetBinContent(5,54.29774);
   hh_l_mvis__44->SetBinContent(6,66.66807);
   hh_l_mvis__44->SetBinContent(7,60.70301);
   hh_l_mvis__44->SetBinContent(8,76.41284);
   hh_l_mvis__44->SetBinContent(9,73.52984);
   hh_l_mvis__44->SetBinContent(10,70.03086);
   hh_l_mvis__44->SetBinContent(11,75.90382);
   hh_l_mvis__44->SetBinContent(12,55.0423);
   hh_l_mvis__44->SetBinContent(13,46.58476);
   hh_l_mvis__44->SetBinContent(14,36.07383);
   hh_l_mvis__44->SetBinContent(15,40.17588);
   hh_l_mvis__44->SetBinContent(16,33.46936);
   hh_l_mvis__44->SetBinContent(17,50.92185);
   hh_l_mvis__44->SetBinContent(18,79.31831);
   hh_l_mvis__44->SetBinContent(19,69.98817);
   hh_l_mvis__44->SetBinContent(20,5.566046);
   hh_l_mvis__44->SetBinError(1,2.123553);
   hh_l_mvis__44->SetBinError(2,3.214229);
   hh_l_mvis__44->SetBinError(3,3.52914);
   hh_l_mvis__44->SetBinError(4,4.720584);
   hh_l_mvis__44->SetBinError(5,5.96463);
   hh_l_mvis__44->SetBinError(6,5.881242);
   hh_l_mvis__44->SetBinError(7,5.443527);
   hh_l_mvis__44->SetBinError(8,6.220499);
   hh_l_mvis__44->SetBinError(9,6.072487);
   hh_l_mvis__44->SetBinError(10,5.938281);
   hh_l_mvis__44->SetBinError(11,6.201839);
   hh_l_mvis__44->SetBinError(12,5.358984);
   hh_l_mvis__44->SetBinError(13,4.967672);
   hh_l_mvis__44->SetBinError(14,4.055863);
   hh_l_mvis__44->SetBinError(15,4.598001);
   hh_l_mvis__44->SetBinError(16,4.189548);
   hh_l_mvis__44->SetBinError(17,5.03553);
   hh_l_mvis__44->SetBinError(18,6.31653);
   hh_l_mvis__44->SetBinError(19,5.950602);
   hh_l_mvis__44->SetBinError(20,1.594109);
   hh_l_mvis__44->SetEntries(3032);
   hh_l_mvis__44->SetStats(0);

   ci = TColor::GetColor("#cc00ff");
   hh_l_mvis__44->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   Double_t xAxis49[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__45 = new TH1D("hh_l_mvis__45","",19, xAxis49);
   hh_l_mvis__45->SetBinContent(1,5.677214);
   hh_l_mvis__45->SetBinContent(2,11.19241);
   hh_l_mvis__45->SetBinContent(3,30.96249);
   hh_l_mvis__45->SetBinContent(4,101.6924);
   hh_l_mvis__45->SetBinContent(5,307.7065);
   hh_l_mvis__45->SetBinContent(6,377.218);
   hh_l_mvis__45->SetBinContent(7,158.6885);
   hh_l_mvis__45->SetBinContent(8,53.49184);
   hh_l_mvis__45->SetBinContent(9,36.65256);
   hh_l_mvis__45->SetBinContent(10,30.84219);
   hh_l_mvis__45->SetBinContent(11,25.21918);
   hh_l_mvis__45->SetBinContent(12,21.26);
   hh_l_mvis__45->SetBinContent(13,13.5198);
   hh_l_mvis__45->SetBinContent(14,12.46352);
   hh_l_mvis__45->SetBinContent(15,11.95254);
   hh_l_mvis__45->SetBinContent(16,8.292365);
   hh_l_mvis__45->SetBinContent(17,12.18545);
   hh_l_mvis__45->SetBinContent(18,16.83586);
   hh_l_mvis__45->SetBinContent(19,14.24096);
   hh_l_mvis__45->SetBinContent(20,0.305974);
   hh_l_mvis__45->SetBinError(1,0.7001791);
   hh_l_mvis__45->SetBinError(2,1.130306);
   hh_l_mvis__45->SetBinError(3,1.996575);
   hh_l_mvis__45->SetBinError(4,3.258321);
   hh_l_mvis__45->SetBinError(5,5.312009);
   hh_l_mvis__45->SetBinError(6,5.731371);
   hh_l_mvis__45->SetBinError(7,3.844899);
   hh_l_mvis__45->SetBinError(8,2.552803);
   hh_l_mvis__45->SetBinError(9,2.248358);
   hh_l_mvis__45->SetBinError(10,2.124078);
   hh_l_mvis__45->SetBinError(11,1.949114);
   hh_l_mvis__45->SetBinError(12,1.87594);
   hh_l_mvis__45->SetBinError(13,1.472154);
   hh_l_mvis__45->SetBinError(14,1.484128);
   hh_l_mvis__45->SetBinError(15,1.465011);
   hh_l_mvis__45->SetBinError(16,1.218472);
   hh_l_mvis__45->SetBinError(17,1.454741);
   hh_l_mvis__45->SetBinError(18,1.77234);
   hh_l_mvis__45->SetBinError(19,1.689162);
   hh_l_mvis__45->SetBinError(20,0.2269585);
   hh_l_mvis__45->SetEntries(14250);
   hh_l_mvis__45->SetStats(0);

   ci = TColor::GetColor("#999966");
   hh_l_mvis__45->SetFillColor(ci);
   w->Add(hh_l_mvis,"hist");
   w->Draw("same");
   Double_t xAxis50[20] = {0, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 200, 250, 450}; 
   
   TH1D *hh_l_mvis__46 = new TH1D("hh_l_mvis__46","",19, xAxis50);
   hh_l_mvis__46->SetBinContent(1,17210.76);
   hh_l_mvis__46->SetBinContent(2,22578.08);
   hh_l_mvis__46->SetBinContent(3,30296.96);
   hh_l_mvis__46->SetBinContent(4,36953.13);
   hh_l_mvis__46->SetBinContent(5,44039.01);
   hh_l_mvis__46->SetBinContent(6,49810.37);
   hh_l_mvis__46->SetBinContent(7,54902.98);
   hh_l_mvis__46->SetBinContent(8,56094.49);
   hh_l_mvis__46->SetBinContent(9,49094.16);
   hh_l_mvis__46->SetBinContent(10,39652.57);
   hh_l_mvis__46->SetBinContent(11,31107.27);
   hh_l_mvis__46->SetBinContent(12,24906.61);
   hh_l_mvis__46->SetBinContent(13,19671.94);
   hh_l_mvis__46->SetBinContent(14,15570.07);
   hh_l_mvis__46->SetBinContent(15,12086.98);
   hh_l_mvis__46->SetBinContent(16,9650.058);
   hh_l_mvis__46->SetBinContent(17,14124.44);
   hh_l_mvis__46->SetBinContent(18,19515.41);
   hh_l_mvis__46->SetBinContent(19,13806.43);
   hh_l_mvis__46->SetBinContent(20,1299.148);
   hh_l_mvis__46->SetBinError(1,298.4166);
   hh_l_mvis__46->SetBinError(2,338.8135);
   hh_l_mvis__46->SetBinError(3,400.6929);
   hh_l_mvis__46->SetBinError(4,451.4659);
   hh_l_mvis__46->SetBinError(5,474.5941);
   hh_l_mvis__46->SetBinError(6,514.284);
   hh_l_mvis__46->SetBinError(7,535.2244);
   hh_l_mvis__46->SetBinError(8,539.0583);
   hh_l_mvis__46->SetBinError(9,489.5738);
   hh_l_mvis__46->SetBinError(10,448.3027);
   hh_l_mvis__46->SetBinError(11,384.4124);
   hh_l_mvis__46->SetBinError(12,345.026);
   hh_l_mvis__46->SetBinError(13,311.4219);
   hh_l_mvis__46->SetBinError(14,284.6228);
   hh_l_mvis__46->SetBinError(15,238.4988);
   hh_l_mvis__46->SetBinError(16,202.677);
   hh_l_mvis__46->SetBinError(17,250.6947);
   hh_l_mvis__46->SetBinError(18,286.2778);
   hh_l_mvis__46->SetBinError(19,239.3476);
   hh_l_mvis__46->SetBinError(20,66.08779);
   hh_l_mvis__46->SetMaximum(78382.2);
   hh_l_mvis__46->SetEntries(273336);
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
   hmc__47->SetBinContent(20,1299.148);
   hmc__47->SetBinError(1,0.01733896);
   hmc__47->SetBinError(2,0.0150063);
   hmc__47->SetBinError(3,0.01322551);
   hmc__47->SetBinError(4,0.01221726);
   hmc__47->SetBinError(5,0.01077667);
   hmc__47->SetBinError(6,0.01032484);
   hmc__47->SetBinError(7,0.009748549);
   hmc__47->SetBinError(8,0.009609827);
   hmc__47->SetBinError(9,0.009972139);
   hmc__47->SetBinError(10,0.01130577);
   hmc__47->SetBinError(11,0.01235764);
   hmc__47->SetBinError(12,0.01385279);
   hmc__47->SetBinError(13,0.01583077);
   hmc__47->SetBinError(14,0.01828012);
   hmc__47->SetBinError(15,0.01973187);
   hmc__47->SetBinError(16,0.02100268);
   hmc__47->SetBinError(17,0.017749);
   hmc__47->SetBinError(18,0.01466933);
   hmc__47->SetBinError(19,0.01733595);
   hmc__47->SetBinError(20,66.08779);
   hmc__47->SetMinimum(0.5);
   hmc__47->SetMaximum(1.5);
   hmc__47->SetEntries(273356);
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
   hdata__48->SetBinContent(1,0.9959468);
   hdata__48->SetBinContent(2,1.008057);
   hdata__48->SetBinContent(3,1.030631);
   hdata__48->SetBinContent(4,1.061236);
   hdata__48->SetBinContent(5,1.078158);
   hdata__48->SetBinContent(6,1.07323);
   hdata__48->SetBinContent(7,1.087263);
   hdata__48->SetBinContent(8,1.074865);
   hdata__48->SetBinContent(9,1.110417);
   hdata__48->SetBinContent(10,1.127417);
   hdata__48->SetBinContent(11,1.148574);
   hdata__48->SetBinContent(12,1.131306);
   hdata__48->SetBinContent(13,1.149149);
   hdata__48->SetBinContent(14,1.147522);
   hdata__48->SetBinContent(15,1.192688);
   hdata__48->SetBinContent(16,1.217091);
   hdata__48->SetBinContent(17,1.203658);
   hdata__48->SetBinContent(18,1.149912);
   hdata__48->SetBinContent(19,1.170541);
   hdata__48->SetBinContent(20,1350);
   hdata__48->SetBinError(1,0.007607082);
   hdata__48->SetBinError(2,0.006681886);
   hdata__48->SetBinError(3,0.005832464);
   hdata__48->SetBinError(4,0.005358959);
   hdata__48->SetBinError(5,0.004947916);
   hdata__48->SetBinError(6,0.004641801);
   hdata__48->SetBinError(7,0.004450096);
   hdata__48->SetBinError(8,0.004377406);
   hdata__48->SetBinError(9,0.00475585);
   hdata__48->SetBinError(10,0.005332203);
   hdata__48->SetBinError(11,0.006076431);
   hdata__48->SetBinError(12,0.00673958);
   hdata__48->SetBinError(13,0.007643014);
   hdata__48->SetBinError(14,0.008584901);
   hdata__48->SetBinError(15,0.009933549);
   hdata__48->SetBinError(16,0.01123044);
   hdata__48->SetBinError(17,0.009231366);
   hdata__48->SetBinError(18,0.007676151);
   hdata__48->SetBinError(19,0.009207732);
   hdata__48->SetBinError(20,36.74235);
   hdata__48->SetEntries(618002);
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
