void bjetenls_jec_9_up()
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
   
   TH1F *frame__7 = new TH1F("frame__7","t#bar{t}",20,3,7);
   frame__7->SetMinimum(0.1);
   frame__7->SetMaximum(407.6761);
   frame__7->SetEntries(504712);
   frame__7->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__7->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__7->SetMarkerColor(ci);
   frame__7->GetXaxis()->SetTitle("log(E)");
   frame__7->GetXaxis()->SetLabelFont(42);
   frame__7->GetXaxis()->SetLabelSize(0.035);
   frame__7->GetXaxis()->SetTitleSize(0.035);
   frame__7->GetXaxis()->SetTitleFont(42);
   frame__7->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__7->GetYaxis()->SetNoExponent();
   frame__7->GetYaxis()->SetLabelFont(42);
   frame__7->GetYaxis()->SetTitleSize(0.045);
   frame__7->GetYaxis()->SetTitleOffset(1.3);
   frame__7->GetYaxis()->SetTitleFont(42);
   frame__7->GetZaxis()->SetLabelFont(42);
   frame__7->GetZaxis()->SetLabelSize(0.035);
   frame__7->GetZaxis()->SetTitleSize(0.035);
   frame__7->GetZaxis()->SetTitleFont(42);
   frame__7->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_4 = new TH1F("mc_stack_4","mc",20,3,7);
   mc_stack_4->SetMinimum(-6.350547e-09);
   mc_stack_4->SetMaximum(329.2768);
   mc_stack_4->SetDirectory(0);
   mc_stack_4->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_4->SetLineColor(ci);
   mc_stack_4->GetXaxis()->SetLabelFont(42);
   mc_stack_4->GetXaxis()->SetLabelSize(0.035);
   mc_stack_4->GetXaxis()->SetTitleSize(0.035);
   mc_stack_4->GetXaxis()->SetTitleFont(42);
   mc_stack_4->GetYaxis()->SetLabelFont(42);
   mc_stack_4->GetYaxis()->SetLabelSize(0.035);
   mc_stack_4->GetYaxis()->SetTitleSize(0.035);
   mc_stack_4->GetYaxis()->SetTitleOffset(0);
   mc_stack_4->GetYaxis()->SetTitleFont(42);
   mc_stack_4->GetZaxis()->SetLabelFont(42);
   mc_stack_4->GetZaxis()->SetLabelSize(0.035);
   mc_stack_4->GetZaxis()->SetTitleSize(0.035);
   mc_stack_4->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_4);
   
   
   TH1F *bjetenls_jec_9_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_9_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(3,101.726);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(4,217.6446);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(5,278.5866);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(6,300.4712);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(7,296.39);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(8,263.5332);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(9,213.4774);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(10,158.9293);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(11,109.1686);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(12,68.41964);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(13,40.00941);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(14,22.10751);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(15,11.39237);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(16,5.292575);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(17,2.303037);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(18,0.8802777);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(19,0.3131496);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(20,0.1040102);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinContent(21,0.03777568);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(3,1.107091);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(4,1.484742);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(5,1.520739);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(6,1.430766);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(7,1.286347);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(8,1.098405);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(9,0.8955613);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(10,0.7000145);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(11,0.5251799);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(12,0.3767702);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(13,0.2605594);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(14,0.1753695);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(15,0.1140017);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(16,0.07040047);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(17,0.04210786);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(18,0.02350819);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(19,0.01273738);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(20,0.006652219);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetBinError(21,0.003500967);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_9_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_9_up_Diboson_stack_2 = new TH1F("bjetenls_jec_9_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(7,0.2198612);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(8,0.2162986);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(9,0.1362677);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(10,0.1178704);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(11,0.1087008);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(12,0.08175425);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(13,0.04705652);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(14,0.02061631);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(15,0.02593931);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(16,0.01259065);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(17,0.01085466);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(18,0.006534787);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(19,0.001953153);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(20,0.003084835);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinContent(21,0.001012414);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(7,0.03371898);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(8,0.03104429);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(9,0.02184494);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(10,0.01812099);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(11,0.01596992);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(12,0.0128227);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(13,0.008805096);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(14,0.005235157);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(15,0.005324845);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(16,0.003310366);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(17,0.002921473);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(18,0.001943766);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(19,0.0009798904);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(20,0.001100304);
   bjetenls_jec_9_up_Diboson_stack_2->SetBinError(21,0.0005755965);
   bjetenls_jec_9_up_Diboson_stack_2->SetEntries(540);
   bjetenls_jec_9_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_9_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_9_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_9_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_9_up_DY_stack_3 = new TH1F("bjetenls_jec_9_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_jec_9_up_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_jec_9_up_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_9_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_9_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_9_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_9_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_9_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_9_up_W_stack_4 = new TH1F("bjetenls_jec_9_up_W_stack_4","W",20,3,7);
   bjetenls_jec_9_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_9_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_9_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_9_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_9_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_9_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(7,12.02839);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(8,10.90096);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(9,7.778194);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(10,6.298899);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(11,4.371594);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(12,2.924732);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(13,1.708796);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(14,0.9852901);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(15,0.5935756);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(16,0.3001427);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(17,0.1482982);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(18,0.06343637);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(19,0.03435365);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(20,0.01041042);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinContent(21,0.01080044);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(7,0.4677782);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(8,0.4039621);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(9,0.3076721);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(10,0.2517367);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(11,0.1896687);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(12,0.1411629);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(13,0.09746688);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(14,0.0660626);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(15,0.04703315);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(16,0.03003655);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(17,0.01928935);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(18,0.01114063);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(19,0.007625936);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(20,0.003630513);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetBinError(21,0.003447098);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_9_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_9_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_9_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_9_up_fx3007[21] = {
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
   Double_t Graph_from_bjetenls_jec_9_up_fy3007[21] = {
   0,
   0,
   92.82539,
   198.3159,
   254.9745,
   284.9802,
   282.4832,
   252.0467,
   202.9254,
   149.5221,
   101.0426,
   62.21659,
   36.58768,
   20.54861,
   10.4005,
   4.760818,
   2.075058,
   0.8330167,
   0.2820198,
   0.08633022,
   0};
   Double_t Graph_from_bjetenls_jec_9_up_felx3007[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_9_up_fely3007[21] = {
   0,
   0,
   9.617405,
   14.07089,
   15.96792,
   16.88136,
   16.80724,
   15.87598,
   14.24519,
   12.21449,
   10.03554,
   7.866648,
   6.021115,
   4.495966,
   3.172513,
   2.103638,
   1.320414,
   0.724986,
   0.2810114,
   0.08633022,
   0};
   Double_t Graph_from_bjetenls_jec_9_up_fehx3007[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_9_up_fehy3007[21] = {
   1.841055,
   1.841055,
   10.66944,
   15.10648,
   15.96792,
   16.88136,
   16.80724,
   15.87598,
   14.24519,
   13.25549,
   11.08542,
   8.93022,
   7.104021,
   5.606565,
   4.327746,
   3.331861,
   2.660574,
   2.234331,
   1.990572,
   1.889243,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_9_up_fx3007,Graph_from_bjetenls_jec_9_up_fy3007,Graph_from_bjetenls_jec_9_up_felx3007,Graph_from_bjetenls_jec_9_up_fehx3007,Graph_from_bjetenls_jec_9_up_fely3007,Graph_from_bjetenls_jec_9_up_fehy3007);
   grae->SetName("Graph_from_bjetenls_jec_9_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_9_up3007 = new TH1F("Graph_Graph_from_bjetenls_jec_9_up3007","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_9_up3007->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_9_up3007->SetMaximum(332.0477);
   Graph_Graph_from_bjetenls_jec_9_up3007->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_9_up3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_9_up3007->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_9_up3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_9_up3007);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_9_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_9_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_9_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_9_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_9_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_9_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__8 = new TH1F("ratioframe__8","t#bar{t}",20,3,7);
   ratioframe__8->SetMinimum(0.46);
   ratioframe__8->SetMaximum(1.54);
   ratioframe__8->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__8->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__8->SetMarkerColor(ci);
   ratioframe__8->GetXaxis()->SetTitle("log(E)");
   ratioframe__8->GetXaxis()->SetLabelFont(42);
   ratioframe__8->GetXaxis()->SetLabelSize(0);
   ratioframe__8->GetXaxis()->SetTitleSize(0);
   ratioframe__8->GetXaxis()->SetTitleOffset(0);
   ratioframe__8->GetXaxis()->SetTitleFont(42);
   ratioframe__8->GetYaxis()->SetTitle("Data/MC");
   ratioframe__8->GetYaxis()->SetNoExponent();
   ratioframe__8->GetYaxis()->SetNdivisions(5);
   ratioframe__8->GetYaxis()->SetLabelFont(42);
   ratioframe__8->GetYaxis()->SetLabelSize(0.18);
   ratioframe__8->GetYaxis()->SetTitleSize(0.2);
   ratioframe__8->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__8->GetYaxis()->SetTitleFont(42);
   ratioframe__8->GetZaxis()->SetLabelFont(42);
   ratioframe__8->GetZaxis()->SetLabelSize(0.035);
   ratioframe__8->GetZaxis()->SetTitleSize(0.035);
   ratioframe__8->GetZaxis()->SetTitleFont(42);
   ratioframe__8->Draw("");
   
   Double_t Graph_from_ratio_fx3008[20] = {
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
   Double_t Graph_from_ratio_fy3008[20] = {
   0,
   0,
   0.8672425,
   0.8729151,
   0.8742684,
   0.9087467,
   0.9126843,
   0.9163645,
   0.9165895,
   0.9035857,
   0.8879002,
   0.868952,
   0.8747062,
   0.8861039,
   0.8625033,
   0.8428236,
   0.8425341,
   0.8494187,
   0.8070242,
   0.7346912};
   Double_t Graph_from_ratio_felx3008[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3008[20] = {
   0,
   0,
   0.01891141,
   0.01155268,
   0.009299673,
   0.008346817,
   0.007620277,
   0.007300199,
   0.007297851,
   0.007616275,
   0.008229551,
   0.009337659,
   0.01104669,
   0.01375449,
   0.01696294,
   0.02263783,
   0.0298551,
   0.0503338,
   0.06390554,
   0.09346461};
   Double_t Graph_from_ratio_fehx3008[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3008[20] = {
   0,
   0,
   0.01891141,
   0.01155268,
   0.009299673,
   0.008346817,
   0.007620277,
   0.007300199,
   0.007297851,
   0.007616275,
   0.008229551,
   0.009337659,
   0.01104669,
   0.01375449,
   0.01696294,
   0.02263783,
   0.0298551,
   0.0503338,
   0.06390554,
   0.09346461};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3008,Graph_from_ratio_fy3008,Graph_from_ratio_felx3008,Graph_from_ratio_fehx3008,Graph_from_ratio_fely3008,Graph_from_ratio_fehy3008);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3008 = new TH1F("Graph_Graph_from_ratio3008","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3008->SetMinimum(0);
   Graph_Graph_from_ratio3008->SetMaximum(1.016276);
   Graph_Graph_from_ratio3008->SetDirectory(0);
   Graph_Graph_from_ratio3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3008->SetLineColor(ci);
   Graph_Graph_from_ratio3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3008);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
