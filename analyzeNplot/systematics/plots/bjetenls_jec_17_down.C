void bjetenls_jec_17_down()
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
   p1->Range(2.421687,-56.11753,7.240964,412.3619);
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
   
   TH1F *frame__29 = new TH1F("frame__29","t#bar{t}",20,3,7);
   frame__29->SetMinimum(0.1);
   frame__29->SetMaximum(407.6771);
   frame__29->SetEntries(504624);
   frame__29->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__29->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__29->SetMarkerColor(ci);
   frame__29->GetXaxis()->SetTitle("log(E)");
   frame__29->GetXaxis()->SetLabelFont(42);
   frame__29->GetXaxis()->SetLabelSize(0.035);
   frame__29->GetXaxis()->SetTitleSize(0.035);
   frame__29->GetXaxis()->SetTitleFont(42);
   frame__29->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__29->GetYaxis()->SetNoExponent();
   frame__29->GetYaxis()->SetLabelFont(42);
   frame__29->GetYaxis()->SetTitleSize(0.045);
   frame__29->GetYaxis()->SetTitleOffset(1.3);
   frame__29->GetYaxis()->SetTitleFont(42);
   frame__29->GetZaxis()->SetLabelFont(42);
   frame__29->GetZaxis()->SetLabelSize(0.035);
   frame__29->GetZaxis()->SetTitleSize(0.035);
   frame__29->GetZaxis()->SetTitleFont(42);
   frame__29->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_15 = new TH1F("mc_stack_15","mc",20,3,7);
   mc_stack_15->SetMinimum(-4.578401e-08);
   mc_stack_15->SetMaximum(329.2776);
   mc_stack_15->SetDirectory(0);
   mc_stack_15->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_15->SetLineColor(ci);
   mc_stack_15->GetXaxis()->SetLabelFont(42);
   mc_stack_15->GetXaxis()->SetLabelSize(0.035);
   mc_stack_15->GetXaxis()->SetTitleSize(0.035);
   mc_stack_15->GetXaxis()->SetTitleFont(42);
   mc_stack_15->GetYaxis()->SetLabelFont(42);
   mc_stack_15->GetYaxis()->SetLabelSize(0.035);
   mc_stack_15->GetYaxis()->SetTitleSize(0.035);
   mc_stack_15->GetYaxis()->SetTitleOffset(0);
   mc_stack_15->GetYaxis()->SetTitleFont(42);
   mc_stack_15->GetZaxis()->SetLabelFont(42);
   mc_stack_15->GetZaxis()->SetLabelSize(0.035);
   mc_stack_15->GetZaxis()->SetTitleSize(0.035);
   mc_stack_15->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_15);
   
   
   TH1F *bjetenls_jec_17_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_17_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(3,101.795);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(4,217.5935);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(5,278.6647);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(6,300.5004);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(7,296.3105);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(8,263.5853);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(9,213.4064);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(10,158.9543);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(11,109.0912);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(12,68.39558);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(13,39.99451);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(14,22.09345);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(15,11.38462);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(16,5.286412);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(17,2.300926);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(18,0.8789527);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(19,0.3122229);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(20,0.1030802);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinContent(21,0.03779359);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(3,1.107394);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(4,1.48452);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(5,1.520938);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(6,1.430822);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(7,1.286154);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(8,1.098534);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(9,0.895433);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(10,0.7000666);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(11,0.5249896);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(12,0.376704);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(13,0.2605141);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(14,0.1753129);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(15,0.1139606);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(16,0.07035796);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(17,0.0420907);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(18,0.02348642);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(19,0.01272004);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(20,0.006619559);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetBinError(21,0.003502619);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetEntries(497710);
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_17_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_17_down_Diboson_stack_2 = new TH1F("bjetenls_jec_17_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(3,0.1618902);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(4,0.2645747);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(5,0.2525363);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(6,0.251125);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(7,0.2199095);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(8,0.2163467);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(9,0.1363036);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(10,0.1179046);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(11,0.1087329);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(12,0.0817818);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(13,0.04707232);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(14,0.02062291);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(15,0.02594687);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(16,0.01182786);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(17,0.0108581);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(18,0.006537532);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(19,0.00195364);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(20,0.00308615);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinContent(21,0.001012694);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(3,0.04194736);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(4,0.051114);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(5,0.04452799);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(6,0.0403979);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(7,0.03372636);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(8,0.03105115);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(9,0.0218507);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(10,0.01812625);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(11,0.01597454);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(12,0.01282702);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(13,0.008808035);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(14,0.005236821);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(15,0.005326395);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(16,0.003221392);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(17,0.002922387);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(18,0.001944583);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(19,0.0009801347);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(20,0.001100791);
   bjetenls_jec_17_down_Diboson_stack_2->SetBinError(21,0.0005757535);
   bjetenls_jec_17_down_Diboson_stack_2->SetEntries(539);
   bjetenls_jec_17_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_17_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_17_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_17_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_17_down_DY_stack_3 = new TH1F("bjetenls_jec_17_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(3,0.6454175);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(4,0.3717085);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(5,0.6780955);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(6,0.8792199);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(7,0.8700596);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(8,0.4002218);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(10,0.1302922);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(11,0.150618);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(12,0.1734815);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(13,0.06328639);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(14,0.07643843);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(15,0.04663931);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(16,0.04335741);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(17,0.0006870977);
   bjetenls_jec_17_down_DY_stack_3->SetBinContent(18,0.03045664);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(3,0.6454176);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(4,0.3717085);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(5,0.4798006);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(6,0.5085571);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(7,0.4353053);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(8,0.2836558);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(10,0.1302922);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(11,0.1101932);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(12,0.1227035);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(13,0.06328639);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(14,0.07643843);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(15,0.04663931);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(16,0.04335742);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(17,0.0006870977);
   bjetenls_jec_17_down_DY_stack_3->SetBinError(18,0.03045664);
   bjetenls_jec_17_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_17_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_17_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_17_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_17_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_17_down_W_stack_4 = new TH1F("bjetenls_jec_17_down_W_stack_4","W",20,3,7);
   bjetenls_jec_17_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_17_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_17_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_17_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_17_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_17_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(3,4.45876);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(4,8.977457);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(5,12.0662);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(6,11.96698);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(7,12.04901);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(8,10.88509);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(9,7.779921);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(10,6.318655);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(11,4.378282);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(12,2.901735);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(13,1.709301);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(14,0.9855974);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(15,0.593787);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(16,0.3002354);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(17,0.1483513);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(18,0.0634614);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(19,0.03436622);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(20,0.01041416);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinContent(21,0.01080486);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(3,0.4173497);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(4,0.5408693);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(5,0.5724888);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(6,0.514561);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(7,0.4681559);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(8,0.4037203);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(9,0.3077403);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(10,0.2521275);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(11,0.189757);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(12,0.1405572);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(13,0.09749566);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(14,0.06608316);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(15,0.04704998);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(16,0.03004576);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(17,0.01929628);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(18,0.01114506);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(19,0.007628725);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(20,0.003631847);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetBinError(21,0.003448501);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetEntries(6351);
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_17_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_17_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_17_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_17_down_fx3029[21] = {
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
   Double_t Graph_from_bjetenls_jec_17_down_fy3029[21] = {
   0,
   0,
   92.78378,
   197.8793,
   255.1893,
   284.266,
   282.1121,
   252.0837,
   202.7562,
   149.4653,
   101.028,
   62.20987,
   36.54008,
   20.56597,
   10.38498,
   4.770421,
   2.071012,
   0.8357744,
   0.2781052,
   0.08639593,
   0};
   Double_t Graph_from_bjetenls_jec_17_down_felx3029[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_17_down_fely3029[21] = {
   0,
   0,
   9.615241,
   14.05536,
   15.97465,
   16.86019,
   16.79619,
   15.87714,
   14.23925,
   12.21217,
   10.03481,
   7.866221,
   6.017161,
   4.497896,
   3.170066,
   2.105918,
   1.318889,
   0.7267679,
   0.2771878,
   0.08639593,
   0};
   Double_t Graph_from_bjetenls_jec_17_down_fehx3029[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_17_down_fehy3029[21] = {
   1.841055,
   1.841055,
   10.66729,
   15.091,
   15.97465,
   16.86019,
   16.79619,
   15.87714,
   14.23925,
   13.25317,
   11.08469,
   8.929796,
   7.100121,
   5.608449,
   4.325414,
   3.333917,
   2.65936,
   2.235435,
   1.988639,
   1.889279,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_17_down_fx3029,Graph_from_bjetenls_jec_17_down_fy3029,Graph_from_bjetenls_jec_17_down_felx3029,Graph_from_bjetenls_jec_17_down_fehx3029,Graph_from_bjetenls_jec_17_down_fely3029,Graph_from_bjetenls_jec_17_down_fehy3029);
   grae->SetName("Graph_from_bjetenls_jec_17_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_17_down3029 = new TH1F("Graph_Graph_from_bjetenls_jec_17_down3029","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_17_down3029->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_17_down3029->SetMaximum(331.2388);
   Graph_Graph_from_bjetenls_jec_17_down3029->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_17_down3029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_17_down3029->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_17_down3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_17_down3029);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_17_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_17_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_17_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_17_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_17_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_17_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__30 = new TH1F("ratioframe__30","t#bar{t}",20,3,7);
   ratioframe__30->SetMinimum(0.46);
   ratioframe__30->SetMaximum(1.54);
   ratioframe__30->SetEntries(504624);

   ci = TColor::GetColor("#cc0000");
   ratioframe__30->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__30->SetMarkerColor(ci);
   ratioframe__30->GetXaxis()->SetTitle("log(E)");
   ratioframe__30->GetXaxis()->SetLabelFont(42);
   ratioframe__30->GetXaxis()->SetLabelSize(0);
   ratioframe__30->GetXaxis()->SetTitleSize(0);
   ratioframe__30->GetXaxis()->SetTitleOffset(0);
   ratioframe__30->GetXaxis()->SetTitleFont(42);
   ratioframe__30->GetYaxis()->SetTitle("Data/MC");
   ratioframe__30->GetYaxis()->SetNoExponent();
   ratioframe__30->GetYaxis()->SetNdivisions(5);
   ratioframe__30->GetYaxis()->SetLabelFont(42);
   ratioframe__30->GetYaxis()->SetLabelSize(0.18);
   ratioframe__30->GetYaxis()->SetTitleSize(0.2);
   ratioframe__30->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__30->GetYaxis()->SetTitleFont(42);
   ratioframe__30->GetZaxis()->SetLabelFont(42);
   ratioframe__30->GetZaxis()->SetLabelSize(0.035);
   ratioframe__30->GetZaxis()->SetTitleSize(0.035);
   ratioframe__30->GetZaxis()->SetTitleFont(42);
   ratioframe__30->Draw("");
   
   Double_t Graph_from_ratio_fx3030[20] = {
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
   Double_t Graph_from_ratio_fy3030[20] = {
   0,
   0,
   0.8666434,
   0.8709199,
   0.8749502,
   0.906467,
   0.9116579,
   0.9163781,
   0.9161111,
   0.902998,
   0.8883232,
   0.8694288,
   0.8738683,
   0.887378,
   0.8617533,
   0.8455445,
   0.8415936,
   0.8533462,
   0.7979086,
   0.7410841};
   Double_t Graph_from_ratio_felx3030[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3030[20] = {
   0,
   0,
   0.0188969,
   0.01153575,
   0.009303763,
   0.008332578,
   0.007615799,
   0.007299537,
   0.007296342,
   0.007611931,
   0.008234534,
   0.009343187,
   0.01104221,
   0.01377221,
   0.01695976,
   0.02270352,
   0.0298457,
   0.05055012,
   0.06351645,
   0.09438409};
   Double_t Graph_from_ratio_fehx3030[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3030[20] = {
   0,
   0,
   0.0188969,
   0.01153575,
   0.009303763,
   0.008332578,
   0.007615799,
   0.007299537,
   0.007296342,
   0.007611931,
   0.008234534,
   0.009343187,
   0.01104221,
   0.01377221,
   0.01695976,
   0.02270352,
   0.0298457,
   0.05055012,
   0.06351645,
   0.09438409};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3030,Graph_from_ratio_fy3030,Graph_from_ratio_felx3030,Graph_from_ratio_fehx3030,Graph_from_ratio_fely3030,Graph_from_ratio_fehy3030);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3030 = new TH1F("Graph_Graph_from_ratio3030","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3030->SetMinimum(0);
   Graph_Graph_from_ratio3030->SetMaximum(1.016045);
   Graph_Graph_from_ratio3030->SetDirectory(0);
   Graph_Graph_from_ratio3030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3030->SetLineColor(ci);
   Graph_Graph_from_ratio3030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3030->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3030->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3030->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3030->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3030->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3030->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3030);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
