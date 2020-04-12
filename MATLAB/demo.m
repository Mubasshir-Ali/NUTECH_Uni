clc; close all; clear;
x = 1:50;   %create array size of 1 to 50
sum = 0;    %Create variable sum
size = length(x);   %create size

for i=1:size
        sum = sum + x(i);
end
sum
mean = sum/size;
mean
