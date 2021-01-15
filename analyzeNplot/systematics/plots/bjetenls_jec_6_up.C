void bjetenls_jec_6_up()
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
   p1->Range(2.421687,-56.10926,7.240964,412.3012);
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
   
   TH1F *frame__51 = new TH1F("frame__51","t#bar{t}",20,3,7);
   frame__51->SetMinimum(0.1);
   frame__51->SetMaximum(407.6171);
   frame__51->SetEntries(503851);
   frame__51->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__51->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__51->SetMarkerColor(ci);
   frame__51->GetXaxis()->SetTitle("log(E)");
   frame__51->GetXaxis()->SetLabelFont(42);
   frame__51->GetXaxis()->SetLabelSize(0.035);
   frame__51->GetXaxis()->SetTitleSize(0.035);
   frame__51->GetXaxis()->SetTitleFont(42);
   frame__51->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__51->GetYaxis()->SetNoExponent();
   frame__51->GetYaxis()->SetLabelFont(42);
   frame__51->GetYaxis()->SetTitleSize(0.045);
   frame__51->GetYaxis()->SetTitleOffset(1.3);
   frame__51->GetYaxis()->SetTitleFont(42);
   frame__51->GetZaxis()->SetLabelFont(42);
   frame__51->GetZaxis()->SetLabelSize(0.035);
   frame__51->GetZaxis()->SetTitleSize(0.035);
   frame__51->GetZaxis()->SetTitleFont(42);
   frame__51->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_26 = new TH1F("mc_stack_26","mc",20,3,7);
   mc_stack_26->SetMinimum(-1.009882e-09);
   mc_stack_26->SetMaximum(329.2292);
   mc_stack_26->SetDirectory(0);
   mc_stack_26->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_26->SetLineColor(ci);
   mc_stack_26->GetXaxis()->SetLabelFont(42);
   mc_stack_26->GetXaxis()->SetLabelSize(0.035);
   mc_stack_26->GetXaxis()->SetTitleSize(0.035);
   mc_stack_26->GetXaxis()->SetTitleFont(42);
   mc_stack_26->GetYaxis()->SetLabelFont(42);
   mc_stack_26->GetYaxis()->SetLabelSize(0.035);
   mc_stack_26->GetYaxis()->SetTitleSize(0.035);
   mc_stack_26->GetYaxis()->SetTitleOffset(0);
   mc_stack_26->GetYaxis()->SetTitleFont(42);
   mc_stack_26->GetZaxis()->SetLabelFont(42);
   mc_stack_26->GetZaxis()->SetLabelSize(0.035);
   mc_stack_26->GetZaxis()->SetTitleSize(0.035);
   mc_stack_26->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_26);
   
   
   TH1F *bjetenls_jec_6_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_6_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(3,102.3462);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(4,218.0692);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(5,278.4249);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(6,300.4146);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(7,295.8268);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(8,263.1125);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(9,212.8723);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(10,158.6576);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(11,108.7665);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(12,68.23264);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(13,39.89178);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(14,22.07189);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(15,11.36634);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(16,5.27996);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(17,2.29558);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(18,0.8808156);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(19,0.311276);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(20,0.1035217);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinContent(21,0.03775404);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(3,1.110535);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(4,1.486162);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(5,1.520183);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(6,1.430656);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(7,1.285089);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(8,1.097606);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(9,0.8942911);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(10,0.6994211);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(11,0.5241894);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(12,0.3762479);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(13,0.2601976);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(14,0.1752454);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(15,0.1138673);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(16,0.07031316);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(17,0.04204567);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(18,0.02351081);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(19,0.01269963);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(20,0.006634857);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetBinError(21,0.003499034);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetEntries(496956);
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_6_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_6_up_Diboson_stack_2 = new TH1F("bjetenls_jec_6_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(3,0.1679072);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(4,0.2780761);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(5,0.2345568);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(6,0.2516075);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(7,0.2155035);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(8,0.210888);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(9,0.1365226);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(10,0.1206453);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(11,0.1062558);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(12,0.08185101);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(13,0.04710489);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(14,0.02174417);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(15,0.02483233);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(16,0.01182387);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(17,0.01085407);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(18,0.006534489);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(19,0.001951645);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(20,0.003083172);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinContent(21,0.001011273);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(3,0.04242556);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(4,0.05257891);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(5,0.04265756);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(6,0.04047589);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(7,0.03345169);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(8,0.030554);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(9,0.02188564);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(10,0.01833333);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(11,0.01577964);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(12,0.01283784);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(13,0.008814212);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(14,0.005355722);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(15,0.005208527);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(16,0.003220244);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(17,0.002921265);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(18,0.001943687);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(19,0.0009791364);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(20,0.001099783);
   bjetenls_jec_6_up_Diboson_stack_2->SetBinError(21,0.0005749436);
   bjetenls_jec_6_up_Diboson_stack_2->SetEntries(537);
   bjetenls_jec_6_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_6_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_6_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_6_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_6_up_DY_stack_3 = new TH1F("bjetenls_jec_6_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(3,0.6470938);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(4,0.3725067);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(5,0.6798082);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(6,0.8813004);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(7,0.8714246);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(8,0.4007201);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(10,0.1304257);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(11,0.1506741);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(12,0.1735095);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(13,0.06333809);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(14,0.07639679);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(15,0.04665759);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(16,0.04336898);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(17,0.000686679);
   bjetenls_jec_6_up_DY_stack_3->SetBinContent(18,0.03045155);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(3,0.6470938);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(4,0.3725067);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(5,0.4810126);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(6,0.5097627);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(7,0.4359851);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(8,0.2840095);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(10,0.1304257);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(11,0.1102321);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(12,0.1227226);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(13,0.06333809);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(14,0.07639678);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(15,0.04665759);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(16,0.04336898);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(17,0.0006866789);
   bjetenls_jec_6_up_DY_stack_3->SetBinError(18,0.03045155);
   bjetenls_jec_6_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_6_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_6_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_6_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_6_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_6_up_W_stack_4 = new TH1F("bjetenls_jec_6_up_W_stack_4","W",20,3,7);
   bjetenls_jec_6_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_6_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_6_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_6_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_6_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_6_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(3,4.434981);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(4,9.064677);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(5,11.89173);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(6,12.00414);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(7,12.02127);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(8,10.83877);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(9,7.764322);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(10,6.250418);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(11,4.397728);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(12,2.883984);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(13,1.710206);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(14,0.9817182);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(15,0.5980686);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(16,0.2975475);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(17,0.1509037);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(18,0.06343058);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(19,0.03433897);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(20,0.01040461);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinContent(21,0.01079315);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(3,0.4164749);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(4,0.542868);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(5,0.5684285);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(6,0.5158428);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(7,0.4673806);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(8,0.4028527);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(9,0.3073719);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(10,0.2507932);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(11,0.1902241);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(12,0.1401855);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(13,0.09754744);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(14,0.06597067);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(15,0.0472436);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(16,0.02992428);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(17,0.01946467);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(18,0.01113984);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(19,0.007622647);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(20,0.00362864);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetBinError(21,0.003444795);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetEntries(6334);
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_6_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_6_up_fx3051[21] = {
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
   Double_t Graph_from_bjetenls_jec_6_up_fy3051[21] = {
   0,
   0,
   92.20121,
   196.424,
   255.0395,
   284.5868,
   282.7693,
   252.7118,
   203.327,
   149.6619,
   101.2655,
   62.27138,
   36.5433,
   20.63306,
   10.40584,
   4.736274,
   2.089242,
   0.8317342,
   0.2845746,
   0.0863044,
   0};
   Double_t Graph_from_bjetenls_jec_6_up_felx3051[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_6_up_fely3051[21] = {
   0,
   0,
   9.584897,
   14.00349,
   15.96995,
   16.8697,
   16.81575,
   15.89691,
   14.25928,
   12.22021,
   10.04664,
   7.87013,
   6.017429,
   4.505348,
   3.173355,
   2.097798,
   1.325748,
   0.7241562,
   0.2835035,
   0.0863044,
   0};
   Double_t Graph_from_bjetenls_jec_6_up_fehx3051[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_6_up_fehy3051[21] = {
   1.841055,
   1.841055,
   10.63711,
   15.03926,
   15.96995,
   16.8697,
   16.81575,
   15.89691,
   14.25928,
   13.26119,
   11.09646,
   8.933674,
   7.100385,
   5.615721,
   4.328548,
   3.326599,
   2.664823,
   2.233817,
   1.991832,
   1.889229,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_6_up_fx3051,Graph_from_bjetenls_jec_6_up_fy3051,Graph_from_bjetenls_jec_6_up_felx3051,Graph_from_bjetenls_jec_6_up_fehx3051,Graph_from_bjetenls_jec_6_up_fely3051,Graph_from_bjetenls_jec_6_up_fehy3051);
   grae->SetName("Graph_from_bjetenls_jec_6_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_6_up3051 = new TH1F("Graph_Graph_from_bjetenls_jec_6_up3051","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_6_up3051->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_6_up3051->SetMaximum(331.6021);
   Graph_Graph_from_bjetenls_jec_6_up3051->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_6_up3051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_6_up3051->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_up3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_6_up3051);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_6_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_6_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_6_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_6_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_6_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_6_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__52 = new TH1F("ratioframe__52","t#bar{t}",20,3,7);
   ratioframe__52->SetMinimum(0.46);
   ratioframe__52->SetMaximum(1.54);
   ratioframe__52->SetEntries(503851);

   ci = TColor::GetColor("#cc0000");
   ratioframe__52->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__52->SetMarkerColor(ci);
   ratioframe__52->GetXaxis()->SetTitle("log(E)");
   ratioframe__52->GetXaxis()->SetLabelFont(42);
   ratioframe__52->GetXaxis()->SetLabelSize(0);
   ratioframe__52->GetXaxis()->SetTitleSize(0);
   ratioframe__52->GetXaxis()->SetTitleOffset(0);
   ratioframe__52->GetXaxis()->SetTitleFont(42);
   ratioframe__52->GetYaxis()->SetTitle("Data/MC");
   ratioframe__52->GetYaxis()->SetNoExponent();
   ratioframe__52->GetYaxis()->SetNdivisions(5);
   ratioframe__52->GetYaxis()->SetLabelFont(42);
   ratioframe__52->GetYaxis()->SetLabelSize(0.18);
   ratioframe__52->GetYaxis()->SetTitleSize(0.2);
   ratioframe__52->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__52->GetYaxis()->SetTitleFont(42);
   ratioframe__52->GetZaxis()->SetLabelFont(42);
   ratioframe__52->GetZaxis()->SetLabelSize(0.035);
   ratioframe__52->GetZaxis()->SetTitleSize(0.035);
   ratioframe__52->GetZaxis()->SetTitleFont(42);
   ratioframe__52->Draw("");
   
   Double_t Graph_from_ratio_fx3052[20] = {
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
   Double_t Graph_from_ratio_fy3052[20] = {
   0,
   0,
   0.8569192,
   0.8623239,
   0.8757291,
   0.9076234,
   0.9153036,
   0.9204149,
   0.9209774,
   0.9061683,
   0.8928276,
   0.8724906,
   0.8760771,
   0.8912093,
   0.8645673,
   0.8408533,
   0.849968,
   0.8476425,
   0.8187626,
   0.7375845};
   Double_t Graph_from_ratio_felx3052[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3052[20] = {
   0,
   0,
   0.01870363,
   0.01144508,
   0.009314503,
   0.008341626,
   0.007642301,
   0.007327661,
   0.007330463,
   0.007637336,
   0.00827364,
   0.009376232,
   0.01107506,
   0.01381932,
   0.01700746,
   0.02263717,
   0.03007111,
   0.05024488,
   0.06469078,
   0.09388548};
   Double_t Graph_from_ratio_fehx3052[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3052[20] = {
   0,
   0,
   0.01870363,
   0.01144508,
   0.009314503,
   0.008341626,
   0.007642301,
   0.007327661,
   0.007330463,
   0.007637336,
   0.00827364,
   0.009376232,
   0.01107506,
   0.01381932,
   0.01700746,
   0.02263717,
   0.03007111,
   0.05024488,
   0.06469078,
   0.09388548};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3052,Graph_from_ratio_fy3052,Graph_from_ratio_felx3052,Graph_from_ratio_fehx3052,Graph_from_ratio_fely3052,Graph_from_ratio_fehy3052);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3052 = new TH1F("Graph_Graph_from_ratio3052","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3052->SetMinimum(0);
   Graph_Graph_from_ratio3052->SetMaximum(1.021139);
   Graph_Graph_from_ratio3052->SetDirectory(0);
   Graph_Graph_from_ratio3052->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3052->SetLineColor(ci);
   Graph_Graph_from_ratio3052->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3052->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3052->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3052->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3052->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3052->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3052->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3052->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3052->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3052->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3052->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3052->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3052);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
