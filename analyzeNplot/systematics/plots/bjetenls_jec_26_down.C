void bjetenls_jec_26_down()
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
   p1->Range(2.421687,-56.00365,7.240964,411.5267);
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
   
   TH1F *frame__69 = new TH1F("frame__69","t#bar{t}",20,3,7);
   frame__69->SetMinimum(0.1);
   frame__69->SetMaximum(406.8514);
   frame__69->SetEntries(499721);
   frame__69->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__69->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__69->SetMarkerColor(ci);
   frame__69->GetXaxis()->SetTitle("log(E)");
   frame__69->GetXaxis()->SetLabelFont(42);
   frame__69->GetXaxis()->SetLabelSize(0.035);
   frame__69->GetXaxis()->SetTitleSize(0.035);
   frame__69->GetXaxis()->SetTitleFont(42);
   frame__69->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__69->GetYaxis()->SetNoExponent();
   frame__69->GetYaxis()->SetLabelFont(42);
   frame__69->GetYaxis()->SetTitleSize(0.045);
   frame__69->GetYaxis()->SetTitleOffset(1.3);
   frame__69->GetYaxis()->SetTitleFont(42);
   frame__69->GetZaxis()->SetLabelFont(42);
   frame__69->GetZaxis()->SetLabelSize(0.035);
   frame__69->GetZaxis()->SetTitleSize(0.035);
   frame__69->GetZaxis()->SetTitleFont(42);
   frame__69->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_35 = new TH1F("mc_stack_35","mc",20,3,7);
   mc_stack_35->SetMinimum(-4.657852e-09);
   mc_stack_35->SetMaximum(328.6108);
   mc_stack_35->SetDirectory(0);
   mc_stack_35->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_35->SetLineColor(ci);
   mc_stack_35->GetXaxis()->SetLabelFont(42);
   mc_stack_35->GetXaxis()->SetLabelSize(0.035);
   mc_stack_35->GetXaxis()->SetTitleSize(0.035);
   mc_stack_35->GetXaxis()->SetTitleFont(42);
   mc_stack_35->GetYaxis()->SetLabelFont(42);
   mc_stack_35->GetYaxis()->SetLabelSize(0.035);
   mc_stack_35->GetYaxis()->SetTitleSize(0.035);
   mc_stack_35->GetYaxis()->SetTitleOffset(0);
   mc_stack_35->GetYaxis()->SetTitleFont(42);
   mc_stack_35->GetZaxis()->SetLabelFont(42);
   mc_stack_35->GetZaxis()->SetLabelSize(0.035);
   mc_stack_35->GetZaxis()->SetTitleSize(0.035);
   mc_stack_35->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_35);
   
   
   TH1F *bjetenls_jec_26_down_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_26_down_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(3,104.0074);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(4,219.2826);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(5,278.8318);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(6,300.227);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(7,294.7505);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(8,260.9958);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(9,210.4113);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(10,156.9389);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(11,107.3415);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(12,67.12656);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(13,39.26605);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(14,21.68835);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(15,11.16549);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(16,5.178254);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(17,2.247161);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(18,0.8552423);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(19,0.3069481);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(20,0.0991172);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinContent(21,0.03788937);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(3,1.119639);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(4,1.490459);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(5,1.521329);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(6,1.430142);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(7,1.282738);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(8,1.093168);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(9,0.8890971);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(10,0.6957455);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(11,0.5208202);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(12,0.3731147);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(13,0.2581941);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(14,0.1737696);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(15,0.1128537);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(16,0.06966647);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(17,0.04158102);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(18,0.02316932);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(19,0.01261288);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(20,0.006505851);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetBinError(21,0.003511709);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetEntries(492911);
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_26_down_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_down_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_26_down_Diboson_stack_2 = new TH1F("bjetenls_jec_26_down_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(3,0.1916272);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(4,0.2711913);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(5,0.2144824);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(6,0.2344004);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(7,0.2265768);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(8,0.2097662);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(9,0.1260913);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(10,0.1238239);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(11,0.1016663);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(12,0.08626201);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(13,0.04075708);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(14,0.02067425);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(15,0.02561217);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(16,0.01122796);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(17,0.01090381);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(18,0.006564445);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(19,0.001957948);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(20,0.003094531);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinContent(21,0.001013883);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(3,0.04561934);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(4,0.05147409);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(5,0.04055913);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(6,0.0394631);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(7,0.03433604);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(8,0.03041341);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(9,0.02102505);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(10,0.01861484);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(11,0.01542951);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(12,0.01320693);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(13,0.008042037);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(14,0.005252308);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(15,0.005275931);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(16,0.003168926);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(17,0.002934567);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(18,0.001952618);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(19,0.0009823001);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(20,0.001103974);
   bjetenls_jec_26_down_Diboson_stack_2->SetBinError(21,0.0005764263);
   bjetenls_jec_26_down_Diboson_stack_2->SetEntries(529);
   bjetenls_jec_26_down_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_26_down_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_26_down_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_26_down_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_down_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_down_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_down_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_down_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_26_down_DY_stack_3 = new TH1F("bjetenls_jec_26_down_DY_stack_3","DY",20,3,7);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(3,0.6557269);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(4,0.3766043);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(5,0.6885296);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(6,0.574849);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(7,0.8791907);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(8,0.4038989);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(10,0.1313869);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(11,0.1515452);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(12,0.1744472);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(13,0.06380376);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(14,0.07670426);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(15,0.04693863);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(16,0.04361919);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(17,0.0006893562);
   bjetenls_jec_26_down_DY_stack_3->SetBinContent(18,0.03061281);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(3,0.6557269);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(4,0.3766043);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(5,0.4871845);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(6,0.4069898);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(7,0.4398626);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(8,0.2862636);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(10,0.1313869);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(11,0.1108651);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(12,0.1233844);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(13,0.06380376);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(14,0.07670427);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(15,0.04693863);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(16,0.04361919);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(17,0.0006893562);
   bjetenls_jec_26_down_DY_stack_3->SetBinError(18,0.03061281);
   bjetenls_jec_26_down_DY_stack_3->SetEntries(23);
   bjetenls_jec_26_down_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_26_down_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_26_down_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_26_down_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_down_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_down_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_down_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_down_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_26_down_W_stack_4 = new TH1F("bjetenls_jec_26_down_W_stack_4","W",20,3,7);
   bjetenls_jec_26_down_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_26_down_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_26_down_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_26_down_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_down_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_down_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_down_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_down_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_26_down_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_26_down_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(3,4.720536);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(4,9.002126);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(5,11.57525);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(6,11.92635);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(7,12.09372);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(8,10.61649);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(9,7.621919);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(10,6.097981);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(11,4.403268);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(12,2.794147);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(13,1.66901);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(14,0.9875529);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(15,0.5730686);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(16,0.2942024);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(17,0.1489966);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(18,0.06371789);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(19,0.03447146);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(20,0.01044226);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinContent(21,0.01083018);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(3,0.4308703);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(4,0.5391452);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(5,0.5612754);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(6,0.5147904);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(7,0.4682339);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(8,0.3983156);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(9,0.3046017);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(10,0.2479367);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(11,0.1906198);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(12,0.1376948);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(13,0.0962851);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(14,0.06621798);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(15,0.04626141);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(16,0.02972705);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(17,0.01938063);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(18,0.01119076);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(19,0.007651997);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(20,0.003642071);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetBinError(21,0.003456679);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetEntries(6258);
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_26_down_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_down_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_down_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_26_down_fx3069[21] = {
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
   Double_t Graph_from_bjetenls_jec_26_down_fy3069[21] = {
   0,
   0,
   94.5787,
   197.7325,
   255.3978,
   284.8129,
   280.6944,
   249.3398,
   201.4345,
   147.3217,
   100.2693,
   61.37383,
   36.00827,
   20.37886,
   10.1823,
   4.698135,
   2.030724,
   0.8186622,
   0.2755081,
   0.0843226,
   0};
   Double_t Graph_from_bjetenls_jec_26_down_felx3069[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_26_down_fely3069[21] = {
   0,
   0,
   9.708134,
   14.05014,
   15.98117,
   16.8764,
   16.75394,
   15.7905,
   14.19276,
   12.12408,
   9.996934,
   7.812896,
   5.972804,
   4.477046,
   3.137934,
   2.088691,
   1.303604,
   0.7156558,
   0.2746477,
   0.0843226,
   0};
   Double_t Graph_from_bjetenls_jec_26_down_fehx3069[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_26_down_fehy3069[21] = {
   1.841055,
   1.841055,
   10.75969,
   15.08578,
   15.98117,
   16.8764,
   16.75394,
   15.7905,
   14.19276,
   13.16538,
   11.047,
   8.876903,
   7.056374,
   5.588104,
   4.294809,
   3.318398,
   2.647224,
   2.228567,
   1.987354,
   1.888149,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_26_down_fx3069,Graph_from_bjetenls_jec_26_down_fy3069,Graph_from_bjetenls_jec_26_down_felx3069,Graph_from_bjetenls_jec_26_down_fehx3069,Graph_from_bjetenls_jec_26_down_fely3069,Graph_from_bjetenls_jec_26_down_fehy3069);
   grae->SetName("Graph_from_bjetenls_jec_26_down");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_26_down3069 = new TH1F("Graph_Graph_from_bjetenls_jec_26_down3069","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_26_down3069->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_26_down3069->SetMaximum(331.8582);
   Graph_Graph_from_bjetenls_jec_26_down3069->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_26_down3069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_26_down3069->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_down3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_26_down3069);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_26_down","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_26_down_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_26_down_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_26_down_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_26_down_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_26_down_Single top","Single top","f");

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
   
   TH1F *ratioframe__70 = new TH1F("ratioframe__70","t#bar{t}",20,3,7);
   ratioframe__70->SetMinimum(0.46);
   ratioframe__70->SetMaximum(1.54);
   ratioframe__70->SetEntries(499721);

   ci = TColor::GetColor("#cc0000");
   ratioframe__70->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__70->SetMarkerColor(ci);
   ratioframe__70->GetXaxis()->SetTitle("log(E)");
   ratioframe__70->GetXaxis()->SetLabelFont(42);
   ratioframe__70->GetXaxis()->SetLabelSize(0);
   ratioframe__70->GetXaxis()->SetTitleSize(0);
   ratioframe__70->GetXaxis()->SetTitleOffset(0);
   ratioframe__70->GetXaxis()->SetTitleFont(42);
   ratioframe__70->GetYaxis()->SetTitle("Data/MC");
   ratioframe__70->GetYaxis()->SetNoExponent();
   ratioframe__70->GetYaxis()->SetNdivisions(5);
   ratioframe__70->GetYaxis()->SetLabelFont(42);
   ratioframe__70->GetYaxis()->SetLabelSize(0.18);
   ratioframe__70->GetYaxis()->SetTitleSize(0.2);
   ratioframe__70->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__70->GetYaxis()->SetTitleFont(42);
   ratioframe__70->GetZaxis()->SetLabelFont(42);
   ratioframe__70->GetZaxis()->SetLabelSize(0.035);
   ratioframe__70->GetZaxis()->SetTitleSize(0.035);
   ratioframe__70->GetZaxis()->SetTitleFont(42);
   ratioframe__70->Draw("");
   
   Double_t Graph_from_ratio_fx3070[20] = {
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
   Double_t Graph_from_ratio_fy3070[20] = {
   0,
   0,
   0.8631393,
   0.8637151,
   0.8767217,
   0.910054,
   0.9114937,
   0.9159296,
   0.9233364,
   0.9021971,
   0.8952772,
   0.8745025,
   0.8774027,
   0.8948582,
   0.8620955,
   0.8499869,
   0.8434109,
   0.8562181,
   0.8023477,
   0.7485096};
   Double_t Graph_from_ratio_felx3070[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3070[20] = {
   0,
   0,
   0.01864122,
   0.01142977,
   0.009321648,
   0.008317787,
   0.007636275,
   0.007336475,
   0.007386484,
   0.007659754,
   0.008344612,
   0.009470183,
   0.01117837,
   0.01398308,
   0.01714122,
   0.02304797,
   0.03022295,
   0.05154858,
   0.06425302,
   0.09673838};
   Double_t Graph_from_ratio_fehx3070[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3070[20] = {
   0,
   0,
   0.01864122,
   0.01142977,
   0.009321648,
   0.008317787,
   0.007636275,
   0.007336475,
   0.007386484,
   0.007659754,
   0.008344612,
   0.009470183,
   0.01117837,
   0.01398308,
   0.01714122,
   0.02304797,
   0.03022295,
   0.05154858,
   0.06425302,
   0.09673838};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3070,Graph_from_ratio_fy3070,Graph_from_ratio_felx3070,Graph_from_ratio_fehx3070,Graph_from_ratio_fely3070,Graph_from_ratio_fehy3070);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3070 = new TH1F("Graph_Graph_from_ratio3070","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3070->SetMinimum(0);
   Graph_Graph_from_ratio3070->SetMaximum(1.023795);
   Graph_Graph_from_ratio3070->SetDirectory(0);
   Graph_Graph_from_ratio3070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3070->SetLineColor(ci);
   Graph_Graph_from_ratio3070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3070->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3070->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3070->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3070->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3070->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3070->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3070->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3070);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
