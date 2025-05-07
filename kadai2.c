int main(void){
    // Your code here!
    struct Student{
        char name;
        int math;
        int physics;
    };
    
    struct Student students[5] = {
        {'A',72,48},
        {'B',88,39},
        {'C',72,91},
        {'D',81,82},
        {'E',68,78}
    };
    
    int max_math = students[0].math;
    int min_math = students[0].math;
    int sum_math = 0;
    
    int max_phys = students[0].physics;
    int min_phys = students[0].physics;
    int sum_phys = 0;
    
    int max_total = students[0].math + students[0].physics;
    char top_students = students[0].name;
    
    for (int i = 0; i < 5; i++){
        if(students[i].math > max_math) max_math = students[i].math;
        if(students[i].math < min_math) min_math = students[i].math;
        sum_math += students[i].math;
        
        if(students[i].physics > max_phys) max_phys = students[i].physics;
        if(students[i].physics < min_phys) min_phys = students[i].physics;
        sum_phys += students[i].physics;
        
        int total = students[i].math + students[i].physics;
        if (total > max_total){
            max_total = total;
            top_students = students[i].name;
        }
    }
    
    double avg_math = (double)sum_math / 5;
    double avg_phys = (double)sum_phys / 5;
    
    printf("数学の最大：%d点、最小：%d点、、均：%.1f\n点",max_math,min_math,avg_math);
    printf("物理の最大：%d点、最小：%d点、平均：%.1f\n点",max_phys,min_phys,avg_phys);
    printf("最も2科目の合計が高い人：%cさん%d点\n",top_students,max_total);
    
    return 0;
    }