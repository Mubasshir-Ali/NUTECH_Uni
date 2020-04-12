function [sum,mean ] = sum_and_mean_using_function( arr )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
%create array size of 1 to 50
sum = 0;    %Create variable sum
size = length(arr);   %create size

for i=1:size
        sum = sum + arr(i);
end

mean = sum/size;

end

