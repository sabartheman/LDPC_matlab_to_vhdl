MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sky/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for call_custom_exp_wrapper_fixpt_hdl_mex" > call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CC=$CC" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CLIBS=$CLIBS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CXX=$CXX" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "Arch=$Arch" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "LD=$LD" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_COMPILER=gcc" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_CONFIG=optim" >> call_custom_exp_wrapper_fixpt_hdl_mex_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f call_custom_exp_wrapper_fixpt_hdl_mex_mex.mk
