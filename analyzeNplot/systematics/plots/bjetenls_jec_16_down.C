void bjetenls_jec_16_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:09 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-56.06613,7.240964,411.9849);
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
   
   TH1F *frame__83 = new TH1F("frame__83","t#bar{t}",20,3,7);
   frame__83->SetMinimum(0.1);
   frame__83->SetMaximum(407.3044);
   frame__83->SetEntries(505411);
   frame__83->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__83->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__83->SetMarkerColor(ci);
   frame__83->GetXaxis()->SetTitle("log(E)");
   frame__83->GetXaxis()->SetLabelFont(42);
   frame__83->GetXaxis()->SetLabelSize(0.035);
   frame__83->GetXaxis()->SetTitleSize(0.035);
   frame__83->GetXaxis()->SetTitleFont(42);
   frame__83->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__83->GetYaxis()->SetNoExponent();
   frame__83->GetYaxis()->SetLabelFont(42);
   frame__83->GetYaxis()->SetTitleSize(0.045);
   frame__83->GetYaxis()->SetTitleOffset(1.3);
   frame__83->GetYaxis()->SetTitleFont(42);
   frame__83->GetZaxis()->SetLabelFont(42);
   frame__83->GetZaxis()->SetLabelSize(0.035);
   frame__83->GetZaxis()->SetTitleSize(0.035);
   frame__83->GetZaxis()->SetTitleFont(42);
   frame__83->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_42 = new TH1F("mc_stack_42","mc",20,3,7);
   mc_stack_42->SetMinimum(-3.691811e-09);
   mc_stack_42->SetMaximum(328.9767);
   mc_stack_42->SetDirectory(0);
   mc_stack_42->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_42->SetLineColor(ci);
   mc_stack_42->GetXaxis()->SetLabelFont(42);
   mc_stack_42->GetXaxis()->SetLabelSize(0.035);
   mc_stack_42->GetXaxis()->SetTitleSize(0.035);
   mc_stack_42->GetXaxis()->SetTitleFont(42);
   mc_stack_42->GetYaxis()->SetLabelFont(42);
   mc_stack_42->GetYaxis()->SetLabelSize(0.035);
   mc_stack_42->GetYaxis()->SetTitleSize(0.035);
   mc_stack_42->GetYaxis()->SetTitleOffset(0);
   mc_stack_42->GetYaxis()->SetTitleFont(42);
   mc_stack_42->GetZaxis()->SetLabelFont(42);
   mc_stack_42->GetZaxis()->SetLabelSize(0.035);
   mc_stack_42->GetZaxis()->SetTitleSize(0.035);
   mc_stack_42->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_42);
   
   
   TH1F *bjetenls_jec_16_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_16_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(3,100.6701);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(4,216.8936);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(5,278.1151);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(6,300.2025);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(7,297.0074);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(8,264.0614);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(9,214.1937);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(10,159.0176);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(11,109.5773);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(12,68.5611);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(13,40.15454);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(14,22.19936);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(15,11.44416);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(16,5.320647);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(17,2.309949);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(18,0.8825193);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(19,0.3122887);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(20,0.1032006);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinContent(21,0.0378709);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(3,1.101344);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(4,1.482243);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(5,1.519406);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(6,1.4301);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(7,1.287723);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(8,1.099515);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(9,0.8970786);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(10,0.70021);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(11,0.5261953);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(12,0.377148);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(13,0.2610471);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(14,0.175745);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(15,0.1142588);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(16,0.07059468);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(17,0.04216515);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(18,0.02353862);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(19,0.01272311);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(20,0.00662716);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetBinError(21,0.003509461);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetEntries(498476);
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_16_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_16_down_Diboson_stack_2 = new TH1F("bjetenls_jec_16_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(3,0.1739124);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(4,0.2636727);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(5,0.2518539);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(6,0.2574056);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(7,0.2139974);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(8,0.2214243);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(9,0.135489);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(10,0.1161581);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(11,0.1129399);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(12,0.07984304);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(13,0.04700686);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(14,0.02121495);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(15,0.02611356);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(16,0.01351578);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(17,0.01085413);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(18,0.006535238);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(19,0.00195452);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(20,0.003090035);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinContent(21,0.001014494);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(3,0.04365873);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(4,0.05094056);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(5,0.0444074);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(6,0.04088593);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(7,0.0332111);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(8,0.03147369);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(9,0.02179046);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(10,0.01797639);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(11,0.01626152);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(12,0.01267617);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(13,0.008795921);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(14,0.005396698);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(15,0.005358074);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(16,0.003437481);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(17,0.002921348);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(18,0.001943871);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(19,0.0009805647);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(20,0.001102207);
   bjetenls_jec_16_down_Diboson_stack_2->SetBinError(21,0.0005767859);
   bjetenls_jec_16_down_Diboson_stack_2->SetEntries(543);
   bjetenls_jec_16_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_16_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_16_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_16_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_16_down_DY_stack_3 = new TH1F("bjetenls_jec_16_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(3,0.6422698);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(4,0.3702642);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(5,0.6780277);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(6,0.8788046);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(7,0.8685699);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(8,0.3995379);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(10,0.1301491);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(11,0.1505934);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(12,0.1731842);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(13,0.06309138);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(14,0.07632315);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(15,0.04656575);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(16,0.04330257);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(17,0.000687029);
   bjetenls_jec_16_down_DY_stack_3->SetBinContent(18,0.03041408);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(3,0.6422698);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(4,0.3702642);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(5,0.4797526);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(6,0.5083145);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(7,0.434549);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(8,0.2831381);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(10,0.1301491);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(11,0.1101741);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(12,0.1224912);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(13,0.06309138);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(14,0.07632315);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(15,0.04656575);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(16,0.04330257);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(17,0.000687029);
   bjetenls_jec_16_down_DY_stack_3->SetBinError(18,0.03041408);
   bjetenls_jec_16_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_16_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_16_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_16_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_16_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_16_down_W_stack_4 = new TH1F("bjetenls_jec_16_down_W_stack_4","W",20,3,7);
   bjetenls_jec_16_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_16_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_16_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_16_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_16_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_16_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(3,4.445471);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(4,8.99369);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(5,12.03925);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(6,11.97235);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(7,12.1239);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(8,10.91371);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(9,7.800425);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(10,6.343299);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(11,4.375364);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(12,2.939207);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(13,1.692731);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(14,0.9959097);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(15,0.601074);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(16,0.300065);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(17,0.1482629);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(18,0.06347628);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(19,0.03439409);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(20,0.01042362);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinContent(21,0.01083016);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(3,0.4170965);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(4,0.5410358);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(5,0.5713544);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(6,0.5146043);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(7,0.4694885);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(8,0.4040625);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(9,0.3081485);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(10,0.2527099);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(11,0.1897563);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(12,0.1414204);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(13,0.09701288);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(14,0.06648814);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(15,0.04733248);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(16,0.0300289);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(17,0.01928459);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(18,0.01114774);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(19,0.007634983);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(20,0.003635364);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetBinError(21,0.003456481);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetEntries(6368);
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_16_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_16_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_16_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_16_down_fx3083[21] = {
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
   Double_t Graph_from_bjetenls_jec_16_down_fy3083[21] = {
   0,
   0,
   92.04881,
   197.5708,
   255.3205,
   284.1923,
   282.6618,
   252.7554,
   203.2201,
   149.4144,
   101.3228,
   62.21382,
   36.62458,
   20.55698,
   10.42487,
   4.727157,
   2.068782,
   0.8236324,
   0.2783864,
   0.08548595,
   0};
   Double_t Graph_from_bjetenls_jec_16_down_felx3083[21] = {
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
   Double_t Graph_from_bjetenls_jec_16_down_fely3083[21] = {
   0,
   0,
   9.576943,
   14.04438,
   15.97875,
   16.858,
   16.81255,
   15.89828,
   14.25553,
   12.21008,
   10.04949,
   7.866472,
   6.024179,
   4.496896,
   3.176353,
   2.095624,
   1.318047,
   0.7188969,
   0.2774626,
   0.08548595,
   0};
   Double_t Graph_from_bjetenls_jec_16_down_fehx3083[21] = {
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
   Double_t Graph_from_bjetenls_jec_16_down_fehy3083[21] = {
   1.841055,
   1.841055,
   10.6292,
   15.08005,
   15.97875,
   16.858,
   16.81255,
   15.89828,
   14.25553,
   13.25109,
   11.0993,
   8.930045,
   7.107043,
   5.607473,
   4.331405,
   3.324641,
   2.658691,
   2.230566,
   1.988778,
   1.888784,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_16_down_fx3083,Graph_from_bjetenls_jec_16_down_fy3083,Graph_from_bjetenls_jec_16_down_felx3083,Graph_from_bjetenls_jec_16_down_fehx3083,Graph_from_bjetenls_jec_16_down_fely3083,Graph_from_bjetenls_jec_16_down_fehy3083);
   grae->SetName("Graph_from_bjetenls_jec_16_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_16_down3083 = new TH1F("Graph_Graph_from_bjetenls_jec_16_down3083","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_16_down3083->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_16_down3083->SetMaximum(331.1553);
   Graph_Graph_from_bjetenls_jec_16_down3083->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_16_down3083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_16_down3083->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_16_down3083->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_16_down3083);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_16_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_16_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_16_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_16_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_16_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_16_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__84 = new TH1F("ratioframe__84","t#bar{t}",20,3,7);
   ratioframe__84->SetMinimum(0.46);
   ratioframe__84->SetMaximum(1.54);
   ratioframe__84->SetEntries(505411);

   ci = TColor::GetColor("#cc0000");
   ratioframe__84->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__84->SetMarkerColor(ci);
   ratioframe__84->GetXaxis()->SetTitle("log(E)");
   ratioframe__84->GetXaxis()->SetLabelFont(42);
   ratioframe__84->GetXaxis()->SetLabelSize(0);
   ratioframe__84->GetXaxis()->SetTitleSize(0);
   ratioframe__84->GetXaxis()->SetTitleOffset(0);
   ratioframe__84->GetXaxis()->SetTitleFont(42);
   ratioframe__84->GetYaxis()->SetTitle("Data/MC");
   ratioframe__84->GetYaxis()->SetNoExponent();
   ratioframe__84->GetYaxis()->SetNdivisions(5);
   ratioframe__84->GetYaxis()->SetLabelFont(42);
   ratioframe__84->GetYaxis()->SetLabelSize(0.18);
   ratioframe__84->GetYaxis()->SetTitleSize(0.2);
   ratioframe__84->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__84->GetYaxis()->SetTitleFont(42);
   ratioframe__84->GetZaxis()->SetLabelFont(42);
   ratioframe__84->GetZaxis()->SetLabelSize(0.035);
   ratioframe__84->GetZaxis()->SetTitleSize(0.035);
   ratioframe__84->GetZaxis()->SetTitleFont(42);
   ratioframe__84->Draw("");
   
   Double_t Graph_from_ratio_fx3084[20] = {
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
   Double_t Graph_from_ratio_fy3084[20] = {
   0,
   0,
   0.868944,
   0.8721956,
   0.8771362,
   0.9070609,
   0.9111835,
   0.9171229,
   0.9148717,
   0.9022212,
   0.8871138,
   0.8670513,
   0.8728998,
   0.8825461,
   0.8602861,
   0.8326079,
   0.8376473,
   0.8379233,
   0.7984984,
   0.732438};
   Double_t Graph_from_ratio_felx3084[20] = {
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
   Double_t Graph_from_ratio_fely3084[20] = {
   0,
   0,
   0.01903581,
   0.01156507,
   0.009327549,
   0.008340085,
   0.00760372,
   0.00729642,
   0.007276646,
   0.007606414,
   0.008210226,
   0.009314411,
   0.01101426,
   0.01368933,
   0.016892,
   0.02238653,
   0.02969646,
   0.04974272,
   0.06356593,
   0.09369336};
   Double_t Graph_from_ratio_fehx3084[20] = {
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
   Double_t Graph_from_ratio_fehy3084[20] = {
   0,
   0,
   0.01903581,
   0.01156507,
   0.009327549,
   0.008340085,
   0.00760372,
   0.00729642,
   0.007276646,
   0.007606414,
   0.008210226,
   0.009314411,
   0.01101426,
   0.01368933,
   0.016892,
   0.02238653,
   0.02969646,
   0.04974272,
   0.06356593,
   0.09369336};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3084,Graph_from_ratio_fy3084,Graph_from_ratio_felx3084,Graph_from_ratio_fehx3084,Graph_from_ratio_fely3084,Graph_from_ratio_fehy3084);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3084 = new TH1F("Graph_Graph_from_ratio3084","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3084->SetMinimum(0);
   Graph_Graph_from_ratio3084->SetMaximum(1.016861);
   Graph_Graph_from_ratio3084->SetDirectory(0);
   Graph_Graph_from_ratio3084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3084->SetLineColor(ci);
   Graph_Graph_from_ratio3084->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3084->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3084->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3084->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3084->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3084->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3084->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3084->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3084->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3084->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3084->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3084->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3084->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3084);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
