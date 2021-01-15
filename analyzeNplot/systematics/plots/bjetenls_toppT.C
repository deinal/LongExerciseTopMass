void bjetenls_toppT()
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
   p1->Range(2.421687,-56.27158,7.240964,413.4916);
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
   
   TH1F *frame__49 = new TH1F("frame__49","t#bar{t}",20,3,7);
   frame__49->SetMinimum(0.1);
   frame__49->SetMaximum(408.794);
   frame__49->SetEntries(504712);
   frame__49->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__49->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__49->SetMarkerColor(ci);
   frame__49->GetXaxis()->SetTitle("log(E)");
   frame__49->GetXaxis()->SetLabelFont(42);
   frame__49->GetXaxis()->SetLabelSize(0.035);
   frame__49->GetXaxis()->SetTitleSize(0.035);
   frame__49->GetXaxis()->SetTitleFont(42);
   frame__49->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__49->GetYaxis()->SetNoExponent();
   frame__49->GetYaxis()->SetLabelFont(42);
   frame__49->GetYaxis()->SetTitleSize(0.045);
   frame__49->GetYaxis()->SetTitleOffset(1.3);
   frame__49->GetYaxis()->SetTitleFont(42);
   frame__49->GetZaxis()->SetLabelFont(42);
   frame__49->GetZaxis()->SetLabelSize(0.035);
   frame__49->GetZaxis()->SetTitleSize(0.035);
   frame__49->GetZaxis()->SetTitleFont(42);
   frame__49->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_25 = new TH1F("mc_stack_25","mc",20,3,7);
   mc_stack_25->SetMinimum(-6.350547e-09);
   mc_stack_25->SetMaximum(330.1798);
   mc_stack_25->SetDirectory(0);
   mc_stack_25->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_25->SetLineColor(ci);
   mc_stack_25->GetXaxis()->SetLabelFont(42);
   mc_stack_25->GetXaxis()->SetLabelSize(0.035);
   mc_stack_25->GetXaxis()->SetTitleSize(0.035);
   mc_stack_25->GetXaxis()->SetTitleFont(42);
   mc_stack_25->GetYaxis()->SetLabelFont(42);
   mc_stack_25->GetYaxis()->SetLabelSize(0.035);
   mc_stack_25->GetYaxis()->SetTitleSize(0.035);
   mc_stack_25->GetYaxis()->SetTitleOffset(0);
   mc_stack_25->GetYaxis()->SetTitleFont(42);
   mc_stack_25->GetZaxis()->SetLabelFont(42);
   mc_stack_25->GetZaxis()->SetLabelSize(0.035);
   mc_stack_25->GetZaxis()->SetTitleSize(0.035);
   mc_stack_25->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_25);
   
   
   TH1F *bjetenls_toppT_t#bar{t}_stack_1 = new TH1F("bjetenls_toppT_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(3,101.8466);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(4,218.0527);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(5,279.3065);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(6,301.3141);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(7,296.9856);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(8,263.5651);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(9,212.9913);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(10,158.1575);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(11,108.3217);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(12,67.72565);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(13,39.51518);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(14,21.78282);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(15,11.19521);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(16,5.187894);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(17,2.24816);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(18,0.8561167);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(19,0.3022797);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(20,0.09984291);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinContent(21,0.03634445);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(3,1.108507);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(4,1.487582);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(5,1.524715);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(6,1.434858);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(7,1.289015);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(8,1.09862);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(9,0.8936331);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(10,0.696694);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(11,0.5211677);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(12,0.3730015);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(13,0.2573853);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(14,0.1728259);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(15,0.1120553);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(16,0.06902666);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(17,0.04111691);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(18,0.02287415);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(19,0.01229813);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(20,0.006389424);
   bjetenls_toppT_t#bar{t}_stack_1->SetBinError(21,0.003368079);
   bjetenls_toppT_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_toppT_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_toppT_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_toppT_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_toppT_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_toppT_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_toppT_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_toppT_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_toppT_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_toppT_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_toppT_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_toppT_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_toppT_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_toppT_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_toppT_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_toppT_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_toppT_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_toppT_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_toppT_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_toppT_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_toppT_Diboson_stack_2 = new TH1F("bjetenls_toppT_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(7,0.2198612);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(8,0.2162986);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(9,0.1362677);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(10,0.1178704);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(11,0.1087008);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(12,0.08175425);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(13,0.04705652);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(14,0.02061631);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(15,0.02593931);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(16,0.01259065);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(17,0.01085466);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(18,0.006534787);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(19,0.001953153);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(20,0.003084835);
   bjetenls_toppT_Diboson_stack_2->SetBinContent(21,0.001012414);
   bjetenls_toppT_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_toppT_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_toppT_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_toppT_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_toppT_Diboson_stack_2->SetBinError(7,0.03371898);
   bjetenls_toppT_Diboson_stack_2->SetBinError(8,0.03104429);
   bjetenls_toppT_Diboson_stack_2->SetBinError(9,0.02184494);
   bjetenls_toppT_Diboson_stack_2->SetBinError(10,0.01812099);
   bjetenls_toppT_Diboson_stack_2->SetBinError(11,0.01596992);
   bjetenls_toppT_Diboson_stack_2->SetBinError(12,0.0128227);
   bjetenls_toppT_Diboson_stack_2->SetBinError(13,0.008805096);
   bjetenls_toppT_Diboson_stack_2->SetBinError(14,0.005235157);
   bjetenls_toppT_Diboson_stack_2->SetBinError(15,0.005324845);
   bjetenls_toppT_Diboson_stack_2->SetBinError(16,0.003310366);
   bjetenls_toppT_Diboson_stack_2->SetBinError(17,0.002921473);
   bjetenls_toppT_Diboson_stack_2->SetBinError(18,0.001943766);
   bjetenls_toppT_Diboson_stack_2->SetBinError(19,0.0009798904);
   bjetenls_toppT_Diboson_stack_2->SetBinError(20,0.001100304);
   bjetenls_toppT_Diboson_stack_2->SetBinError(21,0.0005755965);
   bjetenls_toppT_Diboson_stack_2->SetEntries(540);
   bjetenls_toppT_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_toppT_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_toppT_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_toppT_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_toppT_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_toppT_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_toppT_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_toppT_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_toppT_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_toppT_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_toppT_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_toppT_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_toppT_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_toppT_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_toppT_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_toppT_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_toppT_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_toppT_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_toppT_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_toppT_DY_stack_3 = new TH1F("bjetenls_toppT_DY_stack_3","DY",20,3,7);
   bjetenls_toppT_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_toppT_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_toppT_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_toppT_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_toppT_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_toppT_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_toppT_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_toppT_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_toppT_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_toppT_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_toppT_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_toppT_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_toppT_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_toppT_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_toppT_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_toppT_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_toppT_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_toppT_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_toppT_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_toppT_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_toppT_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_toppT_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_toppT_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_toppT_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_toppT_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_toppT_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_toppT_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_toppT_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_toppT_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_toppT_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_toppT_DY_stack_3->SetEntries(24);
   bjetenls_toppT_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_toppT_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_toppT_DY_stack_3->SetMarkerColor(ci);
   bjetenls_toppT_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_toppT_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_toppT_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_toppT_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_toppT_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_toppT_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_toppT_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_toppT_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_toppT_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_toppT_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_toppT_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_toppT_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_toppT_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_toppT_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_toppT_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_toppT_DY_stack_3,"hist");
   
   TH1F *bjetenls_toppT_W_stack_4 = new TH1F("bjetenls_toppT_W_stack_4","W",20,3,7);
   bjetenls_toppT_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_toppT_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_toppT_W_stack_4->SetMarkerColor(ci);
   bjetenls_toppT_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_toppT_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_toppT_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_toppT_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_toppT_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_toppT_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_toppT_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_toppT_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_toppT_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_toppT_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_toppT_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_toppT_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_toppT_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_toppT_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_toppT_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_toppT_W_stack_4,"hist");
   
   TH1F *bjetenls_toppT_SinglesPtop_stack_5 = new TH1F("bjetenls_toppT_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(3,4.512031);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(4,8.925545);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(5,12.1486);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(6,12.00675);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(7,12.04068);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(8,10.90521);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(9,7.766665);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(10,6.286362);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(11,4.357011);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(12,2.911292);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(13,1.697226);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(14,0.9768704);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(15,0.5884728);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(16,0.2965562);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(17,0.1466174);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(18,0.06222909);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(19,0.03420895);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(20,0.01041042);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinContent(21,0.01046837);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(3,0.4206031);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(4,0.5397378);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(5,0.5752133);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(6,0.5158283);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(7,0.4682552);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(8,0.4041493);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(9,0.3072242);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(10,0.2512199);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(11,0.1890607);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(12,0.1405364);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(13,0.09680412);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(14,0.06549856);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(15,0.04663991);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(16,0.02969272);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(17,0.01907531);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(18,0.01092805);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(19,0.007598742);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(20,0.003630513);
   bjetenls_toppT_SinglesPtop_stack_5->SetBinError(21,0.003338262);
   bjetenls_toppT_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_toppT_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_toppT_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_toppT_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_toppT_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_toppT_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_toppT_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_toppT_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_toppT_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_toppT_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_toppT_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_toppT_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_toppT_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_toppT_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_toppT_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_toppT_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_toppT_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_toppT_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_toppT_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_toppT_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_toppT_fx3049[21] = {
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
   Double_t Graph_from_bjetenls_toppT_fy3049[21] = {
   0,
   0,
   92.7945,
   197.9431,
   255.2428,
   284.5028,
   281.9935,
   252.0936,
   202.7139,
   149.4754,
   101.0653,
   62.26832,
   36.53798,
   20.55606,
   10.39831,
   4.765559,
   2.074745,
   0.8329404,
   0.2820291,
   0.08633442,
   0};
   Double_t Graph_from_bjetenls_toppT_felx3049[21] = {
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
   Double_t Graph_from_bjetenls_toppT_fely3049[21] = {
   0,
   0,
   9.615798,
   14.05763,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   12.21258,
   10.03667,
   7.869935,
   6.016987,
   4.496794,
   3.172168,
   2.104764,
   1.320296,
   0.7249367,
   0.2810206,
   0.08633442,
   0};
   Double_t Graph_from_bjetenls_toppT_fehx3049[21] = {
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
   Double_t Graph_from_bjetenls_toppT_fehy3049[21] = {
   1.841055,
   1.841055,
   10.66785,
   15.09326,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   13.25358,
   11.08654,
   8.933481,
   7.099949,
   5.607373,
   4.327417,
   3.332876,
   2.66048,
   2.234301,
   1.990576,
   1.889246,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_toppT_fx3049,Graph_from_bjetenls_toppT_fy3049,Graph_from_bjetenls_toppT_felx3049,Graph_from_bjetenls_toppT_fehx3049,Graph_from_bjetenls_toppT_fely3049,Graph_from_bjetenls_toppT_fehy3049);
   grae->SetName("Graph_from_bjetenls_toppT");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_toppT3049 = new TH1F("Graph_Graph_from_bjetenls_toppT3049","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_toppT3049->SetMinimum(0);
   Graph_Graph_from_bjetenls_toppT3049->SetMaximum(331.507);
   Graph_Graph_from_bjetenls_toppT3049->SetDirectory(0);
   Graph_Graph_from_bjetenls_toppT3049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_toppT3049->SetLineColor(ci);
   Graph_Graph_from_bjetenls_toppT3049->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_toppT3049->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_toppT3049->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_toppT3049->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_toppT3049->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_toppT3049->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_toppT3049->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_toppT3049->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_toppT3049->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_toppT3049->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_toppT3049->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_toppT3049->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_toppT3049->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_toppT3049);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_toppT","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_toppT_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_toppT_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_toppT_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_toppT_W","W","f");

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
   entry=leg->AddEntry("bjetenls_toppT_Single top","Single top","f");

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
   
   TH1F *ratioframe__50 = new TH1F("ratioframe__50","t#bar{t}",20,3,7);
   ratioframe__50->SetMinimum(0.46);
   ratioframe__50->SetMaximum(1.54);
   ratioframe__50->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__50->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__50->SetMarkerColor(ci);
   ratioframe__50->GetXaxis()->SetTitle("log(E)");
   ratioframe__50->GetXaxis()->SetLabelFont(42);
   ratioframe__50->GetXaxis()->SetLabelSize(0);
   ratioframe__50->GetXaxis()->SetTitleSize(0);
   ratioframe__50->GetXaxis()->SetTitleOffset(0);
   ratioframe__50->GetXaxis()->SetTitleFont(42);
   ratioframe__50->GetYaxis()->SetTitle("Data/MC");
   ratioframe__50->GetYaxis()->SetNoExponent();
   ratioframe__50->GetYaxis()->SetNdivisions(5);
   ratioframe__50->GetYaxis()->SetLabelFont(42);
   ratioframe__50->GetYaxis()->SetLabelSize(0.18);
   ratioframe__50->GetYaxis()->SetTitleSize(0.2);
   ratioframe__50->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__50->GetYaxis()->SetTitleFont(42);
   ratioframe__50->GetZaxis()->SetLabelFont(42);
   ratioframe__50->GetZaxis()->SetLabelSize(0.035);
   ratioframe__50->GetZaxis()->SetTitleSize(0.035);
   ratioframe__50->GetZaxis()->SetTitleFont(42);
   ratioframe__50->Draw("");
   
   Double_t Graph_from_ratio_fx3050[20] = {
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
   Double_t Graph_from_ratio_fy3050[20] = {
   0,
   0,
   0.8658966,
   0.8696423,
   0.8729844,
   0.9047433,
   0.9093163,
   0.9164147,
   0.917697,
   0.9076054,
   0.8948734,
   0.8783529,
   0.8842103,
   0.8993438,
   0.8770322,
   0.8601493,
   0.8622069,
   0.871895,
   0.8333164,
   0.7617419};
   Double_t Graph_from_ratio_felx3050[20] = {
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
   Double_t Graph_from_ratio_fely3050[20] = {
   0,
   0,
   0.01888315,
   0.01151678,
   0.009282506,
   0.008313756,
   0.007596502,
   0.007300327,
   0.00730971,
   0.007651961,
   0.008295391,
   0.009439937,
   0.01117587,
   0.01397003,
   0.01726645,
   0.02313873,
   0.03056719,
   0.05205081,
   0.06609414,
   0.09705925};
   Double_t Graph_from_ratio_fehx3050[20] = {
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
   Double_t Graph_from_ratio_fehy3050[20] = {
   0,
   0,
   0.01888315,
   0.01151678,
   0.009282506,
   0.008313756,
   0.007596502,
   0.007300327,
   0.00730971,
   0.007651961,
   0.008295391,
   0.009439937,
   0.01117587,
   0.01397003,
   0.01726645,
   0.02313873,
   0.03056719,
   0.05205081,
   0.06609414,
   0.09705925};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3050,Graph_from_ratio_fy3050,Graph_from_ratio_felx3050,Graph_from_ratio_fehx3050,Graph_from_ratio_fely3050,Graph_from_ratio_fehy3050);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3050 = new TH1F("Graph_Graph_from_ratio3050","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3050->SetMinimum(0);
   Graph_Graph_from_ratio3050->SetMaximum(1.017507);
   Graph_Graph_from_ratio3050->SetDirectory(0);
   Graph_Graph_from_ratio3050->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3050->SetLineColor(ci);
   Graph_Graph_from_ratio3050->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3050->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3050->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3050->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3050->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3050->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3050->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3050->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3050->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3050->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3050->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3050->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3050->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3050);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
