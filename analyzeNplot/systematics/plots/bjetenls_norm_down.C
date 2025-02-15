void bjetenls_norm_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:09 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-56.03857,7.240964,411.7829);
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
   
   TH1F *frame__111 = new TH1F("frame__111","t#bar{t}",20,3,7);
   frame__111->SetMinimum(0.1);
   frame__111->SetMaximum(407.1047);
   frame__111->SetEntries(504712);
   frame__111->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__111->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__111->SetMarkerColor(ci);
   frame__111->GetXaxis()->SetTitle("log(E)");
   frame__111->GetXaxis()->SetLabelFont(42);
   frame__111->GetXaxis()->SetLabelSize(0.035);
   frame__111->GetXaxis()->SetTitleSize(0.035);
   frame__111->GetXaxis()->SetTitleFont(42);
   frame__111->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__111->GetYaxis()->SetNoExponent();
   frame__111->GetYaxis()->SetLabelFont(42);
   frame__111->GetYaxis()->SetTitleSize(0.045);
   frame__111->GetYaxis()->SetTitleOffset(1.3);
   frame__111->GetYaxis()->SetTitleFont(42);
   frame__111->GetZaxis()->SetLabelFont(42);
   frame__111->GetZaxis()->SetLabelSize(0.035);
   frame__111->GetZaxis()->SetTitleSize(0.035);
   frame__111->GetZaxis()->SetTitleFont(42);
   frame__111->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_56 = new TH1F("mc_stack_56","mc",20,3,7);
   mc_stack_56->SetMinimum(-3.175273e-09);
   mc_stack_56->SetMaximum(328.8153);
   mc_stack_56->SetDirectory(0);
   mc_stack_56->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_56->SetLineColor(ci);
   mc_stack_56->GetXaxis()->SetLabelFont(42);
   mc_stack_56->GetXaxis()->SetLabelSize(0.035);
   mc_stack_56->GetXaxis()->SetTitleSize(0.035);
   mc_stack_56->GetXaxis()->SetTitleFont(42);
   mc_stack_56->GetYaxis()->SetLabelFont(42);
   mc_stack_56->GetYaxis()->SetLabelSize(0.035);
   mc_stack_56->GetYaxis()->SetTitleSize(0.035);
   mc_stack_56->GetYaxis()->SetTitleOffset(0);
   mc_stack_56->GetYaxis()->SetTitleFont(42);
   mc_stack_56->GetZaxis()->SetLabelFont(42);
   mc_stack_56->GetZaxis()->SetLabelSize(0.035);
   mc_stack_56->GetZaxis()->SetTitleSize(0.035);
   mc_stack_56->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_56);
   
   
   TH1F *bjetenls_norm_down_t#bar{t}_stack_1 = new TH1F("bjetenls_norm_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(3,101.726);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(4,217.6446);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(5,278.5866);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(6,300.4712);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(7,296.39);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(8,263.5332);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(9,213.4774);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(10,158.9293);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(11,109.1686);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(12,68.41964);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(13,40.00941);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(14,22.10751);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(15,11.39237);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(16,5.292575);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(17,2.303037);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(18,0.8802777);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(19,0.3131496);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(20,0.1040102);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinContent(21,0.03777568);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(3,1.107091);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(4,1.484742);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(5,1.520739);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(6,1.430766);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(7,1.286347);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(8,1.098405);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(9,0.8955613);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(10,0.7000145);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(11,0.5251799);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(12,0.3767702);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(13,0.2605594);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(14,0.1753695);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(15,0.1140017);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(16,0.07040047);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(17,0.04210786);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(18,0.02350819);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(19,0.01273738);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(20,0.006652219);
   bjetenls_norm_down_t#bar{t}_stack_1->SetBinError(21,0.003500967);
   bjetenls_norm_down_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_norm_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_norm_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_norm_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_norm_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_norm_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_norm_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_norm_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_norm_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_norm_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_norm_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_norm_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_norm_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_norm_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_norm_down_Diboson_stack_2 = new TH1F("bjetenls_norm_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(3,0.1618578);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(4,0.2645217);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(5,0.2465337);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(6,0.2570269);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(7,0.2198612);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(8,0.2162986);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(9,0.1362677);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(10,0.1178704);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(11,0.1087008);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(12,0.08175425);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(13,0.04705652);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(14,0.02061631);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(15,0.02593931);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(16,0.01259065);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(17,0.01085466);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(18,0.006534787);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(19,0.001953153);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(20,0.003084835);
   bjetenls_norm_down_Diboson_stack_2->SetBinContent(21,0.001012414);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(3,0.04193897);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(4,0.05110378);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(5,0.0441194);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(6,0.04082603);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(7,0.03371898);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(8,0.03104429);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(9,0.02184494);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(10,0.01812099);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(11,0.01596992);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(12,0.0128227);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(13,0.008805096);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(14,0.005235157);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(15,0.005324845);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(16,0.003310366);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(17,0.002921473);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(18,0.001943766);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(19,0.0009798904);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(20,0.001100304);
   bjetenls_norm_down_Diboson_stack_2->SetBinError(21,0.0005755965);
   bjetenls_norm_down_Diboson_stack_2->SetEntries(540);
   bjetenls_norm_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_norm_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_norm_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_norm_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_norm_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_norm_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_norm_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_norm_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_norm_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_norm_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_norm_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_norm_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_norm_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_norm_down_DY_stack_3 = new TH1F("bjetenls_norm_down_DY_stack_3","DY",20,3,7);
   bjetenls_norm_down_DY_stack_3->SetBinContent(3,0.3226442);
   bjetenls_norm_down_DY_stack_3->SetBinContent(4,0.1858171);
   bjetenls_norm_down_DY_stack_3->SetBinContent(5,0.33898);
   bjetenls_norm_down_DY_stack_3->SetBinContent(6,0.4395221);
   bjetenls_norm_down_DY_stack_3->SetBinContent(7,0.4349428);
   bjetenls_norm_down_DY_stack_3->SetBinContent(8,0.2000709);
   bjetenls_norm_down_DY_stack_3->SetBinContent(10,0.06513309);
   bjetenls_norm_down_DY_stack_3->SetBinContent(11,0.07529395);
   bjetenls_norm_down_DY_stack_3->SetBinContent(12,0.08672341);
   bjetenls_norm_down_DY_stack_3->SetBinContent(13,0.03163054);
   bjetenls_norm_down_DY_stack_3->SetBinContent(14,0.03821157);
   bjetenls_norm_down_DY_stack_3->SetBinContent(15,0.02331266);
   bjetenls_norm_down_DY_stack_3->SetBinContent(16,0.0216722);
   bjetenls_norm_down_DY_stack_3->SetBinContent(17,0.0003434801);
   bjetenls_norm_down_DY_stack_3->SetBinContent(18,0.01522071);
   bjetenls_norm_down_DY_stack_3->SetBinError(3,0.3226442);
   bjetenls_norm_down_DY_stack_3->SetBinError(4,0.1858171);
   bjetenls_norm_down_DY_stack_3->SetBinError(5,0.2398523);
   bjetenls_norm_down_DY_stack_3->SetBinError(6,0.2542277);
   bjetenls_norm_down_DY_stack_3->SetBinError(7,0.2176091);
   bjetenls_norm_down_DY_stack_3->SetBinError(8,0.1417995);
   bjetenls_norm_down_DY_stack_3->SetBinError(10,0.06513309);
   bjetenls_norm_down_DY_stack_3->SetBinError(11,0.05508558);
   bjetenls_norm_down_DY_stack_3->SetBinError(12,0.0613395);
   bjetenls_norm_down_DY_stack_3->SetBinError(13,0.03163054);
   bjetenls_norm_down_DY_stack_3->SetBinError(14,0.03821157);
   bjetenls_norm_down_DY_stack_3->SetBinError(15,0.02331266);
   bjetenls_norm_down_DY_stack_3->SetBinError(16,0.0216722);
   bjetenls_norm_down_DY_stack_3->SetBinError(17,0.0003434802);
   bjetenls_norm_down_DY_stack_3->SetBinError(18,0.01522071);
   bjetenls_norm_down_DY_stack_3->SetEntries(24);
   bjetenls_norm_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_norm_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_norm_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_norm_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_norm_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_norm_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_norm_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_norm_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_norm_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_norm_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_norm_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_norm_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_norm_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_norm_down_W_stack_4 = new TH1F("bjetenls_norm_down_W_stack_4","W",20,3,7);
   bjetenls_norm_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_norm_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_norm_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_norm_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_norm_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_norm_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_norm_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_norm_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_norm_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_norm_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_norm_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_norm_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_norm_down_W_stack_4,"hist");
   
   TH1F *bjetenls_norm_down_SinglesPtop_stack_5 = new TH1F("bjetenls_norm_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(3,4.501932);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(4,8.907283);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(5,12.13217);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(6,11.98973);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(7,12.02839);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(8,10.90096);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(9,7.778194);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(10,6.298899);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(11,4.371594);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(12,2.924732);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(13,1.708796);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(14,0.9852901);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(15,0.5935756);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(16,0.3001427);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(17,0.1482982);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(18,0.06343637);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(19,0.03435365);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(20,0.01041042);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinContent(21,0.01080044);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(3,0.4195865);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(4,0.5385947);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(5,0.5744133);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(6,0.5150717);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(7,0.4677782);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(8,0.4039621);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(9,0.3076721);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(10,0.2517367);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(11,0.1896687);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(12,0.1411629);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(13,0.09746688);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(14,0.0660626);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(15,0.04703315);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(16,0.03003655);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(17,0.01928935);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(18,0.01114063);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(19,0.007625936);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(20,0.003630513);
   bjetenls_norm_down_SinglesPtop_stack_5->SetBinError(21,0.003447098);
   bjetenls_norm_down_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_norm_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_norm_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_norm_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_norm_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_norm_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_norm_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_norm_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_norm_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_norm_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_norm_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_norm_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_norm_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_norm_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_norm_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_norm_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_norm_down_fx3111[21] = {
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
   Double_t Graph_from_bjetenls_norm_down_fy3111[21] = {
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
   Double_t Graph_from_bjetenls_norm_down_felx3111[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_norm_down_fely3111[21] = {
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
   Double_t Graph_from_bjetenls_norm_down_fehx3111[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_norm_down_fehy3111[21] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_norm_down_fx3111,Graph_from_bjetenls_norm_down_fy3111,Graph_from_bjetenls_norm_down_felx3111,Graph_from_bjetenls_norm_down_fehx3111,Graph_from_bjetenls_norm_down_fely3111,Graph_from_bjetenls_norm_down_fehy3111);
   grae->SetName("Graph_from_bjetenls_norm_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_norm_down3111 = new TH1F("Graph_Graph_from_bjetenls_norm_down3111","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_norm_down3111->SetMinimum(0);
   Graph_Graph_from_bjetenls_norm_down3111->SetMaximum(331.507);
   Graph_Graph_from_bjetenls_norm_down3111->SetDirectory(0);
   Graph_Graph_from_bjetenls_norm_down3111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_norm_down3111->SetLineColor(ci);
   Graph_Graph_from_bjetenls_norm_down3111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_norm_down3111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_norm_down3111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_norm_down3111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_norm_down3111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_norm_down3111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_norm_down3111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_norm_down3111->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_norm_down3111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_norm_down3111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_norm_down3111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_norm_down3111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_norm_down3111->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_norm_down3111);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_norm_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_norm_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_norm_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_norm_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_norm_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_norm_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__112 = new TH1F("ratioframe__112","t#bar{t}",20,3,7);
   ratioframe__112->SetMinimum(0.46);
   ratioframe__112->SetMaximum(1.54);
   ratioframe__112->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__112->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__112->SetMarkerColor(ci);
   ratioframe__112->GetXaxis()->SetTitle("log(E)");
   ratioframe__112->GetXaxis()->SetLabelFont(42);
   ratioframe__112->GetXaxis()->SetLabelSize(0);
   ratioframe__112->GetXaxis()->SetTitleSize(0);
   ratioframe__112->GetXaxis()->SetTitleOffset(0);
   ratioframe__112->GetXaxis()->SetTitleFont(42);
   ratioframe__112->GetYaxis()->SetTitle("Data/MC");
   ratioframe__112->GetYaxis()->SetNoExponent();
   ratioframe__112->GetYaxis()->SetNdivisions(5);
   ratioframe__112->GetYaxis()->SetLabelFont(42);
   ratioframe__112->GetYaxis()->SetLabelSize(0.18);
   ratioframe__112->GetYaxis()->SetTitleSize(0.2);
   ratioframe__112->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__112->GetYaxis()->SetTitleFont(42);
   ratioframe__112->GetZaxis()->SetLabelFont(42);
   ratioframe__112->GetZaxis()->SetLabelSize(0.035);
   ratioframe__112->GetZaxis()->SetTitleSize(0.035);
   ratioframe__112->GetZaxis()->SetTitleFont(42);
   ratioframe__112->Draw("");
   
   Double_t Graph_from_ratio_fx3112[20] = {
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
   Double_t Graph_from_ratio_fy3112[20] = {
   0,
   0,
   0.8695751,
   0.8719873,
   0.8762066,
   0.9084976,
   0.9123843,
   0.9172022,
   0.9156343,
   0.9036592,
   0.8886873,
   0.8707291,
   0.8741792,
   0.8878882,
   0.8639919,
   0.8469122,
   0.8425246,
   0.8627309,
   0.807051,
   0.734727};
   Double_t Graph_from_ratio_felx3112[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3112[20] = {
   0,
   0,
   0.01842904,
   0.01148438,
   0.009236592,
   0.008254433,
   0.007544292,
   0.007261918,
   0.007292923,
   0.007593615,
   0.008204092,
   0.009267682,
   0.01098818,
   0.01355219,
   0.01675504,
   0.022058,
   0.02985528,
   0.04580471,
   0.06390765,
   0.09346916};
   Double_t Graph_from_ratio_fehx3112[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3112[20] = {
   0,
   0,
   0.01842904,
   0.01148438,
   0.009236592,
   0.008254433,
   0.007544292,
   0.007261918,
   0.007292923,
   0.007593615,
   0.008204092,
   0.009267682,
   0.01098818,
   0.01355219,
   0.01675504,
   0.022058,
   0.02985528,
   0.04580471,
   0.06390765,
   0.09346916};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3112,Graph_from_ratio_fy3112,Graph_from_ratio_felx3112,Graph_from_ratio_fehx3112,Graph_from_ratio_fely3112,Graph_from_ratio_fehy3112);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3112 = new TH1F("Graph_Graph_from_ratio3112","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3112->SetMinimum(0);
   Graph_Graph_from_ratio3112->SetMaximum(1.016911);
   Graph_Graph_from_ratio3112->SetDirectory(0);
   Graph_Graph_from_ratio3112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3112->SetLineColor(ci);
   Graph_Graph_from_ratio3112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3112->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3112->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3112->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3112->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3112->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3112->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3112->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3112);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
