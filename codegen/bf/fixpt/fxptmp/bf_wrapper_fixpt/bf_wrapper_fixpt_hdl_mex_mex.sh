MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sky/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for bf_wrapper_fixpt_hdl_mex" > bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CC=$CC" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CLIBS=$CLIBS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CXX=$CXX" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "Arch=$Arch" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "LD=$LD" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_COMPILER=gcc" >> bf_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_CONFIG=optim" >> bf_wrapper_fixpt_hdl_mex_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f bf_wrapper_fixpt_hdl_mex_mex.mk
