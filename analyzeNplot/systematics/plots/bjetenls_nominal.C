void bjetenls_nominal()
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
   
   TH1F *frame__35 = new TH1F("frame__35","t#bar{t}",20,3,7);
   frame__35->SetMinimum(0.1);
   frame__35->SetMaximum(407.6761);
   frame__35->SetEntries(504712);
   frame__35->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__35->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__35->SetMarkerColor(ci);
   frame__35->GetXaxis()->SetTitle("log(E)");
   frame__35->GetXaxis()->SetLabelFont(42);
   frame__35->GetXaxis()->SetLabelSize(0.035);
   frame__35->GetXaxis()->SetTitleSize(0.035);
   frame__35->GetXaxis()->SetTitleFont(42);
   frame__35->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   frame__35->GetYaxis()->SetNoExponent();
   frame__35->GetYaxis()->SetLabelFont(42);
   frame__35->GetYaxis()->SetTitleSize(0.045);
   frame__35->GetYaxis()->SetTitleOffset(1.3);
   frame__35->GetYaxis()->SetTitleFont(42);
   frame__35->GetZaxis()->SetLabelFont(42);
   frame__35->GetZaxis()->SetLabelSize(0.035);
   frame__35->GetZaxis()->SetTitleSize(0.035);
   frame__35->GetZaxis()->SetTitleFont(42);
   frame__35->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_18 = new TH1F("mc_stack_18","mc",20,3,7);
   mc_stack_18->SetMinimum(-6.350547e-09);
   mc_stack_18->SetMaximum(329.2768);
   mc_stack_18->SetDirectory(0);
   mc_stack_18->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_18->SetLineColor(ci);
   mc_stack_18->GetXaxis()->SetLabelFont(42);
   mc_stack_18->GetXaxis()->SetLabelSize(0.035);
   mc_stack_18->GetXaxis()->SetTitleSize(0.035);
   mc_stack_18->GetXaxis()->SetTitleFont(42);
   mc_stack_18->GetYaxis()->SetLabelFont(42);
   mc_stack_18->GetYaxis()->SetLabelSize(0.035);
   mc_stack_18->GetYaxis()->SetTitleSize(0.035);
   mc_stack_18->GetYaxis()->SetTitleOffset(0);
   mc_stack_18->GetYaxis()->SetTitleFont(42);
   mc_stack_18->GetZaxis()->SetLabelFont(42);
   mc_stack_18->GetZaxis()->SetLabelSize(0.035);
   mc_stack_18->GetZaxis()->SetTitleSize(0.035);
   mc_stack_18->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_18);
   
   
   TH1F *bjetenls_nominal_t#bar{t}_stack_1 = new TH1F("bjetenls_nominal_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(3,101.726);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(4,217.6446);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(5,278.5866);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(6,300.4712);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(7,296.39);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(8,263.5332);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(9,213.4774);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(10,158.9293);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(11,109.1686);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(12,68.41964);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(13,40.00941);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(14,22.10751);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(15,11.39237);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(16,5.292575);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(17,2.303037);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(18,0.8802777);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(19,0.3131496);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(20,0.1040102);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinContent(21,0.03777568);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(3,1.107091);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(4,1.484742);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(5,1.520739);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(6,1.430766);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(7,1.286347);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(8,1.098405);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(9,0.8955613);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(10,0.7000145);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(11,0.5251799);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(12,0.3767702);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(13,0.2605594);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(14,0.1753695);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(15,0.1140017);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(16,0.07040047);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(17,0.04210786);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(18,0.02350819);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(19,0.01273738);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(20,0.006652219);
   bjetenls_nominal_t#bar{t}_stack_1->SetBinError(21,0.003500967);
   bjetenls_nominal_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_nominal_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_nominal_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_nominal_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_nominal_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_nominal_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_nominal_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_nominal_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_nominal_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_nominal_t#bar{t}_stack_1->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_nominal_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_nominal_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_nominal_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_nominal_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_nominal_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_nominal_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_nominal_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_nominal_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_nominal_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_nominal_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_nominal_Diboson_stack_2 = new TH1F("bjetenls_nominal_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(7,0.2198612);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(8,0.2162986);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(9,0.1362677);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(10,0.1178704);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(11,0.1087008);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(12,0.08175425);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(13,0.04705652);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(14,0.02061631);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(15,0.02593931);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(16,0.01259065);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(17,0.01085466);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(18,0.006534787);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(19,0.001953153);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(20,0.003084835);
   bjetenls_nominal_Diboson_stack_2->SetBinContent(21,0.001012414);
   bjetenls_nominal_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_nominal_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_nominal_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_nominal_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_nominal_Diboson_stack_2->SetBinError(7,0.03371898);
   bjetenls_nominal_Diboson_stack_2->SetBinError(8,0.03104429);
   bjetenls_nominal_Diboson_stack_2->SetBinError(9,0.02184494);
   bjetenls_nominal_Diboson_stack_2->SetBinError(10,0.01812099);
   bjetenls_nominal_Diboson_stack_2->SetBinError(11,0.01596992);
   bjetenls_nominal_Diboson_stack_2->SetBinError(12,0.0128227);
   bjetenls_nominal_Diboson_stack_2->SetBinError(13,0.008805096);
   bjetenls_nominal_Diboson_stack_2->SetBinError(14,0.005235157);
   bjetenls_nominal_Diboson_stack_2->SetBinError(15,0.005324845);
   bjetenls_nominal_Diboson_stack_2->SetBinError(16,0.003310366);
   bjetenls_nominal_Diboson_stack_2->SetBinError(17,0.002921473);
   bjetenls_nominal_Diboson_stack_2->SetBinError(18,0.001943766);
   bjetenls_nominal_Diboson_stack_2->SetBinError(19,0.0009798904);
   bjetenls_nominal_Diboson_stack_2->SetBinError(20,0.001100304);
   bjetenls_nominal_Diboson_stack_2->SetBinError(21,0.0005755965);
   bjetenls_nominal_Diboson_stack_2->SetEntries(540);
   bjetenls_nominal_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_nominal_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_nominal_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_nominal_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_nominal_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_nominal_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_nominal_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_nominal_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_nominal_Diboson_stack_2->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_nominal_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_nominal_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_nominal_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_nominal_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_nominal_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_nominal_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_nominal_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_nominal_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_nominal_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_nominal_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_nominal_DY_stack_3 = new TH1F("bjetenls_nominal_DY_stack_3","DY",20,3,7);
   bjetenls_nominal_DY_stack_3->SetBinContent(3,0.6452885);
   bjetenls_nominal_DY_stack_3->SetBinContent(4,0.3716342);
   bjetenls_nominal_DY_stack_3->SetBinContent(5,0.6779599);
   bjetenls_nominal_DY_stack_3->SetBinContent(6,0.8790441);
   bjetenls_nominal_DY_stack_3->SetBinContent(7,0.8698856);
   bjetenls_nominal_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_nominal_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_nominal_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_nominal_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_nominal_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_nominal_DY_stack_3->SetBinContent(14,0.07642314);
   bjetenls_nominal_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_nominal_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_nominal_DY_stack_3->SetBinContent(17,0.0006869603);
   bjetenls_nominal_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_nominal_DY_stack_3->SetBinError(3,0.6452885);
   bjetenls_nominal_DY_stack_3->SetBinError(4,0.3716342);
   bjetenls_nominal_DY_stack_3->SetBinError(5,0.4797046);
   bjetenls_nominal_DY_stack_3->SetBinError(6,0.5084554);
   bjetenls_nominal_DY_stack_3->SetBinError(7,0.4352183);
   bjetenls_nominal_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_nominal_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_nominal_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_nominal_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_nominal_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_nominal_DY_stack_3->SetBinError(14,0.07642314);
   bjetenls_nominal_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_nominal_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_nominal_DY_stack_3->SetBinError(17,0.0006869603);
   bjetenls_nominal_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_nominal_DY_stack_3->SetEntries(24);
   bjetenls_nominal_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_nominal_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_nominal_DY_stack_3->SetMarkerColor(ci);
   bjetenls_nominal_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_nominal_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_nominal_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_nominal_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_nominal_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_nominal_DY_stack_3->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_nominal_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_nominal_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_nominal_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_nominal_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_nominal_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_nominal_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_nominal_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_nominal_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_nominal_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_nominal_DY_stack_3,"hist");
   
   TH1F *bjetenls_nominal_W_stack_4 = new TH1F("bjetenls_nominal_W_stack_4","W",20,3,7);
   bjetenls_nominal_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_nominal_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_nominal_W_stack_4->SetMarkerColor(ci);
   bjetenls_nominal_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_nominal_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_nominal_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_nominal_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_nominal_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_nominal_W_stack_4->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_nominal_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_nominal_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_nominal_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_nominal_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_nominal_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_nominal_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_nominal_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_nominal_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_nominal_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_nominal_W_stack_4,"hist");
   
   TH1F *bjetenls_nominal_SinglesPtop_stack_5 = new TH1F("bjetenls_nominal_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(7,12.02839);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(8,10.90096);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(9,7.778194);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(10,6.298899);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(11,4.371594);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(12,2.924732);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(13,1.708796);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(14,0.9852901);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(15,0.5935756);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(16,0.3001427);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(17,0.1482982);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(18,0.06343637);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(19,0.03435365);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(20,0.01041042);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinContent(21,0.01080044);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(7,0.4677782);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(8,0.4039621);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(9,0.3076721);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(10,0.2517367);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(11,0.1896687);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(12,0.1411629);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(13,0.09746688);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(14,0.0660626);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(15,0.04703315);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(16,0.03003655);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(17,0.01928935);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(18,0.01114063);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(19,0.007625936);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(20,0.003630513);
   bjetenls_nominal_SinglesPtop_stack_5->SetBinError(21,0.003447098);
   bjetenls_nominal_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_nominal_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_nominal_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_nominal_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_nominal_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_nominal_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_nominal_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_nominal_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_nominal_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_nominal_SinglesPtop_stack_5->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjetenls_nominal_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_nominal_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_nominal_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_nominal_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_nominal_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_nominal_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_nominal_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_nominal_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_nominal_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_nominal_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_nominal_fx3035[21] = {
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
   Double_t Graph_from_bjetenls_nominal_fy3035[21] = {
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
   Double_t Graph_from_bjetenls_nominal_felx3035[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_nominal_fely3035[21] = {
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
   Double_t Graph_from_bjetenls_nominal_fehx3035[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_nominal_fehy3035[21] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_nominal_fx3035,Graph_from_bjetenls_nominal_fy3035,Graph_from_bjetenls_nominal_felx3035,Graph_from_bjetenls_nominal_fehx3035,Graph_from_bjetenls_nominal_fely3035,Graph_from_bjetenls_nominal_fehy3035);
   grae->SetName("Graph_from_bjetenls_nominal");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_nominal3035 = new TH1F("Graph_Graph_from_bjetenls_nominal3035","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_nominal3035->SetMinimum(0);
   Graph_Graph_from_bjetenls_nominal3035->SetMaximum(331.507);
   Graph_Graph_from_bjetenls_nominal3035->SetDirectory(0);
   Graph_Graph_from_bjetenls_nominal3035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_nominal3035->SetLineColor(ci);
   Graph_Graph_from_bjetenls_nominal3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_nominal3035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_nominal3035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_nominal3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_nominal3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_nominal3035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_nominal3035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_nominal3035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_nominal3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_nominal3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_nominal3035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_nominal3035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_nominal3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_nominal3035);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_nominal","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_nominal_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_nominal_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_nominal_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_nominal_W","W","f");

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
   entry=leg->AddEntry("bjetenls_nominal_Single top","Single top","f");

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
   
   TH1F *ratioframe__36 = new TH1F("ratioframe__36","t#bar{t}",20,3,7);
   ratioframe__36->SetMinimum(0.46);
   ratioframe__36->SetMaximum(1.54);
   ratioframe__36->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__36->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__36->SetMarkerColor(ci);
   ratioframe__36->GetXaxis()->SetTitle("log(E)");
   ratioframe__36->GetXaxis()->SetLabelFont(42);
   ratioframe__36->GetXaxis()->SetLabelSize(0);
   ratioframe__36->GetXaxis()->SetTitleSize(0);
   ratioframe__36->GetXaxis()->SetTitleOffset(0);
   ratioframe__36->GetXaxis()->SetTitleFont(42);
   ratioframe__36->GetYaxis()->SetTitle("Data/MC");
   ratioframe__36->GetYaxis()->SetNoExponent();
   ratioframe__36->GetYaxis()->SetNdivisions(5);
   ratioframe__36->GetYaxis()->SetLabelFont(42);
   ratioframe__36->GetYaxis()->SetLabelSize(0.18);
   ratioframe__36->GetYaxis()->SetTitleSize(0.2);
   ratioframe__36->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__36->GetYaxis()->SetTitleFont(42);
   ratioframe__36->GetZaxis()->SetLabelFont(42);
   ratioframe__36->GetZaxis()->SetLabelSize(0.035);
   ratioframe__36->GetZaxis()->SetTitleSize(0.035);
   ratioframe__36->GetZaxis()->SetTitleFont(42);
   ratioframe__36->Draw("");
   
   Double_t Graph_from_ratio_fx3036[20] = {
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
   Double_t Graph_from_ratio_fy3036[20] = {
   0,
   0,
   0.8669539,
   0.8712741,
   0.8751883,
   0.9072242,
   0.9111022,
   0.916535,
   0.9156343,
   0.9033036,
   0.8880993,
   0.8696744,
   0.8735182,
   0.8864251,
   0.8623216,
   0.8436629,
   0.8424071,
   0.8493409,
   0.807051,
   0.734727};
   Double_t Graph_from_ratio_felx3036[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3036[20] = {
   0,
   0,
   0.018907,
   0.01153854,
   0.009306664,
   0.008337363,
   0.007611873,
   0.007301101,
   0.007292923,
   0.007614707,
   0.008230862,
   0.009342801,
   0.01103697,
   0.01375793,
   0.01696089,
   0.02265326,
   0.02985063,
   0.05032904,
   0.06390765,
   0.09346916};
   Double_t Graph_from_ratio_fehx3036[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3036[20] = {
   0,
   0,
   0.018907,
   0.01153854,
   0.009306664,
   0.008337363,
   0.007611873,
   0.007301101,
   0.007292923,
   0.007614707,
   0.008230862,
   0.009342801,
   0.01103697,
   0.01375793,
   0.01696089,
   0.02265326,
   0.02985063,
   0.05032904,
   0.06390765,
   0.09346916};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3036,Graph_from_ratio_fy3036,Graph_from_ratio_felx3036,Graph_from_ratio_fehx3036,Graph_from_ratio_fely3036,Graph_from_ratio_fehy3036);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3036 = new TH1F("Graph_Graph_from_ratio3036","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3036->SetMinimum(0);
   Graph_Graph_from_ratio3036->SetMaximum(1.01622);
   Graph_Graph_from_ratio3036->SetDirectory(0);
   Graph_Graph_from_ratio3036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3036->SetLineColor(ci);
   Graph_Graph_from_ratio3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3036);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
