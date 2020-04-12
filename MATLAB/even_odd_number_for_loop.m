clc; close all; clear;

size = 5;
for i=1:size
    a = input('Enter A Value : ');
    if(rem(a,2) == 0)
    disp('Even Number : ');
    else
    disp('Odd Number : ');
    end
end
