clc; close all; clear;
x = 1:50;   %create array size of 1 to 50
sum = 0;    %Create variable sum
size = length(x);   %create size

for i=1:size
        sum = sum + x(i);
end
disp('Sum of the values')
sum
disp('Mean of the values')
mean = sum/size;
mean
