void bjetenls_jec_8_down()
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
   p1->Range(2.421687,-56.11668,7.240964,412.3556);
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
   
   TH1F *frame__107 = new TH1F("frame__107","t#bar{t}",20,3,7);
   frame__107->SetMinimum(0.1);
   frame__107->SetMaximum(407.6709);
   frame__107->SetEntries(504674);
   frame__107->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__107->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__107->SetMarkerColor(ci);
   frame__107->GetXaxis()->SetTitle("log(E)");
   frame__107->GetXaxis()->SetLabelFont(42);
   frame__107->GetXaxis()->SetLabelSize(0.035);
   frame__107->GetXaxis()->SetTitleSize(0.035);
   frame__107->GetXaxis()->SetTitleFont(42);
   frame__107->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__107->GetYaxis()->SetNoExponent();
   frame__107->GetYaxis()->SetLabelFont(42);
   frame__107->GetYaxis()->SetTitleSize(0.045);
   frame__107->GetYaxis()->SetTitleOffset(1.3);
   frame__107->GetYaxis()->SetTitleFont(42);
   frame__107->GetZaxis()->SetLabelFont(42);
   frame__107->GetZaxis()->SetLabelSize(0.035);
   frame__107->GetZaxis()->SetTitleSize(0.035);
   frame__107->GetZaxis()->SetTitleFont(42);
   frame__107->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_54 = new TH1F("mc_stack_54","mc",20,3,7);
   mc_stack_54->SetMinimum(-6.350547e-09);
   mc_stack_54->SetMaximum(329.2727);
   mc_stack_54->SetDirectory(0);
   mc_stack_54->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_54->SetLineColor(ci);
   mc_stack_54->GetXaxis()->SetLabelFont(42);
   mc_stack_54->GetXaxis()->SetLabelSize(0.035);
   mc_stack_54->GetXaxis()->SetTitleSize(0.035);
   mc_stack_54->GetXaxis()->SetTitleFont(42);
   mc_stack_54->GetYaxis()->SetLabelFont(42);
   mc_stack_54->GetYaxis()->SetLabelSize(0.035);
   mc_stack_54->GetYaxis()->SetTitleSize(0.035);
   mc_stack_54->GetYaxis()->SetTitleOffset(0);
   mc_stack_54->GetYaxis()->SetTitleFont(42);
   mc_stack_54->GetZaxis()->SetLabelFont(42);
   mc_stack_54->GetZaxis()->SetLabelSize(0.035);
   mc_stack_54->GetZaxis()->SetTitleSize(0.035);
   mc_stack_54->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_54);
   
   
   TH1F *bjetenls_jec_8_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_8_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(3,101.726);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(4,217.6254);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(5,278.5622);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(6,300.4672);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(7,296.3654);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(8,263.5417);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(9,213.4803);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(10,158.963);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(11,109.1382);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(12,68.42122);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(13,39.9965);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(14,22.10393);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(15,11.38733);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(16,5.288252);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(17,2.301576);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(18,0.8779786);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(19,0.3136489);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(20,0.1030544);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinContent(21,0.0377823);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(3,1.107091);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(4,1.484679);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(5,1.520673);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(6,1.430761);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(7,1.286282);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(8,1.098429);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(9,0.8955823);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(10,0.7000867);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(11,0.5251052);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(12,0.376777);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(13,0.2605196);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(14,0.1753576);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(15,0.1139717);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(16,0.07037046);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(17,0.04209571);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(18,0.02347592);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(19,0.01274701);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(20,0.006617908);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetBinError(21,0.003501593);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetEntries(497758);
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_8_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_8_down_Diboson_stack_2 = new TH1F("bjetenls_jec_8_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(7,0.2198741);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(8,0.2163131);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(9,0.1362862);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(10,0.1178929);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(11,0.10872);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(12,0.08177308);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(13,0.04706751);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(14,0.02061991);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(15,0.02594302);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(16,0.01182579);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(17,0.01085625);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(18,0.006536224);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(19,0.001953294);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(20,0.003085298);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinContent(21,0.001012473);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(7,0.03372086);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(8,0.03104624);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(9,0.02184791);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(10,0.01812445);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(11,0.01597255);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(12,0.01282565);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(13,0.00880714);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(14,0.005236054);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(15,0.005325612);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(16,0.003220829);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(17,0.002921883);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(18,0.001944194);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(19,0.0009799642);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(20,0.001100483);
   bjetenls_jec_8_down_Diboson_stack_2->SetBinError(21,0.0005756251);
   bjetenls_jec_8_down_Diboson_stack_2->SetEntries(539);
   bjetenls_jec_8_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_8_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_8_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_8_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_8_down_DY_stack_3 = new TH1F("bjetenls_jec_8_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(13,0.06327373);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(15,0.04663464);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(16,0.04335308);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_8_down_DY_stack_3->SetBinContent(18,0.03045055);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(13,0.06327373);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(15,0.04663464);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(16,0.04335308);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_8_down_DY_stack_3->SetBinError(18,0.03045055);
   bjetenls_jec_8_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_8_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_8_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_8_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_8_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_8_down_W_stack_4 = new TH1F("bjetenls_jec_8_down_W_stack_4","W",20,3,7);
   bjetenls_jec_8_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_8_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_8_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_8_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_8_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_8_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(7,12.02855);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(8,10.9013);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(9,7.778617);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(10,6.29942);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(11,4.388655);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(12,2.908669);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(13,1.709071);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(14,0.9854592);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(15,0.5937071);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(16,0.3001879);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(17,0.1483253);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(18,0.06344888);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(19,0.0343593);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(20,0.01041214);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinContent(21,0.0108025);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(7,0.4677843);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(8,0.4039746);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(9,0.3076888);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(10,0.2517573);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(11,0.1900303);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(12,0.1407289);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(13,0.09748255);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(14,0.06607383);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(15,0.04704367);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(16,0.030041);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(17,0.01929292);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(18,0.01114287);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(19,0.007627198);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(20,0.003631138);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetBinError(21,0.003447752);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_8_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_8_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_8_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_8_down_fx3107[21] = {
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
   Double_t Graph_from_bjetenls_jec_8_down_fy3107[21] = {
   0,
   0,
   93.10551,
   197.661,
   255.046,
   284.419,
   282.0852,
   251.888,
   202.6985,
   149.4026,
   101.043,
   62.17474,
   36.51838,
   20.53743,
   10.40707,
   4.75682,
   2.07744,
   0.8375857,
   0.2806638,
   0.08632691,
   0};
   Double_t Graph_from_bjetenls_jec_8_down_felx3107[21] = {
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
   Double_t Graph_from_bjetenls_jec_8_down_fely3107[21] = {
   0,
   0,
   9.631957,
   14.04759,
   15.97016,
   16.86473,
   16.79539,
   15.87098,
   14.23722,
   12.2096,
   10.03556,
   7.863987,
   6.015357,
   4.494722,
   3.173548,
   2.102688,
   1.321311,
   0.7279364,
   0.2796876,
   0.08632691,
   0};
   Double_t Graph_from_bjetenls_jec_8_down_fehx3107[21] = {
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
   Double_t Graph_from_bjetenls_jec_8_down_fehy3107[21] = {
   1.841055,
   1.841055,
   10.68392,
   15.08325,
   15.97016,
   16.86473,
   16.79539,
   15.87098,
   14.23722,
   13.25061,
   11.08544,
   8.927581,
   7.098342,
   5.605351,
   4.328733,
   3.331005,
   2.661289,
   2.23616,
   1.989903,
   1.889242,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_8_down_fx3107,Graph_from_bjetenls_jec_8_down_fy3107,Graph_from_bjetenls_jec_8_down_felx3107,Graph_from_bjetenls_jec_8_down_fehx3107,Graph_from_bjetenls_jec_8_down_fely3107,Graph_from_bjetenls_jec_8_down_fehy3107);
   grae->SetName("Graph_from_bjetenls_jec_8_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_8_down3107 = new TH1F("Graph_Graph_from_bjetenls_jec_8_down3107","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_8_down3107->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_8_down3107->SetMaximum(331.4121);
   Graph_Graph_from_bjetenls_jec_8_down3107->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_8_down3107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_8_down3107->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_8_down3107->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_8_down3107);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_8_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_8_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_8_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_8_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_8_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_8_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__108 = new TH1F("ratioframe__108","t#bar{t}",20,3,7);
   ratioframe__108->SetMinimum(0.46);
   ratioframe__108->SetMaximum(1.54);
   ratioframe__108->SetEntries(504674);

   ci = TColor::GetColor("#cc0000");
   ratioframe__108->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__108->SetMarkerColor(ci);
   ratioframe__108->GetXaxis()->SetTitle("log(E)");
   ratioframe__108->GetXaxis()->SetLabelFont(42);
   ratioframe__108->GetXaxis()->SetLabelSize(0);
   ratioframe__108->GetXaxis()->SetTitleSize(0);
   ratioframe__108->GetXaxis()->SetTitleOffset(0);
   ratioframe__108->GetXaxis()->SetTitleFont(42);
   ratioframe__108->GetYaxis()->SetTitle("Data/MC");
   ratioframe__108->GetYaxis()->SetNoExponent();
   ratioframe__108->GetYaxis()->SetNdivisions(5);
   ratioframe__108->GetYaxis()->SetLabelFont(42);
   ratioframe__108->GetYaxis()->SetLabelSize(0.18);
   ratioframe__108->GetYaxis()->SetTitleSize(0.2);
   ratioframe__108->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__108->GetYaxis()->SetTitleFont(42);
   ratioframe__108->GetZaxis()->SetLabelFont(42);
   ratioframe__108->GetZaxis()->SetLabelSize(0.035);
   ratioframe__108->GetZaxis()->SetTitleSize(0.035);
   ratioframe__108->GetZaxis()->SetTitleFont(42);
   ratioframe__108->Draw("");
   
   Double_t Graph_from_ratio_fx3108[20] = {
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
   Double_t Graph_from_ratio_fy3108[20] = {
   0,
   0,
   0.8698596,
   0.8701061,
   0.874587,
   0.9069685,
   0.9114702,
   0.9157583,
   0.9155508,
   0.9026771,
   0.8880072,
   0.8685429,
   0.873313,
   0.8857517,
   0.8633978,
   0.842867,
   0.8439922,
   0.8560645,
   0.8019848,
   0.7406741};
   Double_t Graph_from_ratio_felx3108[20] = {
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
   Double_t Graph_from_ratio_fely3108[20] = {
   0,
   0,
   0.01894851,
   0.01152878,
   0.009302978,
   0.008336041,
   0.007614166,
   0.007296904,
   0.007292512,
   0.007610528,
   0.008231051,
   0.009335016,
   0.01103724,
   0.01375258,
   0.01697879,
   0.02265105,
   0.02990033,
   0.05070442,
   0.06359133,
   0.09433226};
   Double_t Graph_from_ratio_fehx3108[20] = {
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
   Double_t Graph_from_ratio_fehy3108[20] = {
   0,
   0,
   0.01894851,
   0.01152878,
   0.009302978,
   0.008336041,
   0.007614166,
   0.007296904,
   0.007292512,
   0.007610528,
   0.008231051,
   0.009335016,
   0.01103724,
   0.01375258,
   0.01697879,
   0.02265105,
   0.02990033,
   0.05070442,
   0.06359133,
   0.09433226};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3108,Graph_from_ratio_fy3108,Graph_from_ratio_felx3108,Graph_from_ratio_fehx3108,Graph_from_ratio_fely3108,Graph_from_ratio_fehy3108);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3108 = new TH1F("Graph_Graph_from_ratio3108","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3108->SetMinimum(0);
   Graph_Graph_from_ratio3108->SetMaximum(1.015361);
   Graph_Graph_from_ratio3108->SetDirectory(0);
   Graph_Graph_from_ratio3108->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3108->SetLineColor(ci);
   Graph_Graph_from_ratio3108->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3108->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3108->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3108->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3108->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3108->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3108->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3108->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3108->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3108->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3108->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3108->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3108->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3108);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
