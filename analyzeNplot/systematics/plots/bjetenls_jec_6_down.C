void bjetenls_jec_6_down()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 01:44:10 2021) by ROOT version 6.14/09
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
   p1->Range(2.421687,-56.05148,7.240964,411.8776);
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
   
   TH1F *frame__121 = new TH1F("frame__121","t#bar{t}",20,3,7);
   frame__121->SetMinimum(0.1);
   frame__121->SetMaximum(407.1983);
   frame__121->SetEntries(505542);
   frame__121->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__121->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__121->SetMarkerColor(ci);
   frame__121->GetXaxis()->SetTitle("log(E)");
   frame__121->GetXaxis()->SetLabelFont(42);
   frame__121->GetXaxis()->SetLabelSize(0.035);
   frame__121->GetXaxis()->SetTitleSize(0.035);
   frame__121->GetXaxis()->SetTitleFont(42);
   frame__121->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__121->GetYaxis()->SetNoExponent();
   frame__121->GetYaxis()->SetLabelFont(42);
   frame__121->GetYaxis()->SetTitleSize(0.045);
   frame__121->GetYaxis()->SetTitleOffset(1.3);
   frame__121->GetYaxis()->SetTitleFont(42);
   frame__121->GetZaxis()->SetLabelFont(42);
   frame__121->GetZaxis()->SetLabelSize(0.035);
   frame__121->GetZaxis()->SetTitleSize(0.035);
   frame__121->GetZaxis()->SetTitleFont(42);
   frame__121->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_61 = new TH1F("mc_stack_61","mc",20,3,7);
   mc_stack_61->SetMinimum(-5.946441e-09);
   mc_stack_61->SetMaximum(328.8909);
   mc_stack_61->SetDirectory(0);
   mc_stack_61->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_61->SetLineColor(ci);
   mc_stack_61->GetXaxis()->SetLabelFont(42);
   mc_stack_61->GetXaxis()->SetLabelSize(0.035);
   mc_stack_61->GetXaxis()->SetTitleSize(0.035);
   mc_stack_61->GetXaxis()->SetTitleFont(42);
   mc_stack_61->GetYaxis()->SetLabelFont(42);
   mc_stack_61->GetYaxis()->SetLabelSize(0.035);
   mc_stack_61->GetYaxis()->SetTitleSize(0.035);
   mc_stack_61->GetYaxis()->SetTitleOffset(0);
   mc_stack_61->GetYaxis()->SetTitleFont(42);
   mc_stack_61->GetZaxis()->SetLabelFont(42);
   mc_stack_61->GetZaxis()->SetLabelSize(0.035);
   mc_stack_61->GetZaxis()->SetTitleSize(0.035);
   mc_stack_61->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_61);
   
   
   TH1F *bjetenls_jec_6_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_6_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(3,101.0407);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(4,217.3754);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(5,278.5772);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(6,300.2133);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(7,297.3092);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(8,263.973);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(9,214.0637);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(10,159.3058);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(11,109.3944);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(12,68.61129);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(13,40.1454);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(14,22.17642);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(15,11.42896);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(16,5.297932);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(17,2.31279);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(18,0.8831952);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(19,0.3135877);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(20,0.1030618);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinContent(21,0.03779735);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(3,1.103167);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(4,1.483911);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(5,1.52073);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(6,1.430165);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(7,1.28843);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(8,1.099322);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(9,0.8968312);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(10,0.7008246);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(11,0.5257285);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(12,0.3773178);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(13,0.2610128);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(14,0.1756474);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(15,0.114181);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(16,0.07043799);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(17,0.04220223);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(18,0.02354593);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(19,0.01274476);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(20,0.006618016);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetBinError(21,0.003502904);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetEntries(498605);
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_6_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_6_down_Diboson_stack_2 = new TH1F("bjetenls_jec_6_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(3,0.16142);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(4,0.2638646);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(5,0.2392258);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(6,0.2700631);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(7,0.219525);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(8,0.2213868);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(9,0.1355363);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(10,0.1180079);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(11,0.1112289);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(12,0.07990818);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(13,0.04875794);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(14,0.0206033);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(15,0.02593149);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(16,0.01259135);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(17,0.01085525);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(18,0.00653509);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(19,0.001954663);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(20,0.003086502);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinContent(21,0.001013559);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(3,0.04182546);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(4,0.0509766);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(5,0.04349872);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(6,0.04185572);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(7,0.03366838);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(8,0.0314693);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(9,0.02179919);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(10,0.0180766);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(11,0.01617152);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(12,0.01268756);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(13,0.008968331);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(14,0.005231915);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(15,0.005323199);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(16,0.00331062);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(17,0.002921684);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(18,0.001943847);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(19,0.0009806458);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(20,0.001100827);
   bjetenls_jec_6_down_Diboson_stack_2->SetBinError(21,0.0005762511);
   bjetenls_jec_6_down_Diboson_stack_2->SetEntries(543);
   bjetenls_jec_6_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_6_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_6_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_6_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_6_down_DY_stack_3 = new TH1F("bjetenls_jec_6_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(3,0.6434932);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(4,0.3707658);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(5,0.6761216);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(6,0.8767994);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(7,0.8683523);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(8,0.3995649);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(10,0.1301071);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(11,0.1505018);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(12,0.1733842);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(13,0.06318425);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(14,0.07644951);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(15,0.04659309);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(16,0.04331987);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(17,0.0006872419);
   bjetenls_jec_6_down_DY_stack_3->SetBinContent(18,0.03043128);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(3,0.6434932);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(4,0.3707658);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(5,0.4784038);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(6,0.5071548);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(7,0.4344543);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(8,0.2831898);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(10,0.1301071);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(11,0.1101103);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(12,0.1226355);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(13,0.06318425);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(14,0.07644951);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(15,0.04659309);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(16,0.04331987);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(17,0.0006872419);
   bjetenls_jec_6_down_DY_stack_3->SetBinError(18,0.03043128);
   bjetenls_jec_6_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_6_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_6_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_6_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_6_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_6_down_W_stack_4 = new TH1F("bjetenls_jec_6_down_W_stack_4","W",20,3,7);
   bjetenls_jec_6_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_6_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_6_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_6_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_6_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_6_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(3,4.514713);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(4,9.061917);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(5,12.1509);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(6,11.86925);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(7,12.12927);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(8,10.94474);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(9,7.768329);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(10,6.336955);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(11,4.385084);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(12,2.929607);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(13,1.709083);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(14,0.9852046);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(15,0.5971534);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(16,0.3001321);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(17,0.148299);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(18,0.06344221);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(19,0.03436836);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(20,0.01041624);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinContent(21,0.01080775);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(3,0.4199552);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(4,0.5432429);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(5,0.5741368);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(6,0.5124147);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(7,0.4698607);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(8,0.4046638);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(9,0.3074765);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(10,0.2525379);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(11,0.1898907);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(12,0.1412374);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(13,0.09747791);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(14,0.06605526);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(15,0.04716858);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(16,0.0300356);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(17,0.01928932);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(18,0.01114143);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(19,0.007629236);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(20,0.003632389);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetBinError(21,0.003449406);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetEntries(6370);
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_6_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_6_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_6_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_6_down_fx3121[21] = {
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
   Double_t Graph_from_bjetenls_jec_6_down_fy3121[21] = {
   0,
   0,
   92.97968,
   197.5956,
   254.8168,
   284.257,
   280.5224,
   251.3087,
   202.0751,
   149.4173,
   101.0865,
   62.21059,
   36.44988,
   20.59966,
   10.39348,
   4.775315,
   2.078148,
   0.8370762,
   0.2780273,
   0.0863645,
   0};
   Double_t Graph_from_bjetenls_jec_6_down_felx3121[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_6_down_fely3121[21] = {
   0,
   0,
   9.625423,
   14.04527,
   15.96298,
   16.85992,
   16.7488,
   15.85272,
   14.21531,
   12.2102,
   10.03773,
   7.866267,
   6.009661,
   4.501639,
   3.171406,
   2.10708,
   1.321578,
   0.7276079,
   0.2771116,
   0.0863645,
   0};
   Double_t Graph_from_bjetenls_jec_6_down_fehx3121[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_6_down_fehy3121[21] = {
   1.841055,
   1.841055,
   10.67742,
   15.08093,
   15.96298,
   16.85992,
   16.7488,
   15.85272,
   14.21531,
   13.25121,
   11.08759,
   8.929842,
   7.092724,
   5.612102,
   4.326691,
   3.334964,
   2.661501,
   2.235956,
   1.9886,
   1.889262,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_6_down_fx3121,Graph_from_bjetenls_jec_6_down_fy3121,Graph_from_bjetenls_jec_6_down_felx3121,Graph_from_bjetenls_jec_6_down_fehx3121,Graph_from_bjetenls_jec_6_down_fely3121,Graph_from_bjetenls_jec_6_down_fehy3121);
   grae->SetName("Graph_from_bjetenls_jec_6_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_6_down3121 = new TH1F("Graph_Graph_from_bjetenls_jec_6_down3121","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_6_down3121->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_6_down3121->SetMaximum(331.2286);
   Graph_Graph_from_bjetenls_jec_6_down3121->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_6_down3121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_6_down3121->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_6_down3121->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_6_down3121);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_6_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_6_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_6_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_6_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_6_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_6_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__122 = new TH1F("ratioframe__122","t#bar{t}",20,3,7);
   ratioframe__122->SetMinimum(0.46);
   ratioframe__122->SetMaximum(1.54);
   ratioframe__122->SetEntries(505542);

   ci = TColor::GetColor("#cc0000");
   ratioframe__122->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__122->SetMarkerColor(ci);
   ratioframe__122->GetXaxis()->SetTitle("log(E)");
   ratioframe__122->GetXaxis()->SetLabelFont(42);
   ratioframe__122->GetXaxis()->SetLabelSize(0);
   ratioframe__122->GetXaxis()->SetTitleSize(0);
   ratioframe__122->GetXaxis()->SetTitleOffset(0);
   ratioframe__122->GetXaxis()->SetTitleFont(42);
   ratioframe__122->GetYaxis()->SetTitle("Data/MC");
   ratioframe__122->GetYaxis()->SetNoExponent();
   ratioframe__122->GetYaxis()->SetNdivisions(5);
   ratioframe__122->GetYaxis()->SetLabelFont(42);
   ratioframe__122->GetYaxis()->SetLabelSize(0.18);
   ratioframe__122->GetYaxis()->SetTitleSize(0.2);
   ratioframe__122->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__122->GetYaxis()->SetTitleFont(42);
   ratioframe__122->GetZaxis()->SetLabelFont(42);
   ratioframe__122->GetZaxis()->SetLabelSize(0.035);
   ratioframe__122->GetZaxis()->SetTitleSize(0.035);
   ratioframe__122->GetZaxis()->SetTitleFont(42);
   ratioframe__122->Draw("");
   
   Double_t Graph_from_ratio_fx3122[20] = {
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
   Double_t Graph_from_ratio_fy3122[20] = {
   0,
   0,
   0.8741952,
   0.8701895,
   0.8737273,
   0.9075041,
   0.9033772,
   0.9120632,
   0.9103814,
   0.9006962,
   0.8864035,
   0.8665129,
   0.8685486,
   0.8856761,
   0.8590616,
   0.8445942,
   0.8404601,
   0.8510298,
   0.7945663,
   0.7409158};
   Double_t Graph_from_ratio_felx3122[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3122[20] = {
   0,
   0,
   0.01907217,
   0.0115347,
   0.009295422,
   0.008342444,
   0.00755691,
   0.007271365,
   0.007256688,
   0.007591536,
   0.008211785,
   0.009307218,
   0.01097784,
   0.01372955,
   0.01689015,
   0.02265834,
   0.02974487,
   0.05029508,
   0.0632057,
   0.0943626};
   Double_t Graph_from_ratio_fehx3122[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3122[20] = {
   0,
   0,
   0.01907217,
   0.0115347,
   0.009295422,
   0.008342444,
   0.00755691,
   0.007271365,
   0.007256688,
   0.007591536,
   0.008211785,
   0.009307218,
   0.01097784,
   0.01372955,
   0.01689015,
   0.02265834,
   0.02974487,
   0.05029508,
   0.0632057,
   0.0943626};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3122,Graph_from_ratio_fy3122,Graph_from_ratio_felx3122,Graph_from_ratio_fehx3122,Graph_from_ratio_fely3122,Graph_from_ratio_fehy3122);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3122 = new TH1F("Graph_Graph_from_ratio3122","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3122->SetMinimum(0);
   Graph_Graph_from_ratio3122->SetMaximum(1.011268);
   Graph_Graph_from_ratio3122->SetDirectory(0);
   Graph_Graph_from_ratio3122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3122->SetLineColor(ci);
   Graph_Graph_from_ratio3122->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3122->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3122->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3122->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3122->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3122->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3122->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3122->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3122->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3122->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3122->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3122->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3122->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3122);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
