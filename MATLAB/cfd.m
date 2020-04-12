clc;clear;
function main
arr = 1:10:55;
[m,n]=sum_and_mean_using_function(arr);
% fprintf('Sum Of The Values Is %d\n',m);
% fprintf('Mean Of The Values Is %f\n',n);

end

function [sum,mean ] = sum_and_mean_using_function( arr )
sum = 0;    %Create variable sum
size = length(arr);   %create size

for i=1:size
        sum = sum + arr(i);
end

mean = sum/size;


end