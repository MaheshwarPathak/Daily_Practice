double average(int* salary, int salarySize) {
     int sum = 0;
    int max = salary[0];
    int min = salary[0];

    for(int i = 0; i < salarySize; i++){
        sum += salary[i];
        if(max < salary[i])
            max = salary[i];
        else if(min > salary[i])
            min = salary[i];
    }
    return (double)(sum - max - min)/(salarySize - 2);
    }
+