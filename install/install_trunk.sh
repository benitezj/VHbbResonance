# setup ATLAS environment
source $ATLAS_LOCAL_ROOT_BASE/user/atlasLocalSetup.sh
 
# checkout setup.sh
svn co svn+ssh://svn.cern.ch/reps/atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkSub/trunk FrameworkSub

# setup RootCore and checkout packages
source FrameworkSub/bootstrap/setup-trunk.sh

##remove packages not needed for VH resonance analysis
#rm -rf FrameworkExe  
rm -rf CxAODReader  
rm -rf FrameworkSub
rm -rf TupleMaker
rm -rf TupleReader


###For rho computation
#already in release AnalysisBase/2.0.27
#xAODEventShape-00-00-04
#EventShapeInterface-00-00-08
#rc checkout_pkg atlasoff/Reconstruction/EventShapes/EventShapeTools/tags/EventShapeTools-00-01-09

####Check out VH Resonance specific packages
svn co $MYSVN/CxAODMaker_VHbbResonance/trunk CxAODMaker_VHbbResonance
svn co $MYSVN/TupleMaker_VHbbResonance/trunk TupleMaker_VHbbResonance

# compile
rc build

