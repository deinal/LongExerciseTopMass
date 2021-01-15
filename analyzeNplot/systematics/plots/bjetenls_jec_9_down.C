void bjetenls_jec_9_down()
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
   p1->Range(2.421687,-56.11739,7.240964,412.3609);
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
   
   TH1F *frame__67 = new TH1F("frame__67","t#bar{t}",20,3,7);
   frame__67->SetMinimum(0.1);
   frame__67->SetMaximum(407.6761);
   frame__67->SetEntries(504712);
   frame__67->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__67->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__67->SetMarkerColor(ci);
   frame__67->GetXaxis()->SetTitle("log(E)");
   frame__67->GetXaxis()->SetLabelFont(42);
   frame__67->GetXaxis()->SetLabelSize(0.035);
   frame__67->GetXaxis()->SetTitleSize(0.035);
   frame__67->GetXaxis()->SetTitleFont(42);
   frame__67->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__67->GetYaxis()->SetNoExponent();
   frame__67->GetYaxis()->SetLabelFont(42);
   frame__67->GetYaxis()->SetTitleSize(0.045);
   frame__67->GetYaxis()->SetTitleOffset(1.3);
   frame__67->GetYaxis()->SetTitleFont(42);
   frame__67->GetZaxis()->SetLabelFont(42);
   frame__67->GetZaxis()->SetLabelSize(0.035);
   frame__67->GetZaxis()->SetTitleSize(0.035);
   frame__67->GetZaxis()->SetTitleFont(42);
   frame__67->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_34 = new TH1F("mc_stack_34","mc",20,3,7);
   mc_stack_34->SetMinimum(-6.350547e-09);
   mc_stack_34->SetMaximum(329.2768);
   mc_stack_34->SetDirectory(0);
   mc_stack_34->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_34->SetLineColor(ci);
   mc_stack_34->GetXaxis()->SetLabelFont(42);
   mc_stack_34->GetXaxis()->SetLabelSize(0.035);
   mc_stack_34->GetXaxis()->SetTitleSize(0.035);
   mc_stack_34->GetXaxis()->SetTitleFont(42);
   mc_stack_34->GetYaxis()->SetLabelFont(42);
   mc_stack_34->GetYaxis()->SetLabelSize(0.035);
   mc_stack_34->GetYaxis()->SetTitleSize(0.035);
   mc_stack_34->GetYaxis()->SetTitleOffset(0);
   mc_stack_34->GetYaxis()->SetTitleFont(42);
   mc_stack_34->GetZaxis()->SetLabelFont(42);
   mc_stack_34->GetZaxis()->SetLabelSize(0.035);
   mc_stack_34->GetZaxis()->SetTitleSize(0.035);
   mc_stack_34->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_34);
   
   
   TH1F *bjetenls_jec_9_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_9_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(3,101.726);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(4,217.6446);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(5,278.5866);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(6,300.4712);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(7,296.39);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(8,263.5332);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(9,213.4774);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(10,158.9293);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(11,109.1686);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(12,68.41964);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(13,40.00941);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(14,22.10751);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(15,11.39237);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(16,5.292575);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(17,2.303037);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(18,0.8802777);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(19,0.3131496);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(20,0.1040102);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinContent(21,0.03777568);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(3,1.107091);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(4,1.484742);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(5,1.520739);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(6,1.430766);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(7,1.286347);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(8,1.098405);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(9,0.8955613);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(10,0.7000145);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(11,0.5251799);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(12,0.3767702);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(13,0.2605594);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(14,0.1753695);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(15,0.1140017);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(16,0.07040047);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(17,0.04210786);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(18,0.02350819);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(19,0.01273738);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(20,0.006652219);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetBinError(21,0.003500967);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_9_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_9_down_Diboson_stack_2 = new TH1F("bjetenls_jec_9_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(7,0.2198612);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(8,0.2162986);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(9,0.1362677);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(10,0.1178704);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(11,0.1087008);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(12,0.08175425);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(13,0.04705652);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(14,0.02061631);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(15,0.02593931);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(16,0.01259065);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(17,0.01085466);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(18,0.006534787);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(19,0.001953153);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(20,0.003084835);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinContent(21,0.001012414);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(7,0.03371898);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(8,0.03104429);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(9,0.02184494);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(10,0.01812099);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(11,0.01596992);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(12,0.0128227);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(13,0.008805096);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(14,0.005235157);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(15,0.005324845);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(16,0.003310366);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(17,0.002921473);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(18,0.001943766);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(19,0.0009798904);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(20,0.001100304);
   bjetenls_jec_9_down_Diboson_stack_2->SetBinError(21,0.0005755965);
   bjetenls_jec_9_down_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_9_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_9_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_9_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_9_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_9_down_DY_stack_3 = new TH1F("bjetenls_jec_9_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_9_down_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_9_down_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_9_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_9_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_9_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_9_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_9_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_9_down_W_stack_4 = new TH1F("bjetenls_jec_9_down_W_stack_4","W",20,3,7);
   bjetenls_jec_9_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_9_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_9_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_9_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_9_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_9_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(7,12.02839);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(8,10.90096);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(9,7.778194);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(10,6.298899);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(11,4.371594);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(12,2.924732);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(13,1.708796);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(14,0.9852901);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(15,0.5935756);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(16,0.3001427);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(17,0.1482982);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(18,0.06343637);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(19,0.03435365);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(20,0.01041042);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinContent(21,0.01080044);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(7,0.4677782);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(8,0.4039621);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(9,0.3076721);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(10,0.2517367);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(11,0.1896687);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(12,0.1411629);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(13,0.09746688);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(14,0.0660626);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(15,0.04703315);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(16,0.03003655);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(17,0.01928935);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(18,0.01114063);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(19,0.007625936);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(20,0.003630513);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetBinError(21,0.003447098);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_9_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_9_down_fx3067[21] = {
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
   Double_t Graph_from_bjetenls_jec_9_down_fy3067[21] = {
   0,
   0,
   92.8135,
   198.1257,
   253.9822,
   284.5925,
   281.2102,
   252.1948,
   202.4754,
   149.4425,
   101.1698,
   62.16776,
   36.55128,
   20.56496,
   10.4184,
   4.763057,
   2.072778,
   0.8329773,
   0.2820385,
   0.08633863,
   0};
   Double_t Graph_from_bjetenls_jec_9_down_felx3067[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_9_down_fely3067[21] = {
   0,
   0,
   9.616786,
   14.06412,
   15.93682,
   16.86987,
   16.76932,
   15.88064,
   14.22938,
   12.21123,
   10.04188,
   7.863543,
   6.018092,
   4.497784,
   3.175333,
   2.10417,
   1.319554,
   0.7249606,
   0.2810297,
   0.08633863,
   0};
   Double_t Graph_from_bjetenls_jec_9_down_fehx3067[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_9_down_fehy3067[21] = {
   1.841055,
   1.841055,
   10.66883,
   15.09974,
   15.93682,
   16.86987,
   16.76932,
   15.88064,
   14.22938,
   13.25224,
   11.09172,
   8.92714,
   7.101039,
   5.608339,
   4.330434,
   3.332341,
   2.65989,
   2.234315,
   1.990581,
   1.889248,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_9_down_fx3067,Graph_from_bjetenls_jec_9_down_fy3067,Graph_from_bjetenls_jec_9_down_felx3067,Graph_from_bjetenls_jec_9_down_fehx3067,Graph_from_bjetenls_jec_9_down_fely3067,Graph_from_bjetenls_jec_9_down_fehy3067);
   grae->SetName("Graph_from_bjetenls_jec_9_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_9_down3067 = new TH1F("Graph_Graph_from_bjetenls_jec_9_down3067","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_9_down3067->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_9_down3067->SetMaximum(331.6086);
   Graph_Graph_from_bjetenls_jec_9_down3067->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_9_down3067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_9_down3067->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_down3067->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_9_down3067);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_9_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_9_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_9_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_9_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_9_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_9_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__68 = new TH1F("ratioframe__68","t#bar{t}",20,3,7);
   ratioframe__68->SetMinimum(0.46);
   ratioframe__68->SetMaximum(1.54);
   ratioframe__68->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__68->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__68->SetMarkerColor(ci);
   ratioframe__68->GetXaxis()->SetTitle("log(E)");
   ratioframe__68->GetXaxis()->SetLabelFont(42);
   ratioframe__68->GetXaxis()->SetLabelSize(0);
   ratioframe__68->GetXaxis()->SetTitleSize(0);
   ratioframe__68->GetXaxis()->SetTitleOffset(0);
   ratioframe__68->GetXaxis()->SetTitleFont(42);
   ratioframe__68->GetYaxis()->SetTitle("Data/MC");
   ratioframe__68->GetYaxis()->SetNoExponent();
   ratioframe__68->GetYaxis()->SetNdivisions(5);
   ratioframe__68->GetYaxis()->SetLabelFont(42);
   ratioframe__68->GetYaxis()->SetLabelSize(0.18);
   ratioframe__68->GetYaxis()->SetTitleSize(0.2);
   ratioframe__68->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__68->GetYaxis()->SetTitleFont(42);
   ratioframe__68->GetZaxis()->SetLabelFont(42);
   ratioframe__68->GetZaxis()->SetLabelSize(0.035);
   ratioframe__68->GetZaxis()->SetTitleSize(0.035);
   ratioframe__68->GetZaxis()->SetTitleFont(42);
   ratioframe__68->Draw("");
   
   Double_t Graph_from_ratio_fx3068[20] = {
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
   Double_t Graph_from_ratio_fy3068[20] = {
   0,
   0,
   0.8671314,
   0.8720778,
   0.8708659,
   0.9075102,
   0.9085715,
   0.9169031,
   0.9145567,
   0.9031047,
   0.8890177,
   0.8682699,
   0.8738362,
   0.8868091,
   0.8639877,
   0.8432199,
   0.8416083,
   0.8493785,
   0.8070779,
   0.7347628};
   Double_t Graph_from_ratio_felx3068[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3068[20] = {
   0,
   0,
   0.01891104,
   0.01154512,
   0.009276628,
   0.008338976,
   0.007597801,
   0.007303158,
   0.00728726,
   0.00761356,
   0.008236206,
   0.009332963,
   0.01103967,
   0.01376236,
   0.01698278,
   0.02264497,
   0.02983188,
   0.05033128,
   0.06390975,
   0.09347372};
   Double_t Graph_from_ratio_fehx3068[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3068[20] = {
   0,
   0,
   0.01891104,
   0.01154512,
   0.009276628,
   0.008338976,
   0.007597801,
   0.007303158,
   0.00728726,
   0.00761356,
   0.008236206,
   0.009332963,
   0.01103967,
   0.01376236,
   0.01698278,
   0.02264497,
   0.02983188,
   0.05033128,
   0.06390975,
   0.09347372};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3068,Graph_from_ratio_fy3068,Graph_from_ratio_felx3068,Graph_from_ratio_fehx3068,Graph_from_ratio_fely3068,Graph_from_ratio_fehy3068);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3068 = new TH1F("Graph_Graph_from_ratio3068","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3068->SetMinimum(0);
   Graph_Graph_from_ratio3068->SetMaximum(1.016627);
   Graph_Graph_from_ratio3068->SetDirectory(0);
   Graph_Graph_from_ratio3068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3068->SetLineColor(ci);
   Graph_Graph_from_ratio3068->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3068->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3068->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3068->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3068->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3068->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3068->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3068->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3068->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3068->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3068->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3068->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3068->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3068);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
