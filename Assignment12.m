height = input('Enter controlled-descent height (m):');
fprintf('\n');
rho = input('Enter fluid density (kg/m^3):');
fprintf('\n');

%defined before hand to ensure it has a starting value of 1
dt=1;
%for loop to get the value of dt for 3 iterations
for k=1:3
    %variables defined and values assigned to and to be reset for each
    %iteration of the for loop
    m=15600;
    pos=10000;
    g=9.8;
    C=1;
    t=0;
    %converting the velocity to m/s
    vel=-1500/3.6;
    r=1.85;
    fProp=0;
    propCounter=0;
    %setting up the infitie while loop that will only break when the
    %position of the rocket is less than or equal to zero
    while 0 == 0
        %drag force calculation
        fDrag=0.5*C*rho*pi*(vel^2)*(r^2);
        %if statement to only apply the propelling force when the time is
        %less than or equal to 60 and when the position of the rocket is
        %less than or equal to the height entered by the user
        if  pos<=height && propCounter <= 60
            fProp=174850;
            propCounter=dt+propCounter;
        else
            fProp=0;
        end
        %if statement for when the drag force is being added or subtracted based off the rockets velocity
        if vel<=0
            acc=((fProp+fDrag)/m)-g;
        else
            acc=((fProp-fDrag)/m)-g;
        end
        %calculations for the position and velocity of the rocket
        pos = pos + vel*dt;
        vel = vel + acc*dt;
        %if statement saying if the position is less than or equal to zero
        %then break the for loop but if not, add more time to the overall
        %time elapsed
        if pos<=0
            break;
        else
            t=t+dt;
        end
    end
    fprintf('dt = %.2f s, Total Time = %.0f s, Position = %.0f m ', dt, t, pos);
    %calculation to retrieve each dt value for all 3 iterations of the for
    %loop
    dt=dt/10;
end
%printing the landing speed and converting it to km/h
fprintf('\nlanding speed: %.0f km/h\n', abs(3.6*vel));
if abs(vel)>=(10/3.6)
    fprintf('Non-successful landing\n');
else
    fprintf('Successful landing\n');
end