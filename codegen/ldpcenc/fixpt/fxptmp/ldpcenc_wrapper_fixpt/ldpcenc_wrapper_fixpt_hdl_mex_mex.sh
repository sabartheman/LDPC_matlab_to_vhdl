MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sky/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for ldpcenc_wrapper_fixpt_hdl_mex" > ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CC=$CC" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CLIBS=$CLIBS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXX=$CXX" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "Arch=$Arch" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "LD=$LD" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_COMPILER=gcc" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_CONFIG=optim" >> ldpcenc_wrapper_fixpt_hdl_mex_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f ldpcenc_wrapper_fixpt_hdl_mex_mex.mk
