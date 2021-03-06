%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function codedout = ldpcenc_wrapper_fixpt(m)
    fm = get_fimath();
    m_in = fi( m, 0, 1, 0, fm );
    [codedout_out] = ldpcenc_fixpt( m_in );
    codedout = double( codedout_out );
end

function fm = get_fimath()
	fm = fimath('RoundingMethod', 'Floor',...
	     'OverflowAction', 'Wrap',...
	     'ProductMode','FullPrecision',...
	     'MaxProductWordLength', 128,...
	     'SumMode','FullPrecision',...
	     'MaxSumWordLength', 128);
end
