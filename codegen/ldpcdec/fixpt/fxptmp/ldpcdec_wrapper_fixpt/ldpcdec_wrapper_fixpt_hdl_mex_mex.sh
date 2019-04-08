MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sky/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for ldpcdec_wrapper_fixpt_hdl_mex" > ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CC=$CC" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CLIBS=$CLIBS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXX=$CXX" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "Arch=$Arch" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "LD=$LD" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_COMPILER=gcc" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_CONFIG=optim" >> ldpcdec_wrapper_fixpt_hdl_mex_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f ldpcdec_wrapper_fixpt_hdl_mex_mex.mk
