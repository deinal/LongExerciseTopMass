void bjetenls_jec_23_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:08 2021) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0);
   c->SetRightMargin(0);
   c->SetTopMargin(0);
   c->SetBottomMargin(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,0.85);
   p1->Draw();
   p1->cd();
   p1->Range(2.421687,-56.01053,7.240964,411.5773);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetGridx();
   p1->SetLeftMargin(0.12);
   p1->SetRightMargin(0.05);
   p1->SetTopMargin(0.01);
   p1->SetBottomMargin(0.12);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   
   TH1F *frame__71 = new TH1F("frame__71","t#bar{t}",20,3,7);
   frame__71->SetMinimum(0.1);
   frame__71->SetMaximum(406.9014);
   frame__71->SetEntries(503336);
   frame__71->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__71->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__71->SetMarkerColor(ci);
   frame__71->GetXaxis()->SetTitle("log(E)");
   frame__71->GetXaxis()->SetLabelFont(42);
   frame__71->GetXaxis()->SetLabelSize(0.035);
   frame__71->GetXaxis()->SetTitleSize(0.035);
   frame__71->GetXaxis()->SetTitleFont(42);
   frame__71->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__71->GetYaxis()->SetNoExponent();
   frame__71->GetYaxis()->SetLabelFont(42);
   frame__71->GetYaxis()->SetTitleSize(0.045);
   frame__71->GetYaxis()->SetTitleOffset(1.3);
   frame__71->GetYaxis()->SetTitleFont(42);
   frame__71->GetZaxis()->SetLabelFont(42);
   frame__71->GetZaxis()->SetLabelSize(0.035);
   frame__71->GetZaxis()->SetTitleSize(0.035);
   frame__71->GetZaxis()->SetTitleFont(42);
   frame__71->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_36 = new TH1F("mc_stack_36","mc",20,3,7);
   mc_stack_36->SetMinimum(-6.350547e-09);
   mc_stack_36->SetMaximum(328.6511);
   mc_stack_36->SetDirectory(0);
   mc_stack_36->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_36->SetLineColor(ci);
   mc_stack_36->GetXaxis()->SetLabelFont(42);
   mc_stack_36->GetXaxis()->SetLabelSize(0.035);
   mc_stack_36->GetXaxis()->SetTitleSize(0.035);
   mc_stack_36->GetXaxis()->SetTitleFont(42);
   mc_stack_36->GetYaxis()->SetLabelFont(42);
   mc_stack_36->GetYaxis()->SetLabelSize(0.035);
   mc_stack_36->GetYaxis()->SetTitleSize(0.035);
   mc_stack_36->GetYaxis()->SetTitleOffset(0);
   mc_stack_36->GetYaxis()->SetTitleFont(42);
   mc_stack_36->GetZaxis()->SetLabelFont(42);
   mc_stack_36->GetZaxis()->SetLabelSize(0.035);
   mc_stack_36->GetZaxis()->SetTitleSize(0.035);
   mc_stack_36->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_36);
   
   
   TH1F *bjetenls_jec_23_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_23_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(3,101.6366);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(4,217.3595);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(5,278.1739);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(6,299.9334);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(7,296.1955);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(8,263.0949);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(9,213.2401);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(10,158.9038);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(11,108.6147);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(12,67.92952);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(13,39.68365);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(14,21.93307);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(15,11.26078);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(16,5.272429);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(17,2.298297);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(18,0.8850465);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(19,0.3164162);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(20,0.1033835);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinContent(21,0.03887649);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(3,1.106596);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(4,1.483767);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(5,1.519608);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(6,1.429477);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(7,1.285887);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(8,1.097491);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(9,0.8951039);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(10,0.6999298);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(11,0.5238426);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(12,0.3753608);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(13,0.2595376);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(14,0.1746982);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(15,0.1133263);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(16,0.0702707);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(17,0.04206315);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(18,0.02357109);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(19,0.01279866);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(20,0.006625558);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetBinError(21,0.003559857);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetEntries(496457);
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_23_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_23_down_Diboson_stack_2 = new TH1F("bjetenls_jec_23_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(7,0.2039499);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(8,0.2207615);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(9,0.1332017);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(10,0.117549);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(11,0.1074366);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(12,0.07951924);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(13,0.04520327);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(14,0.02177599);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(15,0.02482417);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(16,0.01182073);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(17,0.01083915);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(18,0.006521601);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(19,0.001950594);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(20,0.003078387);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinContent(21,0.001011395);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(7,0.0324371);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(8,0.03136398);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(9,0.02162894);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(10,0.01807759);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(11,0.01594419);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(12,0.01261853);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(13,0.008601249);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(14,0.00536334);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(15,0.005206645);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(16,0.00321952);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(17,0.002917493);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(18,0.001939763);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(19,0.0009785878);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(20,0.001097867);
   bjetenls_jec_23_down_Diboson_stack_2->SetBinError(21,0.000575025);
   bjetenls_jec_23_down_Diboson_stack_2->SetEntries(533);
   bjetenls_jec_23_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_23_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_23_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_23_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_23_down_DY_stack_3 = new TH1F("bjetenls_jec_23_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(13,0.06351786);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(15,0.04660493);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(16,0.04330108);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_23_down_DY_stack_3->SetBinContent(18,0.0303604);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(13,0.06351787);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(15,0.04660493);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(16,0.04330107);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_23_down_DY_stack_3->SetBinError(18,0.0303604);
   bjetenls_jec_23_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_23_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_23_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_23_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_23_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_23_down_W_stack_4 = new TH1F("bjetenls_jec_23_down_W_stack_4","W",20,3,7);
   bjetenls_jec_23_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_23_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_23_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_23_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_23_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_23_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(5,12.02637);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(6,11.93161);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(7,12.02833);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(8,10.96815);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(9,7.658358);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(10,6.26395);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(11,4.398447);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(12,2.871716);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(13,1.677013);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(14,0.9716377);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(15,0.5870417);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(16,0.3001092);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(17,0.1481777);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(18,0.06153743);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(19,0.03609286);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(20,0.01038101);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinContent(21,0.01077504);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(5,0.5719656);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(6,0.5140544);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(7,0.467788);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(8,0.4051539);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(9,0.3051601);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(10,0.2512428);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(11,0.1902838);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(12,0.1397105);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(13,0.0964106);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(14,0.06558807);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(15,0.04681299);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(16,0.03003317);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(17,0.01927344);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(18,0.01097684);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(19,0.007822334);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(20,0.003619781);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetBinError(21,0.003438836);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetEntries(6322);
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_23_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_23_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_23_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_23_down_fx3071[21] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   0};
   Double_t Graph_from_bjetenls_jec_23_down_fy3071[21] = {
   0,
   0,
   92.70704,
   197.6958,
   254.9986,
   284.157,
   281.6522,
   251.687,
   202.438,
   149.1155,
   101.0549,
   61.84679,
   36.27409,
   20.51204,
   10.34969,
   4.739934,
   2.071595,
   0.8438994,
   0.2821498,
   0.08858158,
   0};
   Double_t Graph_from_bjetenls_jec_23_down_felx3071[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjetenls_jec_23_down_fely3071[21] = {
   0,
   0,
   9.611249,
   14.04883,
   15.96867,
   16.85696,
   16.7825,
   15.86465,
   14.22807,
   12.19784,
   10.03615,
   7.843107,
   5.995016,
   4.491896,
   3.164494,
   2.09867,
   1.319108,
   0.7319981,
   0.2811383,
   0.08858158,
   0};
   Double_t Graph_from_bjetenls_jec_23_down_fehx3071[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjetenls_jec_23_down_fehy3071[21] = {
   1.841055,
   1.841055,
   10.66332,
   15.08448,
   15.96867,
   16.85696,
   16.7825,
   15.86465,
   14.22807,
   13.23889,
   11.08603,
   8.906869,
   7.07828,
   5.602593,
   4.320105,
   3.327384,
   2.659535,
   2.238684,
   1.990636,
   1.890469,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_23_down_fx3071,Graph_from_bjetenls_jec_23_down_fy3071,Graph_from_bjetenls_jec_23_down_felx3071,Graph_from_bjetenls_jec_23_down_fehx3071,Graph_from_bjetenls_jec_23_down_fely3071,Graph_from_bjetenls_jec_23_down_fehy3071);
   grae->SetName("Graph_from_bjetenls_jec_23_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_23_down3071 = new TH1F("Graph_Graph_from_bjetenls_jec_23_down3071","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_23_down3071->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_23_down3071->SetMaximum(331.1154);
   Graph_Graph_from_bjetenls_jec_23_down3071->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_23_down3071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_23_down3071->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_23_down3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_23_down3071);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.45,0.815,0.98,0.925,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_23_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_23_down_t#bar{t}","t#bar{t}","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_23_down_Diboson","Diboson","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_23_down_DY","DY","f");

   ci = TColor::GetColor("#33ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_23_down_W","W","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_23_down_Single top","Single top","f");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.95,"#bf{CMS} #it{Preliminary} 35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(43);
   tex->SetTextSize(16);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0.85,1,1);
   p2->Draw();
   p2->cd();
   p2->Range(2.421687,0.4485106,7.240964,1.597447);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridx();
   p2->SetGridy();
   p2->SetLeftMargin(0.12);
   p2->SetRightMargin(0.05);
   p2->SetTopMargin(0.05);
   p2->SetBottomMargin(0.01);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   
   TH1F *ratioframe__72 = new TH1F("ratioframe__72","t#bar{t}",20,3,7);
   ratioframe__72->SetMinimum(0.46);
   ratioframe__72->SetMaximum(1.54);
   ratioframe__72->SetEntries(503336);

   ci = TColor::GetColor("#cc0000");
   ratioframe__72->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__72->SetMarkerColor(ci);
   ratioframe__72->GetXaxis()->SetTitle("log(E)");
   ratioframe__72->GetXaxis()->SetLabelFont(42);
   ratioframe__72->GetXaxis()->SetLabelSize(0);
   ratioframe__72->GetXaxis()->SetTitleSize(0);
   ratioframe__72->GetXaxis()->SetTitleOffset(0);
   ratioframe__72->GetXaxis()->SetTitleFont(42);
   ratioframe__72->GetYaxis()->SetTitle("Data/MC");
   ratioframe__72->GetYaxis()->SetNoExponent();
   ratioframe__72->GetYaxis()->SetNdivisions(5);
   ratioframe__72->GetYaxis()->SetLabelFont(42);
   ratioframe__72->GetYaxis()->SetLabelSize(0.18);
   ratioframe__72->GetYaxis()->SetTitleSize(0.2);
   ratioframe__72->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__72->GetYaxis()->SetTitleFont(42);
   ratioframe__72->GetZaxis()->SetLabelFont(42);
   ratioframe__72->GetZaxis()->SetLabelSize(0.035);
   ratioframe__72->GetZaxis()->SetTitleSize(0.035);
   ratioframe__72->GetZaxis()->SetTitleFont(42);
   ratioframe__72->Draw("");
   
   Double_t Graph_from_ratio_fx3072[20] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9};
   Double_t Graph_from_ratio_fy3072[20] = {
   0,
   0,
   0.8668607,
   0.8712791,
   0.8759084,
   0.9078468,
   0.9106188,
   0.9162785,
   0.9158775,
   0.9014599,
   0.89215,
   0.8704171,
   0.8747198,
   0.8917149,
   0.8683167,
   0.8422567,
   0.8427967,
   0.858087,
   0.7959997,
   0.7581255};
   Double_t Graph_from_ratio_felx3072[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fely3072[20] = {
   0,
   0,
   0.01891435,
   0.01154603,
   0.009319346,
   0.008349298,
   0.007612007,
   0.007305706,
   0.007299367,
   0.007606129,
   0.008275507,
   0.009382216,
   0.01109515,
   0.01387063,
   0.01714013,
   0.02267202,
   0.02989149,
   0.05056789,
   0.06295926,
   0.09566394};
   Double_t Graph_from_ratio_fehx3072[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fehy3072[20] = {
   0,
   0,
   0.01891435,
   0.01154603,
   0.009319346,
   0.008349298,
   0.007612007,
   0.007305706,
   0.007299367,
   0.007606129,
   0.008275507,
   0.009382216,
   0.01109515,
   0.01387063,
   0.01714013,
   0.02267202,
   0.02989149,
   0.05056789,
   0.06295926,
   0.09566394};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3072,Graph_from_ratio_fy3072,Graph_from_ratio_felx3072,Graph_from_ratio_fehx3072,Graph_from_ratio_fely3072,Graph_from_ratio_fehy3072);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3072 = new TH1F("Graph_Graph_from_ratio3072","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3072->SetMinimum(0);
   Graph_Graph_from_ratio3072->SetMaximum(1.015943);
   Graph_Graph_from_ratio3072->SetDirectory(0);
   Graph_Graph_from_ratio3072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3072->SetLineColor(ci);
   Graph_Graph_from_ratio3072->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3072->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3072->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3072->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3072->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3072->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3072->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3072->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3072->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3072->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3072->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3072->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3072);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
