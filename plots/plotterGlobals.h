#ifndef PLOTTERGLOBALS_H
#define PLOTTERGLOBALS_H

#include <TString.h>
#include <TFile.h>
#include <TH1F.h>
#include <TDirectory.h>
#include <TString.h>
#include <TLegend.h>

TString inputDir_ ="./NTUPLES/CxTupleSamples";
TString outputDir_=getenv("WWWDIR");

TString lumisfile="VHbbResonance/data/lumis.txt";
//TString lumisfile13TeV="VHbbResonance/data/lumis_13TeV.txt";
//TString lumisfile13TeV="VHbbResonance/data/lumis_13TeV_periodAllYear_DetStatus-v62.txt";
//TString lumisfile13TeV="VHbbResonance/data/data15_13TeV.periodAllYear_DetStatus-v63-pro18-01_DQDefects-00-01-02_PHYS_StandardGRL_All_Good.csv";
//TString lumisfile13TeV="VHbbResonance/data/data15_13TeV.periodAllYear_DetStatus-v64-pro19_DQDefects-00-01-02_PHYS_StandardGRL_All_Good_Plusv63.csv";
//TString lumisfile13TeV="VHbbResonance/data/data15_13TeV.periodAllYear_DetStatus-v65-pro19-01_DQDefects-00-01-02_PHYS_StandardGRL_All_Good.csv";
//TString lumisfile13TeV="VHbbResonance/data/data15_13TeV.periodAllYear_DetStatus-v67-pro19-02_DQDefects-00-01-02_PHYS_StandardGRL_All_Good.csv";
//TString lumisfile13TeV="VHbbResonance/data/data15_13TeV.periodAllYear_DetStatus-v71-pro19-05_DQDefects-00-01-02_PHYS_StandardGRL_All_Good_25ns.csv";
//TString lumisfile13TeV="VHbbResonance/data/data15_13TeV.periodAllYear_DetStatus-v73-pro19-08_DQDefects-00-01-02_PHYS_StandardGRL_All_Good_25ns.csv";
TString lumisfile13TeV="VHbbResonance/data/data15_13TeV.periodAllYear_DetStatus-v73-pro19-08_DQDefects-00-01-02_PHYS_StandardGRL_All_Good_25ns_3200pb.csv";

TString crossectionsfile="VHbbResonance/data/crossections_8TeV.txt";

//TString crossectionsfile13TeV="VHbbResonance/data/crossections_13TeV.txt";
//TString crossectionsfile13TeV="FrameworkSub/data/XSections_13TeV.txt";
TString crossectionsfile13TeV="VHbbResonance/data/XSections_13TeV.txt";

TString puWeightMC15a="(eve_mc_puw[3])";
TString puWeight="(eve_mc_puw[7])";
//TString puWeight="1";//test no PRW


char atlasInternal8TeV[100]="ATLAS Internal,  #sqrt{s} = 8 TeV,  %.1f fb^{-1}";
//char atlasInternal13TeV[100]="ATLAS Internal,  #sqrt{s} = 13 TeV,  %.1f fb^{-1}";
char atlasInternal13TeV[100]="ATLAS internal, #sqrt{s}=13 TeV, %.2f fb^{-1}";


//position of legends
Float_t c1[4]={.6,.5,.9,.87};//X1,Y1,X2,Y2 : x1,y1 is bottom left , x2,y2 is top right
Float_t c2[4]={.6,.5,.9,.87};
Float_t c3[4]={.6,.5,.9,.87};
Float_t c4[4]={.6,.5,.9,.87};

///Colors
int colorZmm=kAzure;
int colorZee=kAzure;
int colorWmunu=kGreen;
int colorWenu=kGreen;
int colorTTbar=kOrange;
int colorTOP=kOrange;
int colorStop=kRed;
int colorVV=kOrange-4;
int colorVHSM=kGreen;


int colorZ=kAzure;
int colorZl=kAzure - 9;
int colorZc=kAzure - 4;
int colorZb=kAzure + 2;

int colorW=kGreen;
int colorWl=kGreen - 9;
int colorWc=kGreen - 6;
int colorWb=kGreen + 3;

int colorQCD=kPink + 1;

///Titles
TString titleZmm="Z#rightarrow#mu^{+}#mu^{-}";
TString titleZee="Z#rightarrowe^{+}e^{-}";
TString titleWmunu="W#rightarrow#mu#nu";
TString titleWenu="W#rightarrowe#nu";
TString titleTTbar="t#bar{t}";
TString titleTOP="top";
TString titleStop="single-top";
TString titleVV="Diboson";
TString titleVHSM="Zh(SM)";


TString titleZ="Z+jets";
TString titleZl="Z+l";
TString titleZc="Z+c";
TString titleZb="Z+b";

TString titleW="W+jets";
TString titleWl="W+l";
TString titleWc="W+c";
TString titleWb="W+b";

TString vhmassBlindSel="(vh_m[vh]<1000000)";
TString higgsmassBlindSel="(fatjet_m[vh_h[vh]]<75000||145000<fatjet_m[vh_h[vh]])";

