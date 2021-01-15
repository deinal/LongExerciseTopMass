void bjetenls_jec_13_up()
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
   
   TH1F *frame__45 = new TH1F("frame__45","t#bar{t}",20,3,7);
   frame__45->SetMinimum(0.1);
   frame__45->SetMaximum(407.6761);
   frame__45->SetEntries(504712);
   frame__45->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__45->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__45->SetMarkerColor(ci);
   frame__45->GetXaxis()->SetTitle("log(E)");
   frame__45->GetXaxis()->SetLabelFont(42);
   frame__45->GetXaxis()->SetLabelSize(0.035);
   frame__45->GetXaxis()->SetTitleSize(0.035);
   frame__45->GetXaxis()->SetTitleFont(42);
   frame__45->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__45->GetYaxis()->SetNoExponent();
   frame__45->GetYaxis()->SetLabelFont(42);
   frame__45->GetYaxis()->SetTitleSize(0.045);
   frame__45->GetYaxis()->SetTitleOffset(1.3);
   frame__45->GetYaxis()->SetTitleFont(42);
   frame__45->GetZaxis()->SetLabelFont(42);
   frame__45->GetZaxis()->SetLabelSize(0.035);
   frame__45->GetZaxis()->SetTitleSize(0.035);
   frame__45->GetZaxis()->SetTitleFont(42);
   frame__45->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_23 = new TH1F("mc_stack_23","mc",20,3,7);
   mc_stack_23->SetMinimum(-6.350547e-09);
   mc_stack_23->SetMaximum(329.2768);
   mc_stack_23->SetDirectory(0);
   mc_stack_23->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_23->SetLineColor(ci);
   mc_stack_23->GetXaxis()->SetLabelFont(42);
   mc_stack_23->GetXaxis()->SetLabelSize(0.035);
   mc_stack_23->GetXaxis()->SetTitleSize(0.035);
   mc_stack_23->GetXaxis()->SetTitleFont(42);
   mc_stack_23->GetYaxis()->SetLabelFont(42);
   mc_stack_23->GetYaxis()->SetLabelSize(0.035);
   mc_stack_23->GetYaxis()->SetTitleSize(0.035);
   mc_stack_23->GetYaxis()->SetTitleOffset(0);
   mc_stack_23->GetYaxis()->SetTitleFont(42);
   mc_stack_23->GetZaxis()->SetLabelFont(42);
   mc_stack_23->GetZaxis()->SetLabelSize(0.035);
   mc_stack_23->GetZaxis()->SetTitleSize(0.035);
   mc_stack_23->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_23);
   
   
   TH1F *bjetenls_jec_13_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_13_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(3,101.726);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(4,217.6446);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(5,278.5866);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(6,300.4712);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(7,296.39);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(8,263.5332);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(9,213.4774);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(10,158.9293);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(11,109.1686);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(12,68.41964);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(13,40.00941);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(14,22.10751);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(15,11.39237);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(16,5.292575);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(17,2.303037);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(18,0.8802777);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(19,0.3131496);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(20,0.1040102);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinContent(21,0.03777568);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(3,1.107091);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(4,1.484742);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(5,1.520739);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(6,1.430766);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(7,1.286347);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(8,1.098405);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(9,0.8955613);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(10,0.7000145);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(11,0.5251799);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(12,0.3767702);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(13,0.2605594);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(14,0.1753695);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(15,0.1140017);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(16,0.07040047);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(17,0.04210786);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(18,0.02350819);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(19,0.01273738);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(20,0.006652219);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetBinError(21,0.003500967);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_13_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_13_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_13_up_Diboson_stack_2 = new TH1F("bjetenls_jec_13_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(7,0.2198612);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(8,0.2162986);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(9,0.1362677);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(10,0.1178704);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(11,0.1087008);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(12,0.08175425);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(13,0.04705652);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(14,0.02061631);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(15,0.02593931);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(16,0.01259065);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(17,0.01085466);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(18,0.006534787);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(19,0.001953153);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(20,0.003084835);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinContent(21,0.001012414);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(7,0.03371898);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(8,0.03104429);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(9,0.02184494);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(10,0.01812099);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(11,0.01596992);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(12,0.0128227);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(13,0.008805096);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(14,0.005235157);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(15,0.005324845);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(16,0.003310366);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(17,0.002921473);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(18,0.001943766);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(19,0.0009798904);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(20,0.001100304);
   bjetenls_jec_13_up_Diboson_stack_2->SetBinError(21,0.0005755965);
   bjetenls_jec_13_up_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_13_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_13_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_13_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_13_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_13_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_13_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_13_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_13_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_13_up_DY_stack_3 = new TH1F("bjetenls_jec_13_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_13_up_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_13_up_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_13_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_13_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_13_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_13_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_13_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_13_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_13_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_13_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_13_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_13_up_W_stack_4 = new TH1F("bjetenls_jec_13_up_W_stack_4","W",20,3,7);
   bjetenls_jec_13_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_13_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_13_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_13_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_13_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_13_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_13_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_13_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_13_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_13_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(7,12.02839);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(8,10.90096);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(9,7.778194);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(10,6.298899);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(11,4.371594);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(12,2.924732);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(13,1.708796);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(14,0.9852901);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(15,0.5935756);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(16,0.3001427);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(17,0.1482982);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(18,0.06343637);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(19,0.03435365);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(20,0.01041042);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinContent(21,0.01080044);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(7,0.4677782);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(8,0.4039621);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(9,0.3076721);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(10,0.2517367);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(11,0.1896687);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(12,0.1411629);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(13,0.09746688);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(14,0.0660626);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(15,0.04703315);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(16,0.03003655);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(17,0.01928935);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(18,0.01114063);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(19,0.007625936);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(20,0.003630513);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetBinError(21,0.003447098);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_13_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_13_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_13_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_13_up_fx3045[21] = {
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
   Double_t Graph_from_bjetenls_jec_13_up_fy3045[21] = {
   0,
   0,
   93.01173,
   197.7992,
   255.1249,
   284.5912,
   281.9131,
   252.1162,
   202.5896,
   149.3953,
   101.1102,
   62.19292,
   36.5881,
   20.56937,
   10.40589,
   4.777126,
   2.084174,
   0.8357498,
   0.2819376,
   0.08630902,
   0};
   Double_t Graph_from_bjetenls_jec_13_up_felx3045[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_13_up_fely3045[21] = {
   0,
   0,
   9.627087,
   14.05251,
   15.97263,
   16.86983,
   16.79027,
   15.87817,
   14.2334,
   12.2093,
   10.03891,
   7.865143,
   6.02115,
   4.498274,
   3.173362,
   2.107509,
   1.323845,
   0.726752,
   0.2809313,
   0.08630902,
   0};
   Double_t Graph_from_bjetenls_jec_13_up_fehx3045[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_13_up_fehy3045[21] = {
   1.841055,
   1.841055,
   10.67907,
   15.08815,
   15.97263,
   16.86983,
   16.79027,
   15.87817,
   14.2334,
   13.25031,
   11.08877,
   8.928727,
   7.104056,
   5.608818,
   4.328555,
   3.335351,
   2.663306,
   2.235426,
   1.990531,
   1.889232,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_13_up_fx3045,Graph_from_bjetenls_jec_13_up_fy3045,Graph_from_bjetenls_jec_13_up_felx3045,Graph_from_bjetenls_jec_13_up_fehx3045,Graph_from_bjetenls_jec_13_up_fely3045,Graph_from_bjetenls_jec_13_up_fehy3045);
   grae->SetName("Graph_from_bjetenls_jec_13_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_13_up3045 = new TH1F("Graph_Graph_from_bjetenls_jec_13_up3045","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_13_up3045->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_13_up3045->SetMaximum(331.6072);
   Graph_Graph_from_bjetenls_jec_13_up3045->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_13_up3045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_13_up3045->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_13_up3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_13_up3045);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_13_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_13_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_13_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_13_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_13_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_13_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__46 = new TH1F("ratioframe__46","t#bar{t}",20,3,7);
   ratioframe__46->SetMinimum(0.46);
   ratioframe__46->SetMaximum(1.54);
   ratioframe__46->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__46->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__46->SetMarkerColor(ci);
   ratioframe__46->GetXaxis()->SetTitle("log(E)");
   ratioframe__46->GetXaxis()->SetLabelFont(42);
   ratioframe__46->GetXaxis()->SetLabelSize(0);
   ratioframe__46->GetXaxis()->SetTitleSize(0);
   ratioframe__46->GetXaxis()->SetTitleOffset(0);
   ratioframe__46->GetXaxis()->SetTitleFont(42);
   ratioframe__46->GetYaxis()->SetTitle("Data/MC");
   ratioframe__46->GetYaxis()->SetNoExponent();
   ratioframe__46->GetYaxis()->SetNdivisions(5);
   ratioframe__46->GetYaxis()->SetLabelFont(42);
   ratioframe__46->GetYaxis()->SetLabelSize(0.18);
   ratioframe__46->GetYaxis()->SetTitleSize(0.2);
   ratioframe__46->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__46->GetYaxis()->SetTitleFont(42);
   ratioframe__46->GetZaxis()->SetLabelFont(42);
   ratioframe__46->GetZaxis()->SetLabelSize(0.035);
   ratioframe__46->GetZaxis()->SetTitleSize(0.035);
   ratioframe__46->GetZaxis()->SetTitleFont(42);
   ratioframe__46->Draw("");
   
   Double_t Graph_from_ratio_fx3046[20] = {
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
   Double_t Graph_from_ratio_fy3046[20] = {
   0,
   0,
   0.8689834,
   0.8706409,
   0.8747842,
   0.9075063,
   0.9108426,
   0.9166173,
   0.9150726,
   0.9028198,
   0.8884938,
   0.8686213,
   0.8747163,
   0.8869991,
   0.86295,
   0.8457106,
   0.8462355,
   0.8522056,
   0.8067892,
   0.7345108};
   Double_t Graph_from_ratio_felx3046[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3046[20] = {
   0,
   0,
   0.01893536,
   0.01153267,
   0.009303901,
   0.008339127,
   0.007610459,
   0.007301536,
   0.007290075,
   0.007612236,
   0.008233292,
   0.009335427,
   0.01104685,
   0.01376296,
   0.01696855,
   0.0226903,
   0.02993832,
   0.05045036,
   0.063887,
   0.09344129};
   Double_t Graph_from_ratio_fehx3046[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3046[20] = {
   0,
   0,
   0.01893536,
   0.01153267,
   0.009303901,
   0.008339127,
   0.007610459,
   0.007301536,
   0.007290075,
   0.007612236,
   0.008233292,
   0.009335427,
   0.01104685,
   0.01376296,
   0.01696855,
   0.0226903,
   0.02993832,
   0.05045036,
   0.063887,
   0.09344129};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3046,Graph_from_ratio_fy3046,Graph_from_ratio_felx3046,Graph_from_ratio_fehx3046,Graph_from_ratio_fely3046,Graph_from_ratio_fehy3046);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3046 = new TH1F("Graph_Graph_from_ratio3046","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3046->SetMinimum(0);
   Graph_Graph_from_ratio3046->SetMaximum(1.016311);
   Graph_Graph_from_ratio3046->SetDirectory(0);
   Graph_Graph_from_ratio3046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3046->SetLineColor(ci);
   Graph_Graph_from_ratio3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3046->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3046->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3046->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3046->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3046);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
