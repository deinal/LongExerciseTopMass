void bjetenls_jec_1_down()
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
   p1->Range(2.421687,-55.98251,7.240964,411.3717);
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
   
   TH1F *frame__9 = new TH1F("frame__9","t#bar{t}",20,3,7);
   frame__9->SetMinimum(0.1);
   frame__9->SetMaximum(406.6982);
   frame__9->SetEntries(504119);
   frame__9->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__9->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__9->SetMarkerColor(ci);
   frame__9->GetXaxis()->SetTitle("log(E)");
   frame__9->GetXaxis()->SetLabelFont(42);
   frame__9->GetXaxis()->SetLabelSize(0.035);
   frame__9->GetXaxis()->SetTitleSize(0.035);
   frame__9->GetXaxis()->SetTitleFont(42);
   frame__9->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__9->GetYaxis()->SetNoExponent();
   frame__9->GetYaxis()->SetLabelFont(42);
   frame__9->GetYaxis()->SetTitleSize(0.045);
   frame__9->GetYaxis()->SetTitleOffset(1.3);
   frame__9->GetYaxis()->SetTitleFont(42);
   frame__9->GetZaxis()->SetLabelFont(42);
   frame__9->GetZaxis()->SetLabelSize(0.035);
   frame__9->GetZaxis()->SetTitleSize(0.035);
   frame__9->GetZaxis()->SetTitleFont(42);
   frame__9->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_5 = new TH1F("mc_stack_5","mc",20,3,7);
   mc_stack_5->SetMinimum(-5.076261e-09);
   mc_stack_5->SetMaximum(328.487);
   mc_stack_5->SetDirectory(0);
   mc_stack_5->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_5->SetLineColor(ci);
   mc_stack_5->GetXaxis()->SetLabelFont(42);
   mc_stack_5->GetXaxis()->SetLabelSize(0.035);
   mc_stack_5->GetXaxis()->SetTitleSize(0.035);
   mc_stack_5->GetXaxis()->SetTitleFont(42);
   mc_stack_5->GetYaxis()->SetLabelFont(42);
   mc_stack_5->GetYaxis()->SetLabelSize(0.035);
   mc_stack_5->GetYaxis()->SetTitleSize(0.035);
   mc_stack_5->GetYaxis()->SetTitleOffset(0);
   mc_stack_5->GetYaxis()->SetTitleFont(42);
   mc_stack_5->GetZaxis()->SetLabelFont(42);
   mc_stack_5->GetZaxis()->SetLabelSize(0.035);
   mc_stack_5->GetZaxis()->SetTitleSize(0.035);
   mc_stack_5->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_5);
   
   
   TH1F *bjetenls_jec_1_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_1_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(3,102.0407);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(4,217.7279);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(5,278.1411);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(6,299.8085);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(7,295.6749);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(8,263.2863);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(9,213.217);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(10,158.7784);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(11,109.0314);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(12,68.37977);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(13,39.98965);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(14,22.07473);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(15,11.3963);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(16,5.289967);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(17,2.3029);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(18,0.8776714);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(19,0.3139233);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(20,0.1026435);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinContent(21,0.0378164);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(3,1.108882);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(4,1.484962);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(5,1.519424);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(6,1.429125);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(7,1.284804);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(8,1.097922);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(9,0.8950458);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(10,0.699662);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(11,0.5248501);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(12,0.3766605);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(13,0.2604903);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(14,0.1752351);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(15,0.1140257);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(16,0.07038387);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(17,0.04210616);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(18,0.02347072);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(19,0.01275526);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(20,0.006604724);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetBinError(21,0.003504644);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetEntries(497220);
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_1_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_1_down_Diboson_stack_2 = new TH1F("bjetenls_jec_1_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(3,0.1621353);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(4,0.2833991);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(5,0.2343083);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(6,0.2513212);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(7,0.2147369);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(8,0.2164293);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(9,0.136372);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(10,0.1179365);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(11,0.1087423);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(12,0.08178238);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(13,0.04706896);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(14,0.02061883);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(15,0.02594576);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(16,0.01183135);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(17,0.01085976);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(18,0.006537871);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(19,0.001955801);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(20,0.003087791);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinContent(21,0.001014202);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(3,0.04201098);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(4,0.05282393);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(5,0.04261245);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(6,0.04042997);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(7,0.03332731);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(8,0.03106229);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(9,0.02186153);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(10,0.01813113);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(11,0.01597559);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(12,0.01282716);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(13,0.008807359);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(14,0.005235779);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(15,0.005326115);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(16,0.003222417);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(17,0.00292291);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(18,0.00194466);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(19,0.0009812172);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(20,0.001101264);
   bjetenls_jec_1_down_Diboson_stack_2->SetBinError(21,0.000576618);
   bjetenls_jec_1_down_Diboson_stack_2->SetEntries(538);
   bjetenls_jec_1_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_1_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_1_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_1_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_1_down_DY_stack_3 = new TH1F("bjetenls_jec_1_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(3,0.6464455);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(4,0.3721337);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(5,0.6791273);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(6,0.8804167);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(7,0.8703292);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(8,0.4001417);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(10,0.1302662);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(11,0.1505879);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(12,0.1734468);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(13,0.06326108);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(14,0.07648356);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(15,0.04662532);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(16,0.04334441);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(17,0.0006875859);
   bjetenls_jec_1_down_DY_stack_3->SetBinContent(18,0.03044141);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(3,0.6464455);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(4,0.3721337);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(5,0.4805307);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(6,0.5092516);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(7,0.4354367);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(8,0.2835991);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(10,0.1302662);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(11,0.1101712);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(12,0.122679);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(13,0.06326108);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(14,0.07648356);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(15,0.04662532);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(16,0.04334441);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(17,0.0006875859);
   bjetenls_jec_1_down_DY_stack_3->SetBinError(18,0.03044141);
   bjetenls_jec_1_down_DY_stack_3->SetEntries(24);
   bjetenls_jec_1_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_1_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_1_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_1_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_1_down_W_stack_4 = new TH1F("bjetenls_jec_1_down_W_stack_4","W",20,3,7);
   bjetenls_jec_1_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_1_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_1_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_1_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_1_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_1_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(3,4.427064);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(4,8.967655);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(5,12.02417);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(6,11.90456);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(7,11.98209);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(8,10.9027);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(9,7.785786);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(10,6.257565);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(11,4.388563);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(12,2.909296);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(13,1.709102);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(14,0.9855022);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(15,0.5972533);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(16,0.2967393);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(17,0.1483822);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(18,0.06347568);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(19,0.03438419);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(20,0.01042144);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinContent(21,0.01081301);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(3,0.4157304);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(4,0.5407727);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(5,0.5717351);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(6,0.5132989);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(7,0.4669564);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(8,0.4040981);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(9,0.3077551);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(10,0.25103);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(11,0.1900489);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(12,0.1407342);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(13,0.09748461);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(14,0.06607701);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(15,0.04717668);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(16,0.02984057);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(17,0.01930011);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(18,0.01114735);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(19,0.007632746);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(20,0.003634164);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetBinError(21,0.003451098);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetEntries(6337);
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_1_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_1_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_1_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_1_down_fx3009[21] = {
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
   Double_t Graph_from_bjetenls_jec_1_down_fy3009[21] = {
   0,
   0,
   92.98102,
   197.628,
   254.8328,
   283.8068,
   281.6538,
   252.0474,
   202.5844,
   149.3679,
   101.1003,
   62.23976,
   36.51722,
   20.57611,
   10.4146,
   4.757421,
   2.070621,
   0.836906,
   0.2767244,
   0.08640076,
   0};
   Double_t Graph_from_bjetenls_jec_1_down_felx3009[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_1_down_fely3009[21] = {
   0,
   0,
   9.625492,
   14.04642,
   15.96348,
   16.84657,
   16.78254,
   15.876,
   14.23321,
   12.20818,
   10.03842,
   7.868121,
   6.015261,
   4.499023,
   3.174734,
   2.10283,
   1.318741,
   0.7274981,
   0.2758376,
   0.08640076,
   0};
   Double_t Graph_from_bjetenls_jec_1_down_fehx3009[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_1_down_fehy3009[21] = {
   1.841055,
   1.841055,
   10.67749,
   15.08207,
   15.96348,
   16.84657,
   16.78254,
   15.876,
   14.23321,
   13.2492,
   11.08828,
   8.931681,
   7.098247,
   5.609548,
   4.329863,
   3.331134,
   2.659243,
   2.235888,
   1.987956,
   1.889282,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_1_down_fx3009,Graph_from_bjetenls_jec_1_down_fy3009,Graph_from_bjetenls_jec_1_down_felx3009,Graph_from_bjetenls_jec_1_down_fehx3009,Graph_from_bjetenls_jec_1_down_fely3009,Graph_from_bjetenls_jec_1_down_fehy3009);
   grae->SetName("Graph_from_bjetenls_jec_1_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_1_down3009 = new TH1F("Graph_Graph_from_bjetenls_jec_1_down3009","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_1_down3009->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_1_down3009->SetMaximum(330.7187);
   Graph_Graph_from_bjetenls_jec_1_down3009->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_1_down3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_1_down3009->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_1_down3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_1_down3009);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_1_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_1_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_1_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_1_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_1_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_1_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__10 = new TH1F("ratioframe__10","t#bar{t}",20,3,7);
   ratioframe__10->SetMinimum(0.46);
   ratioframe__10->SetMaximum(1.54);
   ratioframe__10->SetEntries(504119);

   ci = TColor::GetColor("#cc0000");
   ratioframe__10->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__10->SetMarkerColor(ci);
   ratioframe__10->GetXaxis()->SetTitle("log(E)");
   ratioframe__10->GetXaxis()->SetLabelFont(42);
   ratioframe__10->GetXaxis()->SetLabelSize(0);
   ratioframe__10->GetXaxis()->SetTitleSize(0);
   ratioframe__10->GetXaxis()->SetTitleOffset(0);
   ratioframe__10->GetXaxis()->SetTitleFont(42);
   ratioframe__10->GetYaxis()->SetTitle("Data/MC");
   ratioframe__10->GetYaxis()->SetNoExponent();
   ratioframe__10->GetYaxis()->SetNdivisions(5);
   ratioframe__10->GetYaxis()->SetLabelFont(42);
   ratioframe__10->GetYaxis()->SetLabelSize(0.18);
   ratioframe__10->GetYaxis()->SetTitleSize(0.2);
   ratioframe__10->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__10->GetYaxis()->SetTitleFont(42);
   ratioframe__10->GetZaxis()->SetLabelFont(42);
   ratioframe__10->GetZaxis()->SetLabelSize(0.035);
   ratioframe__10->GetZaxis()->SetTitleSize(0.035);
   ratioframe__10->GetZaxis()->SetTitleFont(42);
   ratioframe__10->Draw("");
   
   Double_t Graph_from_ratio_fx3010[20] = {
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
   Double_t Graph_from_ratio_fy3010[20] = {
   0,
   0,
   0.8667428,
   0.8692632,
   0.8754774,
   0.907181,
   0.9122626,
   0.9171844,
   0.9160945,
   0.9037039,
   0.8893474,
   0.8699473,
   0.8734279,
   0.8885353,
   0.8631269,
   0.843233,
   0.8407489,
   0.8556216,
   0.7900469,
   0.7438547};
   Double_t Graph_from_ratio_felx3010[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3010[20] = {
   0,
   0,
   0.01887822,
   0.01151732,
   0.009316917,
   0.008347309,
   0.007628086,
   0.007308088,
   0.00729949,
   0.007620896,
   0.008243176,
   0.009347598,
   0.0110393,
   0.01379104,
   0.01696698,
   0.02265441,
   0.02981171,
   0.05068037,
   0.06294221,
   0.09479074};
   Double_t Graph_from_ratio_fehx3010[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3010[20] = {
   0,
   0,
   0.01887822,
   0.01151732,
   0.009316917,
   0.008347309,
   0.007628086,
   0.007308088,
   0.00729949,
   0.007620896,
   0.008243176,
   0.009347598,
   0.0110393,
   0.01379104,
   0.01696698,
   0.02265441,
   0.02981171,
   0.05068037,
   0.06294221,
   0.09479074};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3010,Graph_from_ratio_fy3010,Graph_from_ratio_felx3010,Graph_from_ratio_fehx3010,Graph_from_ratio_fely3010,Graph_from_ratio_fehy3010);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3010 = new TH1F("Graph_Graph_from_ratio3010","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3010->SetMinimum(0);
   Graph_Graph_from_ratio3010->SetMaximum(1.016942);
   Graph_Graph_from_ratio3010->SetDirectory(0);
   Graph_Graph_from_ratio3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3010->SetLineColor(ci);
   Graph_Graph_from_ratio3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3010);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
