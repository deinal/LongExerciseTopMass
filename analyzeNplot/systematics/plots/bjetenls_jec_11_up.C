void bjetenls_jec_11_up()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:07 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-55.96954,7.240964,411.2766);
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
   
   TH1F *frame__31 = new TH1F("frame__31","t#bar{t}",20,3,7);
   frame__31->SetMinimum(0.1);
   frame__31->SetMaximum(406.6042);
   frame__31->SetEntries(504920);
   frame__31->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__31->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__31->SetMarkerColor(ci);
   frame__31->GetXaxis()->SetTitle("log(E)");
   frame__31->GetXaxis()->SetLabelFont(42);
   frame__31->GetXaxis()->SetLabelSize(0.035);
   frame__31->GetXaxis()->SetTitleSize(0.035);
   frame__31->GetXaxis()->SetTitleFont(42);
   frame__31->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__31->GetYaxis()->SetNoExponent();
   frame__31->GetYaxis()->SetLabelFont(42);
   frame__31->GetYaxis()->SetTitleSize(0.045);
   frame__31->GetYaxis()->SetTitleOffset(1.3);
   frame__31->GetYaxis()->SetTitleFont(42);
   frame__31->GetZaxis()->SetLabelFont(42);
   frame__31->GetZaxis()->SetLabelSize(0.035);
   frame__31->GetZaxis()->SetTitleSize(0.035);
   frame__31->GetZaxis()->SetTitleFont(42);
   frame__31->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_16 = new TH1F("mc_stack_16","mc",20,3,7);
   mc_stack_16->SetMinimum(-7.80722e-09);
   mc_stack_16->SetMaximum(328.4111);
   mc_stack_16->SetDirectory(0);
   mc_stack_16->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_16->SetLineColor(ci);
   mc_stack_16->GetXaxis()->SetLabelFont(42);
   mc_stack_16->GetXaxis()->SetLabelSize(0.035);
   mc_stack_16->GetXaxis()->SetTitleSize(0.035);
   mc_stack_16->GetXaxis()->SetTitleFont(42);
   mc_stack_16->GetYaxis()->SetLabelFont(42);
   mc_stack_16->GetYaxis()->SetLabelSize(0.035);
   mc_stack_16->GetYaxis()->SetTitleSize(0.035);
   mc_stack_16->GetYaxis()->SetTitleOffset(0);
   mc_stack_16->GetYaxis()->SetTitleFont(42);
   mc_stack_16->GetZaxis()->SetLabelFont(42);
   mc_stack_16->GetZaxis()->SetLabelSize(0.035);
   mc_stack_16->GetZaxis()->SetTitleSize(0.035);
   mc_stack_16->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_16);
   
   
   TH1F *bjetenls_jec_11_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_11_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(3,100.8378);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(4,216.9722);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(5,278.1838);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(6,299.7213);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(7,296.9327);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(8,264.0704);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(9,213.8601);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(10,159.2111);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(11,109.2985);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(12,68.48402);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(13,40.02528);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(14,22.1098);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(15,11.39104);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(16,5.291053);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(17,2.303701);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(18,0.8795971);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(19,0.3136119);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(20,0.1035468);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinContent(21,0.0377744);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(3,1.102059);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(4,1.48254);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(5,1.51949);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(6,1.428878);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(7,1.287622);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(8,1.099528);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(9,0.8963942);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(10,0.7006455);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(11,0.5255279);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(12,0.3769404);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(13,0.2606349);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(14,0.1753812);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(15,0.1139956);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(16,0.07039111);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(17,0.04211299);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(18,0.02349833);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(19,0.01274578);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(20,0.006636051);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetBinError(21,0.003500859);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetEntries(498002);
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_11_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_11_up_Diboson_stack_2 = new TH1F("bjetenls_jec_11_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(3,0.1614086);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(4,0.2638634);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(5,0.2392341);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(6,0.2635841);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(7,0.2142392);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(8,0.2216631);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(9,0.1362934);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(10,0.1186944);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(11,0.1078549);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(12,0.08172381);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(13,0.04706275);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(14,0.02062067);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(15,0.02594076);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(16,0.01259043);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(17,0.01085543);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(18,0.006535267);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(19,0.001952976);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(20,0.003085183);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinContent(21,0.00101203);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(3,0.04182355);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(4,0.05097769);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(5,0.04350091);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(6,0.04135315);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(7,0.03324809);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(8,0.03150549);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(9,0.02184793);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(10,0.01821835);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(11,0.01585515);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(12,0.01281754);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(13,0.008806492);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(14,0.005236293);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(15,0.005325095);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(16,0.003310262);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(17,0.002921707);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(18,0.001943926);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(19,0.0009798033);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(20,0.001100411);
   bjetenls_jec_11_up_Diboson_stack_2->SetBinError(21,0.0005753938);
   bjetenls_jec_11_up_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_11_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_11_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_11_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_11_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_11_up_DY_stack_3 = new TH1F("bjetenls_jec_11_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(3,0.6436793);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(4,0.3705226);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(5,0.6799317);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(6,0.8797248);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(7,0.8699723);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(8,0.399488);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(10,0.1299125);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(11,0.1505428);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(12,0.1731946);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(14,0.07638075);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(17,0.0006871597);
   bjetenls_jec_11_up_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(3,0.6436793);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(4,0.3705226);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(5,0.4810998);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(6,0.5088373);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(7,0.4352422);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(8,0.2831149);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(10,0.1299125);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(11,0.1101381);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(12,0.122502);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(14,0.07638075);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(17,0.0006871597);
   bjetenls_jec_11_up_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_11_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_11_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_11_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_11_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_11_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_11_up_W_stack_4 = new TH1F("bjetenls_jec_11_up_W_stack_4","W",20,3,7);
   bjetenls_jec_11_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_11_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_11_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_11_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_11_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_11_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(3,4.47589);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(4,8.93088);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(5,12.10527);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(6,11.90777);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(7,12.05145);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(8,10.95248);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(9,7.721269);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(10,6.346677);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(11,4.377291);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(12,2.918662);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(13,1.714752);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(14,0.9811499);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(15,0.5977424);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(16,0.3001641);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(17,0.1483035);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(18,0.06343684);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(19,0.03435703);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(20,0.01040937);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinContent(21,0.01080162);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(3,0.4184945);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(4,0.5392064);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(5,0.573263);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(6,0.5132441);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(7,0.4680573);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(8,0.4049486);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(9,0.3064147);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(10,0.252728);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(11,0.1898795);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(12,0.1410298);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(13,0.09764785);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(14,0.06593229);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(15,0.04721722);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(16,0.03003879);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(17,0.01929014);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(18,0.01114062);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(19,0.007626742);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(20,0.003630163);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetBinError(21,0.003447377);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetEntries(6354);
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_11_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_11_up_fx3031[21] = {
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
   Double_t Graph_from_bjetenls_jec_11_up_fy3031[21] = {
   0,
   0,
   91.76147,
   197.7432,
   255.0915,
   284.0321,
   282.515,
   252.5867,
   202.7701,
   149.7385,
   101.2384,
   62.23783,
   36.56787,
   20.57077,
   10.38453,
   4.765552,
   2.073216,
   0.8346535,
   0.2820426,
   0.08633465,
   0};
   Double_t Graph_from_bjetenls_jec_11_up_felx3031[21] = {
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
   Double_t Graph_from_bjetenls_jec_11_up_fely3031[21] = {
   0,
   0,
   9.56193,
   14.05052,
   15.97159,
   16.85325,
   16.80818,
   15.89298,
   14.23974,
   12.22335,
   10.04529,
   7.867998,
   6.01947,
   4.49843,
   3.169995,
   2.104762,
   1.31972,
   0.7260441,
   0.2810337,
   0.08633465,
   0};
   Double_t Graph_from_bjetenls_jec_11_up_fehx3031[21] = {
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
   Double_t Graph_from_bjetenls_jec_11_up_fehy3031[21] = {
   1.841055,
   1.841055,
   10.61427,
   15.08617,
   15.97159,
   16.85325,
   16.80818,
   15.89298,
   14.23974,
   13.26431,
   11.09512,
   8.931559,
   7.102399,
   5.608969,
   4.325347,
   3.332875,
   2.660022,
   2.234987,
   1.990583,
   1.889246,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_11_up_fx3031,Graph_from_bjetenls_jec_11_up_fy3031,Graph_from_bjetenls_jec_11_up_felx3031,Graph_from_bjetenls_jec_11_up_fehx3031,Graph_from_bjetenls_jec_11_up_fely3031,Graph_from_bjetenls_jec_11_up_fehy3031);
   grae->SetName("Graph_from_bjetenls_jec_11_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_11_up3031 = new TH1F("Graph_Graph_from_bjetenls_jec_11_up3031","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_11_up3031->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_11_up3031->SetMaximum(330.9739);
   Graph_Graph_from_bjetenls_jec_11_up3031->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_11_up3031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_11_up3031->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_up3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_11_up3031);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_11_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_11_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_11_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_11_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_11_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_11_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__32 = new TH1F("ratioframe__32","t#bar{t}",20,3,7);
   ratioframe__32->SetMinimum(0.46);
   ratioframe__32->SetMaximum(1.54);
   ratioframe__32->SetEntries(504920);

   ci = TColor::GetColor("#cc0000");
   ratioframe__32->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__32->SetMarkerColor(ci);
   ratioframe__32->GetXaxis()->SetTitle("log(E)");
   ratioframe__32->GetXaxis()->SetLabelFont(42);
   ratioframe__32->GetXaxis()->SetLabelSize(0);
   ratioframe__32->GetXaxis()->SetTitleSize(0);
   ratioframe__32->GetXaxis()->SetTitleOffset(0);
   ratioframe__32->GetXaxis()->SetTitleFont(42);
   ratioframe__32->GetYaxis()->SetTitle("Data/MC");
   ratioframe__32->GetYaxis()->SetNoExponent();
   ratioframe__32->GetYaxis()->SetNdivisions(5);
   ratioframe__32->GetYaxis()->SetLabelFont(42);
   ratioframe__32->GetYaxis()->SetLabelSize(0.18);
   ratioframe__32->GetYaxis()->SetTitleSize(0.2);
   ratioframe__32->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__32->GetYaxis()->SetTitleFont(42);
   ratioframe__32->GetZaxis()->SetLabelFont(42);
   ratioframe__32->GetZaxis()->SetLabelSize(0.035);
   ratioframe__32->GetZaxis()->SetTitleSize(0.035);
   ratioframe__32->GetZaxis()->SetTitleFont(42);
   ratioframe__32->Draw("");
   
   Double_t Graph_from_ratio_fx3032[20] = {
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
   Double_t Graph_from_ratio_fy3032[20] = {
   0,
   0,
   0.8647057,
   0.872894,
   0.8759765,
   0.9081112,
   0.9111376,
   0.9163513,
   0.9145417,
   0.9030924,
   0.8885692,
   0.8685448,
   0.8737767,
   0.8871318,
   0.8609758,
   0.8438858,
   0.8415575,
   0.851678,
   0.806016,
   0.7376425};
   Double_t Graph_from_ratio_felx3032[20] = {
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
   Double_t Graph_from_ratio_fely3032[20] = {
   0,
   0,
   0.01895959,
   0.01157048,
   0.009319165,
   0.00835371,
   0.007605145,
   0.007291909,
   0.007281138,
   0.007606431,
   0.008229041,
   0.009330596,
   0.01103739,
   0.01376515,
   0.01694335,
   0.02266071,
   0.02982866,
   0.05045663,
   0.0638105,
   0.09389197};
   Double_t Graph_from_ratio_fehx3032[20] = {
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
   Double_t Graph_from_ratio_fehy3032[20] = {
   0,
   0,
   0.01895959,
   0.01157048,
   0.009319165,
   0.00835371,
   0.007605145,
   0.007291909,
   0.007281138,
   0.007606431,
   0.008229041,
   0.009330596,
   0.01103739,
   0.01376515,
   0.01694335,
   0.02266071,
   0.02982866,
   0.05045663,
   0.0638105,
   0.09389197};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3032,Graph_from_ratio_fy3032,Graph_from_ratio_felx3032,Graph_from_ratio_fehx3032,Graph_from_ratio_fely3032,Graph_from_ratio_fehy3032);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3032 = new TH1F("Graph_Graph_from_ratio3032","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3032->SetMinimum(0);
   Graph_Graph_from_ratio3032->SetMaximum(1.016007);
   Graph_Graph_from_ratio3032->SetDirectory(0);
   Graph_Graph_from_ratio3032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3032->SetLineColor(ci);
   Graph_Graph_from_ratio3032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3032->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3032->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3032->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3032->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3032);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
