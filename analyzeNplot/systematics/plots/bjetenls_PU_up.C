void bjetenls_PU_up()
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
   p1->Range(2.421687,-56.83622,7.240964,417.6323);
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
   
   TH1F *frame__91 = new TH1F("frame__91","t#bar{t}",20,3,7);
   frame__91->SetMinimum(0.1);
   frame__91->SetMaximum(412.8876);
   frame__91->SetEntries(504712);
   frame__91->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__91->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__91->SetMarkerColor(ci);
   frame__91->GetXaxis()->SetTitle("log(E)");
   frame__91->GetXaxis()->SetLabelFont(42);
   frame__91->GetXaxis()->SetLabelSize(0.035);
   frame__91->GetXaxis()->SetTitleSize(0.035);
   frame__91->GetXaxis()->SetTitleFont(42);
   frame__91->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   frame__91->GetYaxis()->SetNoExponent();
   frame__91->GetYaxis()->SetLabelFont(42);
   frame__91->GetYaxis()->SetTitleSize(0.045);
   frame__91->GetYaxis()->SetTitleOffset(1.3);
   frame__91->GetYaxis()->SetTitleFont(42);
   frame__91->GetZaxis()->SetLabelFont(42);
   frame__91->GetZaxis()->SetLabelSize(0.035);
   frame__91->GetZaxis()->SetTitleSize(0.035);
   frame__91->GetZaxis()->SetTitleFont(42);
   frame__91->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_46 = new TH1F("mc_stack_46","mc",20,3,7);
   mc_stack_46->SetMinimum(-3.216715e-08);
   mc_stack_46->SetMaximum(333.4862);
   mc_stack_46->SetDirectory(0);
   mc_stack_46->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_46->SetLineColor(ci);
   mc_stack_46->GetXaxis()->SetLabelFont(42);
   mc_stack_46->GetXaxis()->SetLabelSize(0.035);
   mc_stack_46->GetXaxis()->SetTitleSize(0.035);
   mc_stack_46->GetXaxis()->SetTitleFont(42);
   mc_stack_46->GetYaxis()->SetLabelFont(42);
   mc_stack_46->GetYaxis()->SetLabelSize(0.035);
   mc_stack_46->GetYaxis()->SetTitleSize(0.035);
   mc_stack_46->GetYaxis()->SetTitleOffset(0);
   mc_stack_46->GetYaxis()->SetTitleFont(42);
   mc_stack_46->GetZaxis()->SetLabelFont(42);
   mc_stack_46->GetZaxis()->SetLabelSize(0.035);
   mc_stack_46->GetZaxis()->SetTitleSize(0.035);
   mc_stack_46->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_46);
   
   
   TH1F *bjetenls_PU_up_t#bar{t}_stack_1 = new TH1F("bjetenls_PU_up_t#bar{t}_stack_1","t#bar{t}",20,3,7);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(3,102.7661);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(4,220.2649);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(5,281.6339);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(6,304.157);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(7,299.8869);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(8,266.5856);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(9,215.8424);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(10,160.6426);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(11,110.4202);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(12,69.21775);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(13,40.40545);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(14,22.37636);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(15,11.51727);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(16,5.356073);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(17,2.35543);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(18,0.8957852);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(19,0.3213264);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(20,0.1063727);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinContent(21,0.04020988);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(3,1.125163);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(4,1.511149);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(5,1.546547);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(6,1.456706);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(7,1.308904);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(8,1.11739);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(9,0.9106617);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(10,0.7116574);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(11,0.5343311);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(12,0.3833562);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(13,0.264711);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(14,0.1784826);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(15,0.1159131);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(16,0.07160095);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(17,0.04320563);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(18,0.02402753);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(19,0.01309599);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(20,0.006834438);
   bjetenls_PU_up_t#bar{t}_stack_1->SetBinError(21,0.003710023);
   bjetenls_PU_up_t#bar{t}_stack_1->SetEntries(497795);
   bjetenls_PU_up_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjetenls_PU_up_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjetenls_PU_up_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjetenls_PU_up_t#bar{t}_stack_1->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_up_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_up_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_up_t#bar{t}_stack_1->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_up_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_up_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_up_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_up_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_up_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_up_t#bar{t}_stack_1,"hist");
   
   TH1F *bjetenls_PU_up_Diboson_stack_2 = new TH1F("bjetenls_PU_up_Diboson_stack_2","Diboson",20,3,7);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(3,0.1657947);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(4,0.2793908);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(5,0.2433168);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(6,0.2572065);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(7,0.2289431);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(8,0.2215538);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(9,0.1357756);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(10,0.1209951);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(11,0.1117077);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(12,0.08623459);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(13,0.04948714);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(14,0.02140561);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(15,0.0258112);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(16,0.01309033);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(17,0.01098118);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(18,0.00700299);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(19,0.001882856);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(20,0.003442914);
   bjetenls_PU_up_Diboson_stack_2->SetBinContent(21,0.001086553);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(3,0.0427341);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(4,0.05415359);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(5,0.04373851);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(6,0.04111441);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(7,0.03517862);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(8,0.0320454);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(9,0.02165014);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(10,0.0185656);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(11,0.01658808);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(12,0.01353448);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(13,0.009203049);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(14,0.005415717);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(15,0.005386049);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(16,0.003433185);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(17,0.002997432);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(18,0.002053909);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(19,0.0009530767);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(20,0.001200816);
   bjetenls_PU_up_Diboson_stack_2->SetBinError(21,0.0006025363);
   bjetenls_PU_up_Diboson_stack_2->SetEntries(540);
   bjetenls_PU_up_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjetenls_PU_up_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjetenls_PU_up_Diboson_stack_2->SetMarkerColor(ci);
   bjetenls_PU_up_Diboson_stack_2->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_up_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_up_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_up_Diboson_stack_2->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_up_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_up_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_up_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_up_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_up_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_up_Diboson_stack_2,"hist");
   
   TH1F *bjetenls_PU_up_DY_stack_3 = new TH1F("bjetenls_PU_up_DY_stack_3","DY",20,3,7);
   bjetenls_PU_up_DY_stack_3->SetBinContent(3,0.7257391);
   bjetenls_PU_up_DY_stack_3->SetBinContent(4,0.2992848);
   bjetenls_PU_up_DY_stack_3->SetBinContent(5,0.6993116);
   bjetenls_PU_up_DY_stack_3->SetBinContent(6,0.919067);
   bjetenls_PU_up_DY_stack_3->SetBinContent(7,0.9413387);
   bjetenls_PU_up_DY_stack_3->SetBinContent(8,0.3921833);
   bjetenls_PU_up_DY_stack_3->SetBinContent(10,0.1206688);
   bjetenls_PU_up_DY_stack_3->SetBinContent(11,0.1731731);
   bjetenls_PU_up_DY_stack_3->SetBinContent(12,0.1527979);
   bjetenls_PU_up_DY_stack_3->SetBinContent(13,0.06030576);
   bjetenls_PU_up_DY_stack_3->SetBinContent(14,0.08397503);
   bjetenls_PU_up_DY_stack_3->SetBinContent(15,0.04810206);
   bjetenls_PU_up_DY_stack_3->SetBinContent(16,0.04321526);
   bjetenls_PU_up_DY_stack_3->SetBinContent(17,0.002378076);
   bjetenls_PU_up_DY_stack_3->SetBinContent(18,0.03344953);
   bjetenls_PU_up_DY_stack_3->SetBinError(3,0.7257392);
   bjetenls_PU_up_DY_stack_3->SetBinError(4,0.2992848);
   bjetenls_PU_up_DY_stack_3->SetBinError(5,0.5036865);
   bjetenls_PU_up_DY_stack_3->SetBinError(6,0.5355809);
   bjetenls_PU_up_DY_stack_3->SetBinError(7,0.4742957);
   bjetenls_PU_up_DY_stack_3->SetBinError(8,0.2785289);
   bjetenls_PU_up_DY_stack_3->SetBinError(10,0.1206688);
   bjetenls_PU_up_DY_stack_3->SetBinError(11,0.1225489);
   bjetenls_PU_up_DY_stack_3->SetBinError(12,0.108077);
   bjetenls_PU_up_DY_stack_3->SetBinError(13,0.06030576);
   bjetenls_PU_up_DY_stack_3->SetBinError(14,0.08397503);
   bjetenls_PU_up_DY_stack_3->SetBinError(15,0.04810206);
   bjetenls_PU_up_DY_stack_3->SetBinError(16,0.04321526);
   bjetenls_PU_up_DY_stack_3->SetBinError(17,0.002378076);
   bjetenls_PU_up_DY_stack_3->SetBinError(18,0.03344953);
   bjetenls_PU_up_DY_stack_3->SetEntries(24);
   bjetenls_PU_up_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjetenls_PU_up_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjetenls_PU_up_DY_stack_3->SetMarkerColor(ci);
   bjetenls_PU_up_DY_stack_3->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_up_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_up_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_up_DY_stack_3->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_up_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_up_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_up_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_up_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_up_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_up_DY_stack_3,"hist");
   
   TH1F *bjetenls_PU_up_W_stack_4 = new TH1F("bjetenls_PU_up_W_stack_4","W",20,3,7);
   bjetenls_PU_up_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjetenls_PU_up_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjetenls_PU_up_W_stack_4->SetMarkerColor(ci);
   bjetenls_PU_up_W_stack_4->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_up_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_up_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_up_W_stack_4->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_up_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_up_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_up_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_up_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_up_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_up_W_stack_4,"hist");
   
   TH1F *bjetenls_PU_up_SinglesPtop_stack_5 = new TH1F("bjetenls_PU_up_SinglesPtop_stack_5","Single top",20,3,7);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(3,4.622301);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(4,8.937349);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(5,12.33883);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(6,12.27258);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(7,12.14203);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(8,11.03084);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(9,7.926349);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(10,6.370809);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(11,4.43792);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(12,3.005215);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(13,1.733134);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(14,0.9905227);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(15,0.5913143);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(16,0.3065829);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(17,0.156999);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(18,0.06341751);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(19,0.03355835);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(20,0.01099146);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinContent(21,0.01150353);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(3,0.4316297);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(4,0.5436734);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(5,0.5876423);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(6,0.5293414);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(7,0.4741965);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(8,0.4116724);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(9,0.3143263);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(10,0.2561824);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(11,0.1937517);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(12,0.1460394);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(13,0.09952285);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(14,0.06662587);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(15,0.04755852);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(16,0.03073144);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(17,0.02031408);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(18,0.01103383);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(19,0.007486285);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(20,0.003781331);
   bjetenls_PU_up_SinglesPtop_stack_5->SetBinError(21,0.003720865);
   bjetenls_PU_up_SinglesPtop_stack_5->SetEntries(6353);
   bjetenls_PU_up_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjetenls_PU_up_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjetenls_PU_up_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjetenls_PU_up_SinglesPtop_stack_5->GetXaxis()->SetTitle("log(E)");
   bjetenls_PU_up_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjetenls_PU_up_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjetenls_PU_up_SinglesPtop_stack_5->GetYaxis()->SetTitle(" 1/E dN_{b jets}/dlog(E)");
   bjetenls_PU_up_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjetenls_PU_up_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjetenls_PU_up_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjetenls_PU_up_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjetenls_PU_up_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjetenls_PU_up_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjetenls_PU_up_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjetenls_PU_up_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjetenls_PU_up_fx3091[21] = {
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
   Double_t Graph_from_bjetenls_PU_up_fy3091[21] = {
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
   Double_t Graph_from_bjetenls_PU_up_felx3091[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_PU_up_fely3091[21] = {
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
   Double_t Graph_from_bjetenls_PU_up_fehx3091[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjetenls_PU_up_fehy3091[21] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjetenls_PU_up_fx3091,Graph_from_bjetenls_PU_up_fy3091,Graph_from_bjetenls_PU_up_felx3091,Graph_from_bjetenls_PU_up_fehx3091,Graph_from_bjetenls_PU_up_fely3091,Graph_from_bjetenls_PU_up_fehy3091);
   grae->SetName("Graph_from_bjetenls_PU_up");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjetenls_PU_up3091 = new TH1F("Graph_Graph_from_bjetenls_PU_up3091","Data",100,0,7.7);
   Graph_Graph_from_bjetenls_PU_up3091->SetMinimum(0);
   Graph_Graph_from_bjetenls_PU_up3091->SetMaximum(331.507);
   Graph_Graph_from_bjetenls_PU_up3091->SetDirectory(0);
   Graph_Graph_from_bjetenls_PU_up3091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjetenls_PU_up3091->SetLineColor(ci);
   Graph_Graph_from_bjetenls_PU_up3091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_PU_up3091->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_PU_up3091->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_PU_up3091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_PU_up3091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_PU_up3091->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_PU_up3091->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_PU_up3091->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjetenls_PU_up3091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjetenls_PU_up3091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjetenls_PU_up3091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjetenls_PU_up3091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjetenls_PU_up3091->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjetenls_PU_up3091);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjetenls_PU_up","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjetenls_PU_up_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjetenls_PU_up_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjetenls_PU_up_DY","DY","f");

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
   entry=leg->AddEntry("bjetenls_PU_up_W","W","f");

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
   entry=leg->AddEntry("bjetenls_PU_up_Single top","Single top","f");

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
   
   TH1F *ratioframe__92 = new TH1F("ratioframe__92","t#bar{t}",20,3,7);
   ratioframe__92->SetMinimum(0.46);
   ratioframe__92->SetMaximum(1.54);
   ratioframe__92->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__92->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__92->SetMarkerColor(ci);
   ratioframe__92->GetXaxis()->SetTitle("log(E)");
   ratioframe__92->GetXaxis()->SetLabelFont(42);
   ratioframe__92->GetXaxis()->SetLabelSize(0);
   ratioframe__92->GetXaxis()->SetTitleSize(0);
   ratioframe__92->GetXaxis()->SetTitleOffset(0);
   ratioframe__92->GetXaxis()->SetTitleFont(42);
   ratioframe__92->GetYaxis()->SetTitle("Data/MC");
   ratioframe__92->GetYaxis()->SetNoExponent();
   ratioframe__92->GetYaxis()->SetNdivisions(5);
   ratioframe__92->GetYaxis()->SetLabelFont(42);
   ratioframe__92->GetYaxis()->SetLabelSize(0.18);
   ratioframe__92->GetYaxis()->SetTitleSize(0.2);
   ratioframe__92->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__92->GetYaxis()->SetTitleFont(42);
   ratioframe__92->GetZaxis()->SetLabelFont(42);
   ratioframe__92->GetZaxis()->SetLabelSize(0.035);
   ratioframe__92->GetZaxis()->SetTitleSize(0.035);
   ratioframe__92->GetZaxis()->SetTitleFont(42);
   ratioframe__92->Draw("");
   
   Double_t Graph_from_ratio_fx3092[20] = {
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
   Double_t Graph_from_ratio_fy3092[20] = {
   0,
   0,
   0.8569868,
   0.8614427,
   0.8654779,
   0.8957731,
   0.9003647,
   0.9060611,
   0.9053589,
   0.893697,
   0.8777369,
   0.8593237,
   0.8648376,
   0.8757597,
   0.8535453,
   0.8332909,
   0.8214248,
   0.8332276,
   0.7905121,
   0.7146471};
   Double_t Graph_from_ratio_felx3092[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3092[20] = {
   0,
   0,
   0.01888697,
   0.01139348,
   0.00922827,
   0.00825719,
   0.007549969,
   0.007226347,
   0.007223455,
   0.007541238,
   0.008157874,
   0.009222184,
   0.01093848,
   0.01366314,
   0.01682767,
   0.02237868,
   0.0291587,
   0.05043358,
   0.06250939,
   0.09100409};
   Double_t Graph_from_ratio_fehx3092[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3092[20] = {
   0,
   0,
   0.01888697,
   0.01139348,
   0.00922827,
   0.00825719,
   0.007549969,
   0.007226347,
   0.007223455,
   0.007541238,
   0.008157874,
   0.009222184,
   0.01093848,
   0.01366314,
   0.01682767,
   0.02237868,
   0.0291587,
   0.05043358,
   0.06250939,
   0.09100409};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3092,Graph_from_ratio_fy3092,Graph_from_ratio_felx3092,Graph_from_ratio_fehx3092,Graph_from_ratio_fely3092,Graph_from_ratio_fehy3092);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3092 = new TH1F("Graph_Graph_from_ratio3092","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3092->SetMinimum(0);
   Graph_Graph_from_ratio3092->SetMaximum(1.004616);
   Graph_Graph_from_ratio3092->SetDirectory(0);
   Graph_Graph_from_ratio3092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3092->SetLineColor(ci);
   Graph_Graph_from_ratio3092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3092->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3092->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3092->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3092->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3092->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3092->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3092->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3092->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3092);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
