void bjetenls_jec_7_up()
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
   p1->Range(2.421687,-56.04773,7.240964,411.85);
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
   
   TH1F *frame__27 = new TH1F("frame__27","t#bar{t}",20,3,7);
   frame__27->SetMinimum(0.1);
   frame__27->SetMaximum(407.171);
   frame__27->SetEntries(504518);
   frame__27->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__27->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__27->SetMarkerColor(ci);
   frame__27->GetXaxis()->SetTitle("log(E)");
   frame__27->GetXaxis()->SetLabelFont(42);
   frame__27->GetXaxis()->SetLabelSize(0.035);
   frame__27->GetXaxis()->SetTitleSize(0.035);
   frame__27->GetXaxis()->SetTitleFont(42);
   frame__27->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__27->GetYaxis()->SetNoExponent();
   frame__27->GetYaxis()->SetLabelFont(42);
   frame__27->GetYaxis()->SetTitleSize(0.045);
   frame__27->GetYaxis()->SetTitleOffset(1.3);
   frame__27->GetYaxis()->SetTitleFont(42);
   frame__27->GetZaxis()->SetLabelFont(42);
   frame__27->GetZaxis()->SetLabelSize(0.035);
   frame__27->GetZaxis()->SetTitleSize(0.035);
   frame__27->GetZaxis()->SetTitleFont(42);
   frame__27->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_14 = new TH1F("mc_stack_14","mc",20,3,7);
   mc_stack_14->SetMinimum(-2.559441e-09);
   mc_stack_14->SetMaximum(328.8689);
   mc_stack_14->SetDirectory(0);
   mc_stack_14->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_14->SetLineColor(ci);
   mc_stack_14->GetXaxis()->SetLabelFont(42);
   mc_stack_14->GetXaxis()->SetLabelSize(0.035);
   mc_stack_14->GetXaxis()->SetTitleSize(0.035);
   mc_stack_14->GetXaxis()->SetTitleFont(42);
   mc_stack_14->GetYaxis()->SetLabelFont(42);
   mc_stack_14->GetYaxis()->SetLabelSize(0.035);
   mc_stack_14->GetYaxis()->SetTitleSize(0.035);
   mc_stack_14->GetYaxis()->SetTitleOffset(0);
   mc_stack_14->GetYaxis()->SetTitleFont(42);
   mc_stack_14->GetZaxis()->SetLabelFont(42);
   mc_stack_14->GetZaxis()->SetLabelSize(0.035);
   mc_stack_14->GetZaxis()->SetTitleSize(0.035);
   mc_stack_14->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_14);
   
   
   TH1F *bjetenls_jec_7_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_7_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(3,101.9099);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(4,217.7138);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(5,278.3216);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(6,300.131);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(7,296.4126);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(8,263.4376);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(9,213.3916);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(10,159.0254);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(11,109.1174);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(12,68.41615);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(13,39.98805);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(14,22.11522);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(15,11.34248);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(16,5.289779);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(17,2.289045);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(18,0.8779745);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(19,0.3099946);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(20,0.1031485);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinContent(21,0.03781049);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(3,1.108063);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(4,1.484898);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(5,1.520006);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(6,1.430067);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(7,1.286382);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(8,1.098174);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(9,0.8953621);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(10,0.7002104);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(11,0.5250639);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(12,0.3767411);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(13,0.2605145);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(14,0.1754231);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(15,0.1137436);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(16,0.07039436);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(17,0.04198106);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(18,0.02347122);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(19,0.01267871);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(20,0.006623936);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetBinError(21,0.003504232);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetEntries(497607);
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_7_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_7_up_Diboson_stack_2 = new TH1F("bjetenls_jec_7_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(3,0.1619524);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(4,0.2736188);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(5,0.2435584);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(6,0.2509854);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(7,0.2145899);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(8,0.21632);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(9,0.1363874);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(10,0.1179644);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(11,0.1087887);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(12,0.08185162);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(13,0.04708661);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(14,0.02174395);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(15,0.02549041);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(16,0.0111845);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(17,0.01086488);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(18,0.006540773);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(19,0.001954005);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(20,0.003087241);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinContent(21,0.001013035);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(3,0.04196429);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(4,0.05190941);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(5,0.04361401);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(6,0.0403744);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(7,0.03330345);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(8,0.03104753);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(9,0.0218643);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(10,0.01813503);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(11,0.01598166);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(12,0.0128382);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(13,0.008810314);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(14,0.005355525);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(15,0.00525084);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(16,0.003156707);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(17,0.002924129);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(18,0.001945543);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(19,0.0009803266);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(20,0.001101237);
   bjetenls_jec_7_up_Diboson_stack_2->SetBinError(21,0.0005759478);
   bjetenls_jec_7_up_Diboson_stack_2->SetEntries(538);
   bjetenls_jec_7_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_7_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_7_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_7_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_7_up_DY_stack_3 = new TH1F("bjetenls_jec_7_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(3,0.6458051);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(4,0.3717829);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(5,0.6767692);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(6,0.8779315);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(7,0.8692544);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(8,0.4002395);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(10,0.1302271);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(11,0.150603);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(12,0.1734299);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(13,0.06342331);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(14,0.07640786);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(15,0.04672773);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(16,0.04343417);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(17,0.0006867576);
   bjetenls_jec_7_up_DY_stack_3->SetBinContent(18,0.03047799);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(3,0.6458051);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(4,0.3717829);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(5,0.478862);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(6,0.5078152);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(7,0.4349104);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(8,0.2836691);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(10,0.1302271);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(11,0.1101822);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(12,0.1226673);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(13,0.06342331);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(14,0.07640786);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(15,0.04672773);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(16,0.04343417);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(17,0.0006867576);
   bjetenls_jec_7_up_DY_stack_3->SetBinError(18,0.03047799);
   bjetenls_jec_7_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_7_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_7_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_7_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_7_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_7_up_W_stack_4 = new TH1F("bjetenls_jec_7_up_W_stack_4","W",20,3,7);
   bjetenls_jec_7_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_7_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_7_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_7_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_7_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_7_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(3,4.422166);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(4,9.021269);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(5,12.04075);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(6,11.94864);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(7,12.0655);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(8,10.89729);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(9,7.75658);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(10,6.295568);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(11,4.393049);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(12,2.891603);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(13,1.720833);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(14,0.9809837);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(15,0.5942423);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(16,0.3003286);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(17,0.1484164);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(18,0.06348853);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(19,0.03438056);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(20,0.0104209);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinContent(21,0.01080933);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(3,0.4152684);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(4,0.5419099);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(5,0.5718799);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(6,0.514282);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(7,0.4685348);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(8,0.4038368);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(9,0.3071868);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(10,0.2516852);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(11,0.1900583);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(12,0.140387);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(13,0.09783694);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(14,0.06591837);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(15,0.04708635);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(16,0.03005483);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(17,0.01930495);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(18,0.01115005);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(19,0.007631943);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(20,0.003634346);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetBinError(21,0.003450025);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetEntries(6349);
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_7_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_7_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_7_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_7_up_fx3027[21] = {
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
   Double_t Graph_from_bjetenls_jec_7_up_fy3027[21] = {
   0,
   0,
   93.20102,
   197.953,
   255.153,
   284.375,
   281.8166,
   252.2888,
   202.6834,
   149.5373,
   101.3614,
   62.18718,
   36.47837,
   20.61479,
   10.38597,
   4.748556,
   2.064947,
   0.8324323,
   0.2770241,
   0.0874953,
   0};
   Double_t Graph_from_bjetenls_jec_7_up_felx3027[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_7_up_fely3027[21] = {
   0,
   0,
   9.636914,
   14.05798,
   15.97351,
   16.86342,
   16.78739,
   15.8836,
   14.23669,
   12.21511,
   10.05141,
   7.864779,
   6.012031,
   4.50332,
   3.170222,
   2.100722,
   1.316599,
   0.724608,
   0.2761308,
   0.0874953,
   0};
   Double_t Graph_from_bjetenls_jec_7_up_fehx3027[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_7_up_fehy3027[21] = {
   1.841055,
   1.841055,
   10.68885,
   15.09361,
   15.97351,
   16.86342,
   16.78739,
   15.8836,
   14.23669,
   13.25611,
   11.10121,
   8.928366,
   7.095061,
   5.613742,
   4.325562,
   3.329234,
   2.657539,
   2.234097,
   1.988104,
   1.889878,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_7_up_fx3027,Graph_from_bjetenls_jec_7_up_fy3027,Graph_from_bjetenls_jec_7_up_felx3027,Graph_from_bjetenls_jec_7_up_fehx3027,Graph_from_bjetenls_jec_7_up_fely3027,Graph_from_bjetenls_jec_7_up_fehy3027);
   grae->SetName("Graph_from_bjetenls_jec_7_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_7_up3027 = new TH1F("Graph_Graph_from_bjetenls_jec_7_up3027","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_7_up3027->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_7_up3027->SetMaximum(331.3622);
   Graph_Graph_from_bjetenls_jec_7_up3027->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_7_up3027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_7_up3027->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_7_up3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_7_up3027);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_7_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_7_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_7_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_7_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_7_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_7_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__28 = new TH1F("ratioframe__28","t#bar{t}",20,3,7);
   ratioframe__28->SetMinimum(0.46);
   ratioframe__28->SetMaximum(1.54);
   ratioframe__28->SetEntries(504518);

   ci = TColor::GetColor("#cc0000");
   ratioframe__28->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__28->SetMarkerColor(ci);
   ratioframe__28->GetXaxis()->SetTitle("log(E)");
   ratioframe__28->GetXaxis()->SetLabelFont(42);
   ratioframe__28->GetXaxis()->SetLabelSize(0);
   ratioframe__28->GetXaxis()->SetTitleSize(0);
   ratioframe__28->GetXaxis()->SetTitleOffset(0);
   ratioframe__28->GetXaxis()->SetTitleFont(42);
   ratioframe__28->GetYaxis()->SetTitle("Data/MC");
   ratioframe__28->GetYaxis()->SetNoExponent();
   ratioframe__28->GetYaxis()->SetNdivisions(5);
   ratioframe__28->GetYaxis()->SetLabelFont(42);
   ratioframe__28->GetYaxis()->SetLabelSize(0.18);
   ratioframe__28->GetYaxis()->SetTitleSize(0.2);
   ratioframe__28->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__28->GetYaxis()->SetTitleFont(42);
   ratioframe__28->GetZaxis()->SetLabelFont(42);
   ratioframe__28->GetZaxis()->SetLabelSize(0.035);
   ratioframe__28->GetZaxis()->SetTitleSize(0.035);
   ratioframe__28->GetZaxis()->SetTitleFont(42);
   ratioframe__28->Draw("");
   
   Double_t Graph_from_ratio_fx3028[20] = {
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
   Double_t Graph_from_ratio_fy3028[20] = {
   0,
   0,
   0.869901,
   0.8705808,
   0.8759634,
   0.9079414,
   0.9103723,
   0.9175761,
   0.9159404,
   0.9031711,
   0.8909333,
   0.8689848,
   0.8722837,
   0.888785,
   0.8648526,
   0.8412375,
   0.8431754,
   0.8507386,
   0.7998869,
   0.750024};
   Double_t Graph_from_ratio_felx3028[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3028[20] = {
   0,
   0,
   0.01893597,
   0.01152818,
   0.009316212,
   0.008346547,
   0.007607423,
   0.007307969,
   0.007295961,
   0.007611854,
   0.008249226,
   0.00933857,
   0.01103044,
   0.01378136,
   0.01703185,
   0.02262197,
   0.02995412,
   0.05047177,
   0.06385084,
   0.09511043};
   Double_t Graph_from_ratio_fehx3028[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3028[20] = {
   0,
   0,
   0.01893597,
   0.01152818,
   0.009316212,
   0.008346547,
   0.007607423,
   0.007307969,
   0.007295961,
   0.007611854,
   0.008249226,
   0.00933857,
   0.01103044,
   0.01378136,
   0.01703185,
   0.02262197,
   0.02995412,
   0.05047177,
   0.06385084,
   0.09511043};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3028,Graph_from_ratio_fy3028,Graph_from_ratio_felx3028,Graph_from_ratio_fehx3028,Graph_from_ratio_fely3028,Graph_from_ratio_fehy3028);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3028 = new TH1F("Graph_Graph_from_ratio3028","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3028->SetMinimum(0);
   Graph_Graph_from_ratio3028->SetMaximum(1.017372);
   Graph_Graph_from_ratio3028->SetDirectory(0);
   Graph_Graph_from_ratio3028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3028->SetLineColor(ci);
   Graph_Graph_from_ratio3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3028);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
