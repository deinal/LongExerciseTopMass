void bjetenls_jec_15_up()
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
   p1->Range(2.421687,-55.95221,7.240964,411.1496);
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
   
   TH1F *frame__101 = new TH1F("frame__101","t#bar{t}",20,3,7);
   frame__101->SetMinimum(0.1);
   frame__101->SetMaximum(406.4786);
   frame__101->SetEntries(507378);
   frame__101->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__101->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__101->SetMarkerColor(ci);
   frame__101->GetXaxis()->SetTitle("log(E)");
   frame__101->GetXaxis()->SetLabelFont(42);
   frame__101->GetXaxis()->SetLabelSize(0.035);
   frame__101->GetXaxis()->SetTitleSize(0.035);
   frame__101->GetXaxis()->SetTitleFont(42);
   frame__101->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__101->GetYaxis()->SetNoExponent();
   frame__101->GetYaxis()->SetLabelFont(42);
   frame__101->GetYaxis()->SetTitleSize(0.045);
   frame__101->GetYaxis()->SetTitleOffset(1.3);
   frame__101->GetYaxis()->SetTitleFont(42);
   frame__101->GetZaxis()->SetLabelFont(42);
   frame__101->GetZaxis()->SetLabelSize(0.035);
   frame__101->GetZaxis()->SetTitleSize(0.035);
   frame__101->GetZaxis()->SetTitleFont(42);
   frame__101->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_51 = new TH1F("mc_stack_51","mc",20,3,7);
   mc_stack_51->SetMinimum(-3.862833e-08);
   mc_stack_51->SetMaximum(328.3096);
   mc_stack_51->SetDirectory(0);
   mc_stack_51->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_51->SetLineColor(ci);
   mc_stack_51->GetXaxis()->SetLabelFont(42);
   mc_stack_51->GetXaxis()->SetLabelSize(0.035);
   mc_stack_51->GetXaxis()->SetTitleSize(0.035);
   mc_stack_51->GetXaxis()->SetTitleFont(42);
   mc_stack_51->GetYaxis()->SetLabelFont(42);
   mc_stack_51->GetYaxis()->SetLabelSize(0.035);
   mc_stack_51->GetYaxis()->SetTitleSize(0.035);
   mc_stack_51->GetYaxis()->SetTitleOffset(0);
   mc_stack_51->GetYaxis()->SetTitleFont(42);
   mc_stack_51->GetZaxis()->SetLabelFont(42);
   mc_stack_51->GetZaxis()->SetLabelSize(0.035);
   mc_stack_51->GetZaxis()->SetTitleSize(0.035);
   mc_stack_51->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_51);
   
   
   TH1F *bjetenls_jec_15_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_15_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(3,100.1468);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(4,216.6403);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(5,277.6593);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(6,299.6072);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(7,297.2463);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(8,263.9378);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(9,214.9992);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(10,159.2908);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(11,110.3902);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(12,69.08389);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(13,40.66964);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(14,22.51088);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(15,11.65224);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(16,5.467333);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(17,2.3836);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(18,0.9171239);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(19,0.3314002);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(20,0.105421);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinContent(21,0.03949289);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(3,1.098331);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(4,1.481356);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(5,1.518158);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(6,1.428698);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(7,1.288148);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(8,1.099298);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(9,0.8987006);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(10,0.7007451);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(11,0.5281815);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(12,0.3784708);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(13,0.2626999);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(14,0.1769016);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(15,0.1152859);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(16,0.07155405);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(17,0.04281556);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(18,0.02402352);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(19,0.01309167);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(20,0.006684966);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetBinError(21,0.003587338);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetEntries(500403);
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_15_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_15_up_Diboson_stack_2 = new TH1F("bjetenls_jec_15_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(3,0.1734648);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(4,0.2630265);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(5,0.244306);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(6,0.258918);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(7,0.2158458);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(8,0.226257);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(9,0.1395506);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(10,0.1133891);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(11,0.1164131);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(12,0.08046615);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(13,0.04942926);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(14,0.01998864);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(15,0.02701495);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(16,0.01268129);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(17,0.01154062);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(18,0.005958962);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(19,0.002474548);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(20,0.003068153);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinContent(21,0.00100796);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(3,0.04355297);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(4,0.05081913);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(5,0.04378544);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(6,0.04111395);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(7,0.03350036);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(8,0.03185907);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(9,0.02217523);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(10,0.01782227);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(11,0.01653781);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(12,0.01270595);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(13,0.009005449);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(14,0.005250186);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(15,0.005429341);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(16,0.003333486);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(17,0.002999983);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(18,0.00185586);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(19,0.001110265);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(20,0.001093894);
   bjetenls_jec_15_up_Diboson_stack_2->SetBinError(21,0.0005729445);
   bjetenls_jec_15_up_Diboson_stack_2->SetEntries(546);
   bjetenls_jec_15_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_15_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_15_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_15_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_15_up_DY_stack_3 = new TH1F("bjetenls_jec_15_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(3,0.6421419);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(4,0.3687213);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(5,0.669987);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(6,0.8707869);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(7,0.8619329);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(8,0.3987922);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(10,0.1297055);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(11,0.1506632);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(12,0.1730396);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(13,0.06241906);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(14,0.07643345);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(15,0.0460734);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(16,0.04284457);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(17,0.0006847242);
   bjetenls_jec_15_up_DY_stack_3->SetBinContent(18,0.03016791);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(3,0.642142);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(4,0.3687213);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(5,0.4740633);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(6,0.5036977);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(7,0.431263);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(8,0.282575);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(10,0.1297055);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(11,0.1102263);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(12,0.1223948);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(13,0.06241906);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(14,0.07643345);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(15,0.04607339);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(16,0.04284457);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(17,0.0006847242);
   bjetenls_jec_15_up_DY_stack_3->SetBinError(18,0.03016792);
   bjetenls_jec_15_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_15_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_15_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_15_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_15_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_15_up_W_stack_4 = new TH1F("bjetenls_jec_15_up_W_stack_4","W",20,3,7);
   bjetenls_jec_15_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_15_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_15_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_15_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_15_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_15_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(3,4.401326);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(4,9.025984);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(5,12.11438);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(6,11.93894);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(7,12.09326);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(8,11.16053);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(9,7.724349);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(10,6.36694);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(11,4.445718);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(12,2.951701);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(13,1.724241);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(14,0.998387);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(15,0.5957301);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(16,0.3110419);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(17,0.151339);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(18,0.06407921);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(19,0.03773927);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(20,0.01033792);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinContent(21,0.01073076);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(3,0.4146988);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(4,0.5421474);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(5,0.573022);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(6,0.5141498);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(7,0.4690476);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(8,0.4085861);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(9,0.3063062);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(10,0.2531367);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(11,0.1914567);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(12,0.1416434);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(13,0.09790031);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(14,0.06657848);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(15,0.04700271);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(16,0.03070705);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(17,0.01952996);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(18,0.01126205);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(19,0.007994098);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(20,0.003604098);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetBinError(21,0.003423938);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetEntries(6405);
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_15_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_15_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_15_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_15_up_fx3101[21] = {
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
   Double_t Graph_from_bjetenls_jec_15_up_fy3101[21] = {
   0,
   0,
   92.08214,
   197.072,
   255.189,
   283.6744,
   282.5391,
   253.1519,
   203.5703,
   150.3017,
   101.8205,
   62.74066,
   37.1049,
   20.81524,
   10.57105,
   4.878552,
   2.107885,
   0.8692902,
   0.285411,
   0.08943677,
   0};
   Double_t Graph_from_bjetenls_jec_15_up_felx3101[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_15_up_fely3101[21] = {
   0,
   0,
   9.578684,
   14.02661,
   15.97464,
   16.84264,
   16.8089,
   15.91075,
   14.26781,
   12.24636,
   10.07423,
   7.899889,
   6.063916,
   4.525523,
   3.199281,
   2.13143,
   1.332728,
   0.7481571,
   0.2843189,
   0.08943677,
   0};
   Double_t Graph_from_bjetenls_jec_15_up_fehx3101[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_15_up_fehy3101[21] = {
   1.841055,
   1.841055,
   10.63093,
   15.06232,
   15.97464,
   16.84264,
   16.8089,
   15.91075,
   14.26781,
   13.28725,
   11.12391,
   8.963195,
   7.146243,
   5.635413,
   4.353265,
   3.356943,
   2.670391,
   2.248782,
   1.992244,
   1.890934,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_15_up_fx3101,Graph_from_bjetenls_jec_15_up_fy3101,Graph_from_bjetenls_jec_15_up_felx3101,Graph_from_bjetenls_jec_15_up_fehx3101,Graph_from_bjetenls_jec_15_up_fely3101,Graph_from_bjetenls_jec_15_up_fehy3101);
   grae->SetName("Graph_from_bjetenls_jec_15_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_15_up3101 = new TH1F("Graph_Graph_from_bjetenls_jec_15_up3101","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_15_up3101->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_15_up3101->SetMaximum(330.5688);
   Graph_Graph_from_bjetenls_jec_15_up3101->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_15_up3101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_15_up3101->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_15_up3101->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_15_up3101);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_15_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_15_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_15_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_15_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_15_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_15_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__102 = new TH1F("ratioframe__102","t#bar{t}",20,3,7);
   ratioframe__102->SetMinimum(0.46);
   ratioframe__102->SetMaximum(1.54);
   ratioframe__102->SetEntries(507378);

   ci = TColor::GetColor("#cc0000");
   ratioframe__102->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__102->SetMarkerColor(ci);
   ratioframe__102->GetXaxis()->SetTitle("log(E)");
   ratioframe__102->GetXaxis()->SetLabelFont(42);
   ratioframe__102->GetXaxis()->SetLabelSize(0);
   ratioframe__102->GetXaxis()->SetTitleSize(0);
   ratioframe__102->GetXaxis()->SetTitleOffset(0);
   ratioframe__102->GetXaxis()->SetTitleFont(42);
   ratioframe__102->GetYaxis()->SetTitle("Data/MC");
   ratioframe__102->GetYaxis()->SetNoExponent();
   ratioframe__102->GetYaxis()->SetNdivisions(5);
   ratioframe__102->GetYaxis()->SetLabelFont(42);
   ratioframe__102->GetYaxis()->SetLabelSize(0.18);
   ratioframe__102->GetYaxis()->SetTitleSize(0.2);
   ratioframe__102->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__102->GetYaxis()->SetTitleFont(42);
   ratioframe__102->GetZaxis()->SetLabelFont(42);
   ratioframe__102->GetZaxis()->SetLabelSize(0.035);
   ratioframe__102->GetZaxis()->SetTitleSize(0.035);
   ratioframe__102->GetZaxis()->SetTitleFont(42);
   ratioframe__102->Draw("");
   
   Double_t Graph_from_ratio_fx3102[20] = {
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
   Double_t Graph_from_ratio_fy3102[20] = {
   0,
   0,
   0.8739449,
   0.8708513,
   0.8778795,
   0.9072478,
   0.9101911,
   0.9181373,
   0.9134321,
   0.9059732,
   0.8846037,
   0.8679132,
   0.8729388,
   0.8817893,
   0.8579655,
   0.8362418,
   0.8275418,
   0.854482,
   0.7680307,
   0.7526633};
   Double_t Graph_from_ratio_felx3102[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3102[20] = {
   0,
   0,
   0.01916218,
   0.01155853,
   0.009337232,
   0.008347453,
   0.007594313,
   0.007301983,
   0.007256316,
   0.007619997,
   0.0081643,
   0.009283385,
   0.01093983,
   0.01358049,
   0.01669972,
   0.02211238,
   0.02901002,
   0.04927649,
   0.06004273,
   0.09429407};
   Double_t Graph_from_ratio_fehx3102[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3102[20] = {
   0,
   0,
   0.01916218,
   0.01155853,
   0.009337232,
   0.008347453,
   0.007594313,
   0.007301983,
   0.007256316,
   0.007619997,
   0.0081643,
   0.009283385,
   0.01093983,
   0.01358049,
   0.01669972,
   0.02211238,
   0.02901002,
   0.04927649,
   0.06004273,
   0.09429407};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3102,Graph_from_ratio_fy3102,Graph_from_ratio_felx3102,Graph_from_ratio_fehx3102,Graph_from_ratio_fely3102,Graph_from_ratio_fehy3102);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3102 = new TH1F("Graph_Graph_from_ratio3102","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3102->SetMinimum(0);
   Graph_Graph_from_ratio3102->SetMaximum(1.017983);
   Graph_Graph_from_ratio3102->SetDirectory(0);
   Graph_Graph_from_ratio3102->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3102->SetLineColor(ci);
   Graph_Graph_from_ratio3102->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3102->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3102->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3102->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3102->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3102->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3102->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3102->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3102->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3102->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3102->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3102->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3102->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3102);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
