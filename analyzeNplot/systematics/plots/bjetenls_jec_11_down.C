void bjetenls_jec_11_down()
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
   p1->Range(2.421687,-56.14853,7.240964,412.5892);
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
   
   TH1F *frame__39 = new TH1F("frame__39","t#bar{t}",20,3,7);
   frame__39->SetMinimum(0.1);
   frame__39->SetMaximum(407.9018);
   frame__39->SetEntries(504456);
   frame__39->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__39->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__39->SetMarkerColor(ci);
   frame__39->GetXaxis()->SetTitle("log(E)");
   frame__39->GetXaxis()->SetLabelFont(42);
   frame__39->GetXaxis()->SetLabelSize(0.035);
   frame__39->GetXaxis()->SetTitleSize(0.035);
   frame__39->GetXaxis()->SetTitleFont(42);
   frame__39->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__39->GetYaxis()->SetNoExponent();
   frame__39->GetYaxis()->SetLabelFont(42);
   frame__39->GetYaxis()->SetTitleSize(0.045);
   frame__39->GetYaxis()->SetTitleOffset(1.3);
   frame__39->GetYaxis()->SetTitleFont(42);
   frame__39->GetZaxis()->SetLabelFont(42);
   frame__39->GetZaxis()->SetLabelSize(0.035);
   frame__39->GetZaxis()->SetTitleSize(0.035);
   frame__39->GetZaxis()->SetTitleFont(42);
   frame__39->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_20 = new TH1F("mc_stack_20","mc",20,3,7);
   mc_stack_20->SetMinimum(-3.006727e-09);
   mc_stack_20->SetMaximum(329.4592);
   mc_stack_20->SetDirectory(0);
   mc_stack_20->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_20->SetLineColor(ci);
   mc_stack_20->GetXaxis()->SetLabelFont(42);
   mc_stack_20->GetXaxis()->SetLabelSize(0.035);
   mc_stack_20->GetXaxis()->SetTitleSize(0.035);
   mc_stack_20->GetXaxis()->SetTitleFont(42);
   mc_stack_20->GetYaxis()->SetLabelFont(42);
   mc_stack_20->GetYaxis()->SetLabelSize(0.035);
   mc_stack_20->GetYaxis()->SetTitleSize(0.035);
   mc_stack_20->GetYaxis()->SetTitleOffset(0);
   mc_stack_20->GetYaxis()->SetTitleFont(42);
   mc_stack_20->GetZaxis()->SetLabelFont(42);
   mc_stack_20->GetZaxis()->SetLabelSize(0.035);
   mc_stack_20->GetZaxis()->SetTitleSize(0.035);
   mc_stack_20->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_20);
   
   
   TH1F *bjetenls_jec_11_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_11_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(3,102.5232);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(4,218.5402);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(5,278.9849);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(6,300.678);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(7,296.1754);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(8,263.101);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(9,212.9112);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(10,158.6983);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(11,109.0029);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(12,68.38249);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(13,39.99358);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(14,22.10276);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(15,11.39507);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(16,5.292524);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(17,2.300628);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(18,0.8802711);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(19,0.3129194);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(20,0.1035584);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinContent(21,0.03777697);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(3,1.111559);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(4,1.487729);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(5,1.521884);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(6,1.431243);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(7,1.285921);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(8,1.097542);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(9,0.8943293);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(10,0.6995346);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(11,0.5247722);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(12,0.3766566);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(13,0.2604974);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(14,0.1753495);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(15,0.1140136);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(16,0.07040055);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(17,0.04208485);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(18,0.02350801);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(19,0.01273526);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(20,0.00663687);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetBinError(21,0.003501076);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetEntries(497546);
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_11_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_11_down_Diboson_stack_2 = new TH1F("bjetenls_jec_11_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(3,0.1679212);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(4,0.2780863);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(5,0.2345355);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(6,0.251261);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(7,0.2203329);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(8,0.2160887);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(9,0.1362429);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(10,0.1178922);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(11,0.1087017);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(12,0.08178481);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(13,0.04705038);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(14,0.02061197);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(15,0.02593787);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(16,0.01259088);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(17,0.01085389);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(18,0.006534308);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(19,0.00195333);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(20,0.003084488);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinContent(21,0.0010128);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(3,0.04242779);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(4,0.05257963);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(5,0.04265293);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(6,0.04041685);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(7,0.03379656);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(8,0.03100421);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(9,0.02184218);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(10,0.01812456);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(11,0.01596967);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(12,0.0128279);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(13,0.008803726);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(14,0.005234031);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(15,0.0053246);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(16,0.003310471);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(17,0.002921239);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(18,0.001943607);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(19,0.0009799775);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(20,0.001100198);
   bjetenls_jec_11_down_Diboson_stack_2->SetBinError(21,0.0005758);
   bjetenls_jec_11_down_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_11_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_11_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_11_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_11_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_11_down_DY_stack_3 = new TH1F("bjetenls_jec_11_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(3,0.6469058);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(4,0.3727525);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(5,0.6759995);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(6,0.8783801);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(7,0.8698122);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(8,0.4007985);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(10,0.1306219);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(11,0.1506331);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(12,0.1736998);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(14,0.07646558);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(17,0.000686761);
   bjetenls_jec_11_down_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(3,0.6469057);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(4,0.3727525);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(5,0.4783175);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(6,0.5080877);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(7,0.4352042);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(8,0.2840859);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(10,0.1306218);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(11,0.1102042);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(12,0.1228566);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(14,0.07646558);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(17,0.000686761);
   bjetenls_jec_11_down_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_11_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_11_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_11_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_11_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_11_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_11_down_W_stack_4 = new TH1F("bjetenls_jec_11_down_W_stack_4","W",20,3,7);
   bjetenls_jec_11_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_11_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_11_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_11_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_11_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_11_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(3,4.4353);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(4,9.141938);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(5,12.0007);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(6,11.96297);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(7,12.04158);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(8,10.88083);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(9,7.743683);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(10,6.29984);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(11,4.34675);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(12,2.917714);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(13,1.708642);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(14,0.9852815);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(15,0.5935579);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(16,0.3001213);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(17,0.148293);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(18,0.06343591);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(19,0.03435027);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(20,0.01041147);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinContent(21,0.01079927);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(3,0.416505);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(4,0.5454436);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(5,0.5709936);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(6,0.5145891);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(7,0.4678506);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(8,0.4035896);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(9,0.3068698);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(10,0.2516335);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(11,0.189104);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(12,0.1409888);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(13,0.09745848);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(14,0.06606258);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(15,0.04703175);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(16,0.03003433);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(17,0.01928857);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(18,0.01114064);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(19,0.007625132);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(20,0.003630864);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetBinError(21,0.00344682);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetEntries(6346);
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_11_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_11_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_11_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_11_down_fx3039[21] = {
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
   Double_t Graph_from_bjetenls_jec_11_down_fy3039[21] = {
   0,
   0,
   93.2023,
   198.2909,
   255.2705,
   284.6575,
   281.7355,
   251.7272,
   202.4501,
   149.189,
   101.1054,
   62.18972,
   36.50275,
   20.5783,
   10.40916,
   4.760434,
   2.074611,
   0.8342966,
   0.2820157,
   0.08633423,
   0};
   Double_t Graph_from_bjetenls_jec_11_down_felx3039[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_11_down_fely3039[21] = {
   0,
   0,
   9.636981,
   14.07,
   15.97719,
   16.8718,
   16.78498,
   15.86591,
   14.2285,
   12.20085,
   10.03867,
   7.86494,
   6.014058,
   4.499267,
   3.173877,
   2.103547,
   1.320246,
   0.7258135,
   0.2810074,
   0.08633423,
   0};
   Double_t Graph_from_bjetenls_jec_11_down_fehx3039[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_11_down_fehy3039[21] = {
   1.841055,
   1.841055,
   10.68891,
   15.10559,
   15.97719,
   16.8718,
   16.78498,
   15.86591,
   14.2285,
   13.24189,
   11.08853,
   8.928526,
   7.097061,
   5.609786,
   4.329046,
   3.331779,
   2.66044,
   2.234844,
   1.99057,
   1.889246,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_11_down_fx3039,Graph_from_bjetenls_jec_11_down_fy3039,Graph_from_bjetenls_jec_11_down_felx3039,Graph_from_bjetenls_jec_11_down_fehx3039,Graph_from_bjetenls_jec_11_down_fely3039,Graph_from_bjetenls_jec_11_down_fehy3039);
   grae->SetName("Graph_from_bjetenls_jec_11_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_11_down3039 = new TH1F("Graph_Graph_from_bjetenls_jec_11_down3039","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_11_down3039->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_11_down3039->SetMaximum(331.6823);
   Graph_Graph_from_bjetenls_jec_11_down3039->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_11_down3039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_11_down3039->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_11_down3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_11_down3039);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_11_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_11_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_11_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_11_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_11_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_11_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__40 = new TH1F("ratioframe__40","t#bar{t}",20,3,7);
   ratioframe__40->SetMinimum(0.46);
   ratioframe__40->SetMaximum(1.54);
   ratioframe__40->SetEntries(504456);

   ci = TColor::GetColor("#cc0000");
   ratioframe__40->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__40->SetMarkerColor(ci);
   ratioframe__40->GetXaxis()->SetTitle("log(E)");
   ratioframe__40->GetXaxis()->SetLabelFont(42);
   ratioframe__40->GetXaxis()->SetLabelSize(0);
   ratioframe__40->GetXaxis()->SetTitleSize(0);
   ratioframe__40->GetXaxis()->SetTitleOffset(0);
   ratioframe__40->GetXaxis()->SetTitleFont(42);
   ratioframe__40->GetYaxis()->SetTitle("Data/MC");
   ratioframe__40->GetYaxis()->SetNoExponent();
   ratioframe__40->GetYaxis()->SetNdivisions(5);
   ratioframe__40->GetYaxis()->SetLabelFont(42);
   ratioframe__40->GetYaxis()->SetLabelSize(0.18);
   ratioframe__40->GetYaxis()->SetTitleSize(0.2);
   ratioframe__40->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__40->GetYaxis()->SetTitleFont(42);
   ratioframe__40->GetZaxis()->SetLabelFont(42);
   ratioframe__40->GetZaxis()->SetLabelSize(0.035);
   ratioframe__40->GetZaxis()->SetTitleSize(0.035);
   ratioframe__40->GetZaxis()->SetTitleFont(42);
   ratioframe__40->Draw("");
   
   Double_t Graph_from_ratio_fx3040[20] = {
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
   Double_t Graph_from_ratio_fy3040[20] = {
   0,
   0,
   0.8647993,
   0.8684288,
   0.8745252,
   0.9072154,
   0.9108601,
   0.9167093,
   0.9169303,
   0.9028262,
   0.889942,
   0.8691093,
   0.8730097,
   0.8875651,
   0.8630286,
   0.8427665,
   0.8431795,
   0.8507304,
   0.8075518,
   0.7375565};
   Double_t Graph_from_ratio_felx3040[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3040[20] = {
   0,
   0,
   0.0188035,
   0.01148689,
   0.009296019,
   0.008334747,
   0.007613454,
   0.007308601,
   0.0073092,
   0.007617798,
   0.008248398,
   0.009341409,
   0.01103505,
   0.01377187,
   0.01696778,
   0.02263638,
   0.02988242,
   0.05038736,
   0.06395695,
   0.09388148};
   Double_t Graph_from_ratio_fehx3040[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3040[20] = {
   0,
   0,
   0.0188035,
   0.01148689,
   0.009296019,
   0.008334747,
   0.007613454,
   0.007308601,
   0.0073092,
   0.007617798,
   0.008248398,
   0.009341409,
   0.01103505,
   0.01377187,
   0.01696778,
   0.02263638,
   0.02988242,
   0.05038736,
   0.06395695,
   0.09388148};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3040,Graph_from_ratio_fy3040,Graph_from_ratio_felx3040,Graph_from_ratio_fehx3040,Graph_from_ratio_fely3040,Graph_from_ratio_fehy3040);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3040 = new TH1F("Graph_Graph_from_ratio3040","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3040->SetMinimum(0);
   Graph_Graph_from_ratio3040->SetMaximum(1.016663);
   Graph_Graph_from_ratio3040->SetDirectory(0);
   Graph_Graph_from_ratio3040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3040->SetLineColor(ci);
   Graph_Graph_from_ratio3040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3040->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3040->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3040);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
