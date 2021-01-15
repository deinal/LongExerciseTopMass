void bjetenls_jec_15_down()
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
   p1->Range(2.421687,-56.07346,7.240964,412.0387);
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
   
   TH1F *frame__15 = new TH1F("frame__15","t#bar{t}",20,3,7);
   frame__15->SetMinimum(0.1);
   frame__15->SetMaximum(407.3576);
   frame__15->SetEntries(502080);
   frame__15->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__15->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__15->SetMarkerColor(ci);
   frame__15->GetXaxis()->SetTitle("log(E)");
   frame__15->GetXaxis()->SetLabelFont(42);
   frame__15->GetXaxis()->SetLabelSize(0.035);
   frame__15->GetXaxis()->SetTitleSize(0.035);
   frame__15->GetXaxis()->SetTitleFont(42);
   frame__15->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__15->GetYaxis()->SetNoExponent();
   frame__15->GetYaxis()->SetLabelFont(42);
   frame__15->GetYaxis()->SetTitleSize(0.045);
   frame__15->GetYaxis()->SetTitleOffset(1.3);
   frame__15->GetYaxis()->SetTitleFont(42);
   frame__15->GetZaxis()->SetLabelFont(42);
   frame__15->GetZaxis()->SetLabelSize(0.035);
   frame__15->GetZaxis()->SetTitleSize(0.035);
   frame__15->GetZaxis()->SetTitleFont(42);
   frame__15->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_8 = new TH1F("mc_stack_8","mc",20,3,7);
   mc_stack_8->SetMinimum(-2.678294e-08);
   mc_stack_8->SetMaximum(329.0196);
   mc_stack_8->SetDirectory(0);
   mc_stack_8->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_8->SetLineColor(ci);
   mc_stack_8->GetXaxis()->SetLabelFont(42);
   mc_stack_8->GetXaxis()->SetLabelSize(0.035);
   mc_stack_8->GetXaxis()->SetTitleSize(0.035);
   mc_stack_8->GetXaxis()->SetTitleFont(42);
   mc_stack_8->GetYaxis()->SetLabelFont(42);
   mc_stack_8->GetYaxis()->SetLabelSize(0.035);
   mc_stack_8->GetYaxis()->SetTitleSize(0.035);
   mc_stack_8->GetYaxis()->SetTitleOffset(0);
   mc_stack_8->GetYaxis()->SetTitleFont(42);
   mc_stack_8->GetZaxis()->SetLabelFont(42);
   mc_stack_8->GetZaxis()->SetLabelSize(0.035);
   mc_stack_8->GetZaxis()->SetTitleSize(0.035);
   mc_stack_8->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_8);
   
   
   TH1F *bjetenls_jec_15_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_15_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(3,103.3078);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(4,218.7029);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(5,280.0054);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(6,300.5991);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(7,296.0088);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(8,262.9018);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(9,212.2087);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(10,158.1688);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(11,108.2257);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(12,67.66237);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(13,39.41467);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(14,21.68214);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(15,11.14258);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(16,5.135398);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(17,2.222456);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(18,0.8410687);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(19,0.304269);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(20,0.09708925);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinContent(21,0.03761956);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(3,1.115624);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(4,1.488422);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(5,1.524623);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(6,1.430913);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(7,1.285529);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(8,1.097226);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(9,0.8928344);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(10,0.6984364);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(11,0.5229998);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(12,0.3746192);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(13,0.2586672);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(14,0.1737317);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(15,0.112747);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(16,0.06936482);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(17,0.04135783);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(18,0.02297111);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(19,0.01257443);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(20,0.00644056);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetBinError(21,0.003501091);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetEntries(495224);
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_15_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_15_down_Diboson_stack_2 = new TH1F("bjetenls_jec_15_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(3,0.1578725);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(4,0.2842883);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(5,0.2240906);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(6,0.255947);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(7,0.2209429);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(8,0.2097037);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(9,0.1302068);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(10,0.1237247);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(11,0.09977823);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(12,0.08606058);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(13,0.04281166);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(14,0.02070521);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(15,0.02566379);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(16,0.01123716);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(17,0.01093364);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(18,0.006581491);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(19,0.001961885);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(20,0.003101812);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinContent(21,0.00101694);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(3,0.04122058);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(4,0.05301335);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(5,0.04204925);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(6,0.04103537);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(7,0.03387054);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(8,0.0303994);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(9,0.0214261);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(10,0.0185997);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(11,0.01530084);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(12,0.01318559);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(13,0.008298588);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(14,0.005259913);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(15,0.005286924);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(16,0.003171319);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(17,0.002942196);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(18,0.001957772);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(19,0.0009842643);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(20,0.001106841);
   bjetenls_jec_15_down_Diboson_stack_2->SetBinError(21,0.0005783);
   bjetenls_jec_15_down_Diboson_stack_2->SetEntries(531);
   bjetenls_jec_15_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_15_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_15_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_15_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_15_down_DY_stack_3 = new TH1F("bjetenls_jec_15_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(3,0.6484659);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(4,0.3745935);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(5,0.6861247);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(6,0.5717354);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(7,0.8779987);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(8,0.401511);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(10,0.1308317);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(11,0.1505127);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(12,0.1738565);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(13,0.06412612);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(14,0.07641283);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(15,0.04719062);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(16,0.04385604);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(17,0.0006892111);
   bjetenls_jec_15_down_DY_stack_3->SetBinContent(18,0.03071991);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(3,0.648466);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(4,0.3745935);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(5,0.4854819);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(6,0.4047277);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(7,0.4392559);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(8,0.2846418);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(10,0.1308317);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(11,0.1101161);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(12,0.1229652);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(13,0.06412612);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(14,0.07641283);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(15,0.04719062);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(16,0.04385604);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(17,0.0006892111);
   bjetenls_jec_15_down_DY_stack_3->SetBinError(18,0.03071991);
   bjetenls_jec_15_down_DY_stack_3->SetEntries(23);
   bjetenls_jec_15_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_15_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_15_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_15_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_15_down_W_stack_4 = new TH1F("bjetenls_jec_15_down_W_stack_4","W",20,3,7);
   bjetenls_jec_15_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_15_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_15_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_15_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_15_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_15_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(3,4.470235);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(4,9.059944);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(5,11.97528);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(6,11.92524);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(7,12.04677);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(8,10.8809);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(9,7.6133);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(10,6.204131);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(11,4.43581);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(12,2.818473);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(13,1.663971);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(14,0.9766065);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(15,0.5863499);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(16,0.2952496);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(17,0.1490602);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(18,0.06386224);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(19,0.03588041);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(20,0.009150736);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinContent(21,0.01087126);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(3,0.418191);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(4,0.542732);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(5,0.5708197);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(6,0.5138858);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(7,0.4675556);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(8,0.4033532);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(9,0.3043231);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(10,0.2499234);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(11,0.1913013);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(12,0.1382244);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(13,0.09615489);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(14,0.06592189);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(15,0.04688878);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(16,0.0298353);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(17,0.01938723);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(18,0.01121669);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(19,0.007784128);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(20,0.003405685);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetBinError(21,0.003470656);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetEntries(6302);
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_15_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_15_down_fx3015[21] = {
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
   Double_t Graph_from_bjetenls_jec_15_down_fy3015[21] = {
   0,
   0,
   94.25615,
   198.2559,
   255.6015,
   285.0569,
   281.2289,
   250.6209,
   202.3966,
   148.3454,
   100.8534,
   61.46814,
   36.12925,
   20.42885,
   10.12476,
   4.675107,
   2.020745,
   0.8169352,
   0.2654569,
   0.0845236,
   0};
   Double_t Graph_from_bjetenls_jec_15_down_felx3015[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_15_down_fely3015[21] = {
   0,
   0,
   9.691506,
   14.06875,
   15.98754,
   16.88363,
   16.76988,
   15.83101,
   14.22662,
   12.16623,
   10.02611,
   7.81893,
   5.982923,
   4.482627,
   3.128751,
   2.083172,
   1.299791,
   0.7145269,
   0.2647933,
   0.0845236,
   0};
   Double_t Graph_from_bjetenls_jec_15_down_fehx3015[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_15_down_fehy3015[21] = {
   1.841055,
   1.841055,
   10.74315,
   15.10435,
   15.98754,
   16.88363,
   16.76988,
   15.83101,
   14.22662,
   13.20738,
   11.07603,
   8.882888,
   7.066354,
   5.593549,
   4.286067,
   3.313432,
   2.644205,
   2.227872,
   1.982369,
   1.888259,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_15_down_fx3015,Graph_from_bjetenls_jec_15_down_fy3015,Graph_from_bjetenls_jec_15_down_felx3015,Graph_from_bjetenls_jec_15_down_fehx3015,Graph_from_bjetenls_jec_15_down_fely3015,Graph_from_bjetenls_jec_15_down_fehy3015);
   grae->SetName("Graph_from_bjetenls_jec_15_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_15_down3015 = new TH1F("Graph_Graph_from_bjetenls_jec_15_down3015","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_15_down3015->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_15_down3015->SetMaximum(332.1346);
   Graph_Graph_from_bjetenls_jec_15_down3015->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_15_down3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_15_down3015->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_down3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_15_down3015);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_15_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_15_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_15_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_15_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_15_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_15_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__16 = new TH1F("ratioframe__16","t#bar{t}",20,3,7);
   ratioframe__16->SetMinimum(0.46);
   ratioframe__16->SetMaximum(1.54);
   ratioframe__16->SetEntries(502080);

   ci = TColor::GetColor("#cc0000");
   ratioframe__16->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__16->SetMarkerColor(ci);
   ratioframe__16->GetXaxis()->SetTitle("log(E)");
   ratioframe__16->GetXaxis()->SetLabelFont(42);
   ratioframe__16->GetXaxis()->SetLabelSize(0);
   ratioframe__16->GetXaxis()->SetTitleSize(0);
   ratioframe__16->GetXaxis()->SetTitleOffset(0);
   ratioframe__16->GetXaxis()->SetTitleFont(42);
   ratioframe__16->GetYaxis()->SetTitle("Data/MC");
   ratioframe__16->GetYaxis()->SetNoExponent();
   ratioframe__16->GetYaxis()->SetNdivisions(5);
   ratioframe__16->GetYaxis()->SetLabelFont(42);
   ratioframe__16->GetYaxis()->SetLabelSize(0.18);
   ratioframe__16->GetYaxis()->SetTitleSize(0.2);
   ratioframe__16->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__16->GetYaxis()->SetTitleFont(42);
   ratioframe__16->GetZaxis()->SetLabelFont(42);
   ratioframe__16->GetZaxis()->SetLabelSize(0.035);
   ratioframe__16->GetZaxis()->SetTitleSize(0.035);
   ratioframe__16->GetZaxis()->SetTitleFont(42);
   ratioframe__16->Draw("");
   
   Double_t Graph_from_ratio_fx3016[20] = {
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
   Double_t Graph_from_ratio_fy3016[20] = {
   0,
   0,
   0.8680456,
   0.867938,
   0.872685,
   0.9097018,
   0.9096711,
   0.9133618,
   0.9201845,
   0.9010975,
   0.8932052,
   0.8689211,
   0.8772307,
   0.89774,
   0.8579011,
   0.8522289,
   0.8479342,
   0.8670209,
   0.7759375,
   0.7730219};
   Double_t Graph_from_ratio_felx3016[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3016[20] = {
   0,
   0,
   0.01877758,
   0.0114804,
   0.009270153,
   0.008308543,
   0.007610251,
   0.007294659,
   0.007339375,
   0.007622582,
   0.008296743,
   0.009391678,
   0.01115734,
   0.0140152,
   0.0171046,
   0.02320141,
   0.03049673,
   0.05258277,
   0.06307273,
   0.100103};
   Double_t Graph_from_ratio_fehx3016[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3016[20] = {
   0,
   0,
   0.01877758,
   0.0114804,
   0.009270153,
   0.008308543,
   0.007610251,
   0.007294659,
   0.007339375,
   0.007622582,
   0.008296743,
   0.009391678,
   0.01115734,
   0.0140152,
   0.0171046,
   0.02320141,
   0.03049673,
   0.05258277,
   0.06307273,
   0.100103};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3016,Graph_from_ratio_fy3016,Graph_from_ratio_felx3016,Graph_from_ratio_fehx3016,Graph_from_ratio_fely3016,Graph_from_ratio_fehy3016);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3016 = new TH1F("Graph_Graph_from_ratio3016","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3016->SetMinimum(0);
   Graph_Graph_from_ratio3016->SetMaximum(1.020276);
   Graph_Graph_from_ratio3016->SetDirectory(0);
   Graph_Graph_from_ratio3016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3016->SetLineColor(ci);
   Graph_Graph_from_ratio3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3016);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