//Signal samples
#define NMASS 25
long MassPoint[NMASS]={500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2200,2400,2600,2800,3000,3500,4000,4500,5000};
//#define NMASS 1
//long MassPoint[NMASS]={5000};


/////Higgs Signals 
//#define NMASSHIGG 19
//long MassPointHIGG[NMASSHIGG]={240,260,280,300,360,400,440,460,500,700,750,800,850,950,1000,1200,1500,1900,2000};
//#define NMASSHIGG 19
//long MassPointHIGG[NMASSHIGG]={200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
#define NMASSHIGG 1
long MassPointHIGG[NMASSHIGG]={500};

//kinematic variations
//std::vector<std::string> kinSysts={"EG_SCALE_ALL__1down","EG_SCALE_ALL__1up","EG_RESOLUTION_ALL__1down","EG_RESOLUTION_ALL__1up","MUONS_SCALE__1down","MUONS_SCALE__1up","MUONS_ID__1down","MUONS_ID__1up","MUONS_MS__1down","MUONS_MS__1up","JET_Hbb_CrossCalib__1down","JET_Hbb_Run1_mass__1down","JET_Hbb_Run1_pT__1down","FATJET_JER__1up","FATJET_JMR__1up","JET_Hbb_CrossCalib__1up","JET_Hbb_Run1_mass__1up","JET_Hbb_Run1_pT__1up"};
std::vector<std::string> kinSysts={"EG_SCALE_ALL__1down","EG_SCALE_ALL__1up","EG_RESOLUTION_ALL__1down","EG_RESOLUTION_ALL__1up","MUONS_SCALE__1down","MUONS_SCALE__1up","MUONS_ID__1down","MUONS_ID__1up","MUONS_MS__1down","MUONS_MS__1up","FATJET_JER__1up","FATJET_JMR__1up","JET_Rtrk_Baseline__1up","JET_Rtrk_Modelling__1up","JET_Rtrk_Tracking__1up","JET_Rtrk_Baseline__1down","JET_Rtrk_Modelling__1down","JET_Rtrk_Tracking__1down"};


//control plot names
std::vector<std::string> ctrlPlots={"metphi","met","mu","nvtx","vh_dR","vh_h_eta","vh_h_ltrkjet_btag","vh_h_ltrkjet_eta","vh_h_ltrkjet_mv2c20","vh_h_ltrkjet_pt","vh_h_m_blind","vh_h_m","vh_h_ntrkjetb","vh_h_ntrkjet","vh_h_pt","vh_m_blinded","vh_m","vh_pt","vh_v_dR","vh_v_l1_eta","vh_v_l1_pt","vh_v_l2_eta","vh_v_l2_pt","vh_v_m","vh_v_m_ttbar","vh_v_pt"};


