void bjetenls_jec_20_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:06 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-56.04032,7.240964,411.7957);
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
   
   TH1F *frame__5 = new TH1F("frame__5","t#bar{t}",20,3,7);
   frame__5->SetMinimum(0.1);
   frame__5->SetMaximum(407.1174);
   frame__5->SetEntries(503436);
   frame__5->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__5->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__5->SetMarkerColor(ci);
   frame__5->GetXaxis()->SetTitle("log(E)");
   frame__5->GetXaxis()->SetLabelFont(42);
   frame__5->GetXaxis()->SetLabelSize(0.035);
   frame__5->GetXaxis()->SetTitleSize(0.035);
   frame__5->GetXaxis()->SetTitleFont(42);
   frame__5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__5->GetYaxis()->SetNoExponent();
   frame__5->GetYaxis()->SetLabelFont(42);
   frame__5->GetYaxis()->SetTitleSize(0.045);
   frame__5->GetYaxis()->SetTitleOffset(1.3);
   frame__5->GetYaxis()->SetTitleFont(42);
   frame__5->GetZaxis()->SetLabelFont(42);
   frame__5->GetZaxis()->SetLabelSize(0.035);
   frame__5->GetZaxis()->SetTitleSize(0.035);
   frame__5->GetZaxis()->SetTitleFont(42);
   frame__5->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_3 = new TH1F("mc_stack_3","mc",20,3,7);
   mc_stack_3->SetMinimum(-2.468835e-08);
   mc_stack_3->SetMaximum(328.8256);
   mc_stack_3->SetDirectory(0);
   mc_stack_3->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_3->SetLineColor(ci);
   mc_stack_3->GetXaxis()->SetLabelFont(42);
   mc_stack_3->GetXaxis()->SetLabelSize(0.035);
   mc_stack_3->GetXaxis()->SetTitleSize(0.035);
   mc_stack_3->GetXaxis()->SetTitleFont(42);
   mc_stack_3->GetYaxis()->SetLabelFont(42);
   mc_stack_3->GetYaxis()->SetLabelSize(0.035);
   mc_stack_3->GetYaxis()->SetTitleSize(0.035);
   mc_stack_3->GetYaxis()->SetTitleOffset(0);
   mc_stack_3->GetYaxis()->SetTitleFont(42);
   mc_stack_3->GetZaxis()->SetLabelFont(42);
   mc_stack_3->GetZaxis()->SetLabelSize(0.035);
   mc_stack_3->GetZaxis()->SetTitleSize(0.035);
   mc_stack_3->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_3);
   
   
   TH1F *bjetenls_jec_20_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_20_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(3,102.6133);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(4,217.582);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(5,278.5038);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(6,299.9628);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(7,295.25);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(8,262.794);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(9,212.5023);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(10,158.4709);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(11,108.741);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(12,68.24577);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(13,39.91872);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(14,22.06997);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(15,11.37586);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(16,5.28809);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(17,2.291988);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(18,0.8785031);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(19,0.311459);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(20,0.1026489);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinContent(21,0.03779783);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(3,1.111969);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(4,1.484549);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(5,1.520337);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(6,1.42948);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(7,1.283801);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(8,1.096921);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(9,0.8934886);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(10,0.6990051);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(11,0.5241471);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(12,0.3762947);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(13,0.2602836);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(14,0.175225);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(15,0.1139202);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(16,0.07036592);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(17,0.04200811);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(18,0.02348311);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(19,0.01270635);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(20,0.006605418);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetBinError(21,0.003503048);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetEntries(496543);
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_20_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_20_down_Diboson_stack_2 = new TH1F("bjetenls_jec_20_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(3,0.1682878);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(4,0.2785801);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(5,0.2348992);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(6,0.251902);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(7,0.2156447);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(8,0.2109517);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(9,0.1364433);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(10,0.1205714);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(11,0.1062013);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(12,0.08181923);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(13,0.04709102);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(14,0.02063255);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(15,0.02595035);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(16,0.01259711);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(17,0.01086072);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(18,0.006539691);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(19,0.001953552);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(20,0.003086393);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinContent(21,0.001012628);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(3,0.04252216);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(4,0.05267473);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(5,0.04272029);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(6,0.04052366);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(7,0.03347411);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(8,0.03056361);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(9,0.0218731);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(10,0.01832223);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(11,0.01577225);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(12,0.01283294);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(13,0.008811626);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(14,0.005239294);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(15,0.005327077);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(16,0.003311995);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(17,0.002923091);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(18,0.001945241);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(19,0.0009800981);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(20,0.00110089);
   bjetenls_jec_20_down_Diboson_stack_2->SetBinError(21,0.0005757126);
   bjetenls_jec_20_down_Diboson_stack_2->SetEntries(538);
   bjetenls_jec_20_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_20_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_20_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_20_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_20_down_DY_stack_3 = new TH1F("bjetenls_jec_20_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(3,0.6487002);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(4,0.3731262);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(5,0.6811039);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(6,0.8827103);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(7,0.87201);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(8,0.4009497);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(10,0.1304729);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(11,0.150729);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(12,0.1735882);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(13,0.0633244);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(14,0.07645793);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(15,0.04664864);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(16,0.04336609);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(17,0.0006870977);
   bjetenls_jec_20_down_DY_stack_3->SetBinContent(18,0.03047493);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(3,0.6487003);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(4,0.3731262);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(5,0.4819297);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(6,0.5105811);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(7,0.4362767);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(8,0.2841724);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(10,0.1304729);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(11,0.1102733);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(12,0.1227786);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(13,0.0633244);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(14,0.07645793);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(15,0.04664864);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(16,0.04336609);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(17,0.0006870977);
   bjetenls_jec_20_down_DY_stack_3->SetBinError(18,0.03047494);
   bjetenls_jec_20_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_20_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_20_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_20_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_20_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_20_down_W_stack_4 = new TH1F("bjetenls_jec_20_down_W_stack_4","W",20,3,7);
   bjetenls_jec_20_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_20_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_20_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_20_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_20_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_20_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(3,4.485771);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(4,9.031949);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(5,11.90192);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(6,12.06976);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(7,11.9073);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(8,10.87327);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(9,7.755287);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(10,6.236423);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(11,4.376409);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(12,2.897021);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(13,1.714316);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(14,0.9815468);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(15,0.5940621);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(16,0.3003018);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(17,0.148393);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(18,0.06347243);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(19,0.03437106);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(20,0.0104162);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinContent(21,0.01080609);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(3,0.4197552);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(4,0.5417837);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(5,0.5688817);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(6,0.5172417);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(7,0.4649919);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(8,0.4035882);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(9,0.3072212);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(10,0.2504324);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(11,0.1898328);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(12,0.1404686);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(13,0.09763052);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(14,0.06596027);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(15,0.0470643);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(16,0.03005241);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(17,0.01930183);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(18,0.01114702);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(19,0.007629818);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(20,0.003632606);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetBinError(21,0.003448916);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetEntries(6331);
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_20_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_20_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_20_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_20_down_fx3005[21] = {
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
   Double_t Graph_from_bjetenls_jec_20_down_fy3005[21] = {
   0,
   0,
   93.2367,
   197.3346,
   254.7431,
   284.2269,
   281.6848,
   251.4812,
   202.3929,
   149.1318,
   100.8705,
   62.12487,
   36.44179,
   20.59621,
   10.38932,
   4.75129,
   2.071175,
   0.8328344,
   0.2794667,
   0.08637802,
   0};
   Double_t Graph_from_bjetenls_jec_20_down_felx3005[21] = {
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
   Double_t Graph_from_bjetenls_jec_20_down_fely3005[21] = {
   0,
   0,
   9.638765,
   14.03597,
   15.96067,
   16.85903,
   16.78347,
   15.85816,
   14.22649,
   12.1985,
   10.02696,
   7.860816,
   6.008987,
   4.501256,
   3.17075,
   2.101373,
   1.31895,
   0.7248681,
   0.2785184,
   0.08637802,
   0};
   Double_t Graph_from_bjetenls_jec_20_down_fehx3005[21] = {
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
   Double_t Graph_from_bjetenls_jec_20_down_fehy3005[21] = {
   1.841055,
   1.841055,
   10.69069,
   15.07165,
   15.96067,
   16.85903,
   16.78347,
   15.85816,
   14.22649,
   13.23955,
   11.07688,
   8.924435,
   7.092059,
   5.611728,
   4.326066,
   3.32982,
   2.659409,
   2.234258,
   1.989312,
   1.889269,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_20_down_fx3005,Graph_from_bjetenls_jec_20_down_fy3005,Graph_from_bjetenls_jec_20_down_felx3005,Graph_from_bjetenls_jec_20_down_fehx3005,Graph_from_bjetenls_jec_20_down_fely3005,Graph_from_bjetenls_jec_20_down_fehy3005);
   grae->SetName("Graph_from_bjetenls_jec_20_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_20_down3005 = new TH1F("Graph_Graph_from_bjetenls_jec_20_down3005","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_20_down3005->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_20_down3005->SetMaximum(331.1945);
   Graph_Graph_from_bjetenls_jec_20_down3005->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_20_down3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_20_down3005->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_20_down3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_20_down3005);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_20_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_20_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_20_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_20_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_20_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_20_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__6 = new TH1F("ratioframe__6","t#bar{t}",20,3,7);
   ratioframe__6->SetMinimum(0.46);
   ratioframe__6->SetMaximum(1.54);
   ratioframe__6->SetEntries(503436);

   ci = TColor::GetColor("#cc0000");
   ratioframe__6->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__6->SetMarkerColor(ci);
   ratioframe__6->GetXaxis()->SetTitle("log(E)");
   ratioframe__6->GetXaxis()->SetLabelFont(42);
   ratioframe__6->GetXaxis()->SetLabelSize(0);
   ratioframe__6->GetXaxis()->SetTitleSize(0);
   ratioframe__6->GetXaxis()->SetTitleOffset(0);
   ratioframe__6->GetXaxis()->SetTitleFont(42);
   ratioframe__6->GetYaxis()->SetTitle("Data/MC");
   ratioframe__6->GetYaxis()->SetNoExponent();
   ratioframe__6->GetYaxis()->SetNdivisions(5);
   ratioframe__6->GetYaxis()->SetLabelFont(42);
   ratioframe__6->GetYaxis()->SetLabelSize(0.18);
   ratioframe__6->GetYaxis()->SetTitleSize(0.2);
   ratioframe__6->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__6->GetYaxis()->SetTitleFont(42);
   ratioframe__6->GetZaxis()->SetLabelFont(42);
   ratioframe__6->GetZaxis()->SetLabelSize(0.035);
   ratioframe__6->GetZaxis()->SetTitleSize(0.035);
   ratioframe__6->GetZaxis()->SetTitleFont(42);
   ratioframe__6->Draw("");
   
   Double_t Graph_from_ratio_fx3006[20] = {
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
   Double_t Graph_from_ratio_fy3006[20] = {
   0,
   0,
   0.8639745,
   0.8682991,
   0.8744392,
   0.9075883,
   0.9138342,
   0.9168804,
   0.9183231,
   0.9040571,
   0.8897116,
   0.8701182,
   0.8729941,
   0.8897386,
   0.8627192,
   0.8417773,
   0.8447126,
   0.8507076,
   0.803565,
   0.7436669};
   Double_t Graph_from_ratio_felx3006[20] = {
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
   Double_t Graph_from_ratio_fely3006[20] = {
   0,
   0,
   0.01878549,
   0.01151219,
   0.009305795,
   0.008347787,
   0.00764269,
   0.00731388,
   0.007323058,
   0.007629942,
   0.008256222,
   0.009358649,
   0.01104585,
   0.01380555,
   0.01697832,
   0.02262891,
   0.02997386,
   0.05045958,
   0.06389123,
   0.09476642};
   Double_t Graph_from_ratio_fehx3006[20] = {
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
   Double_t Graph_from_ratio_fehy3006[20] = {
   0,
   0,
   0.01878549,
   0.01151219,
   0.009305795,
   0.008347787,
   0.00764269,
   0.00731388,
   0.007323058,
   0.007629942,
   0.008256222,
   0.009358649,
   0.01104585,
   0.01380555,
   0.01697832,
   0.02262891,
   0.02997386,
   0.05045958,
   0.06389123,
   0.09476642};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3006,Graph_from_ratio_fy3006,Graph_from_ratio_felx3006,Graph_from_ratio_fehx3006,Graph_from_ratio_fely3006,Graph_from_ratio_fehy3006);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3006 = new TH1F("Graph_Graph_from_ratio3006","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3006->SetMinimum(0);
   Graph_Graph_from_ratio3006->SetMaximum(1.018211);
   Graph_Graph_from_ratio3006->SetDirectory(0);
   Graph_Graph_from_ratio3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3006->SetLineColor(ci);
   Graph_Graph_from_ratio3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3006);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
