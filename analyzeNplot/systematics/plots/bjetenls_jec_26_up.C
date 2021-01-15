void bjetenls_jec_26_up()
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
   p1->Range(2.421687,-56.05964,7.240964,411.9373);
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
   
   TH1F *frame__89 = new TH1F("frame__89","t#bar{t}",20,3,7);
   frame__89->SetMinimum(0.1);
   frame__89->SetMaximum(407.2574);
   frame__89->SetEntries(509693);
   frame__89->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__89->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__89->SetMarkerColor(ci);
   frame__89->GetXaxis()->SetTitle("log(E)");
   frame__89->GetXaxis()->SetLabelFont(42);
   frame__89->GetXaxis()->SetLabelSize(0.035);
   frame__89->GetXaxis()->SetTitleSize(0.035);
   frame__89->GetXaxis()->SetTitleFont(42);
   frame__89->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__89->GetYaxis()->SetNoExponent();
   frame__89->GetYaxis()->SetLabelFont(42);
   frame__89->GetYaxis()->SetTitleSize(0.045);
   frame__89->GetYaxis()->SetTitleOffset(1.3);
   frame__89->GetYaxis()->SetTitleFont(42);
   frame__89->GetZaxis()->SetLabelFont(42);
   frame__89->GetZaxis()->SetLabelSize(0.035);
   frame__89->GetZaxis()->SetTitleSize(0.035);
   frame__89->GetZaxis()->SetTitleFont(42);
   frame__89->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_45 = new TH1F("mc_stack_45","mc",20,3,7);
   mc_stack_45->SetMinimum(-2.695469e-08);
   mc_stack_45->SetMaximum(328.9386);
   mc_stack_45->SetDirectory(0);
   mc_stack_45->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_45->SetLineColor(ci);
   mc_stack_45->GetXaxis()->SetLabelFont(42);
   mc_stack_45->GetXaxis()->SetLabelSize(0.035);
   mc_stack_45->GetXaxis()->SetTitleSize(0.035);
   mc_stack_45->GetXaxis()->SetTitleFont(42);
   mc_stack_45->GetYaxis()->SetLabelFont(42);
   mc_stack_45->GetYaxis()->SetLabelSize(0.035);
   mc_stack_45->GetYaxis()->SetTitleSize(0.035);
   mc_stack_45->GetYaxis()->SetTitleOffset(0);
   mc_stack_45->GetYaxis()->SetTitleFont(42);
   mc_stack_45->GetZaxis()->SetLabelFont(42);
   mc_stack_45->GetZaxis()->SetLabelSize(0.035);
   mc_stack_45->GetZaxis()->SetTitleSize(0.035);
   mc_stack_45->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_45);
   
   
   TH1F *bjetenls_jec_26_up_t#bar{t}_stack_1 = new TH1F("bjetenls_jec_26_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(3,100.1511);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(4,215.6813);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(5,279.2296);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(6,300.1723);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(7,298.4055);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(8,265.436);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(9,216.7271);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(10,160.6719);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(11,111.1733);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(12,69.50134);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(13,40.86403);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(14,22.55034);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(15,11.62407);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(16,5.420965);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(17,2.373453);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(18,0.9022161);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(19,0.3222188);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(20,0.1035525);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinContent(21,0.03885784);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(3,1.098381);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(4,1.478255);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(5,1.522666);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(6,1.429776);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(7,1.290573);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(8,1.10248);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(9,0.9023448);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(10,0.7038185);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(11,0.5300538);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(12,0.3796669);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(13,0.263352);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(14,0.177073);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(15,0.1151653);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(16,0.07124006);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(17,0.04274774);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(18,0.02380656);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(19,0.01291505);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(20,0.006625712);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetBinError(21,0.00355823);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetEntries(502670);
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_jec_26_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_jec_26_up_Diboson_stack_2 = new TH1F("bjetenls_jec_26_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(3,0.1847159);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(4,0.2632334);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(5,0.2458107);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(6,0.2637193);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(7,0.225605);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(8,0.2255708);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(9,0.1394685);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(10,0.1159017);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(11,0.1157729);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(12,0.08066557);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(13,0.04953422);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(14,0.01863686);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(15,0.02844756);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(16,0.01269577);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(17,0.0115694);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(18,0.006505435);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(19,0.001948384);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(20,0.003075225);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinContent(21,0.001010951);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(3,0.04501305);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(4,0.05045363);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(5,0.04402566);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(6,0.04136505);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(7,0.03420609);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(8,0.03175716);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(9,0.02216228);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(10,0.01799652);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(11,0.01644426);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(12,0.01274004);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(13,0.009013867);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(14,0.005072983);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(15,0.005612799);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(16,0.003336859);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(17,0.003007033);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(18,0.001935012);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(19,0.0009774947);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(20,0.001096672);
   bjetenls_jec_26_up_Diboson_stack_2->SetBinError(21,0.00057477);
   bjetenls_jec_26_up_Diboson_stack_2->SetEntries(553);
   bjetenls_jec_26_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_26_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_jec_26_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_jec_26_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_jec_26_up_DY_stack_3 = new TH1F("bjetenls_jec_26_up_DY_stack_3","DY",20,3,7);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(3,0.6351772);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(4,0.3667935);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(5,0.6677098);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(6,0.8665479);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(7,0.8607789);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(8,0.3964538);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(10,0.1291644);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(11,0.1496426);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(12,0.172458);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(13,0.06272754);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(14,0.07614407);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(15,0.04631615);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(16,0.04307307);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(17,0.000684581);
   bjetenls_jec_26_up_DY_stack_3->SetBinContent(18,0.03027193);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(3,0.6351772);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(4,0.3667935);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(5,0.472451);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(6,0.5012115);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(7,0.4306737);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(8,0.2809837);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(10,0.1291644);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(11,0.1094859);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(12,0.1219818);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(13,0.06272754);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(14,0.07614407);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(15,0.04631615);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(16,0.04307307);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(17,0.000684581);
   bjetenls_jec_26_up_DY_stack_3->SetBinError(18,0.03027193);
   bjetenls_jec_26_up_DY_stack_3->SetEntries(24);
   bjetenls_jec_26_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_26_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_jec_26_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_jec_26_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_jec_26_up_W_stack_4 = new TH1F("bjetenls_jec_26_up_W_stack_4","W",20,3,7);
   bjetenls_jec_26_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_26_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_jec_26_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_jec_26_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_up_W_stack_4,"hist");
   
   TH1F *bjetenls_jec_26_up_SinglesPtop_stack_5 = new TH1F("bjetenls_jec_26_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(3,4.449098);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(4,9.033402);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(5,12.28085);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(6,11.97231);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(7,12.23829);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(8,11.15924);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(9,7.752347);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(10,6.474729);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(11,4.504162);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(12,2.962599);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(13,1.714791);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(14,0.9979828);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(15,0.6171783);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(16,0.2966684);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(17,0.1508434);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(18,0.06356902);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(19,0.03604509);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(20,0.01037879);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinContent(21,0.01077091);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(3,0.4156511);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(4,0.5417903);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(5,0.576922);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(6,0.5149679);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(7,0.4719658);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(8,0.4084806);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(9,0.3069186);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(10,0.2553995);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(11,0.19259);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(12,0.1417413);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(13,0.09767716);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(14,0.0666769);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(15,0.04786654);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(16,0.02983911);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(17,0.01945746);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(18,0.01116548);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(19,0.007812271);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(20,0.003619038);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetBinError(21,0.003437587);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetEntries(6446);
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_jec_26_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_jec_26_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_jec_26_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_jec_26_up_fx3089[21] = {
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
   Double_t Graph_from_bjetenls_jec_26_up_fy3089[21] = {
   0,
   0,
   92.22303,
   196.358,
   255.9592,
   284.2673,
   282.9099,
   254.5866,
   204.5047,
   151.2118,
   102.3658,
   63.1038,
   36.98186,
   20.9569,
   10.52717,
   4.863129,
   2.090867,
   0.8571035,
   0.2807505,
   0.08854319,
   0};
   Double_t Graph_from_bjetenls_jec_26_up_felx3089[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_26_up_fely3089[21] = {
   0,
   0,
   9.586036,
   14.00114,
   15.99873,
   16.86023,
   16.81992,
   15.95577,
   14.30051,
   12.28347,
   10.10125,
   7.922841,
   6.053762,
   4.541148,
   3.192416,
   2.127809,
   1.326358,
   0.7404361,
   0.2797723,
   0.08854319,
   0};
   Double_t Graph_from_bjetenls_jec_26_up_fehx3089[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_jec_26_up_fehy3089[21] = {
   1.841055,
   1.841055,
   10.63824,
   15.03691,
   15.99873,
   16.86023,
   16.81992,
   15.95577,
   14.30051,
   13.32423,
   11.1508,
   8.985964,
   7.136225,
   5.650667,
   4.346719,
   3.353672,
   2.665309,
   2.243945,
   1.989945,
   1.890448,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_jec_26_up_fx3089,Graph_from_bjetenls_jec_26_up_fy3089,Graph_from_bjetenls_jec_26_up_felx3089,Graph_from_bjetenls_jec_26_up_fehx3089,Graph_from_bjetenls_jec_26_up_fely3089,Graph_from_bjetenls_jec_26_up_fehy3089);
   grae->SetName("Graph_from_bjetenls_jec_26_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_jec_26_up3089 = new TH1F("Graph_Graph_from_bjetenls_jec_26_up3089","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_jec_26_up3089->SetMinimum(0);
   Graph_Graph_from_bjetenls_jec_26_up3089->SetMaximum(331.2403);
   Graph_Graph_from_bjetenls_jec_26_up3089->SetDirectory(0);
   Graph_Graph_from_bjetenls_jec_26_up3089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_jec_26_up3089->SetLineColor(ci);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_jec_26_up3089->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_jec_26_up3089);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_jec_26_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_jec_26_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_jec_26_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_jec_26_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_jec_26_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_jec_26_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__90 = new TH1F("ratioframe__90","t#bar{t}",20,3,7);
   ratioframe__90->SetMinimum(0.46);
   ratioframe__90->SetMaximum(1.54);
   ratioframe__90->SetEntries(509693);

   ci = TColor::GetColor("#cc0000");
   ratioframe__90->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__90->SetMarkerColor(ci);
   ratioframe__90->GetXaxis()->SetTitle("log(E)");
   ratioframe__90->GetXaxis()->SetLabelFont(42);
   ratioframe__90->GetXaxis()->SetLabelSize(0);
   ratioframe__90->GetXaxis()->SetTitleSize(0);
   ratioframe__90->GetXaxis()->SetTitleOffset(0);
   ratioframe__90->GetXaxis()->SetTitleFont(42);
   ratioframe__90->GetYaxis()->SetTitle("Data/MC");
   ratioframe__90->GetYaxis()->SetNoExponent();
   ratioframe__90->GetYaxis()->SetNdivisions(5);
   ratioframe__90->GetYaxis()->SetLabelFont(42);
   ratioframe__90->GetYaxis()->SetLabelSize(0.18);
   ratioframe__90->GetYaxis()->SetTitleSize(0.2);
   ratioframe__90->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__90->GetYaxis()->SetTitleFont(42);
   ratioframe__90->GetZaxis()->SetLabelFont(42);
   ratioframe__90->GetZaxis()->SetLabelSize(0.035);
   ratioframe__90->GetZaxis()->SetTitleSize(0.035);
   ratioframe__90->GetZaxis()->SetTitleFont(42);
   ratioframe__90->Draw("");
   
   Double_t Graph_from_ratio_fx3090[20] = {
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
   Double_t Graph_from_ratio_fy3090[20] = {
   0,
   0,
   0.8748145,
   0.8713672,
   0.8753018,
   0.9074054,
   0.9075472,
   0.9183649,
   0.9104519,
   0.9033412,
   0.8828978,
   0.8677991,
   0.8662667,
   0.8863856,
   0.8547555,
   0.8423333,
   0.8242953,
   0.8549128,
   0.7794027,
   0.7567375};
   Double_t Graph_from_ratio_felx3090[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3090[20] = {
   0,
   0,
   0.01915552,
   0.01158886,
   0.00929187,
   0.008338323,
   0.007563564,
   0.007282047,
   0.007212579,
   0.007571914,
   0.008123674,
   0.009253153,
   0.01086164,
   0.01361588,
   0.01667479,
   0.02233854,
   0.02899773,
   0.04978499,
   0.0615704,
   0.09545169};
   Double_t Graph_from_ratio_fehx3090[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3090[20] = {
   0,
   0,
   0.01915552,
   0.01158886,
   0.00929187,
   0.008338323,
   0.007563564,
   0.007282047,
   0.007212579,
   0.007571914,
   0.008123674,
   0.009253153,
   0.01086164,
   0.01361588,
   0.01667479,
   0.02233854,
   0.02899773,
   0.04978499,
   0.0615704,
   0.09545169};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3090,Graph_from_ratio_fy3090,Graph_from_ratio_felx3090,Graph_from_ratio_fehx3090,Graph_from_ratio_fely3090,Graph_from_ratio_fehy3090);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3090 = new TH1F("Graph_Graph_from_ratio3090","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3090->SetMinimum(0);
   Graph_Graph_from_ratio3090->SetMaximum(1.018212);
   Graph_Graph_from_ratio3090->SetDirectory(0);
   Graph_Graph_from_ratio3090->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3090->SetLineColor(ci);
   Graph_Graph_from_ratio3090->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3090->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3090->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3090->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3090->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3090->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3090->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3090->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3090->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3090->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3090->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3090->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3090->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3090);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
