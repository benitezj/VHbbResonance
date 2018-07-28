void Load(){
  gROOT->ProcessLine(".x ./VHbbResonance/plots/rootlogon.C");
  gSystem->Load("libVHbbResonance.so");  
}

