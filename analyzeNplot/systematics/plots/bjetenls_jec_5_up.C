void bjetenls_jec_5_up()
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
   p1->Range(2.421687,-56.04892,7.240964,411.8588);
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
   
   TH1F *frame__53 = new TH1F("frame__53","t#bar{t}",20,3,7);
   frame__53->SetMinimum(0.1);
   frame__53->SetMaximum(407.1797);
   frame__53->SetEntries(503728);
   frame__53->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__53->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__53->SetMarkerColor(ci);
   frame__53->GetXaxis()->SetTitle("log(E)");
   frame__53->GetXaxis()->SetLabelFont(42);
   frame__53->GetXaxis()->SetLabelSize(0.035);
   frame__53->GetXaxis()->SetTitleSize(0.035);
   frame__53->GetXaxis()->SetTitleFont(42);
   frame__53->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__53->GetYaxis()->SetNoExponent();
   frame__53->GetYaxis()->SetLabelFont(42);
   frame__53->GetYaxis()->SetTitleSize(0.045);
   frame__53->GetYaxis()->SetTitleOffset(1.3);
   frame__53->GetYaxis()->SetTitleFont(42);
   frame__53->GetZaxis()->SetLabelFont(42);
   frame__53->GetZaxis()->SetLabelSize(0.035);
   frame__53->GetZaxis()->SetTitleSize(0.035);
   frame__53->GetZaxis()->SetTitleFont(42);
   frame__53->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_27 = new TH1F("mc_stack_27","mc",20,3,7);
   mc_stack_27->SetMinimum(-5.767084e-09);
   mc_stack_27->SetMaximum(328.8759);
   mc_stack_27->SetDirectory(0);
   mc_stack_27->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_27->SetLineColor(ci);
   mc_stack_27->GetXaxis()->SetLabelFont(42);
   mc_stack_27->GetXaxis()->SetLabelSize(0.035);
   mc_stack_27->GetXaxis()->SetTitleSize(0.035);
   mc_stack_27->GetXaxis()->SetTitleFont(42);
   mc_stack_27->GetYaxis()->SetLabelFont(42);
   mc_stack_27->GetYaxis()->SetLabelSize(0.035);
   mc_stack_27->GetYaxis()->SetTitleSize(0.035);
   mc_stack_27->GetYaxis()->SetTitleOffset(0);
   mc_stack_27->GetYaxis()->SetTitleFont(42);
   mc_stack_27->GetZaxis()->SetLabelFont(42);
   mc_stack_27->GetZaxis()->SetLabelSize(0.035);
   mc_stack_27->GetZaxis()->SetTitleSize(0.035);
   mc_stack_27->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_27);
   
   
   TH1F *bjetenls_jec_5_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_5_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(3,102.3189);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(4,217.9609);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(5,278.1295);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(6,300.1002);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(7,295.8314);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(8,263.0537);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(9,212.8069);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(10,158.5827);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(11,108.8172);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(12,68.24342);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(13,39.8987);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(14,22.07668);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(15,11.36283);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(16,5.285752);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(17,2.297079);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(18,0.8792235);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(19,0.3123682);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(20,0.103541);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinContent(21,0.03776443);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(3,1.110436);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(4,1.485813);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(5,1.519352);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(6,1.429951);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(7,1.285105);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(8,1.097469);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(9,0.89415);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(10,0.699245);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(11,0.5243253);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(12,0.3762696);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(13,0.2602246);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(14,0.1752601);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(15,0.1138534);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(16,0.07035458);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(17,0.04205541);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(18,0.02349254);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(19,0.01272332);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(20,0.006635719);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetBinError(21,0.00349996);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetEntries(496835);
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_5_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_5_up_Diboson_stack_2 = new TH1F("bjetenls_jec_5_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(3,0.1679593);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(4,0.2781236);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(5,0.2345758);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(6,0.2516098);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(7,0.2154943);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(8,0.210873);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(9,0.1365195);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(10,0.122748);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(11,0.1041335);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(12,0.08184219);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(13,0.04709912);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(14,0.02062727);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(15,0.02594592);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(16,0.01182483);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(17,0.01085464);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(18,0.006534799);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(19,0.001952391);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(20,0.003084091);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinContent(21,0.001011848);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(3,0.0424389);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(4,0.05258804);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(5,0.04266116);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(6,0.04047642);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(7,0.03345027);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(8,0.03055164);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(9,0.02188511);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(10,0.01845323);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(11,0.01563604);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(12,0.01283647);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(13,0.008813098);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(14,0.00523789);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(15,0.005326221);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(16,0.003220534);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(17,0.002921439);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(18,0.001943776);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(19,0.0009795092);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(20,0.001100076);
   bjetenls_jec_5_up_Diboson_stack_2->SetBinError(21,0.000575273);
   bjetenls_jec_5_up_Diboson_stack_2->SetEntries(537);
   bjetenls_jec_5_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_5_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_5_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_5_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_5_up_DY_stack_3 = new TH1F("bjetenls_jec_5_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(3,0.6473469);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(4,0.3725493);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(5,0.6800256);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(6,0.8815069);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(7,0.8713411);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(8,0.4006399);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(10,0.1303996);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(11,0.150644);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(12,0.1734925);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(13,0.06332541);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(14,0.07640786);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(15,0.04664825);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(16,0.0433603);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(17,0.0006868195);
   bjetenls_jec_5_up_DY_stack_3->SetBinContent(18,0.030448);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(3,0.6473468);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(4,0.3725493);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(5,0.4811666);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(6,0.5098844);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(7,0.4359427);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(8,0.2839526);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(10,0.1303996);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(11,0.1102101);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(12,0.1227108);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(13,0.06332541);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(14,0.07640786);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(15,0.04664825);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(16,0.0433603);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(17,0.0006868196);
   bjetenls_jec_5_up_DY_stack_3->SetBinError(18,0.030448);
   bjetenls_jec_5_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_5_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_5_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_5_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_5_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_5_up_W_stack_4 = new TH1F("bjetenls_jec_5_up_W_stack_4","W",20,3,7);
   bjetenls_jec_5_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_5_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_5_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_5_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_5_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_5_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(3,4.47429);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(4,9.024158);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(5,11.89258);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(6,11.98187);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(7,11.98655);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(8,10.87033);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(9,7.752817);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(10,6.260428);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(11,4.397086);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(12,2.883621);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(13,1.709987);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(14,0.9816283);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(15,0.5980115);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(16,0.3001724);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(17,0.1483076);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(18,0.06343621);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(19,0.03434651);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(20,0.01040738);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinContent(21,0.01079684);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(3,0.4187025);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(4,0.5413289);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(5,0.5684701);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(6,0.515363);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(7,0.4667308);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(8,0.40348);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(9,0.3071586);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(10,0.2509947);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(11,0.1901961);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(12,0.1401679);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(13,0.09753504);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(14,0.06596475);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(15,0.04723895);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(16,0.03003943);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(17,0.01929066);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(18,0.01114074);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(19,0.007624337);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(20,0.003629521);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetBinError(21,0.003445955);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetEntries(6332);
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_5_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_5_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_5_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_5_up_fx3053[21] = {
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
   Double_t Graph_from_bjetenls_jec_5_up_fy3053[21] = {
   0,
   0,
   93.14417,
   197.7929,
   254.3605,
   284.2219,
   281.696,
   251.6436,
   202.4428,
   149.1386,
   101.0284,
   62.06646,
   36.47557,
   20.57113,
   10.40718,
   4.749321,
   2.075167,
   0.8331855,
   0.2833467,
   0.08631949,
   0};
   Double_t Graph_from_bjetenls_jec_5_up_felx3053[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_5_up_fely3053[21] = {
   0,
   0,
   9.633964,
   14.05229,
   15.94868,
   16.85888,
   16.7838,
   15.86328,
   14.22824,
   12.19878,
   10.03483,
   7.857099,
   6.011798,
   4.49847,
   3.173565,
   2.100904,
   1.320455,
   0.7250952,
   0.2823061,
   0.08631949,
   0};
   Double_t Graph_from_bjetenls_jec_5_up_fehx3053[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_5_up_fehy3053[21] = {
   1.841055,
   1.841055,
   10.68591,
   15.08793,
   15.94868,
   16.85888,
   16.7838,
   15.86328,
   14.22824,
   13.23983,
   11.08471,
   8.920748,
   7.094832,
   5.609008,
   4.328749,
   3.329398,
   2.660607,
   2.234399,
   1.991226,
   1.889238,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_5_up_fx3053,Graph_from_bjetenls_jec_5_up_fy3053,Graph_from_bjetenls_jec_5_up_felx3053,Graph_from_bjetenls_jec_5_up_fehx3053,Graph_from_bjetenls_jec_5_up_fely3053,Graph_from_bjetenls_jec_5_up_fehy3053);
   grae->SetName("Graph_from_bjetenls_jec_5_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_5_up3053 = new TH1F("Graph_Graph_from_bjetenls_jec_5_up3053","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_5_up3053->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_5_up3053->SetMaximum(331.1889);
   Graph_Graph_from_bjetenls_jec_5_up3053->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_5_up3053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_5_up3053->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_5_up3053->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_5_up3053);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_5_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_5_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_5_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_5_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_5_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_5_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__54 = new TH1F("ratioframe__54","t#bar{t}",20,3,7);
   ratioframe__54->SetMinimum(0.46);
   ratioframe__54->SetMaximum(1.54);
   ratioframe__54->SetEntries(503728);

   ci = TColor::GetColor("#cc0000");
   ratioframe__54->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__54->SetMarkerColor(ci);
   ratioframe__54->GetXaxis()->SetTitle("log(E)");
   ratioframe__54->GetXaxis()->SetLabelFont(42);
   ratioframe__54->GetXaxis()->SetLabelSize(0);
   ratioframe__54->GetXaxis()->SetTitleSize(0);
   ratioframe__54->GetXaxis()->SetTitleOffset(0);
   ratioframe__54->GetXaxis()->SetTitleFont(42);
   ratioframe__54->GetYaxis()->SetTitle("Data/MC");
   ratioframe__54->GetYaxis()->SetNoExponent();
   ratioframe__54->GetYaxis()->SetNdivisions(5);
   ratioframe__54->GetYaxis()->SetLabelFont(42);
   ratioframe__54->GetYaxis()->SetLabelSize(0.18);
   ratioframe__54->GetYaxis()->SetTitleSize(0.2);
   ratioframe__54->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__54->GetYaxis()->SetTitleFont(42);
   ratioframe__54->GetZaxis()->SetLabelFont(42);
   ratioframe__54->GetZaxis()->SetLabelSize(0.035);
   ratioframe__54->GetZaxis()->SetTitleSize(0.035);
   ratioframe__54->GetZaxis()->SetTitleFont(42);
   ratioframe__54->Draw("");
   
   Double_t Graph_from_ratio_fx3054[20] = {
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
   Double_t Graph_from_ratio_fy3054[20] = {
   0,
   0,
   0.8655834,
   0.8689013,
   0.8742813,
   0.9074334,
   0.9119186,
   0.9166158,
   0.9172915,
   0.903343,
   0.8903605,
   0.8694928,
   0.8743132,
   0.8883966,
   0.864855,
   0.8419126,
   0.8446185,
   0.8504995,
   0.8126568,
   0.7375684};
   Double_t Graph_from_ratio_felx3054[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3054[20] = {
   0,
   0,
   0.01883394,
   0.01150644,
   0.009310107,
   0.00834531,
   0.007624177,
   0.007308768,
   0.007312587,
   0.007623216,
   0.008256951,
   0.009354494,
   0.01105992,
   0.01378987,
   0.0170152,
   0.02263872,
   0.0299409,
   0.05042072,
   0.06427671,
   0.09388253};
   Double_t Graph_from_ratio_fehx3054[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3054[20] = {
   0,
   0,
   0.01883394,
   0.01150644,
   0.009310107,
   0.00834531,
   0.007624177,
   0.007308768,
   0.007312587,
   0.007623216,
   0.008256951,
   0.009354494,
   0.01105992,
   0.01378987,
   0.0170152,
   0.02263872,
   0.0299409,
   0.05042072,
   0.06427671,
   0.09388253};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3054,Graph_from_ratio_fy3054,Graph_from_ratio_felx3054,Graph_from_ratio_fehx3054,Graph_from_ratio_fely3054,Graph_from_ratio_fehy3054);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3054 = new TH1F("Graph_Graph_from_ratio3054","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3054->SetMinimum(0);
   Graph_Graph_from_ratio3054->SetMaximum(1.017064);
   Graph_Graph_from_ratio3054->SetDirectory(0);
   Graph_Graph_from_ratio3054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3054->SetLineColor(ci);
   Graph_Graph_from_ratio3054->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3054->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3054->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3054->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3054->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3054->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3054->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3054->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3054->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3054->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3054->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3054->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3054->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3054);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
