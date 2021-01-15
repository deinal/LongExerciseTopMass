void bjetenls_jec_2_up()
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
   p1->Range(2.421687,-55.97669,7.240964,411.3291);
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
   
   TH1F *frame__93 = new TH1F("frame__93","t#bar{t}",20,3,7);
   frame__93->SetMinimum(0.1);
   frame__93->SetMaximum(406.656);
   frame__93->SetEntries(505319);
   frame__93->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__93->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__93->SetMarkerColor(ci);
   frame__93->GetXaxis()->SetTitle("log(E)");
   frame__93->GetXaxis()->SetLabelFont(42);
   frame__93->GetXaxis()->SetLabelSize(0.035);
   frame__93->GetXaxis()->SetTitleSize(0.035);
   frame__93->GetXaxis()->SetTitleFont(42);
   frame__93->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__93->GetYaxis()->SetNoExponent();
   frame__93->GetYaxis()->SetLabelFont(42);
   frame__93->GetYaxis()->SetTitleSize(0.045);
   frame__93->GetYaxis()->SetTitleOffset(1.3);
   frame__93->GetYaxis()->SetTitleFont(42);
   frame__93->GetZaxis()->SetLabelFont(42);
   frame__93->GetZaxis()->SetLabelSize(0.035);
   frame__93->GetZaxis()->SetTitleSize(0.035);
   frame__93->GetZaxis()->SetTitleFont(42);
   frame__93->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_47 = new TH1F("mc_stack_47","mc",20,3,7);
   mc_stack_47->SetMinimum(-3.411829e-09);
   mc_stack_47->SetMaximum(328.4529);
   mc_stack_47->SetDirectory(0);
   mc_stack_47->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_47->SetLineColor(ci);
   mc_stack_47->GetXaxis()->SetLabelFont(42);
   mc_stack_47->GetXaxis()->SetLabelSize(0.035);
   mc_stack_47->GetXaxis()->SetTitleSize(0.035);
   mc_stack_47->GetXaxis()->SetTitleFont(42);
   mc_stack_47->GetYaxis()->SetLabelFont(42);
   mc_stack_47->GetYaxis()->SetLabelSize(0.035);
   mc_stack_47->GetYaxis()->SetTitleSize(0.035);
   mc_stack_47->GetYaxis()->SetTitleOffset(0);
   mc_stack_47->GetYaxis()->SetTitleFont(42);
   mc_stack_47->GetZaxis()->SetLabelFont(42);
   mc_stack_47->GetZaxis()->SetLabelSize(0.035);
   mc_stack_47->GetZaxis()->SetTitleSize(0.035);
   mc_stack_47->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_47);
   
   
   TH1F *bjetenls_jec_2_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_2_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(3,101.0394);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(4,217.1467);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(5,278.0991);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(6,299.7727);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(7,296.7563);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(8,263.5523);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(9,213.9332);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(10,159.0871);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(11,109.5031);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(12,68.67198);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(13,40.23115);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(14,22.20742);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(15,11.46454);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(16,5.320721);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(17,2.321513);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(18,0.8901215);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(19,0.3163149);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(20,0.103484);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinContent(21,0.03889433);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(3,1.103172);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(4,1.483151);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(5,1.519423);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(6,1.429117);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(7,1.287233);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(8,1.098421);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(9,0.8965235);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(10,0.7003344);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(11,0.5260526);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(12,0.3774524);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(13,0.2612983);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(14,0.1757658);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(15,0.1143586);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(16,0.07059223);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(17,0.04228428);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(18,0.0236395);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(19,0.01280367);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(20,0.006631853);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetBinError(21,0.003561798);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetEntries(498387);
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_2_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_2_up_Diboson_stack_2 = new TH1F("bjetenls_jec_2_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(3,0.1615186);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(4,0.2639674);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(5,0.246017);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(6,0.2564882);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(7,0.213928);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(8,0.2213178);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(9,0.1355047);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(10,0.1188762);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(11,0.1102164);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(12,0.07983475);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(13,0.04870609);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(14,0.01807342);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(15,0.02745428);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(16,0.01349461);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(17,0.01083191);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(18,0.006521092);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(19,0.00194906);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(20,0.00307837);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinContent(21,0.001010293);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(3,0.04185109);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(4,0.05099669);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(5,0.04402695);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(6,0.04074048);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(7,0.03320033);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(8,0.03145888);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(9,0.02179394);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(10,0.01818043);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(11,0.01603154);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(12,0.01267585);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(13,0.008958863);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(14,0.00491243);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(15,0.005525386);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(16,0.003431935);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(17,0.002915351);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(18,0.001939693);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(19,0.0009778369);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(20,0.001097999);
   bjetenls_jec_2_up_Diboson_stack_2->SetBinError(21,0.0005743903);
   bjetenls_jec_2_up_Diboson_stack_2->SetEntries(541);
   bjetenls_jec_2_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_2_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_2_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_2_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_2_up_DY_stack_3 = new TH1F("bjetenls_jec_2_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(3,0.6439362);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(4,0.3708554);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(5,0.6765391);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(6,0.877202);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(7,0.8680627);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(8,0.3993032);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(10,0.1299932);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(11,0.1502723);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(12,0.1730833);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(13,0.06312851);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(14,0.07626299);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(15,0.04652761);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(16,0.04325357);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(17,0.0006855207);
   bjetenls_jec_2_up_DY_stack_3->SetBinContent(18,0.03037762);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(3,0.6439362);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(4,0.3708554);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(5,0.4786994);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(6,0.5073899);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(7,0.4343062);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(8,0.2830048);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(10,0.1299932);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(11,0.1099403);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(12,0.1224219);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(13,0.06312851);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(14,0.07626299);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(15,0.04652761);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(16,0.04325358);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(17,0.0006855207);
   bjetenls_jec_2_up_DY_stack_3->SetBinError(18,0.03037762);
   bjetenls_jec_2_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_2_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_2_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_2_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_2_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_2_up_W_stack_4 = new TH1F("bjetenls_jec_2_up_W_stack_4","W",20,3,7);
   bjetenls_jec_2_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_2_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_2_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_2_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_2_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_2_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(3,4.477642);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(4,9.026768);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(5,12.15282);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(6,11.90595);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(7,12.08811);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(8,10.92548);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(9,7.765822);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(10,6.311977);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(11,4.400591);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(12,2.920551);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(13,1.691853);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(14,1.000424);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(15,0.5972942);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(16,0.3000073);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(17,0.1483698);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(18,0.06371366);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(19,0.03609226);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(20,0.0103886);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinContent(21,0.01077781);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(3,0.4183211);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(4,0.5420788);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(5,0.5742293);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(6,0.5132124);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(7,0.4688107);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(8,0.4042273);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(9,0.3073796);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(10,0.2519441);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(11,0.1902207);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(12,0.1409613);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(13,0.09696408);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(14,0.06665044);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(15,0.04717802);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(16,0.03002051);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(17,0.01929679);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(18,0.01119142);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(19,0.007822385);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(20,0.003622905);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetBinError(21,0.003439874);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetEntries(6367);
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_2_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_2_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_2_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_2_up_fx3093[21] = {
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
   Double_t Graph_from_bjetenls_jec_2_up_fy3093[21] = {
   0,
   0,
   92.2207,
   197.5044,
   254.9218,
   283.8394,
   281.8167,
   252.1978,
   202.9556,
   149.5933,
   101.433,
   62.37092,
   36.66553,
   20.67427,
   10.43495,
   4.783535,
   2.083597,
   0.851616,
   0.2830908,
   0.08727474,
   0};
   Double_t Graph_from_bjetenls_jec_2_up_felx3093[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_2_up_fely3093[21] = {
   0,
   0,
   9.585914,
   14.04202,
   15.96627,
   16.84753,
   16.7874,
   15.88074,
   14.24625,
   12.21741,
   10.05497,
   7.876451,
   6.027577,
   4.50992,
   3.177938,
   2.109029,
   1.323628,
   0.7369385,
   0.2820565,
   0.08727474,
   0};
   Double_t Graph_from_bjetenls_jec_2_up_fehx3093[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_2_up_fehy3093[21] = {
   1.841055,
   1.841055,
   10.63812,
   15.07769,
   15.96627,
   16.84753,
   16.7874,
   15.88074,
   14.24625,
   13.25839,
   11.10475,
   8.939945,
   7.110395,
   5.620183,
   4.332917,
   3.336722,
   2.663133,
   2.241761,
   1.9911,
   1.889758,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_2_up_fx3093,Graph_from_bjetenls_jec_2_up_fy3093,Graph_from_bjetenls_jec_2_up_felx3093,Graph_from_bjetenls_jec_2_up_fehx3093,Graph_from_bjetenls_jec_2_up_fely3093,Graph_from_bjetenls_jec_2_up_fehy3093);
   grae->SetName("Graph_from_bjetenls_jec_2_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_2_up3093 = new TH1F("Graph_Graph_from_bjetenls_jec_2_up3093","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_2_up3093->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_2_up3093->SetMaximum(330.7556);
   Graph_Graph_from_bjetenls_jec_2_up3093->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_2_up3093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_2_up3093->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_2_up3093->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_2_up3093);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_2_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_2_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_2_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_2_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_2_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_2_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__94 = new TH1F("ratioframe__94","t#bar{t}",20,3,7);
   ratioframe__94->SetMinimum(0.46);
   ratioframe__94->SetMaximum(1.54);
   ratioframe__94->SetEntries(505319);

   ci = TColor::GetColor("#cc0000");
   ratioframe__94->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__94->SetMarkerColor(ci);
   ratioframe__94->GetXaxis()->SetTitle("log(E)");
   ratioframe__94->GetXaxis()->SetLabelFont(42);
   ratioframe__94->GetXaxis()->SetLabelSize(0);
   ratioframe__94->GetXaxis()->SetTitleSize(0);
   ratioframe__94->GetXaxis()->SetTitleOffset(0);
   ratioframe__94->GetXaxis()->SetTitleFont(42);
   ratioframe__94->GetYaxis()->SetTitle("Data/MC");
   ratioframe__94->GetYaxis()->SetNoExponent();
   ratioframe__94->GetYaxis()->SetNdivisions(5);
   ratioframe__94->GetYaxis()->SetLabelFont(42);
   ratioframe__94->GetYaxis()->SetLabelSize(0.18);
   ratioframe__94->GetYaxis()->SetTitleSize(0.2);
   ratioframe__94->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__94->GetYaxis()->SetTitleFont(42);
   ratioframe__94->GetZaxis()->SetLabelFont(42);
   ratioframe__94->GetZaxis()->SetLabelSize(0.035);
   ratioframe__94->GetZaxis()->SetTitleSize(0.035);
   ratioframe__94->GetZaxis()->SetTitleFont(42);
   ratioframe__94->Draw("");
   
   Double_t Graph_from_ratio_fx3094[20] = {
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
   Double_t Graph_from_ratio_fy3094[20] = {
   0,
   0,
   0.8673674,
   0.8707988,
   0.875495,
   0.9073791,
   0.9093018,
   0.9167548,
   0.9148965,
   0.9030795,
   0.8884836,
   0.8681263,
   0.8722654,
   0.8872247,
   0.8598474,
   0.842546,
   0.8396862,
   0.8595809,
   0.7988876,
   0.7462508};
   Double_t Graph_from_ratio_felx3094[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3094[20] = {
   0,
   0,
   0.01897813,
   0.01154705,
   0.00931603,
   0.008348225,
   0.00759694,
   0.00730141,
   0.007281519,
   0.007609399,
   0.008220172,
   0.00931415,
   0.01099755,
   0.0137325,
   0.01687033,
   0.02256527,
   0.02968205,
   0.0504275,
   0.06309986,
   0.09457145};
   Double_t Graph_from_ratio_fehx3094[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3094[20] = {
   0,
   0,
   0.01897813,
   0.01154705,
   0.00931603,
   0.008348225,
   0.00759694,
   0.00730141,
   0.007281519,
   0.007609399,
   0.008220172,
   0.00931415,
   0.01099755,
   0.0137325,
   0.01687033,
   0.02256527,
   0.02968205,
   0.0504275,
   0.06309986,
   0.09457145};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3094,Graph_from_ratio_fy3094,Graph_from_ratio_felx3094,Graph_from_ratio_fehx3094,Graph_from_ratio_fely3094,Graph_from_ratio_fehy3094);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3094 = new TH1F("Graph_Graph_from_ratio3094","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3094->SetMinimum(0);
   Graph_Graph_from_ratio3094->SetMaximum(1.016462);
   Graph_Graph_from_ratio3094->SetDirectory(0);
   Graph_Graph_from_ratio3094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3094->SetLineColor(ci);
   Graph_Graph_from_ratio3094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3094->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3094->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3094->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3094->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3094->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3094->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3094->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3094->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3094);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
