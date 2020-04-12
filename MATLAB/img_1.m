clc;close all;clear;
im = imread('peppers.png');
imshow(im,[])
im_r = im(:,:,1);
im_g = im(:,:,2);
im_b = im(:,:,3);
figure,imshow(im_r,[]),title('RED part')
figure,imshow(im_g,[]),title('green part')
figure,imshow(im_b,[]),title('blue part')
im1 = rgb2gray(im);
figure,imshow(im1,[])
im1 = histeq(im1);
figure,imshow(im1,[])
th = 50;
[m,n] = size(im1);
for i=1:m
    for j=1:n
        if(im1(i,j)<=200)
            im1(i,j) = 0;
        else
            im1(i,j) = 255;
        end
    end
end
figure,imshow(im1,[])
