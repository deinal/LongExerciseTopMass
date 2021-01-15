void bjetenls_lep_up()
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
   p1->Range(2.421687,-55.34904,7.240964,406.7263);
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
   
   TH1F *frame__65 = new TH1F("frame__65","t#bar{t}",20,3,7);
   frame__65->SetMinimum(0.1);
   frame__65->SetMaximum(402.1056);
   frame__65->SetEntries(504712);
   frame__65->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__65->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__65->SetMarkerColor(ci);
   frame__65->GetXaxis()->SetTitle("log(E)");
   frame__65->GetXaxis()->SetLabelFont(42);
   frame__65->GetXaxis()->SetLabelSize(0.035);
   frame__65->GetXaxis()->SetTitleSize(0.035);
   frame__65->GetXaxis()->SetTitleFont(42);
   frame__65->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__65->GetYaxis()->SetNoExponent();
   frame__65->GetYaxis()->SetLabelFont(42);
   frame__65->GetYaxis()->SetTitleSize(0.045);
   frame__65->GetYaxis()->SetTitleOffset(1.3);
   frame__65->GetYaxis()->SetTitleFont(42);
   frame__65->GetZaxis()->SetLabelFont(42);
   frame__65->GetZaxis()->SetLabelSize(0.035);
   frame__65->GetZaxis()->SetTitleSize(0.035);
   frame__65->GetZaxis()->SetTitleFont(42);
   frame__65->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_33 = new TH1F("mc_stack_33","mc",20,3,7);
   mc_stack_33->SetMinimum(-2.638846e-08);
   mc_stack_33->SetMaximum(324.7776);
   mc_stack_33->SetDirectory(0);
   mc_stack_33->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_33->SetLineColor(ci);
   mc_stack_33->GetXaxis()->SetLabelFont(42);
   mc_stack_33->GetXaxis()->SetLabelSize(0.035);
   mc_stack_33->GetXaxis()->SetTitleSize(0.035);
   mc_stack_33->GetXaxis()->SetTitleFont(42);
   mc_stack_33->GetYaxis()->SetLabelFont(42);
   mc_stack_33->GetYaxis()->SetLabelSize(0.035);
   mc_stack_33->GetYaxis()->SetTitleSize(0.035);
   mc_stack_33->GetYaxis()->SetTitleOffset(0);
   mc_stack_33->GetYaxis()->SetTitleFont(42);
   mc_stack_33->GetZaxis()->SetLabelFont(42);
   mc_stack_33->GetZaxis()->SetLabelSize(0.035);
   mc_stack_33->GetZaxis()->SetTitleSize(0.035);
   mc_stack_33->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_33);
   
   
   TH1F *bjetenls_lep_up_t#bar{t}_stack_1 = new TH1F("bjetenls_lep_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(3,100.3568);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(4,214.7038);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(5,274.8179);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(6,296.3785);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(7,292.3098);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(8,259.8795);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(9,210.5468);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(10,156.7366);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(11,107.654);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(12,67.47269);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(13,39.45937);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(14,21.80543);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(15,11.23289);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(16,5.220221);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(17,2.270756);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(18,0.8680685);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(19,0.3086947);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(20,0.1026102);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinContent(21,0.03723586);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(3,1.09229);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(4,1.464805);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(5,1.500278);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(6,1.411368);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(7,1.268749);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(8,1.083269);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(9,0.8833424);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(10,0.6904073);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(11,0.5179337);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(12,0.3715833);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(13,0.2569952);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(14,0.1729831);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(15,0.1124119);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(16,0.06944281);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(17,0.04152111);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(18,0.02318146);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(19,0.01255671);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(20,0.006562544);
   bjetenls_lep_up_t#bar{t}_stack_1->SetBinError(21,0.003450818);
   bjetenls_lep_up_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_lep_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_lep_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_lep_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_lep_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_lep_up_Diboson_stack_2 = new TH1F("bjetenls_lep_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(3,0.1599039);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(4,0.2606208);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(5,0.2425715);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(6,0.2537689);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(7,0.216695);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(8,0.2133618);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(9,0.1346242);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(10,0.1164515);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(11,0.1072586);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(12,0.08067653);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(13,0.0462887);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(14,0.02032167);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(15,0.02567217);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(16,0.01237389);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(17,0.01065866);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(18,0.006437951);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(19,0.001932521);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(20,0.003051372);
   bjetenls_lep_up_Diboson_stack_2->SetBinContent(21,0.0009965231);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(3,0.04144124);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(4,0.05035586);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(5,0.04338693);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(6,0.04029597);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(7,0.03321857);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(8,0.03062257);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(9,0.02158007);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(10,0.01790163);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(11,0.01575911);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(12,0.01265642);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(13,0.008665649);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(14,0.005159422);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(15,0.005269396);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(16,0.003250958);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(17,0.002865804);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(18,0.001914294);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(19,0.0009693699);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(20,0.00108861);
   bjetenls_lep_up_Diboson_stack_2->SetBinError(21,0.0005666379);
   bjetenls_lep_up_Diboson_stack_2->SetEntries(540);
   bjetenls_lep_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_lep_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_lep_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_lep_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_lep_up_DY_stack_3 = new TH1F("bjetenls_lep_up_DY_stack_3","DY",20,3,7);
   bjetenls_lep_up_DY_stack_3->SetBinContent(3,0.6389154);
   bjetenls_lep_up_DY_stack_3->SetBinContent(4,0.3666441);
   bjetenls_lep_up_DY_stack_3->SetBinContent(5,0.6708215);
   bjetenls_lep_up_DY_stack_3->SetBinContent(6,0.8545659);
   bjetenls_lep_up_DY_stack_3->SetBinContent(7,0.8479316);
   bjetenls_lep_up_DY_stack_3->SetBinContent(8,0.3968565);
   bjetenls_lep_up_DY_stack_3->SetBinContent(10,0.1284673);
   bjetenls_lep_up_DY_stack_3->SetBinContent(11,0.1454252);
   bjetenls_lep_up_DY_stack_3->SetBinContent(12,0.1663206);
   bjetenls_lep_up_DY_stack_3->SetBinContent(13,0.06247819);
   bjetenls_lep_up_DY_stack_3->SetBinContent(14,0.07543494);
   bjetenls_lep_up_DY_stack_3->SetBinContent(15,0.04640783);
   bjetenls_lep_up_DY_stack_3->SetBinContent(16,0.04280264);
   bjetenls_lep_up_DY_stack_3->SetBinContent(17,0.0006727718);
   bjetenls_lep_up_DY_stack_3->SetBinContent(18,0.03004779);
   bjetenls_lep_up_DY_stack_3->SetBinError(3,0.6389154);
   bjetenls_lep_up_DY_stack_3->SetBinError(4,0.3666441);
   bjetenls_lep_up_DY_stack_3->SetBinError(5,0.4746854);
   bjetenls_lep_up_DY_stack_3->SetBinError(6,0.4941459);
   bjetenls_lep_up_DY_stack_3->SetBinError(7,0.4240382);
   bjetenls_lep_up_DY_stack_3->SetBinError(8,0.2813475);
   bjetenls_lep_up_DY_stack_3->SetBinError(10,0.1284673);
   bjetenls_lep_up_DY_stack_3->SetBinError(11,0.105954);
   bjetenls_lep_up_DY_stack_3->SetBinError(12,0.1176092);
   bjetenls_lep_up_DY_stack_3->SetBinError(13,0.06247819);
   bjetenls_lep_up_DY_stack_3->SetBinError(14,0.07543494);
   bjetenls_lep_up_DY_stack_3->SetBinError(15,0.04640783);
   bjetenls_lep_up_DY_stack_3->SetBinError(16,0.04280263);
   bjetenls_lep_up_DY_stack_3->SetBinError(17,0.0006727718);
   bjetenls_lep_up_DY_stack_3->SetBinError(18,0.03004779);
   bjetenls_lep_up_DY_stack_3->SetEntries(24);
   bjetenls_lep_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_lep_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_lep_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_lep_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_lep_up_W_stack_4 = new TH1F("bjetenls_lep_up_W_stack_4","W",20,3,7);
   bjetenls_lep_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_lep_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_lep_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_lep_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_up_W_stack_4,"hist");
   
   TH1F *bjetenls_lep_up_SinglesPtop_stack_5 = new TH1F("bjetenls_lep_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(3,4.429178);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(4,8.779602);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(5,11.97872);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(6,11.82515);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(7,11.85896);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(8,10.75563);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(9,7.668883);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(10,6.216674);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(11,4.312392);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(12,2.883353);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(13,1.685915);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(14,0.9713014);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(15,0.5848388);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(16,0.296231);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(17,0.1461545);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(18,0.06240007);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(19,0.03370721);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(20,0.01019657);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinContent(21,0.01069255);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(3,0.4128341);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(4,0.5310052);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(5,0.567152);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(6,0.5080181);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(7,0.4612394);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(8,0.3986123);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(9,0.3033595);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(10,0.248484);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(11,0.1871132);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(12,0.139174);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(13,0.09616314);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(14,0.06512889);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(15,0.04634273);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(16,0.02964633);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(17,0.01901426);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(18,0.01095806);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(19,0.0074797);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(20,0.003555531);
   bjetenls_lep_up_SinglesPtop_stack_5->SetBinError(21,0.003412456);
   bjetenls_lep_up_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_lep_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_lep_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_lep_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_lep_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_lep_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_lep_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_lep_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_lep_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_lep_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_lep_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_lep_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_lep_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_lep_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_lep_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_lep_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_lep_up_fx3065[21] = {
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
   Double_t Graph_from_bjetenls_lep_up_fy3065[21] = {
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
   Double_t Graph_from_bjetenls_lep_up_felx3065[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_lep_up_fely3065[21] = {
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
   Double_t Graph_from_bjetenls_lep_up_fehx3065[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_lep_up_fehy3065[21] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_lep_up_fx3065,Graph_from_bjetenls_lep_up_fy3065,Graph_from_bjetenls_lep_up_felx3065,Graph_from_bjetenls_lep_up_fehx3065,Graph_from_bjetenls_lep_up_fely3065,Graph_from_bjetenls_lep_up_fehy3065);
   grae->SetName("Graph_from_bjetenls_lep_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_lep_up3065 = new TH1F("Graph_Graph_from_bjetenls_lep_up3065","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_lep_up3065->SetMinimum(0);
   Graph_Graph_from_bjetenls_lep_up3065->SetMaximum(331.507);
   Graph_Graph_from_bjetenls_lep_up3065->SetDirectory(0);
   Graph_Graph_from_bjetenls_lep_up3065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_lep_up3065->SetLineColor(ci);
   Graph_Graph_from_bjetenls_lep_up3065->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_lep_up3065->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_lep_up3065->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_lep_up3065->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_lep_up3065->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_lep_up3065->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_lep_up3065->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_lep_up3065->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_lep_up3065->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_lep_up3065->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_lep_up3065->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_lep_up3065->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_lep_up3065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_lep_up3065);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_lep_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_lep_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_lep_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_lep_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_lep_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_lep_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__66 = new TH1F("ratioframe__66","t#bar{t}",20,3,7);
   ratioframe__66->SetMinimum(0.46);
   ratioframe__66->SetMaximum(1.54);
   ratioframe__66->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__66->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__66->SetMarkerColor(ci);
   ratioframe__66->GetXaxis()->SetTitle("log(E)");
   ratioframe__66->GetXaxis()->SetLabelFont(42);
   ratioframe__66->GetXaxis()->SetLabelSize(0);
   ratioframe__66->GetXaxis()->SetTitleSize(0);
   ratioframe__66->GetXaxis()->SetTitleOffset(0);
   ratioframe__66->GetXaxis()->SetTitleFont(42);
   ratioframe__66->GetYaxis()->SetTitle("Data/MC");
   ratioframe__66->GetYaxis()->SetNoExponent();
   ratioframe__66->GetYaxis()->SetNdivisions(5);
   ratioframe__66->GetYaxis()->SetLabelFont(42);
   ratioframe__66->GetYaxis()->SetLabelSize(0.18);
   ratioframe__66->GetYaxis()->SetTitleSize(0.2);
   ratioframe__66->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__66->GetYaxis()->SetTitleFont(42);
   ratioframe__66->GetZaxis()->SetLabelFont(42);
   ratioframe__66->GetZaxis()->SetLabelSize(0.035);
   ratioframe__66->GetZaxis()->SetTitleSize(0.035);
   ratioframe__66->GetZaxis()->SetTitleFont(42);
   ratioframe__66->Draw("");
   
   Double_t Graph_from_ratio_fx3066[20] = {
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
   Double_t Graph_from_ratio_fy3066[20] = {
   0,
   0,
   0.8788621,
   0.8832381,
   0.8871529,
   0.9197923,
   0.9238619,
   0.9293932,
   0.9283888,
   0.9159134,
   0.9006066,
   0.8819495,
   0.8856825,
   0.8987244,
   0.8745564,
   0.8553261,
   0.8544227,
   0.8614062,
   0.8190559,
   0.7451738};
   Double_t Graph_from_ratio_felx3066[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3066[20] = {
   0,
   0,
   0.01917136,
   0.01169713,
   0.009434932,
   0.008449246,
   0.007716066,
   0.007404528,
   0.007394632,
   0.007721306,
   0.008344859,
   0.009468359,
   0.01119117,
   0.01394935,
   0.01720759,
   0.02296929,
   0.03027684,
   0.05105559,
   0.06484264,
   0.0947727};
   Double_t Graph_from_ratio_fehx3066[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3066[20] = {
   0,
   0,
   0.01917136,
   0.01169713,
   0.009434932,
   0.008449246,
   0.007716066,
   0.007404528,
   0.007394632,
   0.007721306,
   0.008344859,
   0.009468359,
   0.01119117,
   0.01394935,
   0.01720759,
   0.02296929,
   0.03027684,
   0.05105559,
   0.06484264,
   0.0947727};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3066,Graph_from_ratio_fy3066,Graph_from_ratio_felx3066,Graph_from_ratio_fehx3066,Graph_from_ratio_fely3066,Graph_from_ratio_fehy3066);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3066 = new TH1F("Graph_Graph_from_ratio3066","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3066->SetMinimum(0);
   Graph_Graph_from_ratio3066->SetMaximum(1.030478);
   Graph_Graph_from_ratio3066->SetDirectory(0);
   Graph_Graph_from_ratio3066->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3066->SetLineColor(ci);
   Graph_Graph_from_ratio3066->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3066->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3066->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3066->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3066->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3066->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3066->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3066->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3066->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3066->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3066->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3066->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3066->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3066);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