TString getSelection(TString channel, TString region){

  TString TrigCut="(eve_isCleanEvent==1)*(eve_passTrig==1)*(eve_passTrigMatch==1)";
  TString MultiLepVeto="(eve_passVHMultiLepVeto==1)";
  TString HpTCut="(fatjet_pt[vh_h[vh]]>250000)";
  TString BVeto="(vh_naddtrkbjet==0)";

  ///////remove low mass Drell-Yan
  TString DYcut="";
  if(channel.CompareTo("ZHmmJ")==0)DYcut="(50000.<mm_m[vh_v[vh]])"; 
  if(channel.CompareTo("ZHeeJ")==0)DYcut="(50000.<ee_m[vh_v[vh]])"; 
  if(channel.CompareTo("ZHemJ")==0)DYcut="(10000.<em_m[vh_v[vh]])";

  ///////Z selection
  TString ZMassCut="";
  if(channel.CompareTo("ZHmmJ")==0)ZMassCut="(55000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<125000.)";
  if(channel.CompareTo("ZHeeJ")==0)ZMassCut="(70000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<110000.)";
  if(channel.CompareTo("ZHemJ")==0)ZMassCut="1";

  ////////Higgs selection
  TString HNTrkJetcut="(fatjet_ntrkjet[vh_h[vh]]>=1)";

  TString HMcut="(75000<fatjet_m_cor[vh_h[vh]]&&fatjet_m_cor[vh_h[vh]]<145000)";
  TString HMcutL="(fatjet_m_cor[vh_h[vh]]<75000)";
  TString HMcutH="(145000<fatjet_m_cor[vh_h[vh]])";
  TString HMcutSide="(fatjet_m_cor[vh_h[vh]]<75000||145000<fatjet_m_cor[vh_h[vh]])";

  //TString HMcut="(76000<fatjet_m_cor[vh_h[vh]]&&fatjet_m_cor[vh_h[vh]]<146000)";
  // TString HMcutL="(fatjet_m_cor[vh_h[vh]]<76000)";
  // TString HMcutH="(146000<fatjet_m_cor[vh_h[vh]])";
  // TString HMcutSide="(fatjet_m_cor[vh_h[vh]]<76000||146000<fatjet_m_cor[vh_h[vh]])";

  //TString HMcut="(fatjet_XbbL2b[vh_h[vh]]>=0&&fatjet_XbbL2bmH[vh_h[vh]]==0)";
  //TString HMcutL="(fatjet_XbbL2b[vh_h[vh]]>=0&&fatjet_XbbL2bmH[vh_h[vh]]==-1)";
  //TString HMcutH="(fatjet_XbbL2b[vh_h[vh]]>=0&&fatjet_XbbL2bmH[vh_h[vh]]==1)";
  //TString HMcutSide="(fatjet_XbbL2b[vh_h[vh]]>=0&&fatjet_XbbL2bmH[vh_h[vh]]!=0)";
  

  ///////////////////
  //2-btag
  ///////////////////
  //TString H2Bcut="(vh_nsigtrkbjet[vh]==2)";
  //TString H2Bcut="(fatjet_Htag2b[vh_h[vh]]>=2)";
  TString H2Bcut="(fatjet_ntrkjet[vh_h[vh]]>=2&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==1&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==1)";
  //TString H2Bcut="(fatjet_XbbL2b[vh_h[vh]]>=0&&fatjet_XbbnTag[vh_h[vh]]==2)";


  ////////////
  //1-btag
  ////////////
  TString H1Bcut="((fatjet_ntrkjet[vh_h[vh]]==1&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==1)||(fatjet_ntrkjet[vh_h[vh]]>=2&&((trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==1&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==0)||(trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==0&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==1))))";  //accept jets with only one track jet

  //TString H1Bcut="(fatjet_ntrkjet[vh_h[vh]]>=2&&((trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==1&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==0)||(trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==0&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==1)))";  //require 2 track jets (should match Xbb tagger below)

  //TString H1Bcut="(fatjet_XbbL2b[vh_h[vh]]>=0&&fatjet_XbbnTag[vh_h[vh]]==1)";  //Xbb tagger (requires 2 track jets)

  ////////////////
  //0-btag  
  ////////////////
  TString H0Bcut="((fatjet_ntrkjet[vh_h[vh]]==1&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==0)||(fatjet_ntrkjet[vh_h[vh]]>=2&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==0&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==0))";
  //TString H0Bcut="((fatjet_ntrkjet[vh_h[vh]]==1&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==0)||(fatjet_ntrkjet[vh_h[vh]]>=2&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==0&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==0))";
  //TString H0Bcut="(fatjet_ntrkjet[vh_h[vh]]>=2&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==0&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==0)";
  //TString H0Bcut="(fatjet_XbbL2b[vh_h[vh]]>=0&&fatjet_XbbnTag[vh_h[vh]]==0)";



  ///////////////////
  //Base selection
  ///////////////////
  TString BaseCut = TrigCut+"*"+MultiLepVeto+"*"+DYcut+"*"+ZMassCut+"*"+HpTCut+"*"+HNTrkJetcut; 

  
  ///////no tagging
  if(region.CompareTo("presel")==0)
    return BaseCut;//+"*"+HMcut
  
  //////0b tag signal region
  if(region.CompareTo("0btag")==0)
    return BaseCut+"*"+HMcut+"*"+H0Bcut+"*"+BVeto;

  //////1b tag signal region
  if(region.CompareTo("1btag")==0)
    return BaseCut+"*"+HMcut+"*"+H1Bcut+"*"+BVeto;

  //////2b tag signal region
  if(region.CompareTo("2btag")==0)
    return BaseCut+"*"+HMcut+"*"+H2Bcut+"*"+BVeto;

  //////higgs mass sidebands for each signal region
  if(region.CompareTo("preselhmass")==0)
    return BaseCut;
  if(region.CompareTo("preselhmassL")==0)
    return BaseCut+"*"+HMcutL;
  if(region.CompareTo("preselhmassH")==0)
    return BaseCut+"*"+HMcutH;
  
  if(region.CompareTo("0btaghmass")==0)
    return BaseCut+"*"+H0Bcut+"*"+BVeto;
  if(region.CompareTo("0btaghmassL")==0)
    return BaseCut+"*"+HMcutL+"*"+H0Bcut+"*"+BVeto;
  if(region.CompareTo("0btaghmassH")==0)
    return BaseCut+"*"+HMcutH+"*"+H0Bcut+"*"+BVeto;

  if(region.CompareTo("1btaghmass")==0)
    return BaseCut+"*"+H1Bcut+"*"+BVeto;
  if(region.CompareTo("1btaghmassL")==0)
    return BaseCut+"*"+HMcutL+"*"+H1Bcut+"*"+BVeto;
  if(region.CompareTo("1btaghmassH")==0)
    return BaseCut+"*"+HMcutH+"*"+H1Bcut+"*"+BVeto;

  if(region.CompareTo("2btaghmass")==0)
    return BaseCut+"*"+H2Bcut+"*"+BVeto;
  if(region.CompareTo("2btaghmassL")==0)
    return BaseCut+"*"+HMcutL+"*"+H2Bcut+"*"+BVeto;
  if(region.CompareTo("2btaghmassH")==0)
    return BaseCut+"*"+HMcutH+"*"+H2Bcut+"*"+BVeto;


  cout<<"getSelection: Failed to find region:"<<channel<<" , "<<region<<endl;
  return "0";
}





#endif


