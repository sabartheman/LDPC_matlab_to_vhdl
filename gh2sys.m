% file name:    gh2sys.m
% description:  out = gh2sys(mtrx,gh) transforms a generator (or parity-check) matrix to systematic form
%               using elementary row operation and/or simple column operation.
%               mtrx is the nonsystematic generator (or parity-check) matrix. 
%               the function uses gh to speficify mtrx (mtrx is a generator if gh = 'g', or a parity-check if gh = 'h').
%               out is the generator (parity-check) matrix in systematic form.
%               important: if during the process, an all-zero row is found, exchange columns of mtrx to
%               get an equivalent code with which no all-zero row will occur.
%               see 'ldpcsim.m' for an example.
% algorithm:    gaussian elimination
% author:       y. jiang 
% date:         june 2010
% revision:     1.0


% function out = gh2sys(mtrx,gh)

function out = gh2sys(mtrx)

[u v] = size(mtrx);
if u >= v
%     error('Input matrix has more rows than columns!');      % number of rows must < number of columns
else
%     if gh == 'h'                                            % parity-check matrix
        a = mtrx(:,1:u);
        b = mtrx(:,u+1:end);
%     elseif gh == 'g'                                        % generator matrix
%         a = mtrx(:,end-u+1:end);
%         b = mtrx(:,1:end-u);
%     else
%         error('Wrong matrix type!');
%     end
end

[m n] = size(a);

% make an upper triangular matrix
for p = 1:n
    if a(p,p) == 0                                          % if the current diagonal element is 0, 
        indx = find(a(p,p:end));                            % exchange it with a column with non-zero element on the same row
        if isempty(indx)                                    % if such column exists
%             error('Current a contains all-zero row!');
        else
            q = indx(1) + p - 1;
            a(:,[p q]) = a(:,[q p]);                        % swap the two columns
        end
    end

    for i = p+1:n
        b(i,:) = gfadd(b(i,:),a(i,p)*b(p,:));
        a(i,:) = gfadd(a(i,:),a(i,p)*a(p,:));
    end
end

% diagonalize a
for i = m:-1:1
    for j = i-1:-1:1
        if a(j,i) 
            a(j,:) = gfadd(a(j,:),a(i,:)); 
            b(j,:) = gfadd(b(j,:),b(i,:));
        end
    end
end

% if gh == 'h'
    out = [a b];
% else
%     out = [b a];
% end        