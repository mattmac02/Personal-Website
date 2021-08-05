fprintf('ID, Gold Mass [g], Sulfur Mass [Kg], Arsenic Mass [Kg], Cutoff conditions? (Y/N)');

values = dlmread('goldDataA.txt'); %Function for reading the data from the file
    for i=1:size(values,1) %for loop for calculating the mass of gold present
       ID = values(i,1);
       massg = pi * values(i,2) * values(i,3)^2 * values(i,4) * values(i,5);
       masss = pi * values(i,2) * values(i,3)^2 * values(i,4) * values(i,6);
       massa = pi * values(i,2) * values(i,3)^2 * values(i,4) * values(i,7);
           data(i,1)=ID; %Storing the vaues into new arrays so they can be organized together
           data(i,2)=massg;
           data(i,3)=masss;
           data(i,4)=massa;
           sortLine(i)=massg;
           
    if (values(i,5)>1 && values(i,6)<5 && values(i,7)<1) %If statement for checking the cutoff values
        data(i,5)=2;
    else
        data(i,5)=4;
    end  
    end
    
    [sort_sortLine, idx_order] = sort(sortLine, 'descend'); %Sorting function to sort the data from highest to lowest
    
     for i=1:size(values, 1) %If statement for assigning the cutoff values a letter instead of number
        if data (idx_order(i),5) == 2
            cutoff='Y';
        else
            cutoff='N';
        end
        
       fprintf('\n%d, %.2f, %.2f, %.2f, %c', idx_order(i), data(idx_order(i),2), data(idx_order(i),3), data(idx_order(i),4), cutoff); 
 
    end 

    fprintf('\nMax mass: %.2f g at ID %d', sort_sortLine(1), idx_order(1));  
    
    
    
    
  
