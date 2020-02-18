#include <stdlib.h>

extern int name_len;

typedef struct Employee * Employee;

Employee createEmployee(char name[], int empID);
int getEmpID(Employee employee);

void printEmployee(Employee employee);
void printEmployeeList(Employee list[], int N);

void readFromFile(FILE* f, Employee list[], int N);