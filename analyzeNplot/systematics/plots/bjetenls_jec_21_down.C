void bjetenls_jec_21_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:10 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-55.9144,7.240964,410.8722);
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
   
   TH1F *frame__123 = new TH1F("frame__123","t#bar{t}",20,3,7);
   frame__123->SetMinimum(0.1);
   frame__123->SetMaximum(406.2044);
   frame__123->SetEntries(503425);
   frame__123->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__123->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__123->SetMarkerColor(ci);
   frame__123->GetXaxis()->SetTitle("log(E)");
   frame__123->GetXaxis()->SetLabelFont(42);
   frame__123->GetXaxis()->SetLabelSize(0.035);
   frame__123->GetXaxis()->SetTitleSize(0.035);
   frame__123->GetXaxis()->SetTitleFont(42);
   frame__123->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__123->GetYaxis()->SetNoExponent();
   frame__123->GetYaxis()->SetLabelFont(42);
   frame__123->GetYaxis()->SetTitleSize(0.045);
   frame__123->GetYaxis()->SetTitleOffset(1.3);
   frame__123->GetYaxis()->SetTitleFont(42);
   frame__123->GetZaxis()->SetLabelFont(42);
   frame__123->GetZaxis()->SetLabelSize(0.035);
   frame__123->GetZaxis()->SetTitleSize(0.035);
   frame__123->GetZaxis()->SetTitleFont(42);
   frame__123->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_62 = new TH1F("mc_stack_62","mc",20,3,7);
   mc_stack_62->SetMinimum(-3.756164e-09);
   mc_stack_62->SetMaximum(328.0882);
   mc_stack_62->SetDirectory(0);
   mc_stack_62->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_62->SetLineColor(ci);
   mc_stack_62->GetXaxis()->SetLabelFont(42);
   mc_stack_62->GetXaxis()->SetLabelSize(0.035);
   mc_stack_62->GetXaxis()->SetTitleSize(0.035);
   mc_stack_62->GetXaxis()->SetTitleFont(42);
   mc_stack_62->GetYaxis()->SetLabelFont(42);
   mc_stack_62->GetYaxis()->SetLabelSize(0.035);
   mc_stack_62->GetYaxis()->SetTitleSize(0.035);
   mc_stack_62->GetYaxis()->SetTitleOffset(0);
   mc_stack_62->GetYaxis()->SetTitleFont(42);
   mc_stack_62->GetZaxis()->SetLabelFont(42);
   mc_stack_62->GetZaxis()->SetLabelSize(0.035);
   mc_stack_62->GetZaxis()->SetTitleSize(0.035);
   mc_stack_62->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_62);
   
   
   TH1F *bjetenls_jec_21_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_21_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(3,102.2693);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(4,217.5573);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(5,277.64);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(6,299.4081);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(7,295.0014);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(8,262.548);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(9,212.679);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(10,158.5072);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(11,108.9313);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(12,68.3503);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(13,39.98512);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(14,22.09134);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(15,11.41104);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(16,5.300667);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(17,2.307652);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(18,0.8842556);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(19,0.3145801);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(20,0.10355);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinContent(21,0.03851061);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(3,1.11017);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(4,1.484376);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(5,1.518034);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(6,1.428282);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(7,1.283303);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(8,1.096422);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(9,0.8938835);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(10,0.6990541);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(11,0.5246502);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(12,0.376544);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(13,0.2604997);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(14,0.1753028);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(15,0.1140882);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(16,0.0704589);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(17,0.04215023);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(18,0.02355826);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(19,0.0127715);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(20,0.006636068);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetBinError(21,0.003539987);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetEntries(496534);
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_21_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_21_down_Diboson_stack_2 = new TH1F("bjetenls_jec_21_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(3,0.1681046);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(4,0.2782833);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(5,0.2346523);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(6,0.2516329);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(7,0.2154514);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(8,0.210796);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(9,0.136487);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(10,0.1183523);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(11,0.1083706);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(12,0.08177036);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(13,0.0470502);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(14,0.01921538);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(15,0.02729641);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(16,0.01181185);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(17,0.01084216);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(18,0.006527604);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(19,0.001951655);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(20,0.003082828);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinContent(21,0.001012289);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(3,0.04247592);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(4,0.05261864);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(5,0.04267546);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(6,0.04048064);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(7,0.03344374);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(8,0.03053969);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(9,0.02187971);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(10,0.01817762);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(11,0.0159298);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(12,0.01282528);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(13,0.008803868);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(14,0.005044357);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(15,0.005496465);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(16,0.003217032);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(17,0.002918138);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(18,0.001941611);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(19,0.0009791398);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(20,0.001099491);
   bjetenls_jec_21_down_Diboson_stack_2->SetBinError(21,0.000575519);
   bjetenls_jec_21_down_Diboson_stack_2->SetEntries(537);
   bjetenls_jec_21_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_21_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_21_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_21_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_21_down_DY_stack_3 = new TH1F("bjetenls_jec_21_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(3,0.647987);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(4,0.3727145);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(5,0.6806253);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(6,0.8821214);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(7,0.8709919);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(8,0.4002853);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(10,0.1302461);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(11,0.1504033);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(12,0.173224);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(13,0.06325043);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(14,0.07632392);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(15,0.04657369);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(16,0.04329101);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(17,0.0006860751);
   bjetenls_jec_21_down_DY_stack_3->SetBinContent(18,0.03039935);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(3,0.647987);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(4,0.3727145);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(5,0.481591);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(6,0.5102433);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(7,0.4357635);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(8,0.283702);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(10,0.1302461);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(11,0.110034);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(12,0.1225211);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(13,0.06325043);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(14,0.07632392);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(15,0.0465737);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(16,0.04329101);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(17,0.0006860751);
   bjetenls_jec_21_down_DY_stack_3->SetBinError(18,0.03039935);
   bjetenls_jec_21_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_21_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_21_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_21_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_21_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_21_down_W_stack_4 = new TH1F("bjetenls_jec_21_down_W_stack_4","W",20,3,7);
   bjetenls_jec_21_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_21_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_21_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_21_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_21_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_21_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(3,4.478087);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(4,9.02944);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(5,11.86343);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(6,11.92305);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(7,12.02884);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(8,10.87383);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(9,7.690396);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(10,6.261218);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(11,4.402582);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(12,2.889548);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(13,1.713741);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(14,0.9804046);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(15,0.5973402);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(16,0.2998397);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(17,0.1481486);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(18,0.06155607);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(19,0.036135);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(20,0.0104003);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinContent(21,0.01079233);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(3,0.4190595);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(4,0.5416483);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(5,0.5679099);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(6,0.514063);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(7,0.4677162);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(8,0.4035026);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(9,0.3057067);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(10,0.2511896);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(11,0.1902984);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(12,0.1402881);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(13,0.09759117);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(14,0.06588267);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(15,0.0471783);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(16,0.030006);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(17,0.01926985);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(18,0.01098002);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(19,0.007831688);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(20,0.003626716);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetBinError(21,0.003444365);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetEntries(6330);
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_21_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_21_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_21_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_21_down_fx3123[21] = {
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
   Double_t Graph_from_bjetenls_jec_21_down_fy3123[21] = {
   0,
   0,
   92.75031,
   197.8454,
   254.2308,
   283.7611,
   281.0835,
   251.4091,
   202.1539,
   149.0097,
   101.1361,
   62.1111,
   36.49995,
   20.59925,
   10.41278,
   4.752953,
   2.080295,
   0.8358984,
   0.2820468,
   0.08739466,
   0};
   Double_t Graph_from_bjetenls_jec_21_down_felx3123[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_21_down_fely3123[21] = {
   0,
   0,
   9.6135,
   14.05416,
   15.94462,
   16.84521,
   16.76555,
   15.85589,
   14.21808,
   12.1935,
   10.0402,
   7.85994,
   6.013825,
   4.501594,
   3.174448,
   2.101768,
   1.322386,
   0.7268479,
   0.2810378,
   0.08739466,
   0};
   Double_t Graph_from_bjetenls_jec_21_down_fehx3123[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_21_down_fehy3123[21] = {
   1.841055,
   1.841055,
   10.66556,
   15.08979,
   15.94462,
   16.84521,
   16.76555,
   15.85589,
   14.21808,
   13.23457,
   11.09005,
   8.923566,
   7.096831,
   5.612057,
   4.32959,
   3.330176,
   2.662144,
   2.235485,
   1.990585,
   1.889823,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_21_down_fx3123,Graph_from_bjetenls_jec_21_down_fy3123,Graph_from_bjetenls_jec_21_down_felx3123,Graph_from_bjetenls_jec_21_down_fehx3123,Graph_from_bjetenls_jec_21_down_fely3123,Graph_from_bjetenls_jec_21_down_fehy3123);
   grae->SetName("Graph_from_bjetenls_jec_21_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_21_down3123 = new TH1F("Graph_Graph_from_bjetenls_jec_21_down3123","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_21_down3123->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_21_down3123->SetMaximum(330.667);
   Graph_Graph_from_bjetenls_jec_21_down3123->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_21_down3123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_21_down3123->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_21_down3123->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_21_down3123);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_21_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_21_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_21_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_21_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_21_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_21_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__124 = new TH1F("ratioframe__124","t#bar{t}",20,3,7);
   ratioframe__124->SetMinimum(0.46);
   ratioframe__124->SetMaximum(1.54);
   ratioframe__124->SetEntries(503425);

   ci = TColor::GetColor("#cc0000");
   ratioframe__124->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__124->SetMarkerColor(ci);
   ratioframe__124->GetXaxis()->SetTitle("log(E)");
   ratioframe__124->GetXaxis()->SetLabelFont(42);
   ratioframe__124->GetXaxis()->SetLabelSize(0);
   ratioframe__124->GetXaxis()->SetTitleSize(0);
   ratioframe__124->GetXaxis()->SetTitleOffset(0);
   ratioframe__124->GetXaxis()->SetTitleFont(42);
   ratioframe__124->GetYaxis()->SetTitle("Data/MC");
   ratioframe__124->GetYaxis()->SetNoExponent();
   ratioframe__124->GetYaxis()->SetNdivisions(5);
   ratioframe__124->GetYaxis()->SetLabelFont(42);
   ratioframe__124->GetYaxis()->SetLabelSize(0.18);
   ratioframe__124->GetYaxis()->SetTitleSize(0.2);
   ratioframe__124->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__124->GetYaxis()->SetTitleFont(42);
   ratioframe__124->GetZaxis()->SetLabelFont(42);
   ratioframe__124->GetZaxis()->SetLabelSize(0.035);
   ratioframe__124->GetZaxis()->SetTitleSize(0.035);
   ratioframe__124->GetZaxis()->SetTitleFont(42);
   ratioframe__124->Draw("");
   
   Double_t Graph_from_ratio_fx3124[20] = {
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
   Double_t Graph_from_ratio_fy3124[20] = {
   0,
   0,
   0.8622842,
   0.8706539,
   0.875394,
   0.9081376,
   0.9122633,
   0.9174413,
   0.9167732,
   0.902996,
   0.8903402,
   0.8687493,
   0.873013,
   0.8891523,
   0.8618246,
   0.8403962,
   0.8431364,
   0.8505806,
   0.7997546,
   0.7467516};
   Double_t Graph_from_ratio_felx3124[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3124[20] = {
   0,
   0,
   0.01879331,
   0.01153262,
   0.00932643,
   0.008359624,
   0.007636579,
   0.007320043,
   0.007312518,
   0.007623622,
   0.008252809,
   0.009341509,
   0.01103675,
   0.01379186,
   0.01693609,
   0.02257451,
   0.02983789,
   0.05027625,
   0.06332767,
   0.09463614};
   Double_t Graph_from_ratio_fehx3124[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3124[20] = {
   0,
   0,
   0.01879331,
   0.01153262,
   0.00932643,
   0.008359624,
   0.007636579,
   0.007320043,
   0.007312518,
   0.007623622,
   0.008252809,
   0.009341509,
   0.01103675,
   0.01379186,
   0.01693609,
   0.02257451,
   0.02983789,
   0.05027625,
   0.06332767,
   0.09463614};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3124,Graph_from_ratio_fy3124,Graph_from_ratio_felx3124,Graph_from_ratio_fehx3124,Graph_from_ratio_fely3124,Graph_from_ratio_fehy3124);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3124 = new TH1F("Graph_Graph_from_ratio3124","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3124->SetMinimum(0);
   Graph_Graph_from_ratio3124->SetMaximum(1.017237);
   Graph_Graph_from_ratio3124->SetDirectory(0);
   Graph_Graph_from_ratio3124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3124->SetLineColor(ci);
   Graph_Graph_from_ratio3124->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3124->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3124->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3124->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3124->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3124->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3124->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3124->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3124->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3124->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3124->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3124->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3124->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3124);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
