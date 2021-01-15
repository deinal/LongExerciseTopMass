void bjetenls_jec_22_down()
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
   p1->Range(2.421687,-55.95878,7.240964,411.1978);
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
   
   TH1F *frame__105 = new TH1F("frame__105","t#bar{t}",20,3,7);
   frame__105->SetMinimum(0.1);
   frame__105->SetMaximum(406.5262);
   frame__105->SetEntries(503800);
   frame__105->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__105->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__105->SetMarkerColor(ci);
   frame__105->GetXaxis()->SetTitle("log(E)");
   frame__105->GetXaxis()->SetLabelFont(42);
   frame__105->GetXaxis()->SetLabelSize(0.035);
   frame__105->GetXaxis()->SetTitleSize(0.035);
   frame__105->GetXaxis()->SetTitleFont(42);
   frame__105->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__105->GetYaxis()->SetNoExponent();
   frame__105->GetYaxis()->SetLabelFont(42);
   frame__105->GetYaxis()->SetTitleSize(0.045);
   frame__105->GetYaxis()->SetTitleOffset(1.3);
   frame__105->GetYaxis()->SetTitleFont(42);
   frame__105->GetZaxis()->SetLabelFont(42);
   frame__105->GetZaxis()->SetLabelSize(0.035);
   frame__105->GetZaxis()->SetTitleSize(0.035);
   frame__105->GetZaxis()->SetTitleFont(42);
   frame__105->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_53 = new TH1F("mc_stack_53","mc",20,3,7);
   mc_stack_53->SetMinimum(-4.868178e-08);
   mc_stack_53->SetMaximum(328.3481);
   mc_stack_53->SetDirectory(0);
   mc_stack_53->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_53->SetLineColor(ci);
   mc_stack_53->GetXaxis()->SetLabelFont(42);
   mc_stack_53->GetXaxis()->SetLabelSize(0.035);
   mc_stack_53->GetXaxis()->SetTitleSize(0.035);
   mc_stack_53->GetXaxis()->SetTitleFont(42);
   mc_stack_53->GetYaxis()->SetLabelFont(42);
   mc_stack_53->GetYaxis()->SetLabelSize(0.035);
   mc_stack_53->GetYaxis()->SetTitleSize(0.035);
   mc_stack_53->GetYaxis()->SetTitleOffset(0);
   mc_stack_53->GetYaxis()->SetTitleFont(42);
   mc_stack_53->GetZaxis()->SetLabelFont(42);
   mc_stack_53->GetZaxis()->SetLabelSize(0.035);
   mc_stack_53->GetZaxis()->SetTitleSize(0.035);
   mc_stack_53->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_53);
   
   
   TH1F *bjetenls_jec_22_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_22_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(3,102.1233);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(4,217.5304);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(5,277.7316);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(6,299.6207);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(7,295.2805);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(8,262.7497);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(9,212.8252);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(10,158.5848);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(11,109.1372);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(12,68.43562);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(13,40.04439);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(14,22.11695);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(15,11.41456);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(16,5.290271);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(17,2.302526);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(18,0.8813286);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(19,0.3129135);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(20,0.103555);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinContent(21,0.03777675);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(3,1.109381);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(4,1.484329);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(5,1.51827);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(6,1.428694);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(7,1.283918);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(8,1.096808);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(9,0.8941973);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(10,0.6992704);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(11,0.5251481);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(12,0.3767978);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(13,0.2606741);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(14,0.1754004);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(15,0.1141112);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(16,0.0703816);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(17,0.04210439);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(18,0.0235201);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(19,0.01273502);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(20,0.006636621);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetBinError(21,0.003501073);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetEntries(496902);
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_22_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_22_down_Diboson_stack_2 = new TH1F("bjetenls_jec_22_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(3,0.167956);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(4,0.2780518);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(5,0.2345428);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(6,0.2516944);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(7,0.2259498);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(8,0.2106813);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(9,0.1363368);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(10,0.1161126);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(11,0.1104024);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(12,0.08171092);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(13,0.04703101);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(14,0.020602);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(15,0.02592316);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(16,0.01258277);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(17,0.01085184);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(18,0.006534535);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(19,0.001952649);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(20,0.003085507);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinContent(21,0.001012648);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(3,0.04243731);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(4,0.05257445);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(5,0.04265517);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(6,0.04049142);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(7,0.0342597);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(8,0.0305233);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(9,0.02185537);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(10,0.01803489);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(11,0.01605858);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(12,0.01281581);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(13,0.008800329);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(14,0.005231408);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(15,0.005321568);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(16,0.003308214);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(17,0.002920613);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(18,0.001943701);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(19,0.0009796456);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(20,0.00110052);
   bjetenls_jec_22_down_Diboson_stack_2->SetBinError(21,0.00057572);
   bjetenls_jec_22_down_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_22_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_22_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_22_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_22_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_22_down_DY_stack_3 = new TH1F("bjetenls_jec_22_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(3,0.6472104);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(4,0.3724158);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(5,0.6817611);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(6,0.8835574);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(7,0.8715798);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(8,0.4001255);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(10,0.1302541);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(11,0.1504033);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(12,0.1732329);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(14,0.0763426);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(17,0.0006857327);
   bjetenls_jec_22_down_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(3,0.6472104);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(4,0.3724157);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(5,0.4823948);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(6,0.5110885);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(7,0.4360524);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(8,0.2835891);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(10,0.1302541);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(11,0.110034);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(12,0.1225275);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(14,0.0763426);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(17,0.0006857327);
   bjetenls_jec_22_down_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_22_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_22_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_22_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_22_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_22_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_22_down_W_stack_4 = new TH1F("bjetenls_jec_22_down_W_stack_4","W",20,3,7);
   bjetenls_jec_22_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_22_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_22_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_22_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_22_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_22_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(3,4.431968);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(4,9.004491);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(5,11.89911);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(6,11.95655);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(7,11.99705);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(8,10.86465);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(9,7.718435);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(10,6.311347);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(11,4.365905);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(12,2.910662);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(13,1.713472);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(14,0.9805227);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(15,0.5975955);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(16,0.2999781);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(17,0.1482501);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(18,0.06341654);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(19,0.03435147);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(20,0.01041101);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinContent(21,0.01080151);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(3,0.4165624);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(4,0.5411957);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(5,0.5688621);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(6,0.5146095);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(7,0.467151);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(8,0.4034033);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(9,0.3063022);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(10,0.2520658);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(11,0.1895573);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(12,0.1408083);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(13,0.09757518);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(14,0.06589026);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(15,0.04719773);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(16,0.03001958);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(17,0.01928321);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(18,0.0111371);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(19,0.007625611);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(20,0.003630638);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetBinError(21,0.003447352);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetEntries(6334);
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_22_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_22_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_22_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_22_down_fx3105[21] = {
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
   Double_t Graph_from_bjetenls_jec_22_down_fy3105[21] = {
   0,
   0,
   92.97049,
   197.7124,
   254.0981,
   283.6015,
   281.4256,
   251.3664,
   202.207,
   149.2661,
   101.032,
   62.18158,
   36.57187,
   20.58757,
   10.40557,
   4.756023,
   2.075062,
   0.8361576,
   0.2820135,
   0.08632201,
   0};
   Double_t Graph_from_bjetenls_jec_22_down_felx3105[21] = {
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
   Double_t Graph_from_bjetenls_jec_22_down_fely3105[21] = {
   0,
   0,
   9.624945,
   14.04942,
   15.94046,
   16.84047,
   16.77575,
   15.85454,
   14.21995,
   12.20401,
   10.03501,
   7.864422,
   6.019802,
   4.500296,
   3.173313,
   2.102498,
   1.320415,
   0.7270153,
   0.2810053,
   0.08632201,
   0};
   Double_t Graph_from_bjetenls_jec_22_down_fehx3105[21] = {
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
   Double_t Graph_from_bjetenls_jec_22_down_fehy3105[21] = {
   1.841055,
   1.841055,
   10.67694,
   15.08507,
   15.94046,
   16.84047,
   16.77575,
   15.85454,
   14.21995,
   13.24504,
   11.08489,
   8.928012,
   7.102726,
   5.610791,
   4.328508,
   3.330834,
   2.660575,
   2.235589,
   1.990569,
   1.889239,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_22_down_fx3105,Graph_from_bjetenls_jec_22_down_fy3105,Graph_from_bjetenls_jec_22_down_felx3105,Graph_from_bjetenls_jec_22_down_fehx3105,Graph_from_bjetenls_jec_22_down_fely3105,Graph_from_bjetenls_jec_22_down_fehy3105);
   grae->SetName("Graph_from_bjetenls_jec_22_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_22_down3105 = new TH1F("Graph_Graph_from_bjetenls_jec_22_down3105","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_22_down3105->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_22_down3105->SetMaximum(330.4862);
   Graph_Graph_from_bjetenls_jec_22_down3105->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_22_down3105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_22_down3105->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_22_down3105->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_22_down3105);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_22_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_22_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_22_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_22_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_22_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_22_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__106 = new TH1F("ratioframe__106","t#bar{t}",20,3,7);
   ratioframe__106->SetMinimum(0.46);
   ratioframe__106->SetMaximum(1.54);
   ratioframe__106->SetEntries(503800);

   ci = TColor::GetColor("#cc0000");
   ratioframe__106->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__106->SetMarkerColor(ci);
   ratioframe__106->GetXaxis()->SetTitle("log(E)");
   ratioframe__106->GetXaxis()->SetLabelFont(42);
   ratioframe__106->GetXaxis()->SetLabelSize(0);
   ratioframe__106->GetXaxis()->SetTitleSize(0);
   ratioframe__106->GetXaxis()->SetTitleOffset(0);
   ratioframe__106->GetXaxis()->SetTitleFont(42);
   ratioframe__106->GetYaxis()->SetTitle("Data/MC");
   ratioframe__106->GetYaxis()->SetNoExponent();
   ratioframe__106->GetYaxis()->SetNdivisions(5);
   ratioframe__106->GetYaxis()->SetLabelFont(42);
   ratioframe__106->GetYaxis()->SetLabelSize(0.18);
   ratioframe__106->GetYaxis()->SetTitleSize(0.2);
   ratioframe__106->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__106->GetYaxis()->SetTitleFont(42);
   ratioframe__106->GetZaxis()->SetLabelFont(42);
   ratioframe__106->GetZaxis()->SetLabelSize(0.035);
   ratioframe__106->GetZaxis()->SetTitleSize(0.035);
   ratioframe__106->GetZaxis()->SetTitleFont(42);
   ratioframe__106->Draw("");
   
   Double_t Graph_from_ratio_fx3106[20] = {
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
   Double_t Graph_from_ratio_fy3106[20] = {
   0,
   0,
   0.8658856,
   0.8702691,
   0.8745508,
   0.9069083,
   0.9126081,
   0.9166422,
   0.9162905,
   0.9038624,
   0.8880846,
   0.8684429,
   0.8735009,
   0.8876086,
   0.8610533,
   0.8423441,
   0.8427284,
   0.8517263,
   0.8075581,
   0.7374705};
   Double_t Graph_from_ratio_felx3106[20] = {
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
   Double_t Graph_from_ratio_fely3106[20] = {
   0,
   0,
   0.01885893,
   0.01153027,
   0.009319272,
   0.00834959,
   0.007635229,
   0.007312986,
   0.007307623,
   0.007625978,
   0.008231988,
   0.009333303,
   0.01103222,
   0.01376724,
   0.01692599,
   0.02263363,
   0.02986281,
   0.05040056,
   0.06395765,
   0.09386995};
   Double_t Graph_from_ratio_fehx3106[20] = {
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
   Double_t Graph_from_ratio_fehy3106[20] = {
   0,
   0,
   0.01885893,
   0.01153027,
   0.009319272,
   0.00834959,
   0.007635229,
   0.007312986,
   0.007307623,
   0.007625978,
   0.008231988,
   0.009333303,
   0.01103222,
   0.01376724,
   0.01692599,
   0.02263363,
   0.02986281,
   0.05040056,
   0.06395765,
   0.09386995};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3106,Graph_from_ratio_fy3106,Graph_from_ratio_felx3106,Graph_from_ratio_fehx3106,Graph_from_ratio_fely3106,Graph_from_ratio_fehy3106);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3106 = new TH1F("Graph_Graph_from_ratio3106","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3106->SetMinimum(0);
   Graph_Graph_from_ratio3106->SetMaximum(1.016351);
   Graph_Graph_from_ratio3106->SetDirectory(0);
   Graph_Graph_from_ratio3106->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3106->SetLineColor(ci);
   Graph_Graph_from_ratio3106->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3106->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3106->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3106->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3106->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3106->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3106->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3106->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3106->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3106->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3106->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3106->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3106->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3106);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
