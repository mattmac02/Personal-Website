clc
%user inputs for integration bounds
a = input('Enter a:');
fprintf('\n');
b = input('Enter b:');
fprintf('\n');

f = @(x) 1.8.^(0.045.*x)-1;

%true value calculation
trueVal = quadgk(f,a,b);

fprintf('True value: %.0f N\n',trueVal);

%calculation for N=10
xSet = linspace(a,b,10);
fSet = 1.8.^(0.045*xSet)-1;
dx = (b-a)/10;
y = sum(fSet*dx);
e = abs((y - trueVal) / trueVal) * 100;

fprintf('N = 10, F = %.0f N, Error %% = %.2f\n', y, e);

%calculation for N=100
xSet = linspace(a,b,100);
fSet = 1.8.^(0.045*xSet)-1;
dx = (b-a)/100;
y = sum(fSet*dx);
e = abs((y - trueVal) / trueVal) * 100;

fprintf('N = 100, F = %.0f N, Error %% = %.2f\n', y, e);

%calculation for N=1000
xSet = linspace(a,b,1000);
fSet = 1.8.^(0.045*xSet)-1;
dx = (b-a)/1000;
y = sum(fSet*dx);
e = abs((y - trueVal) / trueVal) * 100;

fprintf('N = 1000, F = %.0f N, Error %% = %.2f\n', y, e);

%calculation for N=10000
xSet = linspace(a,b,10000);
fSet = 1.8.^(0.045*xSet)-1;
dx = (b-a)/10000;
y = sum(fSet*dx);
e = abs((y - trueVal) / trueVal) * 100;

fprintf('N = 10000, F = %.0f N, Error %% = %.2f\n', y, e);

%calculation for N=100000
xSet = linspace(a,b,100000);
fSet = 1.8.^(0.045*xSet)-1;
dx = (b-a)/100000;
y = sum(fSet*dx);
e = abs((y - trueVal) / trueVal) * 100;

fprintf('N = 100000, F = %.0f N, Error %% = %.2f\n', y, e);

%calculation for the average pressure between 450 and 500 meters
xSet2 = linspace(450,500,10000);
fSet2 = 1.8.^(0.045*xSet2)-1;
dx2 = (500-450)/10000;
force = sum(fSet2*dx2);
area = 50 * 50;
pressure = (force / area) / 1000;

fprintf('Average pressure between 450 and 500 m: %.1f kPa\n', pressure);




